#include "pipes.h"
#include "../tokenize/makeArgs.h"

#define bool int
#define true 1
#define false 0
//const char t = '|';

bool containsPipe(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '|') return true;
	}
	return false;
}

char **parsePrePipe(char *s, int *preCount) {
	char **argv = NULL;
	char *save = calloc(strlen(s) + 1, sizeof(char));
	strcpy(save, s);
	char *token = strtok_r(save, "|", &save);
	strip(token);
	*preCount = makeargs(token, &argv);

	return argv;
}

char **parsePostPipe(char *s, int *postCount) {
	char **argv = NULL;
	char *save = calloc(strlen(s) + 1, sizeof(char));
	strcpy(save, s);
	strtok_r(save, "|", &save);
	char *token = strtok_r(save, "|", &save);
	strip(token);
	*postCount = makeargs(token, &argv);

	return argv;
}

void pipeIt(char **prePipe, char **postPipe) {
	pid_t pid;
	int fd[2], res, status;

	res = pipe(fd);

	if (res < 0) {
		printf("Pipe Failure\n");
		exit(-1);
	}// end if

	pid = fork();

	if (pid != 0) {
		close(fd[1]);
		close(0);
		dup(fd[0]);
		close(fd[0]);
		execlp(postPipe[0], postPipe);
	}// end if AKA parent
	else {
		close(fd[0]);
		close(1);
		dup(fd[1]);
		close(fd[1]);
		execlp(prePipe[0], prePipe);
	}// end else AKA child
}
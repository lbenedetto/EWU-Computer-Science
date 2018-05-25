/* Generated By:JavaCC: Do not edit this line. MvcParserConstants.java */
package task4;


/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGen#start()
 */
public interface MvcParserConstants {

  /** End of File. */
  int EOF = 0;
  /** RegularExpression Id. */
  int SINGLE_LINE_COMMENT = 8;
  /** RegularExpression Id. */
  int MULTI_LINE_COMMENT = 9;
  /** RegularExpression Id. */
  int AT = 11;
  /** RegularExpression Id. */
  int COLOR = 12;
  /** RegularExpression Id. */
  int CONNECTS_TO = 13;
  /** RegularExpression Id. */
  int DEFINE = 14;
  /** RegularExpression Id. */
  int EXPORT_TO_GNUPLOT = 15;
  /** RegularExpression Id. */
  int ID = 16;
  /** RegularExpression Id. */
  int NEW = 17;
  /** RegularExpression Id. */
  int PRINT_XML = 18;
  /** RegularExpression Id. */
  int SOCKET = 19;
  /** RegularExpression Id. */
  int VOLUME = 20;
  /** RegularExpression Id. */
  int ASSIGN = 21;
  /** RegularExpression Id. */
  int COLON = 22;
  /** RegularExpression Id. */
  int COMMA = 23;
  /** RegularExpression Id. */
  int LBRACE = 24;
  /** RegularExpression Id. */
  int RBRACE = 25;
  /** RegularExpression Id. */
  int LBRACKET = 26;
  /** RegularExpression Id. */
  int RBRACKET = 27;
  /** RegularExpression Id. */
  int LPAREN = 28;
  /** RegularExpression Id. */
  int RPAREN = 29;
  /** RegularExpression Id. */
  int SEMICOLON = 30;
  /** RegularExpression Id. */
  int SQUOTE = 31;
  /** RegularExpression Id. */
  int DQUOTE = 32;
  /** RegularExpression Id. */
  int PATTERN_DECIMAL = 33;
  /** RegularExpression Id. */
  int LITERAL_NUMBER = 34;
  /** RegularExpression Id. */
  int LITERAL_INTEGER = 35;
  /** RegularExpression Id. */
  int LITERAL_REAL = 36;
  /** RegularExpression Id. */
  int LITERAL_STRING = 37;
  /** RegularExpression Id. */
  int IDENTIFIER = 38;
  /** RegularExpression Id. */
  int LETTER = 39;
  /** RegularExpression Id. */
  int DIGIT = 40;

  /** Lexical state. */
  int DEFAULT = 0;
  /** Lexical state. */
  int IN_SINGLE_LINE_COMMENT = 1;
  /** Lexical state. */
  int IN_MULTI_LINE_COMMENT = 2;

  /** Literal token values. */
  String[] tokenImage = {
    "<EOF>",
    "\" \"",
    "\"\\f\"",
    "\"\\n\"",
    "\"\\r\"",
    "\"\\t\"",
    "\"//\"",
    "\"/*\"",
    "<SINGLE_LINE_COMMENT>",
    "\"*/\"",
    "<token of kind 10>",
    "\"at\"",
    "\"color\"",
    "\"connectsTo\"",
    "\"define\"",
    "\"exportToGnuplot\"",
    "\"id\"",
    "\"new\"",
    "\"printXML\"",
    "\"socket\"",
    "\"volume\"",
    "\"=\"",
    "\":\"",
    "\",\"",
    "\"{\"",
    "\"}\"",
    "\"[\"",
    "\"]\"",
    "\"(\"",
    "\")\"",
    "\";\"",
    "\"\\\'\"",
    "\"\\\"\"",
    "<PATTERN_DECIMAL>",
    "<LITERAL_NUMBER>",
    "<LITERAL_INTEGER>",
    "<LITERAL_REAL>",
    "<LITERAL_STRING>",
    "<IDENTIFIER>",
    "<LETTER>",
    "<DIGIT>",
  };

}

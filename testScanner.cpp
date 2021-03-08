#include <iostream>
#include "testScanner.h"
#include "scanner.h"
#include "token.h"

/**
 * drives the scanner to lexically analyze a file until EOF and prints tokens to console
 * @param filename name of file to be run through scanner
 * @return 0 if success, 1 if nonfatal error, -1 if fatal error
 */
int driver(const std::string &filename) {
  std::cout << "Driver start." << std::endl;

  token_t token;
  std::string s = "arbitrary input";
  token = lex(s);
  
  std::cout << "{" << token.id << ", " << token.instance << ", " << token.line << "}\n";

  /*
  while (token = lex() && token.id != EOF_TK) {
    std::cout << "{" << token.id << ", " << token.instance << ", " << token.line << "}"
    << std::endl;
  }
  */

  //run scanner once just to test

  
  std::cout << "Driver end." << std::endl;
  return 0;
}



/* wip notes - current design:
 * lex() returns a single token: the FIRST lexeme, then stops
 * this driver should stream through file and pass input separated by whitespace
 *      i.e. the driver reads up to whitespace then passes that as input, then it
 *      picks up at the start of the next non-ws character for the next lex(string) call.
 *      
 *      token does not exceed 8 characters
 */

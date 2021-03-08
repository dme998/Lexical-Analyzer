#include <iostream>
#include "scanner.h"
#include "testScanner.h"
#include "token.h"

/**
 * returns one token 
 * @param input filtered string to be lexically analyzed
 * @return token 
 */
token_t lex(std::string input) {
  std::cout << "Scanner start." << std::endl;

  token_t token;
  
  //test values
  token.id = KEYWORD_TK;
  token.instance = "begin";
  token.line = 2;

  std::cout << "Scanner end." << std::endl;
  return token;
}

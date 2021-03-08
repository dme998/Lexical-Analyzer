#include <iostream>
#include <algorithm>  //std::all_of
#include "scanner.h"
#include "testScanner.h"
#include "token.h"

/**
 * returns one token 
 * @param input filtered string to be lexically analyzed
 * @return token 
 */
token_t lex(std::string input, unsigned int line) {
  std::cout << "Scanner called." << std::endl;

  token_t token;
  
  //test values
  token.id = UNKNOWN_TK;
  token.instance = input;
  token.line = line;
  
  std::cout << "Lexing input: " << input << std::endl;


  //determine tokenID
  //does string contain only whitespace?
  if (  std::all_of( input.begin(), input.end(), isspace )  ) {
    std::cout << "String contains only whitespace." << std::endl;
    token.id = WHITESPACE_TK;
  }

  std::cout << "Scanner done." << std::endl;
  return token;
}

#include <iostream>
#include <algorithm>  //std::all_of
#include "scanner.h"
#include "testScanner.h"
#include "token.h"

using std::cout;  using std::endl;

/**
 * returns one token 
 * @param input filtered string to be lexically analyzed
 * @param line current line number of the file that the token is on
 * @return token 
 */
token_t lex(std::string input, unsigned int line) {
  cout << "Scanner called." << endl;

  token_t token;
  
  //default values
  token.id = UNKNOWN_TK;
  token.instance = input;
  token.line = line;
  cout << "Lexing input: " << input << endl;


  //determine tokenID and return
  
  //is whitespace?
  if (  std::all_of( input.begin(), input.end(), isspace )  ) {
    cout << "String contains only whitespace." << endl;
    token.id = WHITESPACE_TK;
    return token;
  }

  //is operator?
  for(size_t i=0; i<OPERATORS.size(); i++) {
    if (input == OPERATORS[i]) {
      token.id = OPERATOR_TK;
      return token;
    }
  }


  //is integer?
  //TODO

  //is keyword? 
  for(size_t i=0; i<KEYWORDS.size(); i++) {
    if (input == KEYWORDS[i]) {
      token.id = KEYWORD_TK;
      return token;
    }
  }

  //is identifier?
  //TODO

  cout << "Scanner done." << endl;
  return token;
}

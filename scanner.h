#ifndef SCANNER_H
#define SCANNER_H
#include <string>
#include "token.h"

/**
 * returns one token 
 * @param filename name of file to be run through scanner
 * @return token
 */
token_t lex(std::string input);

#endif

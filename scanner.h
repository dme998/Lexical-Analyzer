#include "token.h"
#ifndef SCANNER_H
#define SCANNER_H
#include <string>

/**
 * returns one token 
 * @param filename name of file to be run through scanner
 * @return token
 */
token_t lex(const std::string &filename);

#endif

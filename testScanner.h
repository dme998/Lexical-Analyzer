#ifndef TESTSCANNER_H
#define TESTSCANNER_H
#include <string>
#include "token.h"

/**
 * drives the scanner to lexically analyze a file until EOF
 * @param filename name of file to be run through scanner
 * @return 0 if success, 1 if nonfatal error, -1 if fatal error
 */
int driver(const std::string &filename);

#endif

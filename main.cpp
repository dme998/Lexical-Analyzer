/* Project:        Scanner (P1)
 * Description:    Lexical Analyzer
 * Author:         Daniel Eggers <dme998@mail.umsl.edu>
 * Course:         Program Translation (CS4280-001)
 * Instructor:     Mark Hauschild
 * Date:           March 8, 2021 
 * Dependencies:   token.h, scanner.cpp, testScanner.cpp, scanner.h, testScanner.h
 */

#include <iostream>
//#include <vector>
#include <string>
//#include <stdlib.h>
//#include <stdio.h>  //fopen
#include "token.h"
#include "scanner.h"
#include "testScanner.h"

using namespace std;

string implicitFileExtension(string filename);
bool fileExists(string filename);

/**
 * Main executable to run
 * @param argv name of file to be run through scanner
 * @return 0 on success, 1 on nonfatal error, -1 on fatal error
 */
int main(int argc, char *argv[]) {
  cout << "Program start." << endl;
  
  switch(argc) {
    case 1: {
      cout << "Improper invocation: no file specified." << endl;
      exit(0);
      break;
    }
    case 2: {
      string infile = implicitFileExtension((string)argv[1]);
      if (fileExists(infile)) {
        cout << "File exists: " << infile << endl;
      }
      else {
        cout << "File not found: " << infile << endl;
        exit(0);
      }
      break;
    }
    default:
      cout << "Improper invocation: wrong number of arguments." << endl;
      exit(0);
      break;
  }
  
  /* run testScanner here */
  
  cout << "Program end." << endl;
  return 0;
}


/**
 * Appends .fs extension to filename if not provided
 * @param filename specifies infile
 * @return filename with .fs extension
 */
string implicitFileExtension(string filename) {
  if (filename.substr(filename.find_last_of(".") + 1) != "fs") {
    filename.append(".fs");
  }
  return filename;
}


/**
 * Check if file exists
 * @param filename to check
 * @return true if exists, otherwise false
 */
bool fileExists(string infile) {
  if (FILE *file = fopen(infile.c_str(), "r")) {
    fclose(file);
    return true;
  }
  else {
    return false;
  }
}



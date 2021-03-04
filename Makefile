
CC= g++
RM= rm -vf
CPPFLAGS= -g -Wall -std=c++11 -I.
PROGRAM= scanner
OBJFILES= main.o scanner.o testScanner.o

$(PROGRAM): $(OBJFILES)
	$(CC) -o $(PROGRAM) $(OBJFILES)

main.o: main.cpp token.h
	$(CC) $(CPPFLAGS) -c main.cpp

scanner.o: scanner.cpp scanner.h
	$(CC) $(CPPFLAGS) -c scanner.cpp

testScanner.o: testScanner.cpp testScanner.h
	$(CC) $(CPPFLAGS) -c testScanner.cpp

clean:
	$(RM) $(PROGRAM) $(OBJFILES)

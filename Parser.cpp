/*
 * Coded by Relg99.
 * Date 28/06/22
 */

#include "Parser.h"

Parser::Parser(std::string &fileName) {
    fin.open(fileName);

    if(fin.fail()) {
        std::cout << fileName << " not found!" << std::endl;
        exit(1);
    }

    commandTable['@'] = 'A';
    commandTable['A'] = 'C';
    commandTable['D'] = 'C';
    commandTable['M'] = 'C';
    commandTable['0'] = 'C';
    commandTable['1'] = 'C';
    commandTable['-'] = 'C';
    commandTable['!'] = 'C';
    commandTable['('] = 'L';

}

bool Parser::HasMoreCommands() {
    return !fin.eof();
}

void Parser::Advance(unsigned long &lineNr) {

    std::string currentLine;
    unsigned long commentPos;
    bool commandFound = false;

    while(!commandFound && getline(fin, currentLine)) {

        lineNr++;

        currentLine.erase();
    }

}


/*
 * Coded by Relg99.
 * Date 28/06/22
 */

#ifndef HACK_ASSEMBLER_PARSER_H
#define HACK_ASSEMBLER_PARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>

class Parser {
    private:

        std::ifstream fin;
        std::string currentCommand;
        std::map <char, char> commandTable;

    public:
        Parser(std::string &fileName);

        bool HasMoreCommands();

        void Advance(unsigned long &linNr);

        char CommandType(unsigned long &lineNr);

        std::string Symbol();

        std::string DestM();

        std::string CompM();

        std::string JumpM();
};


#endif HACK_ASSEMBLER_PARSER_H
/*
 * Coded by Relg99.
 * Date 28/06/22
 */

#include <iostream>
#include <fstream>

// This code is now on the new branch Parser!

int main(int argc, char *argv[]) {
    std::string inputFileName, outputFileName;
    int lineNumberROM, newAddress;
    unsigned long lineNumberSource;
    std::ofstream fout;

    if (argc < 2 || argc > 3) {
        std::cout << "Usage: " << argv[0] << " <inputfilename.asm> <(optional) outputfilename.hack>" << std::endl;
        exit(1);
    }

    if (argc == 2) {
        inputFileName = argv[1];
        outputFileName = inputFileName.substr(0, inputFileName.length() - 4) + ".hack";
    }

    if (argc == 3) {
        inputFileName = argv[1];
        outputFileName = argv[2];
    }

    fout.open(outputFileName);

    if (fout.fail()) {
        std::cout << "Failed to create output file!" << std::endl;
        exit(1);
    }
}
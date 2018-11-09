#include <iostream>
#include <cstring>
//#include <iostream>
//#include <sstream>

#include "types.h"
#include "prng.h"

int main(int argc, char* argv[])
{

    std::string input;

    std::cout << "Chocolatine engine starting..." << std::endl << std::endl;


    /// Start the main loop listening to the UCI-compatible software
    // https://www.chessprogramming.org/UCI
    // https://www.stmintz.com/ccc/index.php?id=141612
    while (getline(std::cin, input))
    {

        if(input == "uci")
        {

        }

        else if(input == "isready")
        {

        }

        else if (input == "ucinewgame")
        {

        }

        else if (input.substr(0, 8) == "position")
        {

        }

        else if (input.substr(0, 2) == "go")
        {

            //if (input.find("ponder") != string::npos)
            //if (input.find("searchmoves") != string::npos) {
            //if (input.find("movetime") != string::npos && inputVector.size() > 2) {
            //else if (input.find("depth") != string::npos && inputVector.size() > 2) {
            //else if (input.find("infinite") != string::npos) {
            //else if (input.find("wtime") != string::npos || input.find("btime") != string::npos)

        }

        else if (input == "ponderhit")
        {
        }

        else if (input == "stop")
        {
        }

        else if (input == "quit")
        {
            break;
        }

//        else if (input.substr(0, 9) == "setoption" && inputVector.size() >= 5)
//        {
            //if (inputVector.at(1) != "name" || inputVector.at(3) != "value") {
            //    cout << "info string Invalid option format." << endl;
            //}
            //else {
            //if (inputVector.at(2) == "threads") {
            //else if (inputVector.at(2) == "hash") {
            //else if (inputVector.at(2) == "evalcache") {
            //else if (inputVector.at(2) == "ponder") {
            //else if (inputVector.at(2) == "multipv") {
            //else if (inputVector.at(2) == "buffertime") {
            //else if (inputVector.at(2) == "syzygypath") {
            //else if (inputVector.at(2) == "scalematerial") {
            //else if (inputVector.at(2) == "scalekingsafety") {
            //else cout << "info string Invalid option." << endl;
 //       }
        else {
            std::cout << "invalid commenad : " << input << std::endl;
        }
    }


    return 0;
}

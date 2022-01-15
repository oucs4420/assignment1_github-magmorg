#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//
int main( int argc, char* argv[] )
{
    cout << "program: " << argv[0] << endl;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){
    //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        ifstream myFile(argv[arg]);
        if (myFile.is_open()){
            if (!myFile.eof()){
                string line;
                int linecount = 0;
                while (getline(myFile,line)){
                    linecount++;
                }
                cout << " " << argv[arg] << ": " << linecount << endl;
            }
        }
        else {
            cout << " " << argv[arg] << ": -1" << endl;
        }
    }

    exit(0); // this means that the program executed correctly!
}

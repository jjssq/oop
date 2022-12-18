#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    // Open the input file
    ifstream inFile;
    inFile.open("input.txt");
 
    // Open the output file
    ofstream outFile;
    outFile.open("output.txt");
 
    // Read the input file character by character
    char ch;
    while (inFile.get(ch))
    {
        // If the character is not a white space, write it to the output file
        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r')
        {
            outFile << ch;
        }
    }
 
    // Close the input and output files
    inFile.close();
    outFile.close();
 
    return 0;
}

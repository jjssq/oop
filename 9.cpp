#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    ifstream file1, file2;
    string line1, line2;
 
    // Opening files in input mode
    file1.open("file1.txt");
    file2.open("file2.txt");
 
    // Checking if files are open
    if (!file1.is_open() || !file2.is_open())
    {
        cout << "Error opening files!" << endl;
        return 0;
    }
 
    // Reading and printing lines from both files simultaneously
    while (getline(file1, line1) && getline(file2, line2))
    {
        cout << "File1: " << line1 << endl;
        cout << "File2: " << line2 << endl;
    }
 
    // Closing files
    file1.close();
    file2.close();
 
    return 0;
}

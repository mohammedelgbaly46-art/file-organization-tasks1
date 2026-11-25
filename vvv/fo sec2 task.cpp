#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;

    ofstream file("fruit.txt");

    file << "Apple" << endl;
    file << "Orange" << endl;
    file << "Banana" << endl;

    file.close();


    ifstream infile("fruit.txt");

    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();

    ofstream outfile("fruit.txt", ios::app);

    outfile << "Fresh Fruits" << endl;

    outfile.close();

    return 0;
}

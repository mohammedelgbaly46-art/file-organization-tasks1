#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string text;

    ofstream file("welcome.txt");

    file << "Hello Everybody";

    file.close();

    ifstream infile("welcome.txt");

    getline(infile, text);

    infile.close();

    size_t pos = text.find("body");

    if (pos != string::npos)
    {
        text.replace(pos, 4, "one");
    }

    ofstream outfile("welcome.txt");

    outfile << text;

    outfile.close();

    cout << text << endl;

    return 0;
}

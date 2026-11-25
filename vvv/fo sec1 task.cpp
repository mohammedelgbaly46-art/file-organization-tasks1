#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, id;
    float grade;

    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter yoyr ID: ";
    getline(cin, id);

    cout << "Enter your Grade: ";
    cin >> grade;

    ofstream file("Student.txt");

    if (file.is_open())
    {
        file << "Full Name: " << name << endl;
        file << "ID: " << id << endl;
        file << "Grade: " << grade << endl;

        file.close();

        cout << "Student data saved";
    }
    else
    {
        cout << "Can't open the file";
    }

    return 0;
}

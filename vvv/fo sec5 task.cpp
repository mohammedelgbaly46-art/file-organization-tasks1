#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[20];
    int id;
    float grade;
    char choice;

    ofstream file("students.txt");

    do
    {
        cout << "Enter student name: ";
        cin.ignore();
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        file << name << ", " << id << ", " << grade << " $" << endl;

        cout << "Do you want to add another student(y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    file.close();

    cout << "Students saved ";

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int grade;

    ofstream file("grades.txt");

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        file << grade << endl;
    }

    file.close();

    ifstream infile("grades.txt");

    cout << "\nGrades in file:\n";

    while (infile >> grade)
    {
        cout << grade << endl;
    }

    infile.close();

    int deleteGrade;

    cout << "\nEnter grade to delete: ";
    cin >> deleteGrade;

    ifstream input("grades.txt");
    ofstream temp("temp.txt");

    bool found = false;

    while (input >> grade)
    {
        if (grade == deleteGrade && !found)
        {
            found = true;
        }
        else
        {
            temp << grade << endl;
        }
    }

    input.close();
    temp.close();

    if (found)
    {
        remove("grades.txt");
        rename("temp.txt", "grades.txt");

        cout << "\nGrade deleted successfully.\n";
    }
    else
    {
        remove("temp.txt");

        cout << "\nGrade not found\n";
    }

    return 0;
}

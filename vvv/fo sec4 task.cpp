#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    int n;

    cout << "Enter number of persons: ";
    cin >> n;

    ofstream file("persons.txt");

    for (int i = 0; i < n; i++)
    {
        Person p;

        cout << "Enter name: ";
        cin >> p.name;

        cout << "Enter age: ";
        cin >> p.age;

        file << p.name << " " << p.age << endl;
    }

    file.close();

    vector<Person> persons;

    ifstream infile("persons.txt");

    Person p;

    while (infile >> p.name >> p.age)
    {
        persons.push_back(p);
    }

    infile.close();


    Person youngest = persons[0];
    Person oldest = persons[0];

    for (int i = 1; i < persons.size(); i++)
    {
        if (persons[i].age < youngest.age)
        {
            youngest = persons[i];
        }

        if (persons[i].age > oldest.age)
        {
            oldest = persons[i];
        }
    }

    ofstream result("results.txt");

    result << "Younger : "
           << youngest.name << endl;

    result << "Older : "
           << oldest.name <<endl;

    result.close();

    ifstream readResult("results.txt");

    string line;

    while (getline(readResult, line))
    {
        cout << line << endl;
    }

    readResult.close();

    return 0;
}

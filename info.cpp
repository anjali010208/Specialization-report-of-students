#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fileread("Specialization report of students.txt");
    string s;
    while(getline(fileread,s))
        cout << s << endl;
    return 0;
}

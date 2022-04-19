#include<iostream>
#include<fstream>
using namespace std;
ofstream file("Specialization report of students.txt",ios::app);
namespace stu
{
    class student
    {
    private : string address;
              string phno;
    public : string name,USN;
    public : student() : name("NULL"), USN("NULL"), address("NULL"), phno("NULL"){}
             void get_data()
             {
                 cout << "Enter name: ";
                 cin >> name;
                 cout << "Enter USN : ";
                 cin >> USN;
                 cout << "Enter private details of the student : " << endl;
                 cout << "Address : ";
                 cin >> address;
                 cout << "Phone number : ";
                 cin >> phno;
             }
             void print()
             {
                 cout << "Name : "<< name << endl;
                 file << "Name : "<< name << endl;
                 cout << "USN : " << USN << endl;
                 file << "USN : " << USN << endl;
             }
             friend void privateinfo(student* s)
             {
                 cout << "Address : " << s->address << endl;
                 cout << "Phone number : " << s->phno << endl;
                 cout << endl;
             }
     };
}


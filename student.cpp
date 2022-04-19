#include<iostream>
#include<fstream>
#include "student.h"
#include "calculate.cpp"
using namespace std;
using namespace stu;

class specialization : public student
{
    public : char ch;
    public : virtual void get()
             {
                 get_data();
             }
             virtual void disp()
             {
                 student::print();
             }
};

class prog_lang : public specialization
{
    public : string sub[4];
             float marks[5];
             int credits[5];
    public : void get();
             void disp();
};

void prog_lang::get()
{
    specialization::get();
    cout << "Enter the 4 subjects chosen and their corresponding credits : \n";
    for(int i=0;i<4;i++)
    {
        cin >> sub[i] >> credits[i];
    }
    cout << "Enter the marks obtained in 4 subjects(out of 100) : \n";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : ";
        cin >> marks[i];
        try
        {
            if(!(marks[i]<=100.0 && marks[i]>=0.0))
                throw(marks[i]);
        }
        catch(float m)
        {
            cout << "Entered marks - " << m << " is not valid\n";
            cout << sub[i] << " : ";
            cin >> marks[i];
        }
    }
    cout << "Marks obtained for Project(Credits = 5) : ";
    cin >> marks[4];
    try
    {
        if(!(marks[4]<=100.0 && marks[4]>=0.0))
            throw(marks[4]);
    }
    catch(float m)
    {
        cout << "Entered marks - " << m << " is not valid\n";
        cout << "Project : ";
        cin >> marks[4];
    }
    credits[4] = 5;
}

void prog_lang::disp()
{
    cout << "Specialization chosen : Programming Language Proficiency\n";
    file << "Specialization chosen : Programming Language Proficiency\n";
    specialization::disp();
    cout << "4 Subjects chosen and marks obtained in them : ";
    file << "4 Subjects chosen and marks obtained in them : ";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : " << marks[i] << "/100 , ";
        file << sub[i] << " : " << marks[i] << "/100 , ";
    }
    cout << endl;
    file << endl;
    cout << "Project : " << marks[4] << "/100" << endl;
    file << "Project : " << marks[4] << "/100" << endl;
    cout << "CGPA : " << calculate(credits,marks) << endl;
    file << "CGPA : " << calculate(credits,marks) << endl;
    cout << endl << endl;
    file << endl << endl;
}

class web_app : public specialization
{
    public : string sub[4];
             float marks[5];
             int credits[5];
    public : void get();
             void disp();
};

void web_app::get()
{
    specialization::get();
    cout << "Enter the 4 subjects chosen and their corresponding credits : \n";
    for(int i=0;i<4;i++)
    {
        cin >> sub[i] >> credits[i];
    }
    cout << "Enter the marks obtained in 4 subjects(out of 100) : \n";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : ";
        cin >> marks[i];
        try
        {
            if(!(marks[i]<=100.0 && marks[i]>=0.0))
                throw(marks[i]);
        }
        catch(float m)
        {
            cout << "Entered marks - " << m << " is not valid\n";
            cout << sub[i] << " : ";
            cin >> marks[i];
        }
    }
    cout << "Marks obtained for Project(Credits = 5) : ";
    cin >> marks[4];
    try
    {
        if(!(marks[4]<=100.0 && marks[4]>=0.0))
            throw(marks[4]);
    }
    catch(float m)
    {
        cout << "Entered marks - " << m << " is not valid\n";
        cout << "Project : ";
        cin >> marks[4];
    }
    credits[4] = 5;
}

void web_app::disp()
{
    cout << "Specialization chosen : Web Application Development\n";
    file << "Specialization chosen : Web Application Development\n";
    specialization::disp();
    cout << "4 Subjects chosen and marks obtained in them : ";
    file << "4 Subjects chosen and marks obtained in them : ";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : " << marks[i] << "/100 , ";
        file << sub[i] << " : " << marks[i] << "/100 , ";
    }
    cout << endl;
    file << endl;
    cout << "Project : " << marks[4] << "/100" << endl;
    file << "Project : " << marks[4] << "/100" << endl;
    cout << "CGPA : " << calculate(credits,marks) << endl;
    file << "CGPA : " << calculate(credits,marks) << endl;
    cout << endl << endl;
    file << endl << endl;
}

class cyber_sec : public specialization
{
    public : string sub[4];
             float marks[5];
             int credits[5];
    public : void get();
             void disp();
};

void cyber_sec::get()
{
    specialization::get();
    cout << "Enter the 4 subjects chosen and their corresponding credits : \n";
    for(int i=0;i<4;i++)
    {
        cin >> sub[i] >> credits[i];
    }
    cout << "Enter the marks obtained in 4 subjects(out of 100) : \n";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : ";
        cin >> marks[i];
        try
        {
            if(!(marks[i]<=100.0 && marks[i]>=0.0))
                throw(marks[i]);
        }
        catch(float m)
        {
            cout << "Entered marks - " << m << " is not valid\n";
            cout << sub[i] << " : ";
            cin >> marks[i];
        }
    }
    cout << "Marks obtained for Project(Credits = 5) : ";
    cin >> marks[4];
    try
    {
        if(!(marks[4]<=100.0 && marks[4]>=0.0))
            throw(marks[4]);
    }
    catch(float m)
    {
        cout << "Entered marks - " << m << " is not valid\n";
        cout << "Project : ";
        cin >> marks[4];
    }
    credits[4] = 5;
}

void cyber_sec::disp()
{
    cout << "Specialization chosen : Cyber Security\n";
    file << "Specialization chosen : Cyber Security\n";
    specialization::disp();
    cout << "4 Subjects chosen and marks obtained in them : ";
    file << "4 Subjects chosen and marks obtained in them : ";
    for(int i=0;i<4;i++)
    {
        cout << sub[i] << " : " << marks[i] << "/100 , ";
        file << sub[i] << " : " << marks[i] << "/100 , ";
    }
    cout << endl;
    file << endl;
    cout << "Project : " << marks[4] << "/100" << endl;
    file << "Project : " << marks[4] << "/100" << endl;
    cout << "CGPA : " << calculate(credits,marks) << endl;
    file << "CGPA : " << calculate(credits,marks) << endl;
    cout << endl << endl;
    file << endl << endl;
}

int main()
{
    specialization* s[100];
    int n=0;
    char c;
    char choice;
    do
    {
       cout << "3 specializations are offered : \n  A-Programming Language Proficiency \n  B-Web Application Development \n  C-Cyber Security\n";
       cout << "Enter which specialization by entering the letter corresponding to it : " ;
       cin >> c;
       if(c=='A')
       {
           s[n] = new prog_lang;
           s[n]->ch = 'A';
           s[n]->get();
       }
       else if(c=='B')
       {
           s[n] = new web_app;
           s[n]->ch = 'B';
           s[n]->get();
       }
       else if(c=='C')
       {
           s[n] = new cyber_sec;
           s[n]->ch = 'C';
           s[n]->get();
       }
       n=n+1;
       cout << "Are there any more student's information to be entered(y/n)? ";
       cin >> choice;
       cout << endl;
    }while(choice=='y');
    cout << endl;
    cout << endl;
    for(int j=0;j<n;j++)
    {
       s[j]->disp();
       cout << endl;
       cout << endl;
    }
    cout << endl;
    char ch;
    cout << "Do you need any student's personal information(y/n)? ";
    cin >> ch;
    while(ch!='n')
    {
        string stu_name;
        int flag = 0;
        cout << "Enter name of the student : " ;
        cin >> stu_name;
        for(int i=0;i<n;i++)
        {
            student* stu;
            stu = s[i];
            if(stu_name==stu->name)
            {
                stu = s[i];
                privateinfo(stu);
                flag = 1;
                break;
            }
        }
        if(flag==0)
            cout << stu_name << " not found\n";
        cout << "Do you need any student's personal information(y/n)? ";
        cin >> ch;
    }
    return 0;
}







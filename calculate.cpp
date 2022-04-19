#include<iostream>
using namespace std;
int* calculate(float marks[])
{
    static int gp[5];
    for(int i=0;i<5;i++)
    {
        if(marks[i]>=90 && marks[i]<=100)
            gp[i] = 10;
        else if(marks[i]>=80 && marks[i]<90)
            gp[i] = 9;
        else if(marks[i]>=70 && marks[i]<80)
            gp[i] = 8;
        else if(marks[i]>=60 && marks[i]<70)
            gp[i] = 7;
        else if(marks[i]>=50 && marks[i]<60)
            gp[i] = 6;
        else if(marks[i]>=40 && marks[i]<50)
            gp[i] = 4;
        else if(marks[i]<40)
            gp[i] = 0;
    }
    return gp;
}

float calculate(int credits[],float marks[])
{
    float cgpa;
    int tot_credits = 0;
    for(int i=0;i<5;i++)
    {
        tot_credits += credits[i];
    }
    float sum=0.0;
    int* gp = calculate(marks);
    for(int i=0;i<5;i++)
    {
        sum += (gp[i]*credits[i]);
    }
    cgpa = sum/tot_credits;
    for(int i=0;i<5;i++)
        gp[i]=0;
    return cgpa;
}

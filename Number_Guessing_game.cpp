#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int var,num,count=1;
           srand(time(NULL));
           var=rand()%100;
           //cout<<"Random Number is : "<<var;
           cout<<"\nGuess A number In Between 0 To 100 : ";
           cin>>num;
    while(var!=num)
    {
        if(var>num)
        {
           cout<<"\nYour Guessed a lower Number ";
           cout<<"\t Next Attempt : ";
           cin>>num;
           count++;
        }
        else
        {
            cout<<"\nYou Guessed a Higher Number";
           cout<<"\t Next Attempt : ";
           cin>>num;
           count++; 
        }
    }   
           cout<<"\nYou Guessed It Right";
           cout<<"\nCONGRATULATIONS !!";
           return 0;
}
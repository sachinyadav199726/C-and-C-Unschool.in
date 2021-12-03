#include<iostream>
using namespace std;
class cls
{
int num1;
int num2;
public:
cls()
{
cout<<"\n Value of first number: "<< num1;
cout<<"\n Value of second number: "<< num2;
cout<<"\n\n CONSTRUCTOR CALLED!\n";
num1=0;
num2=0;
cout<<"\n Value of first number after constructor call : "<< num1;
cout<<"\n Value of second number after constructor call : "<<num2;
}
~cls()
{
cout <<"\n DESTRUCTOR CALLED!";
}
};
int main()
{
cls obj;
int num1,num2;
int result;
char choice;
char start;
    cout<<"\n\n\n--------------------------- CALCULATOR -------------------------------\n";
do
    {
    cout<<"\n\n Choose function [ + , - , * , / , % ] : ";
    cin>>choice;
    cout<<"\n Enter first number: ";
    cin>>num1;
    cout<<"\n Enter second number: ";
    cin>>num2;
switch(choice)
{
    case '+':
            result = num1+num2;
            cout <<"\n\t Result = " << result;
            break;

    case '-':
            result = num1-num2;
            cout <<"\n\t Result = " << result;
            break;

    case '*':
            result = num1*num2;
            cout <<"\n\t Result = " << result;
            break;

    case '/':
            result = num1/num2;
            cout <<"\n\t Result = " << result;
            break;
    case '%':
            result = num1%num2;
            cout <<"\n\t Result = " << result;
            break;
    default:
            cout <<"\n\t Error! operator is not correct";
            break;
}
cout<<"\n\n Press [ y or Y ] to continue or press [ n ] to exit : ";
cin>>start;
}
while(start=='Y' || start=='y');
return 0;
}

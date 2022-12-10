#include<iostream>
using namespace std;
int max();
int main()

{
 
   int num1, num2,num3,max;
 
    //Reading two numbers from user
    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
 
    //Condition to check maximum number
    if(num1>num2 && num1>num3)
    {
        max=num1;
    }
    else if(num2>num3)
    {
        max=num2;
    }
    else
    {
        max=num3;
    }

    cout<<"The Maximum number is: "<<max<<endl;
}
/******************************************************************************
In this Programm the user will give us a number and we will inform him if this number exists in the 
array.

*******************************************************************************/
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    //Declaration of the array, and the rest of the variables which will be used in this Programm
    int array[10]={1,2,3,4,5,6,7,8,9};
    int i,exists;
    bool answer;
    // We initialiaze as a first value for the bool variable answer-false
    answer=false;
    //Message will be displayed to the user
    cout<<"You have to give us a number from 1-9"<<endl<<"If you give us a lower or higher number"<<endl<<"An error message will appear"<<endl;
    //Import the value,which the user gave
    cin>>exists;
    //Ceck if this number exists in the array
    for(i=0;i<10;i++)
    {
        if(array[i]==exists)
        answer=true;
    }
    if(answer)
    {
         cout<<"The variable you gave us, is  one of the values of the array";
    }
    else
    {
        cout<<"The variable you gave us, is not one of the values of the array"; 
    }
        return 0;
}
    
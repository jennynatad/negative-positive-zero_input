#include<iostream>
using namespace std;
int main()
{
    int positive=0, negative=0, zero=0, i, arr[5];
    cout<<"Enter 5 Numbers: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    for(i=0; i<5; i++)
    {
        if(arr[i]>0)
            positive++;
        else if(arr[i]==0)
            zero++;
        else
            negative++;
    }
    cout<<"\nPositive Numbers: "<<pos;
    cout<<"\nZero Numbers: "<<zer;
    cout<<"\nNegative Numbers: "<<neg;
    cout<<endl;
    return 0;
}

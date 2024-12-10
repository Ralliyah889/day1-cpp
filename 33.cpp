#include<iostream>
using namespace std;
int main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9,10};

    numbers[5]=200;
    cout<<"modified array:";

    for(int i=0;i<10;i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    return 0;

}
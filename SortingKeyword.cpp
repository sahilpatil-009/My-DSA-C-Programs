#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];

    cout<<"Enter Elements for Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    sort(a,a+5);

    cout<<"----------------"<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<a[j]<<endl;
    }
}

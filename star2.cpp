#include<iostream>
using namespace std;
int main()
{
    int i, s, j;
    for(i=1; i<=6; i++)
    {
        for(s=1; s<i; s++)
            cout<<" ";
        for(j=i; j<=6; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

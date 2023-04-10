#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number of digits u want in pyramid : "; cin>>n;

    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            char ch = 'A' + n - j -2;
            cout<<ch<<" ";
            j = j+1;
        }
        cout<<endl;
        i++;

    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && b<c || b>c && b<a)
        {
            cout<<b<<endl;
        }
        else if(a>b && a<c || a<b && a>c)
        {
            cout<<a<<endl;
        }
        else if(c>a && c<b || c>b && c<a)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
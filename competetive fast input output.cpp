/*
*)  ios_base::sync_with_stdio(false);
It toggles on or off the synchronization of all the C++ standard streams with their corresponding standard C
streams if it is called before the program performs its first input or output operation. Adding 
ios_base::sync_with_stdio (false); (which is true by default) before any I/O operation avoids this 
synchronization. It is a static member of function of std::ios_base.
 
*)  cin.tie(NULL);
tie() is a method which simply guarantees the flushing of std::cout before std::cin accepts an input. This is 
useful for interactive console programs which require the console to be updated constantly but also slows down the 
program for large I/O. The NULL part just returns a NULL pointer.
*/
#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin.sync();
    int t;
    cin>>t;
    while (t--)
    {
        int g,p;
        cin>>g>>p;
        int n;
        cin>>n;
        int arr[n][2];
        int q1=0,q2=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>arr[i][j];

            }
            q1 = q1+arr[i][0];
            q2 = q2+arr[i][1];
        }
        int p1 = q1*g + q2*p;
        int p2 = q1*p + q2*g;
        (p1<p2)?cout<<p1<<endl:cout<<p2<<endl;
    }

    return 0;
}

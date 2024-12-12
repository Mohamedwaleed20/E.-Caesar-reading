#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string a  ;
    cin >> a ;
    long long n ;
    cin >> n ;
    n = n % 26;
    for(int i = 0 ; i < a.size();i++)
    {
        if((a[i]>='a'&&a[i]<='z'))
        {
            a[i]= (((a[i] - 'a' + n)%26)+'a');
        }
        else if((a[i]>='A'&&a[i]<='Z'))
        {
            a[i]= (((a[i] - 'A' + n)%26)+'A');
        }
    }
    for(int i = 0 ; i < a.size();i++)
    {
        cout << a[i] ;
    }

    return 0;
}

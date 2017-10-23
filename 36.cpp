/*
	input = 5;
	output:
		    1
		  3 3 3
	    5 5 5 5 5
	  7 7 7 7 7 7 7
	9 9 9 9 9 9 9 9 9
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r = 1,n;
	char c;
	cin>>n;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= 2*(n-i);j++)
			cout<<" ";
		for(k = 1; k < 2*i;k++)
		{
			cout<<r<<" ";
		}
		r+=2;
		
		cout<<endl;
	}
    
    return 0;
}
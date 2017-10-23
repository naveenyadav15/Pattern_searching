/*
	input = 5;
	output:
	A B C D E F G
	  A B C D E
	    A B C
	      A
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
	for(i = n-1;i > 0;i--)
	{
		for(j = 1;j <= 2*(n-i-1);j++)
			cout<<" ";
		for(k=1;k < 2*i;k++)
		{
			c = 'A' + k - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
/*
	input = 5;
	output:
	    1
	   1 2
	  1 2 3
	 1 2 3 4
	1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r = 1,n,q;
	char c;
	cin>>n;
	for(i = 1;i <= n;i++)
	{
		for(j=n-i;j>0;j--)
			cout<<" ";
		for(k=1;k<=i;k++)
			cout<<k<<" ";
		cout<<endl;
	}
    
    return 0;
}
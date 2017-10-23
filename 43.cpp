/*
	input = 5;
	output:
		    0
		  1 0 1
		2 1 0 1 2
	  3 2 1 0 1 2 3
	4 3 2 1 0 1 2 3 4
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
		for(k = i-1;k > 0;k--)
			cout<<k<<" ";
		for(k = 0; k < i;k++)
		{
			cout<<k<<" ";
		}
		
		cout<<endl;
	}
    
    return 0;
}
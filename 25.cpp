/*
	input = 5;
	output:
		    1
		  2 2
		3 3 3
	  4 4 4 4
	5 5 5 5 5
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,n;
	char c;
	cin>>n;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= 2 * (n-i);j++)
			cout<<" ";
		for(k = 1;k <= i;k++)
			cout<<i<<" ";
		cout<<endl;
	}
    
    return 0;
}
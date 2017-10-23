/*
	input = 5;
	output:
		    1
		  3 2 1
		5 4 3 2 1
	  7 6 5 4 3 2 1
	9 8 7 6 5 4 3 2 1

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
		for(k = 2*i-1; k > 0;k--)
		{
			cout<<k<<" ";
		}
		
		cout<<endl;
	}
    
    return 0;
}
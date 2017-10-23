/*
	input = 5;
	output:
	1 2 3 4 5 6 7
	  1 2 3 4 5
	    1 2 3
	      1
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
		for(j = 1;j < 2*(n-i-1);j++)
			cout<<" ";
		for(k=1;k < 2*i;k++)
			cout<<k<<" ";
		cout<<endl;
	}
    
    return 0;
}
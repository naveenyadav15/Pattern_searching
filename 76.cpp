/*
	input = 5;
	output:
		1
	   2 2
	  3 3 3
	 4 4 4 4
	5 5 5 5 5
	 4 4 4 4
	  3 3 3
	   2 2
		1
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
	r = 2*n-1;
	for(i=1;i<=r;i++)
	{
		if(i>n)
			k = 2*n - i;
		else
			k = i;
		for(j=1;j<=n-k;j++)
			cout<<" ";
		for(j=1;j<=k;j++)
			cout<<k<<" ";
		cout<<endl;
	}
    
    return 0;
}
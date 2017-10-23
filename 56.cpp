/*
	input = 3;
	output:
	3
	2 3
	1 2 3
	0 1 2 3
	1 2 3
	2 3
	3
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
	r = 2*n+1;
	for(i = 1,k=1;i <= r ; i++)
	{
		if (i > n+1)
			k = 2*(n + 1) - i;
		else
			k = i;
		for(j = n-k+1;k > 0;j++,k--)
			cout<<j<<" ";
		cout<<endl;
	}
    
    return 0;
}
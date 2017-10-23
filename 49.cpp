/*
	input = 7;
	output:
		7 7 7 7 7 7 7
		  5 5 5 5 5
		    3 3 3
		      1
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r,n;
	char c;
	cin>>n;
	r = n;
	for(i = n;i > 0; i -= 2)
	{
		for(j = 1;j <= n-i ; j++)
			cout<<" ";
		for(k=1;k<=i;k++)
			cout<<i<<" ";
		cout<<endl;
	}
    
    return 0;
}
/*
	input = 5;
	output:
		E
		E D
		E D C
		E D C B
		E D C B A

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
		for(j = n; j > n-i;j--)
		{
			c = 'A' + j - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
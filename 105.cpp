/*
	input = 5;
	output:
		5
		5 4
		5 4 3
		5 4 3 2
		5 4 3 2 1

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
			c = '1' + j - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
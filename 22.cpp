/*
	input = 5;
	output:
		E E E E E
		D D D D
		C C C
		B B
		A
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
	for(i = n;i > 0;i--)
	{
		for(j = n; j > n-i;j--)
		{
			c = 'A' + i - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
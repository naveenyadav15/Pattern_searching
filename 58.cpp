/*
	input = 3;
	output:
	D
	C D
	B C D
	A B C D
	B C D
	C D
	D
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
		{
			c = 'A'+j;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
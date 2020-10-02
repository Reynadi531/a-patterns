#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	cout<<"*"<<endl;
	for(int i=1;i<n-1;i++)
	{
		cout<<"*";
		for(int j=0;j<i-1;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"*";
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=6;
	cout<<"*"<<endl;
	for(int i=1;i<n-1;i++)
	{
		cout<<"* ";
		for(int j=0;j<2*(i-1);j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"* ";
	}
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	stack<int>st;
	st.push(0);
	int length=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			st.push(i);
			continue;
		}
		if(st.top()==-1*(a[i]))
		{
			st.pop();
			length=max(length,i-st.top());
        }
		else
		{
			st.push(i);
		}
	}
	cout<<length<<"\n";
}

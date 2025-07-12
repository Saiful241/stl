#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
int main() {
	
	int n;
	cin>>n;
 
	priority_queue<ll>pq;
 
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		pq.push(x);
 
		if(i<=1) cout<<-1<<endl;
 
		else
		{
			ll a=pq.top();
			pq.pop();
			ll b=pq.top();
			pq.pop();
			ll c=pq.top();
			pq.pop();
 
			cout<<a*b*c*1LL<<endl;
 
			pq.push(a);
			pq.push(b);
			pq.push(c);
		}
	}
}

//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
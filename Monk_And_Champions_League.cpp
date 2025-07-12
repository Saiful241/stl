#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	
	
	int m,n;
	cin>>m>>n;
 
	priority_queue<int>pq;
 
	for(int i=0;i<m;i++) 
	{
		int x;
		cin>>x;
		pq.push(x);
 
		
	}
 
	ll sum=0;
 
	while(!pq.empty() && n--)
	{
		int top=pq.top();
 
		sum+=pq.top();
 
		//cout<<sum<<" "<<pq.top()<<endl;
		pq.pop();
		top--;
 
		
	if(top>0)	pq.push(top);
 
	}
 
	cout<<sum<<endl;
	}

    //https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/
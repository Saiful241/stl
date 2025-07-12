#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{


int n;
cin>>n;

vector<int>v(n);

for(int i=0;i<n;i++) cin>>v[i];

ll sum=0;
ll ct=0;

priority_queue<int,vector<int>,greater<int>>pq;



for(int i=0;i<n;i++)
{
    sum+=v[i];

    if(v[i]<0) pq.push(v[i]);

    while(!pq.empty() && sum<0)
    {
        sum+=abs(pq.top());
        pq.pop();
        ct++;
    }
    

}

cout<<n-ct<<endl;


}

//https://codeforces.com/contest/1526/problem/C2
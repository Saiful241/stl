#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{


int n;
cin>>n;

vector<int>v(n);

for(int i=0;i<n;i++) cin>>v[i];


priority_queue<int,vector<int>,greater<int>>pq1;
priority_queue<int,vector<int>,greater<int>>pq2;
priority_queue<int,vector<int>,greater<int>>pq3;

map<int,int>mp;

vector<int>v1(n);
vector<int>v2(n);

for(int i=0;i<n;i++) cin>>v1[i];
for(int i=0;i<n;i++) cin>>v2[i];


for(int i=0;i<n;i++)
{
    if(v1[i]==1) pq1.push(v[i]);
    else if(v1[i]==2) pq2.push(v[i]);
    else if(v1[i]==3)  pq3.push(v[i]);


     if(v2[i]==1) pq1.push(v[i]);
    else if(v2[i]==2) pq2.push(v[i]);
    else if(v2[i]==3)  pq3.push(v[i]);



    
}


int m;
cin>>m;

for(int i=0;i<m;i++)
{
    int x;
    cin>>x;

    if(x==1)
    {
        int ct=0;
        while(!pq1.empty())
        {
            int top=pq1.top();
            pq1.pop();

            if(mp[top]==0)
            {
                cout<<top<<" ";
                ct++;
                mp[top]++;
                break;
            }
            

        }

        if(ct==0) cout<<-1<<" ";
    }

    else if(x==2)
    {

        int ct=0;
        while(!pq2.empty())
        {
            int top=pq2.top();
            pq2.pop();

            if(mp[top]==0)
            {
                cout<<top<<" ";
                ct++;
                mp[top]++;
                break;
            }
            

        }

        if(ct==0) cout<<-1<<" ";
    }

    else
    {
        int ct=0;
        while(!pq3.empty())
        {
            int top=pq3.top();
            pq3.pop();

            if(mp[top]==0)
            {
                cout<<top<<" ";
                ct++;
                mp[top]++;
                break;
            }
            

        }

        if(ct==0) cout<<-1<<" ";
    }


}





}

//https://codeforces.com/problemset/problem/799/B

//hush ,hush
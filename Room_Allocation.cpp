#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{

int n;
cin>>n;

vector<pair<pair<int,int>,int>>v;

for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;

    v.push_back({ {x,y},i});
}

sort(v.begin(),v.end());



priority_queue< pair< pair<int,int>, int> , vector<pair<pair<int,int>,int>>,greater< pair<pair<int,int>,int> >  >pq;

int ct=1;

map< pair<pair<int,int>,int >,int>mp;

map<int,int>mp1;


for(int i=0;i<n;i++)
{
    int x=v[i].first.first;
    int y=v[i].first.second;
    int ind=v[i].second;

    //cout<<x<<" "<<y<<" "<<ind<<endl;


    if(pq.empty()) mp[{{y,x},ind}]=ct++;


    else
    {
        int chole_jabe=pq.top().first.first;

        //cout<<chole_jabe<<" "<<x<<endl;

        if(chole_jabe<x)
        {

            pair<pair<int,int>,int>p=pq.top();
            pq.pop();

            mp[{{y,x},ind}]=mp[p];

        }

        else mp[{{y,x},ind}]=ct++;

        
    }

    


    pq.push({{y,x},ind});
        mp1[ind]=mp[{{y,x},ind}];

}

 cout<<ct-1<<endl;

    for(int i=0;i<n;i++) cout<<mp1[i]<<" ";

    cout<<endl;





}

//https://cses.fi/problemset/task/1164/
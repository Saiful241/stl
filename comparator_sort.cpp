#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first) return a.first<b.first;

    return a.second>b.second;
}

struct comp{
    bool operator()(pair<int,int>a,pair<int,int>b) const
    {
        if(a.first!=b.first) return a.first<b.first;
        return a.second>b.second;
    }
};


int main()
{

    vector<pair<int,int>>v={{1,2},{5,9},{5,3},{10,7},{10,7},{11,63}};

    priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;

    for(int i=0;i<6;i++)
    {
        pq.push({v[i].first,v[i].second});
    }


    sort(v.begin(),v.end(),cmp);




    for(int i=0;i<6;i++) cout<<v[i].first<<" "<<v[i].second<<endl;

   //aikhane comparator sort akoi logic vector of pair and priority_queue ulta kaj kore
   

    while(!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }



}



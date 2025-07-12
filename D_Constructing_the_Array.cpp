#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

struct cmp{

  bool operator()(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) const 
{
    if(a.first!=b.first) return a.first<b.first;

     return a.second.first>b.second.first;

}
};


int main()
{


int t;
cin>>t;

while(t--)
{

    int n;
    cin>>n;

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>> , cmp>pq;

    vector<int>ans(n+1);

    pq.push({(n-1)+1,{1,n}});

    //cout<<pq.top().first<<" "<<pq.top().second.first<<" "<<pq.top().second.second<<endl;

    for(int i=0;i<n;i++)
    {
        pair<int,pair<int,int>>p=pq.top();
        pq.pop();

       // cout<<p.first<<endl;

        int d=(p.second.first+p.second.second)/2; 

      //  cout<<d<<endl;

        

    ans[d]=i+1;

    int f1=p.second.first;
    int l1=d-1;

    int f2=(d+1);
    int l2=p.second.second;

   //cout<<f1<<" "<<l1<<" "<<f2<<" "<<l2<<endl;

    int l=l1-f1+1;
    
    if(l1>=f1) pq.push({l,{f1,l1}});
    l=l2-f2+1;
    
 if(l2>=f2) pq.push({l,{f2,l2}});

 //cout<<pq.top().first<<endl;

        
    }


    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    



    
}


}

//https://codeforces.com/problemset/problem/1353/D
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{


int t;
cin>>t;

while(t--)
{

    int n;
    cin>>n;

    priority_queue<ll>pq;

    ll sum=0;

    for(int i=0;i<n;i++)

    {
        int x;
        cin>>x;

        if(x>0) pq.push(x);

        else
        {

            if(!pq.empty()) 
            {
                sum+=pq.top();
                pq.pop();
            }

        }
    }

    cout<<sum<<endl;

    
}


}

//https://codeforces.com/contest/1800/problem/C2
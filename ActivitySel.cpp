#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node;
    cin>>node;
    pair<int,int>ar[node];
    for(int i=0;i<node;i++)
    {
        cin>>ar[i].second>>ar[i].first;
    }
    sort(ar,ar+node);
    int ans=0;
    int lastindex=INT_MIN;
    for(int i=0;i<node;i++)
    {if(ar[i].second>lastindex)
    {
        ans++;
        lastindex=ar[i].first;
    }
    }
    cout<<ans<<endl;

}

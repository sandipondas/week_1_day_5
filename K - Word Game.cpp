#include<bits/stdc++.h>
#define ll   long long int
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sandipon_das //
#define rasa ios::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
using namespace std;
int main()
{
   //rasa
   sandipon_das
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      vector<string> a(n),b(n),c(n);
      map<string,int>mp;
      for(int i=0; i<n; i++)
      {
        string x;
        cin>>x;
        a[i]=x;
        mp[x]++;
      }
      for(int i=0; i<n; i++)
      {
        string x;
        cin>>x;
        b[i]=x;
        mp[x]++;
      }
      for(int i=0; i<n; i++)
      {
        string x;
        cin>>x;
        c[i]=x;
        mp[x]++;
      }
      int ansA=0,ansB=0,ansC=0;
      for(auto val:a)
      {
        if(mp[val]==1) ansA+=3;
        if(mp[val]==2) ansA+=1;
        //cout<<val<<" "<<mp[val]<<nl;
      }
      for(auto val:b)
      {
        if(mp[val]==1) ansB+=3;
        if(mp[val]==2) ansB+=1;
        //cout<<val<<" "<<mp[val]<<nl;
      }
      for(auto val:c)
      {
        if(mp[val]==1) ansC+=3;
        if(mp[val]==2) ansC+=1;
        //cout<<val<<" "<<mp[val]<<nl;
      }
      cout<<ansA<<" "<<ansB<<" "<<ansC<<nl;
   }

   
   return 0;
}
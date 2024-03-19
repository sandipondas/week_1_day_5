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
   rasa
   sandipon_das
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      char c;
      cin>>c;
      string s;
      cin>>s;
      s+=s;
      int l=0,r=0;
      int m=2*n;
      int ans=0;
      while(l<m && r<m)
      {
        
        int count=0;
        if(s[l]==c)
        {
            while(r<m && s[r]!='g')
            {
                count++;
                r++;
            }
            ans=max(ans,count);
        }
        
        r++;
        l=r;
      }
      cout<<ans<<nl;

   }

   
   return 0;
}
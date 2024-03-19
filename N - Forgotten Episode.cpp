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
   int n;
   cin>>n;
   vector<int>v(n-1);
   for(int i=0; i<n-1; i++)
   {
      cin>>v[i];
   }
   sort(v.begin(),v.end());
   int ans=0;
   for(int i=0; i<n-1; i++)
   {
      if((i+1)!=v[i])
      {
        ans=i+1;
        break;
      }
   }
   if(ans==0) cout<<n<<nl;
   else
   cout<<ans<<nl;
   return 0;
}
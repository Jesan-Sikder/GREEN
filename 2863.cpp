#include <bits/stdc++.h>
using namespace std;
#define ass return 0
#define ll long long
#define dd double
int main(){
int t;
float min;
    while ((cin>>t))
    {
      float arr[t];
     for (int i = 0; i < t; i++)
     {
        cin>>arr[i];
     }
     min= arr[0];
   for (int i = 0; i < t; i++)
     {
        if(arr[i]<min){
            min= arr[i];
        }
     }
cout<<fixed<<setprecision(2)<<min<<endl;     
    }
    
    
ass;
}

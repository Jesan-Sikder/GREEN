#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                int t,num;
                cin>>t;
                vector<int>arr(t+1,0);

                               
           for (int i = 0; i < t; i++)
           {
            cin>>num;
            arr[num]++;
           }
int count =0;
           for (int i = 1; i <= t; i++)
           {
            if(arr[i]>1){
                count++;
            }
            
           }
           
                               
          for (int i = 1; i <= t; i++)
           {
            cout<<arr[i]<<" aparece "<<count<<" vez(es)"<<endl;
            
           }                     
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
        }
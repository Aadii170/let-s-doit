#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ad[n];
    for(int i=0;i<n;i++){
        cin>>ad[i];
    }
    
    for(int k=0;k<n;k++){
    int current=0;
        for(int t=0;t<n;t++){
            if(ad[k]==ad[t]){
                current++;
            }


        }
     
        
        if(current%2!=0){
            cout<<ad[k];
        }
       
        
    }

return 0;
}
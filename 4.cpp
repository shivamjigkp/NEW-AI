#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"enter numr";
    cin >> n;

    int i=1;
    
    while(i<=n){

        int k=n-i;
        while(k){
            cout<<".";
            k=k-1;

        }

        int j=1;
        while(j<=i){
            
            cout<< j;
            j=j+1;
        }

        int j2=i-1;
        while(j2){

            cout<< j2;
            j2=j2-1;


        }

        cout<< endl;
        i =i+1;

    }
}

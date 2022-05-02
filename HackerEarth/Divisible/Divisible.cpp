#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        if(i<n/2){
            while(v>9){
                v=v/10;
            }
            a[i]=v;
        }
        else{
            a[i]=v%10;
        }
    }

int sumDiff;
    for(int i=0;i<n;i+=2){
        sumDiff+=a[i];
    }

    for(int i=1;i<n;i+=2){
        sumDiff-=a[i];
    }
    if(sumDiff%11==0){
        cout<<"OUI";
    }
    else{
        cout<<"NON";
    }
}

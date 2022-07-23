class Solution{
public:
    int remove_duplicate(int a[],int n){
        if(n==0){
           return 0;
        }
        int j=0;
        for(int k=1;k<n;k++){
           if(a[k]!=a[j]){
                j++;
           }
           a[j]=a[k];
        }
       return j+1;
    }
};

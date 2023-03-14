#include<iostream>
using namespace std;
 int linearsearch(int arr[],int n,int find){
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int find;
    cin>>find;
   int x= linearsearch(arr,n,find); 
   if(x==-1)
   cout<<"not found";
   else
   cout<<x;
    }
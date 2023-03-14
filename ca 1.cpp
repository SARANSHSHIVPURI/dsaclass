#include<iostream>
using namespace std;
void bubblesort(string arr[], int n)
for(int i=0; i<n; i++)
{
    for(int j=0;j<n-1;j++)
    {
if (arr[j]>arr[j+1])
{
    string temp = arr(j);
    arr[j+1]=temp;  
    }
    }
}
int main (){
    string arr[]={"a","b","c"};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    bubblesort(arr,n);
    cout<<"sorted"<<endl;
    }
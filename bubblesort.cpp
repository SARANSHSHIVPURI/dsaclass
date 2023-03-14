
#include <iostream>
using namespace std;

int cnt,itr;
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++){
			if (arr[j] >  arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			cnt++;
			}
		itr++;
		}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{	
	int n ;
	cin>>n;
		int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	cout<<"counts"<<cnt<<endl;
	cout<<"iterations"<<itr<<endl;
	return 0;
}
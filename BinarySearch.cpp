#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
int s=0;
int e=n-1;
int mid;
while(s<=e)
	{
		mid=(s+e)/2;
	}

		if (arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		return -1;	
	}



int main ()
{
	cout << "Enter size of array";
	int n;
	cin>>n;

	int arr[n];
	for (int i=0;i<n;i++)
	{
	cin >> arr[i];
	}

	int key;
	cout << "Enter key";
	cin >> key;

	cout << BinarySearch(arr,n,key)<< endl;

	return 0;

}
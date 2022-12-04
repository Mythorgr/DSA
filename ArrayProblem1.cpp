//Problem:Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
//bugged

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int mx=-19999;
	for(int i=0;i<n;i++)
		{
			mx=max(mx,arr[i]);
			cout << arr[i] << endl;
		}
}

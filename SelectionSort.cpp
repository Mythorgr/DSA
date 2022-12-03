//Selection Sort

#include<iostream>
using namespace std;

int main ()
{
	cout << "Enter size of array";
	int n;
	cin >> n;

	int temp;

	int arr[n];
	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for(int i=0;i<n-1;i++)
		{
			for (int j = 0; j < n;j++)
			{
				if (arr[j]<arr[i])
				{
					temp = arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}
					for (int i = 0; i < n;i++)
					{
						cout << arr[i] << " " ;

					}
					cout << endl;


}
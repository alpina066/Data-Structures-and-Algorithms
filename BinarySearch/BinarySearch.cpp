#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;


		if (arr[m] == x)
			return m;


		if (arr[m] < x)
			l = m + 1;


		else
			r = m - 1;
	}

	return -1;
}

int main()
{
	int arr[] = { -3, -2 ,-1 ,0 ,3, 4, 5, 20, 60 };
	int x;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		cout << i << ": "<<arr[i] << endl;
	}
	
	cout << "Input the value to search: ";
	cin >> x;
	
	int result = binarySearch(arr, 0, n - 1, x);
	
	if(result == -1){
		cout << "Element is not exist";
	}
		
	else {
		cout << "Element is present at index : " << result;
	}
	return 0;
}


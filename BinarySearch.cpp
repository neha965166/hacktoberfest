// C++ code to demonstrate the working of binary_search()

#include <bits/stdc++.h>
using namespace std;

// Driver's code
int main()
{
	// initializing vector of integers
	int a;
	cout<<"Enter size of arrAY : ";
	cin>>a;
	iny h=0;
	vector<int> arr = { 10, 15, 20, 25, 30, 35 };
	while(a--){
		cin>>arr[h++];
	}
	sort(arr.begin(),arr.end());
	int m;
	cin>>m;
	// using binary_search to check if 15 exists
	if (binary_search(arr.begin(), arr.end(), m))
		cout << m<<" exists in vector";
	else
		cout <<m<< " does not exist";

	cout << endl;
}

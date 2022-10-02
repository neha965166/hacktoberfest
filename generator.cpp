#include<bits/stdc++.h>
using namespace std;

int rnd(int a, int b) {
	return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
	srand(atoi(argv[1]));
	
	int tt = rnd(1, 10000);
	cout << tt << "\n";
	/*for(int i = 0; i < tt; i++) {
		int n = rnd(3, 100);
		cout << n << "\n";
		for(int j = 0; j < n; j++) {
			cout << rnd(1, 1000) << " ";
		}
		cout << endl;
	}*/
	
	int n = rnd(1, 10);
	cout << n << '\n';
	for(int i = 0; i < n; i++) {
		int now = rnd(1, 1000);
		cout << now << " ";
	}
	cout << '\n';
	
	return 0;
}

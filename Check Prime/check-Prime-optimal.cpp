#include<iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	if (n == 1) {
		cout << "false";
		return 0;
	};
	bool flag = false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			flag = true;
			break;
		}	
	}
        if (!flag) {
			cout << "true";
            return 0;
        }
        cout << "false";
		return 0;
}

// T.C => O(sqrt(n))
// S.C => O(1)

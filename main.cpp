#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;

	cin >> n1 >> n2;
	cin >> N;

	// TODO
	cout << n1 << " " << n2 << " ";
	// TODO
	for (int i = 0; i < N - 2; i++){
		sum = n1 + n2;
		cout << sum << " ";
		n1 = n2;
		n2 = sum;
	}
	cout << endl;
}

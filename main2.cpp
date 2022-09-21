#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n = 5, *p = &n, &r = n;
	cout << n ' ' << *p << ' ' << r << endl;
	return 0;
}

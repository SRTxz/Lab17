#include <iostream>
using namespace std;

void myString(char *&pptr, int N)
{
	pptr = new char[N];
	for (int i = 0; i < N; i++)
		pptr[i] = 'A' + i;
	pptr[N] = 0;
}

int main()
{
	char *p;
	int N;
	cout << "N = ";
	cin >> N;
	myString(p, N);
	cout << p;
	delete[] p;
	return 0;
}

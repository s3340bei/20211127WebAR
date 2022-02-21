#include<iostream>
using namespace std;
int main() {
	int i, j;
	while (cin >> i >> j) 
	{
		if (i < j) swap(i, j);
		cout << i << " " << j << " ";
		int maxlen = 0;
		for (int x = i; x <= j; x++)
		{
			int n = x, count = 1;
			while (n != 1)
			{
				count++;
				if (n % 2) n = n * 3 + 1;
				else n /= 2;
			}
			if (count > maxlen) maxlen = count;
		}
		cout << maxlen << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int n, y = 0, m = 0, d = 0;
	cin >> n;

		while(n >= 365)
		{
			y++;
			n -= 365;
		}
		cout << y << " years\n";
		while(n >= 30)
		{
			m++;
			n -= 30;
		}
		cout << m << " months\n";
		if(n < 30)
		{
			d += n;
		}
	    cout << d << " days\n";

	return 0;
}

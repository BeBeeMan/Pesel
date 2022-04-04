#include <iostream>
#include <string>
using namespace std;

int main()
{
	string liczby;
	string done;
	string dont;
	int tab[11];
	int c=0;
	int x;
	int t;
	cin >> t;
	if (t <= 100)
	{
		for (int k = 0; k < t; k++)
		{
			cin >> liczby;
			for (int i = 0; i < liczby.length(); i++)
			{
				tab[i] = int(liczby[i]) - 48;
			}
			tab[0] = tab[0] * 1;
			tab[1] = tab[1] * 3;
			tab[2] = tab[2] * 7;
			tab[3] = tab[3] * 9;
			tab[4] = tab[4] * 1;
			tab[5] = tab[5] * 3;
			tab[6] = tab[6] * 7;
			tab[7] = tab[7] * 9;
			tab[8] = tab[8] * 1;
			tab[9] = tab[9] * 3;
			tab[10] = tab[10] * 1;
			x = tab[0] + tab[1] + tab[2] + tab[3] + tab[4] + tab[5] + tab[6] + tab[7] + tab[8] + tab[9] + tab[10];
			if (x > 0)
			{
				done = to_string(x);
				if (done[done.length() - 1] == '0')
				{
					dont = dont + "D";
				}
				else
				{
					dont = dont + "N";
				}
			}
		}
		for (int i = 0; i < dont.length(); i++)
		{
			cout << dont[i] << endl;
		}
	}
}

//https://pl.spoj.com/problems/JPESEL/

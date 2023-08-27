#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	bool site[201] = { 0 };
	vector<int> n, m;
	for (int i = 0; i < N; i++)
	{
		int j;
		cin >> j;
		n.push_back(j);
	}
	for (int i = 0; i < M; i++)
	{
		int j;
		cin >> j;
		m.push_back(j);
	}
	site[X + 100] = true;
	for (int i = 0; i < N; i++)
	{
		if (n[i] < X)
		{
			for (int j = n[i] + 100; j < X+100; j++)
			{
				site[j] = true;
			}
		}
		else 
		{
			for (int j = X+101;j<n[i]+101; j++)
			{
				site[j] = true;
			}
		}
	}
	for (int i = 0; i < M; i++)
	{
		if (m[i] < Y)
		{
			for(int j=m[i]+100;j<=Y+100;j++)
				if (site[j])
				{
					cout << X << " and " << Y << ": possible";
					return 0;
				}
		}
		else 
		{
			for(int j=Y+100;j<=m[i]+100;j++)
				if (site[j])
				{
					cout << X << " and " << Y << ": possible";
					return 0;
				}
		}
	}
	cout << X << " and " << Y << ": impossible";
	return 0;
}
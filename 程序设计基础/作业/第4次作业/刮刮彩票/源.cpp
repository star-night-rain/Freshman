#include <iostream>
using namespace std;
int main()
{
	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	int l=0,s,b,h;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for ( h = 1; h < 10; h++)
			{
				if (a[i][j] == h)
					l += h;
				if (a[i][j] == 0)
				{
					s = i;
					b = j;
				}
			}
		}
	}
	if(l!=45)
		a[s][b] = (45 - l);
	int x,y,c,d,e,f;
	cin >> x >> y;
	cout << a[(x-1)][(y-1)] << endl;
	cin >> c >> d;
	cout << a[(c - 1)][(d-1)] << endl;
	cin >> e >> f;
	cout << a[(e-1)][(f-1)] << endl;
	int z,n;
	cin >> z;
	n = 0;
		switch (z)
		{
		case 1:n = a[0][0] + a[0][1] + a[0][2];
			break;
		case 2:n = a[1][0] + a[1][1] + a[1][2];
			break;
		case 3:n = a[2][0] + a[2][1] + a[2][2];
			break;
		case 4:n = a[0][0] + a[1][0] + a[2][0];
			break;
		case 5:n = a[0][1] + a[1][1] + a[2][1];
			break;
		case 6:n = a[0][2] + a[1][2] + a[2][2];
			break;
		case 7:n = a[0][0] + a[1][1] + a[2][2];
			break;
		case 8:n = a[0][2] + a[1][1] + a[2][0];
			break;
		default:cout << "input error";
		}
	switch (n)
	{
	case 6:cout << "10000";
		break;
	case 7:cout << "36";
		break; 
	case 8:cout << "720";
		 break;
	case 9:cout << "360";
		break; 
	case 10:cout << "80";
		break;
	case 11:cout << "252";
		break; 
	case 12:cout << "108";
		break;
	case 13:cout << "72";
		break; 
	case 14:cout << "54";
		break;
	case 15:cout << "180";
		break; 
	case 16:cout << "72";
		break;
	case 17:cout << "180";
		break; 
	case 18:cout << "119";
		break;
	case 19:cout << "36";
		break; 
	case 20:cout << "306";
		 break;
	case 21:cout << "1080";
		break; 
	case 22:cout << "144";
		break;
	case 23:cout << "1800";
		break;
	case 24:cout << "3600";
		break;
	default:cout << "input error";
	}
	return 0;	
}
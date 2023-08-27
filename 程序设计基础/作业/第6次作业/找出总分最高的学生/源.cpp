#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	struct student
	{
		char num[6];
		char name[10];
		int score1;
		int score2;
		int score3;
	};
	student* pa = new student [10];
	student* pb = pa;
	int sum[10]={0};
	for (int i = 0; i < n; i++)
	{
		cin >> pb->num;
		cin >> pb->name;
		cin >> pb->score1;
		cin >> pb->score2;
		cin >> pb->score3;
		sum[i] = pb->score1 + pb->score2 + pb->score3;
		pb++;
	}
	pb = pa;
	int max = 0,num=0;
	for (int i = 0; i < n; i++)
	{
		if (sum[i] > max)
		{
			max = sum[i];
			num = i;
		}
	}
	pb += num;
	cout << pb->name << " " << pb->num << " " << sum[num];
	delete [] pa;
	return 0;
}
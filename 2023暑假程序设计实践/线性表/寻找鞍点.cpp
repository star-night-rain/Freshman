#include <iostream>
#include <algorithm>
using namespace std;
int maxelement(int nums[4])
{
	int max_number = nums[0];
	for (int i = 1; i < 4; i++)
		max_number = max(max_number, nums[i]);
	return max_number;
}
int main()
{
	int nums[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> nums[i][j];
	bool active = 1;
	for (int i = 0; i < 3; i++)
	{
		int max_number = maxelement(*(nums + i));
		for (int j = 0; j < 4; j++)
		{
			if (max_number <= nums[0][j] && max_number <= nums[1][j] && max_number <= nums[2][j])
			{
				active = 0;
				cout << "������" << max_number << ",λ��" << i << "��" << j << "��" << endl;
			}
		}
	}
	if (active)
		cout << "�����ڰ���" << endl;
	return 0;
}
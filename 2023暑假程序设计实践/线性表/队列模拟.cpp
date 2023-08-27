#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int num;
	queue<int>Queue;
	bool empty = 0;
	while (cin >> num)
	{
		if (num > 0)
		{
			if (Queue.size() < 10)
				Queue.push(num);
		}
		else if (num < 0)
			if (!Queue.empty())
				Queue.pop();
			else
				break;
	}
	if (Queue.empty())
		cout << "wrong" << endl;
	else
	{
		if (Queue.size() == 10)
			cout << "Queue is full!" << endl;
		cout << "The Queue is:";
		while (!Queue.empty())
		{
			cout << Queue.front() << " ";
			Queue.pop();
		}
	}
	return 0;
}
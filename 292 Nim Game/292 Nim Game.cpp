#include <string>
#include <iostream>
using namespace std;

class Solution 
{
public:
	bool canWinNim(int n) 
	{
		return n % 4 == 0 ? 0 : 1;
	}
};

int main()
{
	int s_in;
	cin >> s_in;
	Solution sol;
	cout << sol.canWinNim(s_in);
}


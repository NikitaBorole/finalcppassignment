//Nikita borole

#include <iostream>
using namespace std;

string isAnBn(string str)
{
	int n = str.length();
	if (n & 1)
		return "No";

	int i;
	for (i = 0; i < n / 2; i++)
		if (str[i] != 'a' || str[n - i - 1] != 'b')
			return "No";
			return "Yes";
}


int main()
{
	string str = "ab";
	string str = "abaabb";

	cout << isAnBn(str);
	return 0;
}


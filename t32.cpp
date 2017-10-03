// t32.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool mysort(string i,string j)
{
	transform(i.begin(), i.end(), i.begin(), tolower);
	transform(j.begin(), j.end(), j.begin(), tolower);
	return i<j;
}
int main()
{
	int q;
	cin >> q;
	vector<string> array(q);
	
	for (auto& s : array)
		cin >> s;
		
	sort(begin(array), end(array), mysort);
	for (const auto& s : array)
	{
		cout << s << " ";
	}
	cout << endl;
	//cin >> q;
    return 0;
}


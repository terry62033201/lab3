#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
	ifstream filein("file.in", ios::in);
	if(!filein)
	{
		cerr << "failed opening" << endl;
		exit(1);
	}
	
	const int size = 9;
	int sum = 0;
	int i;

	vector<int>cow(size);
	for(i = 0; i < size; i++)
	{
		filein >> cow.at(i);
	}

	sort(cow.begin(), cow.end());
	reverse(cow.begin(), cow.end());

	for(i = 0; i < 5; i++)
	{
		sum += cow.at(i);
	}
	cout << sum << endl;

	return 0;
}

#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
using namespace std;

int  main()
{   
	set<long> s;
	long n;
	cin >> n;
	for (long i=0;i<n;i++)
	{
	
		s.insert(++i);
	}
	int  itm = s.size() - 2;
	auto it = s.begin();
	advance(it, itm);
	cout << *it;
	return 0;

}
#include <bits/stdc++.h>
using namespace std;

bool findX(vector<int> &a, int x)
{
	for(int i=0; i<(int)a.size(); i++)
		if(a[i] == x) return true;
	return false;
}

int32_t main()
{
	int n,x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i=0; i<n; i++)
		cin >> a[i];
	bool isPresent = findX(a,x);
	cout << isPresent << endl;
	return 0;
}

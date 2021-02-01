#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Decomp
{
public:
	static vector<long long> de(vector<long long> v)
	{
		vector<long long> vv;
		vv.push_back(v[0]);
		vv.push_back(v[1] - 1);
		long long s = ((v[0] + 1) * 2 - 1) - pow(v[1] - 1, 2) ;
		while (s > 0)
		{
			long long ne = sqrt(s);
			vv.push_back(ne);
			s -= pow(ne, 2);
		}
		return vv;
	};
	static vector<long long> decompose(long long n)
	{
		if (n == 1)
			return {1};
		if (n < 3)
			return {};
		long long s = n * 2 - 1;
		vector<long long> v;
		v.push_back(n - 1);
		while (s > 0)
		{
			long long ne = sqrt(s);
			v.push_back(ne);
			s -= pow(ne, 2);
		}
		long long si = v.size();
		while(v.size() > 1 && v[si - 1] == v[si - 2]) {
			v = de(v);
		}
		return v.reserve();
	};
};

int main(int argc, char const *argv[])
{
	Decomp d = Decomp();
	vector<long long> v = d.decompose(11);
	for (long long a : v) cout << a << ", ";
	return 0;
}

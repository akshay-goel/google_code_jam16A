#include <algorithm>
#include <cstring>
#include <cmath>
#include <set>
#include <deque>
#include <vector>
#include <cstdio>
#include <iostream>
#define S(x) scanf("%lld",&x)
#define P(x) printf("%lld",x)
#define LI long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		string s,g;
		deque<char> ans;
		cin>>s;
		//cout<<s<<endl;
		ans.push_back(s.at(0));
		for(int i=1;i<s.length();i++)
		{
			if(s.at(i)>=ans.at(0)) ans.push_front(s.at(i));
			else ans.push_back(s.at(i));
		}
		cout<<"Case #"<<j<<": ";
		for(int i=0;i<ans.size();i++) cout<<ans.at(i);
		cout<<endl;
	}
	return 0;
}

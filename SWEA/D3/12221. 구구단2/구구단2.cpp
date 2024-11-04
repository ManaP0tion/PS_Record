#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
    int a, b;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> a >> b; 
		cout << "#" << test_case << " ";
        if(a >= 10 || b>= 10)
            cout << "-1\n";
        else
           cout << a*b << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
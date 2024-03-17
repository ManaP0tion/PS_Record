#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {

		
	deque<int> d;
	int N;
	
	cin >> N;
	
	while(N--){
		string cmd;
		cin >> cmd;
		
		if(cmd=="push_front"){
			int X;
			cin >> X;
			d.push_front(X);
		}
		
		else if(cmd=="push_back"){
			int X;
			cin >> X;
			d.push_back(X);
		}
		
		else if(cmd=="pop_front"){
			if(!d.empty()){
				cout << d.front() <<"\n";
				d.pop_front();
			}
			else
				cout << "-1\n";
		}
		
		else if(cmd=="pop_back"){
			if(!d.empty()){
				cout << d.back()<<"\n";
				d.pop_back();
			}
			else
				cout << "-1\n";
		}
		
		else if(cmd=="size"){
			cout << d.size() <<"\n";
		}
		
		else if(cmd=="empty"){
			cout << d.empty() <<"\n";
		}
		
		else if(cmd=="front"){
			if(!d.empty()){
				cout << d.front() <<"\n";
			}
			else
				cout << "-1\n";
		}
		
		else if(cmd=="back"){
			if(!d.empty()){
				cout << d.back() <<"\n";
			}
			else
				cout << "-1\n";
		}
	}		
	return 0;
}
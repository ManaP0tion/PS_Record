#include <iostream>
using namespace std;

int main(){
  int num, count_5, count_3;
  cin >> num;
  count_5 = num/5;

  while(1){
    if(count_5<0){
      cout << -1 << endl;
      return 0;
    }
    if((num-(count_5*5))%3 == 0){
      count_3 = (num - (count_5*5))/3;
      break;
    }
    count_5--;
  }
  cout << count_3+count_5;
}
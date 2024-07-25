#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int sum = 0, cnt = 0;
    int arr[101] = {0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if ((arr[i] + 1) / 2 <= 30 - sum)
        {
            cnt++;
        }
        sum += arr[i];
        if (sum >= 30)
        {
            sum = 0;
        }
    }
    cout << cnt;
}

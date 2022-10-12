#include <bits/stdc++.h>
using namespace std;
int numberOfDigits(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int findNumbers(vector <int> &a)
{
    int result = 0;
    for(int &i : a)
        if(numberOfDigits(i) % 2 == 0)
            result++;
    return result;
}
int main()
{
    vector <int> a = {123 , 34 , 3434 , 121 , 100};
    cout << findNumbers(a) << '\n';
    return 0;
}

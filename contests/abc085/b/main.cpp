#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    set<int> S;
    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        if (S.count(d) == 0)
        {
            S.insert(d);
        }
    }
    cout << S.size() << endl;
}
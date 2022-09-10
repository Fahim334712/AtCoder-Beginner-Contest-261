#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int maxx, minn;

    maxx = max(l1, l2);
    minn = min(r1, r2);

    if (maxx > minn)
        cout << 0 << endl;
    else
        cout << minn - maxx << endl;

    return 0;
}
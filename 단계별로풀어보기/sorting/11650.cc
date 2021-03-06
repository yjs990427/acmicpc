// acmicpc number: 11650
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b)
{
    if (a.first < b.first) return true;
    if (a.first == b.first) return a.second < b.second;
    return false;
}

int main()
{
    vector<pair<int, int>> vec;
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d\n", &a, &b);
        vec.push_back(make_pair(a, b));
    }
    sort(vec.begin(), vec.end(), comp);

    for (auto& i : vec) printf("%d %d\n", i.first, i.second);
}
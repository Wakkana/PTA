#include <cstdio>
#include <cstring>
#include <cctype>
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, score;
    int sum[1005];
    memset(sum, 0, sizeof(sum));
    int maxx = 0;
    int mark;
    while(n--)
    {
        scanf("%d-%d %d", &a, &b, &score);
        sum[a] += score;
        if(sum[a] > maxx)
        {
            maxx = sum[a];
            mark = a;
        }
    }
    printf("%d %d\n", mark, maxx);
    return 0;
}
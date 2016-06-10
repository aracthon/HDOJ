#include <iostream>

using namespace std;

int a[100005], sum[100005], s[100005];

int main()
{
    int T, N;
    int ca = 0, ans;
    scanf("%d", &T);
    while(ca < T)
    {
        scanf("%d", &N);
        for(int i = 0; i < N; i++)
            scanf("%d", &a[i]);
        ans = 0;
        sum[0] = a[0];
        s[0] = 0;
        for(int i = 1; i < N; i++)
        {
            if(sum[i-1] >= 0)
            {
                sum[i] = sum[i-1] + a[i];
                s[i] = s[i-1];
            }
            else
            {
                sum[i] = a[i];
                s[i] = i;
            }
            if(sum[ans] < sum[i]) ans = i;
        }
        printf("Case %d:\n%d %d %d\n", ++ca, sum[ans], s[ans] + 1, ans + 1);
        if(ca != T) puts("");
    }
    return 0;
}

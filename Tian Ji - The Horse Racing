#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int T[1001], Q[1001];

int main(void)
{
    int ncase = 0;

    while (scanf("%d", &ncase) && ncase != 0)
    {
        for (int i = 0; i < ncase; ++i) {
            scanf("%d", &T[i]);
        }
        for (int j = 0; j < ncase; ++j) {
            scanf("%d", &Q[j]);
        }

        sort(T, T+ncase);
        sort(Q, Q+ncase);

        int Qslow = 0, Tslow = 0;
        int Qfast = ncase-1, Tfast = ncase-1;
        int score = 0;

        for (int k = 0; k < ncase; ++k)
        {

            if (T[Tfast] > Q[Qfast])
            {
                score ++;
                Tfast --;
                Qfast --;
            }
            else if (T[Tfast] < Q[Qfast])
            {
                score --;
                Tslow ++;
                Qfast --;
            }
            else if (T[Tfast] == Q[Qfast])
            {
                if (T[Tslow] > Q[Qslow])
                {
                    score ++;
                    Qslow ++;
                    Tslow ++;
                }
                else
                {
                    if (T[Tslow] < Q[Qfast])
                        score --;
                    Tslow ++;
                    Qfast --;
                }
            }
        }

        printf("%d\n", score*200);
    }

    return 0;
}

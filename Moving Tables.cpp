#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define SIZE 201

int corridor[SIZE] = {0};       // 1 ~ 400

int swap(int *a, int *b){*a ^= *b; *b ^= *a; *a ^= *b;}

int main(void)
{
    int ncases = 0;
	scanf("%d", &ncases);

    while (ncases --)
    {
	    memset(corridor, 0, sizeof(corridor));
	    int mpairs = 0;
	    int shared = 1;
	    scanf("%d", &mpairs);

	    int ts = 0;
	    int te = 0;
	    for (int i = 0; i < mpairs; ++i) {
		    scanf("%d %d", &ts, &te);
		    if (ts > te)
			    swap(&ts, &te);
		    ts = (ts+1) / 2;
		    te = (te+1) / 2;
		    for (int index = ts; index <= te; ++index) {
			    ++ corridor[index];
		    }
	    }
		int max = 0;
	    for (int i = 1; i < SIZE; ++i) {
		    if (max < corridor[i])
			    max = corridor[i];
	    }
	    printf("%d\n", max*10);
    }
    return 0;
}

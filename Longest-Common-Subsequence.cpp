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

#define SIZE 1001

int dp[SIZE][SIZE];


int main(void)
{
    int ncases = 0;
	scanf("%d", &ncases);
	char *xstr;
	char *ystr;

	xstr = (char *)malloc(SIZE*sizeof(char));
	ystr = (char *)malloc(SIZE*sizeof(char));


	while ( scanf("%s", xstr+1) != EOF )
    {
		scanf("%s", ystr+1);
	    memset(dp, 0, sizeof(int));
		int xLen = strlen(xstr+1);
	    int yLen = strlen(ystr+1);

	    for (int i = 1; i <= xLen; ++i) {
		    for (int j = 1; j <= yLen; ++j) {
			    if (xstr[i] == ystr[j])
			    {
			        dp[i][j] = dp[i-1][j-1] + 1;
			    }
			    else
			    {
				    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			    }
		    }
	    }
	    printf("%d\n", dp[xLen][yLen]);
    }
    return 0;
}

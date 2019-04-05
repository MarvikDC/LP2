#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
 
#define mx 1000001
#define integer long long int
 
integer abs(integer x) {
    if (x < 0)
        return -x;
    else
        return x;
}
 
int c[mx + 1], b[mx + 1];
integer a[10000];
 
int main() {
    int n;
    while (cin >> n) {
        memset(c, 0, sizeof(c));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= mx) {
                c[a[i]]++;
                if (c[a[i]] == 1)
                    b[a[i]] = i;
            }
        }
        integer m;
        int s;
        cin >> m;
        integer best_dif = m;
        for (int i = 0; i < n; i++) {
            integer o = m - a[i];
            if (o >= 0 && o <= mx && (c[o] > 1 || c[o] == 1 && b[o] != i)) {
                if (abs(a[i] - o) < best_dif) {
                    best_dif = abs(a[i] - o);
                    s = i;
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n", min(a[s], m - a[s]), max(a[s], m - a[s]));
    }
    return 0;
}


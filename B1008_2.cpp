#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    m = m % n;
    if(m != 0){
        reverse(begin(a), begin(a) + n);
        reverse(begin(a), begin(a) + m);
        reverse(begin(a) + m, begin(a) + n);
    }
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
        if(i < n - 1) printf(" ");
    }
    return 0;
}

#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n;
    int num[110];
    bool flag[110] = {false};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++){
        int t = num[i];
        while(t != 1){
            if(t % 2 == 0) t /= 2;
            else t = (3 * t + 1) / 2;
            if(t <= 110) flag[t] = true;
        }
    }
    int count = 0;
    int ans[110];
    for(int i = 0; i < n; i++){
        if(!flag[num[i]]){
            ans[count++] = num[i];
        }
    }
    sort(ans, ans + count, cmp);
    for(int i = 0; i < count - 1; i++){
        printf("%d ", ans[i]);
    }
    printf("%d\n", ans[count - 1]);
    return 0;
}

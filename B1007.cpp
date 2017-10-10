#include <cstdio>

bool flag[100010] = {false};
int prime[100010];
int count = 0;

void init(int n){
    for(int i = 2; i <= n; i++){
        flag[i] = true;
    }
    for(int i = 2; i <= n; i++){
        if(!flag[i]) continue;
        int temp = i;
        while(temp < n){
            if((temp + i) <= n){
                flag[temp + i] = false;
            }
            temp += i;
        }
    }
    for(int i = 2; i <= n; i++){
        if(flag[i] == true){
            prime[count++] = i;
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    init(n);
    int ans = 0;
    for(int i = 0; i < count - 1; i++){
        if(prime[i + 1] - prime[i] == 2){
            ans++;
        }
    }
    printf("%d\n", ans);
}

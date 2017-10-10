#include <cstdio>

int gcd(int a, int b){
    if(b == 0) return a;
    else return (b, a % b);
}

int main(){
    int n, m;
    int num[110];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    m %= n;
    if(m != 0){
        int cycle = gcd(m, n);
        for(int i = n - m; i < n - m + cycle; i++){
            int temp = num[i];
            int pos = i;
            do{
                int next = (pos - m + n) % n;
                if(next != i){
                    num[pos] = num[next];
                } else {
                    num[pos] = temp;
                }
                pos = next;
            }while(pos != i);
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d",num[i]);
        if(i != (n - 1)) printf(" ");
    }
    return 0;
}

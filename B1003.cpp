#include <cstdio>
#include <cstring>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x, y, n;
        bool flagA = false, flagP = false, flagT = false, flag = true;
        char str[110];
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        for(int i = 0; i < len; i++){
            if(str[i] == 'P' && !flagP){
                flagP = true;
                x = i;
            }else if(str[i] == 'T' && !flagT){
                flagT = true;
                y = i;
            }else if(str[i] == 'A'){
                flagA = true;
                continue;
            }else{
                flag = false;
                break;
            }
        }
        
        if(!flagP || !flagT || !flagA){
            flag = false;
        }
        
        if(flag){
            int mid = y - x - 1;
            if(mid == -1){
                flag = false;
            }
            if(mid * x != len - 1 - y){
                flag = false;
            }
        }
        
        if(flag){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
            
    }
}

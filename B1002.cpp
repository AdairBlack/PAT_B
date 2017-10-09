#include <cstdio>
#include <cstring>

char change[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main(){
    int sum = 0;
    char str[110];
    char ans[5][5];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        sum += str[i] - '0';
    }
    int count = 0;
    while(sum != 0){
        strcpy(ans[count],change[sum % 10]);
        sum = sum / 10;
        count++;
    }
    for(int i = count - 1; i > 0; i--){
        printf("%s ", ans[i]);
    }
    printf("%s\n", ans[0]);
    return 0;
}

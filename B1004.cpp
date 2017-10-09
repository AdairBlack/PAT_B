#include <cstdio>
#include <cstring>

struct Student{
    char name[15];
    char id[15];
    int score;
}max, min, temp;

int main(){
    max.score = 0;
    min.score = 110;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %s %d", temp.name, temp.id, &temp.score);
        if(temp.score > max.score){
            strcpy(max.name, temp.name);
            strcpy(max.id, temp.id);
            max.score = temp.score;
        }
        if(temp.score < min.score){
            strcpy(min.name, temp.name);
            strcpy(min.id, temp.id);
            min.score = temp.score;
        }
    }
    printf("%s %s\n", max.name, max.id);
    printf("%s %s\n", min.name, min.id);
}

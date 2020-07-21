#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
    char name[101];
    int age;
    int score;
}stu;

int compare(const void *a, const void *b){
    stu *a1 = (stu*)a;
    stu *b1 = (stu*)b;
    if (a1->score == b1->score)
    {
        if (a1->age == b1->age){
            return (a1->name - b1->name);
        }else
        {
            return (a1->age - b1->age);
        }
    }else
    {
        return (a1->score - b1->score);
    }
}

int main(){
    int n;
    stu buf[1000];
    while (scanf ("%d",&n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        }
        qsort(buf, n, sizeof(stu), compare);
        for (int i = 0; i < n; i++)
        {
            printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        }
    }
    return 0;
}

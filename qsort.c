#include <stdio.h>
#include <stdlib.h>

int value[] = {40,1,46,56,23,65,49,23};

int compare(const *a, const *b){
    // 升序排列
    // return(*(int*)a - *(int*)b);
    // 降序排列
    return(*(int*)b - *(int*)a);
}

int main(){
    int n;
    qsort (value, 8, sizeof(int), compare);
    for (int i = 0; i < 8; i++)
    {
        /* code */
        printf("%d ", value[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>


int main()
{
    system("chcp 1251");
    system("cls");
    int n, i, j;
    int st = 0;
    int reb = 0;
    printf("Введите число вершин:");
    scanf("%d", &n);
    int mat_sme[n][n]; //матрица смежности
    printf("Введите матрицу смежности\n");
    for(i = st; i<n; i++){
        for(j = st; j<n; j++){
ji:         printf("[%d][%d] = ",i+1,j+1);
            if (!scanf("%d", &mat_sme[i][j])){
                printf("Ошибка, введите 1 или 0\n");
                j--;
                fflush(stdin);
            }
            else{    mat_sme[j][i]=mat_sme[i][j];
                if (mat_sme[i][j] == 1){
                    reb++;}
                if((mat_sme[i][j] == 1)||(mat_sme[i][j]==0)){
                    continue;
                }
                else {
                    printf("Ошибка, введите 1 или 0\n");
                    goto ji;
                }
            }
        }
        if(i!=(n-1))
            st++;
    }
    if(reb>(n-1)*(n-2)/2)
        printf("Граф связный");
    else printf("Не удалось точно проверить по теореме");
    return 0;
}

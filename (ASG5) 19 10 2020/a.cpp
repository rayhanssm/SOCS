#include<stdio.h>

int main(){

    int N;
    int A[1005], B[1005], C[1005];

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]); // A itu posisinya dia mau simpen di ke brp
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &B[i]); // B itu isi array dia saat ini
    }

    for(int i = 0; i < N; i++){
        C[A[i]] = B[i];
    }

    for(int i = 0; i < N; i++){
        printf("%d", C[i]); // B itu isi array dia saat ini
        if(i == N - 1){
            printf("\n");
        }
        else printf(" ");
    }

    return 0;
}

#include<stdio.h>

int main(){

    int N, M;
    long long int A[105][105];

    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){  // i = baris
        for(int j = 0; j < M; j++){  // j = kolom
            scanf("%lld", &A[i][j]);
        }
    }

    long long int total = 0;
    long long int hasil = 1;

    for(int j = 0; j < M; j++){ // j = 0
        for(int i = 0; i < N; i++){  // i = 1
            total = total + A[i][j];
        }
        hasil = hasil * (total % 1000000007);
        total = 0;
    }

    printf("%lld\n", hasil);

    return 0;
}

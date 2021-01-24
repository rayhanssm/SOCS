#include<stdio.h>

int main(){

    int T;
    long long int A, B;
    long long int hasil = 0, hasilAkhir = 0;
    long long int kali = 1;

    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%lld %lld", &A, &B);

        while(A != 0 || B != 0){
            hasil = A % 10 + B % 10;
            hasil = hasil % 10;
            hasil = hasil * kali;
            hasilAkhir = hasilAkhir + hasil;
            A = A / 10;
            B = B / 10;
            kali = kali * 10;
        }

        printf("%lld\n", hasilAkhir);
        hasilAkhir = 0;
        kali = 1;
    }

    return 0;
}

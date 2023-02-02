#include<stdio.h>

void konvolusyon(int matris[][100], int filtre[][100], int sonuc[][100], int M, int N, int k){
    for(int i=0; i<M-k; i++){
        for(int j=0; j<N-k; j++){
            int toplam = 0;
            for(int a=0; a<k; a++){
                for(int b=0; b<k; b++){
                    toplam += filtre[a][b] * matris[i+a][j+b];
                }
            }
        sonuc[i][j] = toplam;
        }
    }
}
void matris_yazdir(int matris[][100], int M, int N){
     for(int i=0; i<M; i++){
        printf("[");
        for(int j=0; j<N; j++){
            if(j == N - 1)
                printf("%d", matris[i][j]);
            else 
                printf("%d,", matris[i][j]); 
        }
        printf("]\n");
    }
}
int main(){
    int sonuc[100][100];
    int filtre[100][100];
    int matris[100][100];
    int M, N, k;

    printf("Matrisin boyutunu giriniz (MxN)");
    scanf("%d%d", &M, &N);
    printf("Matrisin elemanlarini giriniz: \n");
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &matris[i][j]); 
        }
    }
    matris_yazdir(matris, M, N);

     printf("Filtre matrisinin boyutunu giriiniz (kxk)");
    scanf("%d", &k);
    printf("Matrisin elemanlarini giriniz: \n");
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            scanf("%d", &matris[i][j]); 
        }
    }
    matris_yazdir(matris, k, k);

    konvolusyon(matris, filtre, sonuc, M, N, k);
    printf("konvolusyon sonucu:\n ");
    
    matris_yazdir(sonuc, (M-k+1), (N-k+1));

}
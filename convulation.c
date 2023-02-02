#include<stdio.h>

void konvolusyon(int matris[][100], int filtre[][100], int sonuc[][100], int M, int N, int k){
    for(int i=0; i<M-k; i++){
        for(int j=0; j<N-k; j++){
            toplam = 0;
            for(int a=0; a<k; a++){
                for(int b=0; b<k; b++){
                    toplam += filtre[a][b] * matris[i+a][j+b];
                }
                
            }
        sonuc[i][j] = toplam;
        }
    }
}


int main(){


}
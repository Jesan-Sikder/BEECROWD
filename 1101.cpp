#include <stdio.h>

int main(){
    
    int M, N, x;
    int soma;
    
    while(1){
 
                scanf("%d%d",&M,&N);
                if(M <= 0) break;
                if(N <= 0) break;
                
                if(M > N){
                     x = M;
                     M = N;
                     N = x;
                }
                soma = 0;
                for(int i = M; i <= N; i++){
                       printf("%d ",i);
                       soma += i;
                }
                printf("Sum=%d\n",soma);

    }
    return 0;
}
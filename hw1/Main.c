#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[7]={0},tmp=0,n;
    FILE *fp;
    fp=fopen("lotto.txt","w+");
    printf("Welcome to CGU lotto!\nHow many lottery do you want to buy?");
    scanf("%d",&n);
    fprintf(fp,"======== lotto649 =========\n");
    time_t curtime;
    time(&curtime);
    fprintf(fp,"= %s",ctime(&curtime));

    for(int i=0;i<5;i++){
        fprintf(fp,"[%d]: ",i+1);
        if(i<=(n-1)){
            for(int i=0;i<6;i++){
            a[i]=rand()%69+1;
            }
            a[6]=rand()%9+1;
            for(int i=0;i<6;i++){
              for(int j=i+1;j<6;j++){
                if(a[i]==a[j]){
                a[j]=rand()%69+1;
                }
             }
           }
        for(int j=5;j>0;j--){
        for(int k=0;k<=j-1;k++){
            if(a[k]>a[k+1]){
                tmp=a[k];
                a[k]=a[k+1];
                a[k+1]=tmp;
            }
          }
        }
        for(int i=0;i<7;i++){
            if(a[i]<10){
                fprintf(fp,"0%d ",a[i]);
            }else{fprintf(fp,"%d ",a[i]);
          }
         }
        fprintf(fp,"\n");
        }else{
        for(int i=0;i<7;i++){
            fprintf(fp,"-- ");
        }
              fprintf(fp,"\n");
        }     tmp=0;
              for(int i=0;i<7;i++){
                  a[i]=0;
                }
        } fprintf(fp,"======== csie@CGU =========\n");
        fclose(fp);
    }
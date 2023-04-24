#include<stdio.h>
#include<stdbool.h>

int main(){
   
   int available[4];
   int max[5][4];
   int allocation[5][4];
   int need[5][4];
   bool finish[5];
   int p;
   int work[4];
   printf("Enter the number of process required");
   scanf("%d",&p);
   for(int i = 0;i<p;i++){
        finish[i] = false;
      }
   printf("Enter the available resource for each instance ");
   for(int i =0;i<4;i++){
        scanf("%d",&available[i]);
       }
   for(int i=0;i<4;i++){
       work[i] = available[i];
      }
   printf("Enter the maximum amount of resource resourcde instances required");
   for(int i =0;i<p;i++){
       for(int j =0;j<4;j++){
           scanf("%d",&max[i][j]);
         }
      }
  printf("Enter the allocation of each resource instances");
        for(int i =0;i<p;i++)
          {
           for(int j =0;j<4;j++)
             {
              scanf("%d",&allocation[i][j]);
             }
             printf("%i",allocation[i][j];
          }
printf("Calculating the Need matrix..");
      for(int i =0;i<p;p++)
          {
           for(int j =0;j<4;j++)
             {
              need[i][j] = max[i][j] - allocation[i][j];
             }
           }
           int safestate[6];
           int gg=0;
           
  while(finish==false)
      {
       for(int i=0;i<p;i++)
         {
          int k = 0;
       for(int j=0;j<4;j++)
          {
           if(finish[i]==false)
              if(need[i][j]<=work[k]){
                   k++;
                   safestate[gg]=i;
                   gg++;
                   printf("");
                }                
               else{
                    printf("Resource csnnot be allocate out of scope");
                    break;
                   }
               for(int m=0;m<1;m++)
                  {
                   for(int l=0;l<4;l++)
                  {
                   work[m] = work[m] + allocation[m][l];
                  }
                  finish[i] = true;
                  printf("Process %d granted resouces",i+1);
                 }
              }
               }
}
}
               
            
           
          







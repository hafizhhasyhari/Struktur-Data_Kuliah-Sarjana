// Insertion Sorting dengan C //
// Author by hafizhhasyhari //
// Struktur Data //

#include <stdio.h>
#include <stdlib.h>
  
struct data{
    int nim;
    char nama[20];
};
typedef struct data data;
   
void swap (struct data *a,struct data *b){
    data tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
   
void cetak(data mhs[100],int n){
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", mhs[i].nim);
    }
    printf("\r\n");
}
  
  
void InsertionSort(struct data mhs[100], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = mhs[i].nim; 
       j = i-1; 
  
       while (j >= 0 && mhs[j].nim > key) 
       { 
           swap(&mhs[j+1],&mhs[j]);
            
           j = j-1;
       }
       cetak(mhs,n);
       mhs[j+1].nim = key; 
   }
}
   
void BubbleSort(data mhs[100], int n){  
    int i, j; 
    int swapped; 
    for (i = 0; i < n-1; i++) { 
        swapped = 0;
        for (j = 0; j < n-i-1; j++){ 
            if(mhs[j].nim > mhs[j+1].nim){ 
                swap(&mhs[j],&mhs[j+1]);
                swapped = 1; 
            }
            cetak(mhs,n);
        }
           
    if (swapped == 0) 
        break; 
    }
}
   
int main(){
    struct data mhs[100];
    int n;
    char s[8];
   
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%s %s",s,mhs[i].nama);
        mhs[i].nim = atoi(s);
    }
   
    InsertionSort(mhs,n);
     printf("Hasil akhir :\r\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d - %s\r\n", mhs[i].nim, mhs[i].nama);
           
    }
   
    return 0;
}

#include <stdio.h>
void main()
{
    int N,Q,M,runs=1,i,R,j;
    printf("No of distinct integers ");
    scanf("%d",&N);
    printf("No of querries to run ");
    scanf("%d",&Q);
    printf("enter the modulo ");
    scanf("%d",&M);
    printf("%d%d%d",N,Q,M);
// Creating array of n distinct integers and creating another array with same element
    int list[N],list2[N];
    for(int i=0; i<N; i++) {
        scanf("%d",&list[i]);
        list2[i]=list[i];
    }
// sorting array 2  in ascending order keeping array 1 intact
    int temp;
    for(i=0; i< N-1; i++) {
        for(j=i+1; j<N; j++) {
            if(list2[i]>list2[j]) {
                temp = list2[i];
                list2[i] = list2[j];
                list2[j] = temp;
            }
        }
    }
    for(int i=0; i<N; i++) printf("%d",list2[i]);
    while(runs<=Q) {
        //Each query will have two integers, i and R.
        printf("input i and R");
        scanf("%d%d",&i,&R);
        //ith smallest element for which a[j]%M = R
        for(int k=0; k<N; k++) {
            if(list2[k]%M==R && i!=0) {
                j=list2[k];
                i--;
            }
            if(i==0) break;
            if(i!=0 && k==N-1) j=-1;
        }
        // searching for index of element j in array 1
        for(int k=0; k<N; k++) {
            if(j==-1)break;
            if(list[k]==j) {
                j=k+1;
                break;
            }
        }
        printf("%d",j);
        runs++;
    }
}

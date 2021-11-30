#include <stdio.h>
// Selection Sort
// 버블 정렬과 유사한 알고리즘으로,
// 해당 순서에 원소를 넣을 위치는 이미 정해져있고, 어떤 원소를 넣을지 선택하는 알고리즘
// 배열에서 해당 자리를 선택하고 그자리에 오는 값을 찾는 것!!


int main(void){
    int i,j,temp;
    int array[10]={1,10,5,8,7,6,4,3,2,9};
    for(i=0; i<9;i++){
        j=i;
        while(j>=0 && array[j] > array[j+1]){
            temp=array[j]; #
            array[j]=array[j+1];
            array[j+1]=temp;
            j--;
        }
    }
    for(i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

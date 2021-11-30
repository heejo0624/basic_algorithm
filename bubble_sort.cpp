#include <stdio.h>

# bubble sort (원소의 이동이 거품이 수면으로 올라오는듯한 모습을 보임)
# selection sort와 유사한 알고리즘으로 서로 인접한 두 원소의 대소를 비교하고,
# 조건에 맞지않다면 자리를 교환하며 정렬하는 알고리즘

int main(void){
    int i,j,temp;
    int array[10]={1,10,5,8,7,6,5,4,3,9};
        for(i=0; i<10; i++){
            for(j=0; j<9-i; j++){
                if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
              }
            }
          }
    for(i=0; i<10; i++){
    printf("%d ",array[i];);
    }
  return 0;
}

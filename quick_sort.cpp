#include <stdio.h>

//분할 정복 방법
//문제를 작은 2개의 문제로 분리하고 각각을 해결한 다음, 결과를 모아서 원래의 문제를 해결하는 전략이다.
//즉, 특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에 배열을 반으로 나눔

int number=10;
int data[] = {1,10,5,8,7,6,4,3,2,9}

void show(){
    int i;
    for(i=0; i<number;i++){
        printf("%d ",data[i]);
    }
}

void quickSort(int8 data, int start, int end){
    if(start>=end){ //원소가 1개인 경우 그대로 두기
        return;
    }
    
    int key =start; //키는 첫번째 원소
    int i= start+1, j=end, temp;
    
    while(i<=j){ //엇갈릴 때까지 반복
        while(i<=end && data[i] <= data[key]){ // 키 값보다 큰 값을 만날때
            i++;
        }
        while(j>start && data[i]>=data[key]){ // 키 값보다 작은 값을 만날때
            j--;
        }
        if(i>j){ //현재 엇갈린 상태면 키값과 교체
            temp=data[j];
            data[j]=data[key];
            data[key]=temp;
        }else{
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
    
    quickSort(data,start, j-1);
    quickSort(data, j+1, end);
}

int main(void){
    quickSort(data,0,number-1);
    show();
    return 0;
}

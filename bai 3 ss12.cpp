#include<stdio.h>

int isPrime(int numbers) {
    if (numbers < 2) {
        return 0; 
    }
    for (int i = 2; i <= numbers / 2; i++) {
        if (numbers % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main(){
	int n,m;
	printf("Nhap chi so phan tu mang 1: ");
	scanf("%d",&n);
	printf("Nhap chi so phan tu mang 2: ");
	scanf("%d",&m);
	int fisrtNumbers[n], secondNumbers[m];
	for(int i=0;i<n;i++){
		printf("Number 1 [%d]= ",i);
		scanf("%d",&fisrtNumbers[i]);
	}
	for(int j=0;j<m;j++){
		printf("Number 2 [%d]= ",j);
		scanf("%d",&secondNumbers[j]);
	}
	int count1=0,count2=0;
	printf("So nguyen to mang 1 la: \n");
	for(int i=0;i<n;i++){
		if(isPrime(fisrtNumbers[i])){
			printf("%d\t",fisrtNumbers[i]);
			count1++;
		}
	}
	printf("So nguyen to mang 2 la: \n");
	for(int j=0;j<m;j++){
		if(isPrime(secondNumbers[j])){
			printf("%d\t",secondNumbers[j]);
			count2++;
		}
	}
	if(count1<count2){
		printf("\nMang 1 nhieu so nguyen to hon");
	}else if(count1>count2){
		printf("\nMang 2 nhieu so nguyen to hon");
	}else{
		printf("\nSo nguyen to 2 mang bang nhau");
	}
	return 0;
}

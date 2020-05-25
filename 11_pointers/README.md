pointer
====
- 記憶體中的最小單位為 1 byte = 8 bits.

- pointer 的位址為 變數在記憶體的起始地址（ int 為 4 byte).

- 變數有三大要素 
	1. 變數位址（在記憶體中的起始位址）
	
	2. 變數值

	3. 變數名稱

>
	EX1:
		#includ<stdio.h>
 
		int main(void) {
    		int b = 2;
 
			printf("變數 b 的值：%d\n", b);
    		printf("變數 b 的記憶體位址：%p\n", &b); // %p為印出地址的16進位表示法
 
    		return 0;
		}

- &取出變數位址，* 取出變數值。故 *&b等價於 ｂ

- 指標變數
>
	int b; 
	//跟記憶體要一塊區域稱為b,這塊區域專門放int型變數值
	
	b = 2; 
	//把2這個值給變數b
	
	int* pointer or int *pointer; 
	//跟記憶體要一塊區域稱為pointer,這塊區域專門放指向int型變數的指標（地址）
	
	pointer = &b; 
	//把變數b的地址值給pointer，注意不能寫成 pointer = b;

- Using pointer to switch two integer.
>	
	#include <stdio.h>
	
	int main(void) {
		int a, b, temp;
		int *p1, *p2;
		printf("請輸入 a 的值："); 
		scanf("%d", &a);
		printf("請輸入 b 的值：");
		scanf("%d", &b);
	
		p1 = &a;
		p2 = &b;
	
		if(*p1 < *p2){
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		}
		printf("*p1的值：%d\n", *p1);
		printf("*p2的值：%d\n", *p2);
	}

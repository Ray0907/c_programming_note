**整數表示法** 
===
### 1. 符號與值 (sign & magnitude): 最高有效位元為符號位元(sign bit)
	
		ex: 8 個位元表達一個數值，由於需要保留一個位元來存放正負號，於是這樣的編碼系統實際能表達的範圍是 
		-(27 - 1) = -127, -126, -125, … -0, +0, …, +125, +126, +(27 - 1) = +127
「符號與值」編碼雖然直覺並實際證明運用於太空技術中，但由於以下兩個缺點，隨後就被棄置：

1.電路複雜
從前述運算法可見，「符號與值」的正負號位元不能直接參與運算，必須要單獨的硬體線路來確定正負號符號位元;
受限於額外的正負號位元，加法和減法需要各自的硬體電路才能實作：加法運算會產生「進位」(carry)，減法運算需要「借位」(borrow)，這兩種運算對應的硬體電路差異很大，需要額外的電路把加法器才可改造為減法器

2.0的表示法不唯一
	
	。這種表示法導致有兩種方式表示 0

			。00000000 (+0)
			。10000000 (-0)
			。這實際增加數位電路的複雜性和設計難度，中央處理器也為此須執行兩次比較，才能確認運算結果是否為 0;

### 2. 一補數 (Ones’ complement)

Reading and writing characters using getchar and putchar
=== 
getchar、putchar比scanf 、printf速度還快的原因

1. scanf and printf 要先解析format後才輸出，而 getchar putchar是一次一個字符的I/O 

Data Type
===	
![image](https://github.com/Ray0907/c_programming_note/blob/master/7_basic_types/data_type.png)
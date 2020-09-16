Bitwise Operators
===
- << left shift

- `>>` right shift

- & AND
	
	- 0 & 0 = 0
	- 0 & 1 = 0
	- 1 & 0 = 0
	- 1 & 1 = 1

- | OR

	- 0 | 0 = 0
	- 0 | 1 = 1
	- 1 | 0 = 1
	- 1 | 1 = 1 

- ^ XOR

	- 0 ^ 0 = 0
	- 0 ^ 1 = 1
	- 1 ^ 0 = 1
	- 1 ^ 1 = 0

- ~ NOT
	
	- ~0 = 1
	- ~1 = 0

- Each of the ~, &, ^ and | operators has adifferent precedence:
	- Highest -> Lowest
		
		- ~ & ^ |

Other low-level techniques
===
主流 CPU 中常見的位元順序有以下兩種

1. big-endian(最高的位元組會放在最低的記憶體位址)

2. little-endian(與 big-endian 相反)
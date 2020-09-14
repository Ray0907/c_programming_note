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
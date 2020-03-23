Expression
===
1. lvalue vs rvalue
		
		rvalue
		int i=1;
		printf("%d", i++); 1
		printf("%d", i); 2

		lvalue
		int i= 1;
		printf("%d", ++i); 2
		printf("%d", i);  2
		
Combining the * and ++ Operators
===
|  Expression |Meaning   |
|---|---|
|*p++ or *(p++)   |Value of expression is *p before increment;increment p later   |
| (*p)++  |Value of expression is *p before increment; increment *p later   |
|*++p or *(++p)   |Increment p first;value of expression is *p after increment   |
| ++*p or ++(*p)  |Increment *p first;value of expression is *p after increment   |

Using a pointer as an array name
=== 
	> The compiler treats i[a] as *(i+a), which is the same as *(a+i)
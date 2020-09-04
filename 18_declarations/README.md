Storage classes
===
- The *auto* Storage Class	
	- is legal only for variables that belong to a block.

- The *static* Storage Class
	- If a static variable is defined outside of the functions it will be accessible only by the code that follows in the file it is declared.
	- If the static variable is declared in a function, it will only be accessible from the function, and it will keep its value between function executions.

- The *extern* Storage Class
	- The *extern* storage class enables several source files to share the same variable.

- The *register* Storage Class
	- Using the *register* storage class in the declaration of a variable asks the complier to store the variable in a register instead of keeping it in main memory(it can be accessed and updated faster than data stored in ordinary memory.)
	- *register* is best used for variables that are accessed and/or updated frequently.

- *static* and *extern* are the most important.
- *auto* hs no effect
- modern compilers


 have made *register* less important.

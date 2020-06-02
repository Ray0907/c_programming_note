String Literals vs Character Constants
===
1. The string literal "a" is represented by a pointer to a memery location that contains the charater a (followed by a null charcater.)

2. The character constant 'a' is represented by an integer (the numerical code for the character.)

Reading and Writing Strings
===
1. A string read using 	***scanf*** will never contain white space and always stores a null character at the end of the string.

2. ***gets*** doesn't skip white space before starting to read the string (***scanf*** does)

3. ***gets*** reads until it find a new-line character (***scanf*** stops at any white-space character).Incidentally,***gets*** discards the new-line character instead of storing it in the array; the null character takes its place. 
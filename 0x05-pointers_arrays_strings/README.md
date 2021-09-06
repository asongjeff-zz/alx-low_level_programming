# 0x05. C - Pointers, arrays and strings

__0. 98 Battery st.__
	_Write a function that takes a pointer to an int as parameter and updates the value it points to to 98._
		_Prototype: void reset_to_98(int *n);_

__1. Don't swap horses in crossing a stream__
	_Write a function that swaps the values of two integers._
		_Prototype: void swap_int(int *a, int *b);_

__2. This report, by its very length, defends itself against the risk of being read__
	_Write a function that returns the length of a string._
		_Prototype: int _strlen(char *s);_
	_FYI: The standard library provides a similar function: strlen. Run man strlen to learn more._

__3. I do not fear computers. I fear the lack of them__
	_Write a function that prints a string, followed by a new line, to stdout._
		_Prototype: void _puts(char *str);_
	_FYI: The standard library provides a similar function: puts. Run man puts to learn more._

__4. I can only go one way. I've not got a reverse gear__
	_Write a function that prints a string, in reverse, followed by a new line._
		_Prototype: void print_rev(char *s);_

__5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes__
	_Write a function that reverses a string._
		_Prototype: void rev_string(char *s);_

__6. Half the lies they tell about me aren't true__
	_Write a function that prints every other character of a string, starting with the first character, followed by a new line._
		_Prototype: void puts2(char *str);_

__7. Winning is only half of it. Having fun is the other half__
	_Write a function that prints half of a string, followed by a new line._
		_Prototype: void puts_half(char *str);_
		_The function should print the second half of the string_
		_If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2_

__8. Arrays are not pointers__
	_Write a function that prints n elements of an array of integers, followed by a new line._
		_Prototype: void print_array(int *a, int n);_
		_where n is the number of elements of the array to be printed_
		_Numbers must be separated by comma, followed by a space_
		_The numbers should be displayed in the same order as they are stored in the array_
		_You are allowed to use printf_

__9. strcpy__
		_Prototype: char *_strcpy(char *dest, char *src);_
	_Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest._
		_Return value: the pointer to dest_
	_FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more._

__10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers__
	_Write a function that convert a string to an integer._
		_Prototype: int _atoi(char *s);_
		_The number in the string can be preceded by an infinite number of characters_
		_You need to take into account all the - and + signs before the number_
		_If there are no numbers in the string, the function must return 0_
		_You are not allowed to use long_
		_You are not allowed to declare new variables of “type” array_
		_You are not allowed to hard-code special values_
		_We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code._
	_FYI: The standard library provides a similar function: atoi. Run man atoi to learn more._

__11. Don't hate the hacker, hate the code__
	_Create a program that generates random valid passwords for the program 101-crackme._
		_You are allowed to use the standard library_
		_You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)_
		_man srand, rand, time_
		_gdb and objdump can help_

# About these files

## 0) [0-positive_or_negative.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)
This program will assign a random number to the variable `n` each time it is executed and prints whether the number stored in the variable `n` is positive or negative.
* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable `n` will store a different value every time you will run this program
* The output of the program is the number, followed by:
  * if the number is greater than 0: `"is positive"`
  * if the number is 0: `"is zero"`
  * if the number is less than 0: `"is negative"`
* followed by a new line
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
```

## 1) [1-last_digit.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)
This program will assign a random number to the variable `n` each time it is executed and prints the last digit of the number stored in the variable `n`.
* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
* The variable `n` will store a different value every time you run this program
* The output of the program is:
  * The string `"Last digit of"`, followed by `n`, followed by `"is"`, followed by:
    * if the last digit of `n` is greater than 5: the string `"and is greater than 5"`
    * if the last digit of `n` is 0: the string `"and is 0"`
    * if the last digit of `n` is less than 6 and not 0: the string `"and is less than 6 and not 0"`
  * followed by a new line

## 2) [2-print_alphabet.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)
This program prints the alphabet in lowercase, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
```


## 3) [3-print_alphabets.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)
This program prints the alphabet in lowercase, and then in uppercase, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
```

## 4) [4-print_alphabt.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)
This program prints the alphabet in lowercase except `q` and `e`, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
```

## 5) [5-print_numbers.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)
This program prints all single digit numbers of base 10 starting from 0, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
```


## 6) [6-print_numberz.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)
This program prints all single digit numbers of base 10 starting from 0, followed by a new line.
* The variable of type `char` is not allowed
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
```


## 7) [7-print_tebahpla.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)
This program prints the lowercase alphabet in reverse, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```


## 8) [8-print_base16.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)
This program prints all the numbers of base 16 in lowercase, followed by a new line.
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
```


## 9) [9-print_comb.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)
This program prints all possible combinations of single-digit numbers.
* Numbers must be separated by `,`, followed by a space
* Numbers should be printed in ascending order
* The variable of type `char` is not allowed
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
```

## 10) [100-print_comb3.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)
This program prints all possible different combinations of two digits.
* Numbers must be separated by `,`, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Numbers should be printed in ascending order, with two digits
* The variable of type `char` is not allowed
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$
```


## 11) [101-print_comb4.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)
This program prints all possible different combinations of three digits.
* Numbers must be separated by `,`, followed by a space
* The three digits must be different
* 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
* Numbers should be printed in ascending order, with three digits
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
```

## 12) [102-print_comb5.c](https://github.com/s-maarouf/alx-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c)
This program prints all possible combinations of two two-digit numbers.
* The numbers should range from 0 to 99
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as 01
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* The variable of type `char` is not allowed
```sh
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

# About these files

## 0) 0-preprocessor
This script runs a C file through the preprocessor and save the result into another file
* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

## 1) 1-compiler
This script compiles a C file but does not link
* The C file name is saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension .o instead of .c

## 2) 2-assembler
This script generates the assembly code of a C code and save it in an output file
* The C file name is saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension .s instead of .c.

## 3) 3-name
This script compiles a C file and creates an executable named `cisfun`
* The C file name is saved in the variable `$CFILE`

## 4) 4-puts.c
This C program prints exactly ""Programming is like building a multilingual puzzle", followed by a new line
* Using the function _puts_
* _printf_ is not allowed
* Program should end with the value 0

## 5) 5-printf.c
This C program prints exactly  "with proper grammar, but the outcome is a piece of art,", followed by a new line
* Using the function _puts_
* _printf_ is not allowed
* Program should end with the value 0
* program should compile without warning when using the `-Wall gcc` option

## 6) 6-size.c
This C program prints the size of various types on the computer it is compiled and run on
* Warnings are allowed
* Program should return 0
* You need to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

## 7) 100-intel
This script generates the assembly code (Intel syntax) of a C code and save it in an output file
* The C file name will be saved in the variable `$CFILE`.
* The output file should be named the same as the C file, but with the extension .s instead of .c.

## 8) 101-quote.c
This C program prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.
* NAME section of the man (3) _printf_ or man (3) _puts_ functions are not allowed
* Program should return 1
* Program should compile without any warnings when using the `-Wall gcc` option.

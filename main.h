/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

/*
A coder can declare a non-reference function argument 'const' such as 'void f(const int)', which indicates that the initialized integer value used in the function can not be modified. Coders will sometimes use 'const' as it helps ensure that the compiler acknowledge what values should not be modified within the program, which can help in debugging. Coders don't often use 'const-ness' as it would require other forms of const to exist such as const functions and const references in order to ensure that the initialized data is not changed.
*/

//Small program example.
#include <iostream>

void trial(const std::string current)
{
  std::cout << current;
  //current = "This is an error"; - This line creates an error.
}

int main(){
  std::string current = "Hello, this is a string";
  trial(current);
}
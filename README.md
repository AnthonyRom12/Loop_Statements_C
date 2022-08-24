# Loop_Statements_C++

Hello everyone
It's just tutorials for beginners and how we can manipulate of statements for calculasion the same things.
Notice: I put all calculation inside one project, if you want to download all project, don't forget that the main function could be used only is one project.
        Therefore you have devide files to different projects and in will work. Have a nice day and stay coding.
_________________________________________________________________
While_1 and how it works:

In this part of our programm we create 3 integer variables (upper sum limit, sum value, index variable) with values.
Variable "n" - define like upper sum limit 
Variable "s" - we put sum squares of natural numbers
Variable "k" - we need it inside statement (for calsulasions quantity of summand)
All calculasions working in loop statement 
In one loop we can see 2 commends : s = s + k * k adding value to s variable suqare of value k variable. 
After k ++ increase value variable k to 1. All of this works till k will not more than n variable.
________________________________________________________________

While_2 and how it works:

So, here we made some changes. 
First, we use only "n" variable in while loop. Will you ask how it work? Well in C++ we can use bcs of if it's true, it will be read as 1. But if its false - zero (0).
This method allows us to refuse index variable k.
All works here in while loop and consecutively do command s+=n*n and n--.
To s adding suqare of current value of n. And after n-- decrease n by one(1).
All its working till value of n increase to zero.
______________________________________________________________

For_1 and how it works:

In programm we create 3 integer variables with values.
Variable "n" - define like upper sum limit 
Variable "s" - we put sum squares of natural numbers
Variable "k" - we need it inside statement (for calsulasions quantity of summand)
After programm get variable "n" statement begins. 
First block in parentheses after "for" has k = 1, which is executed once at the beginning of the loop. After assigning a single value to the variable "k",
the condition "k <= n" is checked.
If condition is true, start to execute "s+=k*k" and "k++"
And again till condition is true.
_______________________________________________________________

For_2 and how it works:

In this case assigning zero value inserted to first block of statemant and command s+=k*k now is in third block.
The body of statement is empty now.
______________________________________________________________

For_3 and how it works:

Here the values is assigning when variables declaring.
Therefore first and third blocks in "for" statement are empty now.
_______________________________________________________________

For_4 and how it works:

Emty block is equal to true (literally we get infinity loop).
For exit from loop we use "if" and inside we put "break" command.

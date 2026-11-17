# cis165-lab8-lottery

Planning for the code.
First I will make sure that make a constant for how many digits I want and how many digits that can possibly exist. After that I need to make sure that the rounds start at 0 and then goes up each round. Next is to make sure that each round has different digits every time and wont spit out the same "random" digits each time and I can do that by using this "srand(static_cast<unsigned int>(time(nullptr)));". 


How does the random expression keep every digit between 0 and 9?
- The random expression keeps every digit between 0 and 9 by having the loop run with i=0,1,2,3,4 and rand() returns a big non negative number, while % 10  gives the remainder after dividing by ten, which could only be 0 through 9.
Why does a matching digit in another position not count?
Trace the count through the example arrays.
-Since we are using the same i for both arrays this means that you only compare same position. A digit that appears in a different position is never compared. 
Why do array loops stop before SIZE, and what did your fixed tests establish?
- It stops before SIZE because a five element array would only have an index of 0-4. Index 5 doesn't exist. The fixed test establish that the lottery system works. Each line has a number and it only counts when the number from the same row is the same. 

testings:

Enter 5 digits (0-9), separated by spaces: 3 5 9 8 2
Winning digits: 8 5 9 9 9 
Player digits:  3 5 9 8 2 
Number of matching positions: 2

Enter 5 digits (0-9), separated by spaces: 7 5 8 2 1 
Winning digits: 2 8 4 5 0 
Player digits:  7 5 8 2 1 
Number of matching positions: 0



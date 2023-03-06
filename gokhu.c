/*
Master Roshi gave Goku an integer number x. 
Goku isn't good at numbers but he loves inverting digits in them.
 Inverting the digit t means replacing it with the digit 9 - t. 
Help Goku to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. 
The decimal representation of the final number shouldn't start with a zero.

Input Format

The first line contains a single integer x (1≤x≤10^18) — the number that Master Roshi gave to Goku.

Constraints

x <= 100000000000000000

Output Format

Print the minimum possible positive number that Goku can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input 0

4545
Sample Output 0

4444
Explanation 0

There are many numbers formed after inverting the digit. For the minimum number, 
check if the inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.



*/
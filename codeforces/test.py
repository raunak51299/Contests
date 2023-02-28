'''Limak likes palindromes and recently he came across a simple problem in which he was given a string and he had to report the total number of unique palindromes of length 3 which can be formed by using the characters of the string. Also, he was supposed to list out in lexicographical order all the palindromes of length 3 with each palindrome in a separate line.

Input Format

The first line of input contains the length of the string and it is followed by a string of the above mentioned length.

Constraints

1 <= length of string <= 100000
The string consists of lowercase alphabets

Output Format

The first line of input should be an integer which is the total number of unique palindromes of length 3 which can be formed by using the characters in the string. The following lines consist of all unique palindromes of length 3 which are arranged in lexicographical order and can be formed using the characters in the string.

Sample Input 0

4
aabc
Sample Output 0

2
aba
aca'''
def palindrome(s):
    n = len(s)
    count = 0
    for i in range(n):
        for j in range(i+1,n+1):
            if s[i:j] == s[i:j][::-1]:
                count += 1
                print(s[i:j])
    return count
def main():
    s = input()
    print(palindrome("aabc"))

main()

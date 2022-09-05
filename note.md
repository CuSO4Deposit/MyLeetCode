# My LeetCode Note

## Index

[383. Ransom Note](#383)

[412. Fizz Buzz](#412)

[876. Middle of the Linked List](#876)

[1342. Number of Steps to Reduce a Number to Zero](#1342)

[1480. Running Sum of 1d Array](#1480)

[1672. Richest Customer Wealth](#1672)

### 383

I just fell again on this: Remember, always use `while(*ptr)` instead of `while(ptr)`when iterating over a string. 

`char` cast to `int` : `*ptr - 'a'`may be better than `(int)*ptr - 95`.

### 412

`sprintf` in C: can convert numbers (int, float, ...) to string in formatted way.

Use a hash table may be a way to get rid of if-else structure. But in C it's hard to impl.

### 876

I have once met this algorithm. Discussed here:[单链表的含环和相交性质探究过程记录 &#8211; CuSO4_Deposit](https://depoze.xyz/2021/09/23/%e5%8d%95%e9%93%be%e8%a1%a8%e7%9a%84%e5%90%ab%e7%8e%af%e5%92%8c%e7%9b%b8%e4%ba%a4%e6%80%a7%e8%b4%a8%e6%8e%a2%e7%a9%b6%e8%bf%87%e7%a8%8b%e8%ae%b0%e5%bd%95/)

### 1342

`x & 1` is to judge whether x is odd.

Don't forget the `=` when you want to left/right shift some int!

In problems related to divide-by-2, think to the deepest on binary aspect. There may be quite simple solutions.

### 1480

Use the input array as output, may reduce space complexity.

### 1672

Initialize varible in each loop fastened the program. Maybe test more later.

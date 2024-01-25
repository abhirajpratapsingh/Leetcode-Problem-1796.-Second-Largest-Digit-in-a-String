# Abhiraj Pratap Singh

----

# UPVOTE

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
- The problem requires finding the second-highest digit in a given string.

---


![Screenshot (47).png](https://assets.leetcode.com/users/images/6f3fad8a-e228-43ca-9b00-55bb15300d7a_1706203372.8514938.png)


---


# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize two variables, large and secLarge, to keep track of the largest and second-largest digits found so far.
2. Iterate through each character in the string.
3. Check if the character is a digit (between '0' and '9').
4. If it is a digit, compare it with the current largest digit (large)

    - If the digit is greater than large, update secLarge to be equal to the current large, and update large to be the current digit.
    - If the digit is greater than secLarge and not equal to large, update secLarge to be the current digit.
    
5. After iterating through the string, check if secLarge is still equal to its initial value (INT_MIN) or if it is equal to large. If either condition is true, there is no second-largest digit, and the function returns -1. Otherwise, return secLarge.


---


# Complexity

- **Time complexity: O(n),** where n is the length of the input string s. The algorithm iterates through each character once.


- **Space complexity: O(1),** as only a constant amount of extra space is used to store variables (large and secLarge).

---


# Code
```
class Solution {
public:
    int secondHighest(string s) 
    {
        int large=-1;
        int secLarge=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                if(s[i]-'0'>large)
                {
                    secLarge=large;
                    large=s[i]-'0';
                }
                else if(s[i]-'0'>secLarge && (s[i]-'0') !=large )
                    secLarge=s[i]-'0';
            }
        }
        if(large==secLarge || secLarge==INT_MIN)
            return -1;
        return secLarge;
    }
};
```

---

![discord-discordgifemoji.gif](https://assets.leetcode.com/users/images/782c9799-fbb7-460d-b83b-3efad469a786_1706203461.0265446.gif)


![fucking-die-redditor-stupid-cuck-funny-cat.gif](https://assets.leetcode.com/users/images/ad5ba98d-4fc1-4b0a-a8f8-4c72b6967c5a_1706203474.1942835.gif)


----

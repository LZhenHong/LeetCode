/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:
    Input: 121
    Output: true


Example 2:
    Input: -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


Example 3:
    Input: 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Follow up:
    Could you solve it without converting the integer to a string?
*/

int lengthOfInteger(int num) {
    int l = 0;
    do {
        ++l;
        num /= 10;
    } while (num > 0);
    return l;
}

int indexNumberOfInteger(int num, int idx) {
    int length = lengthOfInteger(num);
    if (idx > length || idx < 1) { // 不合法的序列
        return -1;
    }

    int res = 0;
    while (idx-- > 0) {
        res = num % 10;
        num /= 10;
    }
    return res;
}

bool isPalindrome(int x) {
    if (x < 0) { return false; }

    if (x < 10) { return true; }

    int length = lengthOfInteger(x);
    int i = 1, j = length;
    while (j > i) {
        int frist = indexNumberOfInteger(x, j);
        int last = indexNumberOfInteger(x, i);
        if (frist != last) {
            return false;
        } else {
            ++i;
            --j;
        }
    }
    return true;
}

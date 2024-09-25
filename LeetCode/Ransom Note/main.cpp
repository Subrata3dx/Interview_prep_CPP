#include<iostream>
using namespace std;
#include <string>

/*
# Intuition
As the **ransomNote** and **magazine** strings contain only alphabets, we can calculate the coount of each character in the strings by using hashmpas of size 26. After the calculatation, we can compare the count of each character in both strings. For each character (0-25), if the count in **magazine** is lower than **ransomNote**, we will return false, else we will return true.
# Approach


For an example, if **ransomNote** = "aabcccxz", and we create a hashmap, the hashmap will look like the following:
hashRansomNote[26] = {2,1,3,...,1,0,1}; //26 is the number of alphabets

Alphabet --- Count
a ------------ 2
b ------------ 1
c ------------ 3
d to w -------0
x ------------ 1
y ------------ 0
z ------------ 1


For the string **magazine** = "aaccxz", if we create another hashmap, the hashmap will look like the following:
hashMagazine[26] = {2,0,2,...,1,0,1};

Now, if we compare that whether hashRansomNote[i] > hashMagazine[i], for index i = 1, it will return false.

That is the result that we want.

# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

# Code
*/
class Solution {
public:
bool canConstruct(string ransomNote, string magazine)
{
        int sizeR = ransomNote.length();
        int sizeM = magazine.length();
        int hashR[26] = {0};
        int hashM[26] = {0};

        for (int i=0; i<sizeR; i++)
        {
            hashR[ransomNote[i]-'a']++;

        }

    for (int j=0; j<sizeM; j++)
        {

            hashM[magazine[j]-'a']++;
        }


        for(int i = 0; i<26;i++)

            if(hashR[i]>hashM[i])
            return false;

            return true;

    }
};

int main()
{

    Solution s;
    string ransomNote = "aa";
    string magazine = "abac";
    cout<<s.canConstruct(ransomNote, magazine);
    return 0;
}

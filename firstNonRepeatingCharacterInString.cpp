/*
    Problem : Given a string, find the first non-repeating character in it. For example, if the input string is “coding blocks”, then the output should be ‘d’ and if the input string is “coding”, then the output should be ‘c’.
*/
#include <iostream>
using namespace std;

char findNonRepeatingChar(string s)
{
    // calculating length
    int n = s.length();

    // Traversing 2 loops and check that the current character is repeating or not

    // outer loop
    for (int i = 0; i < n; ++i)
    {
        bool isRepeating = false;

        // Inner loop
        for (int j = 0; j < n; ++j)
        {
            // I am considering that the same index should not be considered. IF my flag will reamains false throughout the loop then we can say that no character repeating again in the string . I my flag will be true at any point then we can say that this character is repating and break the inner loop immediatly and check for next character.
            if (i != j && s[i] == s[j])
            {
                isRepeating = true;
                break;
            }
        }

        if (!isRepeating)
        {
            return s[i];
        }
    }

    return '\0';
}

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        char nonRepeatingChar = findNonRepeatingChar(str);

        nonRepeatingChar == '\0' ? cout << "-1" << endl : cout << nonRepeatingChar << endl;
    }

    return 0;
}
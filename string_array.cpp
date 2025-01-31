// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cin>>name;
//     cout<<name<<endl;
//     int leng=0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         leng++;
//     }

//      cout<<"length of the name is "<<leng<<endl;
//      for (int i = 0; i<leng/2; i++)
//      {
//         swap(name[i],name[leng-i-1]);
//      }
//      cout<<"after reverse:"<<name;

//      string s;
// }

// check pallindrome

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char arr[20];
//     cin >> arr;
//     int len = strlen(arr);
//     bool ans = 1;
//     for (int i = 0; i < len / 2; i++)
//     {
//         if (arr[i] != arr[len - 1 - i])
//         {
//             ans = 0;
//         }
//         break;
//     }
// if (ans)
// {
//     cout << "yes pallindrome";
// }
// else
// {
//     cout << "not a pallindrome";
// }
// }

// check pallindrome with skip symbols and numbers and uppercase to lower

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isAlpha(char c) {
//     return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
// }

// char toLowerCase(char c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c + 32; // Convert uppercase to lowercase
//     }
//     return c;
// }

// bool isPalindrome(const char arr[]) {
//     int len = strlen(arr);
//     int i = 0, j = len - 1;

//     while (i < j) {
//         // Skip non-alphabetic characters
//         while (i < j && !isAlpha(arr[i])) {
//             i++;
//         }
//         while (i < j && !isAlpha(arr[j])) {
//             j--;
//         }

//         // Convert to lowercase and compare
//         if (toLowerCase(arr[i]) != toLowerCase(arr[j])) {
//             return false;
//         }
//         i++;
//         j--;
//     }

//     return true;
// }

// int main() {
//     char arr[100];
//     cout << "Enter a string: ";
//     cin.getline(arr, 100);

//     if (isPalindrome(arr)) {
//         cout << "Yes, it's a palindrome." << endl;
//     } else {
//         cout << "Not a palindrome." << endl;
//     }

//     return 0;
// }

// reverse words in string

// #include <iostream>
// #include <string>
// using namespace std;

// string reverseWords(string sentence) {
//     int length = sentence.length();
//     string reversedSentence = "";
//     string word = "";

//     // Traverse the sentence from the end to the beginning
//     for (int i = length - 1; i >= 0; i--) {
//         // Append characters to word until a space is found
//         if (sentence[i] != ' ') {
//             word = sentence[i] + word;
//         } else {
//             // Add the word to the reversed sentence
//             reversedSentence += word + " ";
//             word = "";
//         }
//     }

//     // Add the last word
//     reversedSentence += word;

//     return reversedSentence;
// }

// int main() {
//     string sentence = "my name is John Doe";
//     string result = reverseWords(sentence);
//     cout << "Reversed by words: " << result << endl;  // Output: "Doe John is name my"
//     return 0;
// }

// reverse individual word

// #include <iostream>
// #include <string>
// using namespace std;

// // Function to reverse each word in the sentence
// string reverseEachWord(string sentence) {
//     string reversedSentence = "";
//     string word = "";

//     // Split the sentence into words and reverse each word
//     for (char ch : sentence) {
//         if (ch == ' ') {
//             // Reverse the current word
//             for (int i = word.length() - 1; i >= 0; i--) {
//                 reversedSentence += word[i];
//             }
//             reversedSentence += " ";  // Add a space after the word
//             word = "";
//         } else {
//             word += ch;
//         }
//     }

//     // Reverse the last word
//     for (int i = word.length() - 1; i >= 0; i--) {
//         reversedSentence += word[i];
//     }

//     return reversedSentence;
// }

// int main() {
//     string sentence = "my name is";
//     string result = reverseEachWord(sentence);
//     cout << "Each word reversed: " << result << endl;  // Output: "ym eman si"
//     return 0;
// }

// another aproach without using extra space
// #include <iostream>
// #include <string>
// using namespace std;

// void reverse(string &s, int start, int end) {
//     while (start < end) {
//         swap(s[start], s[end]);
//         start++;
//         end--;
//     }
// }

// string reverseEachWord(string sentence) {
//     int n = sentence.length();
//     int start = 0;

//     for (int end = 0; end < n; end++) {
//         if (sentence[end] == ' ' || end == n - 1) {
//             // If we reach a space or the end of the string, reverse the word
//             reverse(sentence, start, (end == n - 1) ? end : end - 1);
//             start = end + 1;  // Move start to the next word
//         }
//     }

//     return sentence;
// }

// int main() {
//     string sentence = "my name is";
//     string result = reverseEachWord(sentence);
//     cout << "Each word reversed: " << result << endl;  // Output: "ym eman si"
//     return 0;
// }

// return maximum occuring character in a string

// #include <iostream>
// using namespace std;
// int main(){

//     string s = "kartik";
//     int arr[26]={0};

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i]<='Z' && s[i]>='A')
//         {
//             s[i]=(s[i]-'A')+'a';
//         }

//         int k= s[i]-'a';
//         arr[k]+=1;

//     }
//         int maxi=INT32_MIN;
//         int index=0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] > maxi) {
//              maxi = arr[i]; index = i;
//         }
//     }

//     cout<< char('a'+ index)  << ":is the max occuring character:"<<maxi<<"times";

// }

// check permutation in string

#include <iostream>
#include <string>
using namespace std;

bool arraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s = "ab";
    string p = "a";

    int c1[26] = {0};
    int c2[26] = {0};
    int i = 0;

    // Initialize c1 and c2 for the first window
    for (; i < p.length(); i++) {
        int index = p[i] - 'a';
        c1[index] += 1;
        int index2 = s[i] - 'a';
        c2[index2] += 1;
    }

    // Check if the first window contains a permutation
    if (arraysEqual(c1, c2, 26)) {
        cout << "Permutation is present" << endl;
        return 0;
    }

    int flag = 0;
    // Sliding window to check other parts of the string
    for (int i = p.length(); i < s.length(); i++) {
        int index2 = s[i] - 'a';
        c2[index2] += 1;

        int index2_old = s[i - p.length()] - 'a';
        c2[index2_old] -= 1;

        if (arraysEqual(c1, c2, 26)) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "Permutation is present" << endl;
    } else {
        cout << "Permutation is not present" << endl;
    }

    return 0;
}

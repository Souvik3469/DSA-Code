// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     char arr[n + 1];
//     cin.getline(arr, n);
//     // cin.ignore();
//     int i = 0;
//     int currlen = 0, maxlen = 0;
//     int st = 0, maxst = 0;
//     while (1)
//     {
//         if (arr[i] == ' ' || arr[i] == '\0')
//         {
//             if (currlen > maxlen)
//             {
//                 maxlen = currlen;
//                 maxst = st;
//             }
//             currlen = 0;
//             st = i + 1;
//         }
//         else
//             currlen++;
//         if (arr[i] == '\0')
//             break;
//         i++;
//     }
//     cout << maxlen << endl;
//     for (int i = 0; i < maxlen; i++)
//     {
//         cout << arr[i + maxst];
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
// function to find longest word
int word_length(string str)
{
    int len = str.length();
    int temp = 0;
    int newlen = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
            newlen++;
        else
        {
            temp = max(temp, newlen);
            newlen = 0;
        }
    }
    return max(temp, newlen);
}
int main()
{
    string str = "do or die";
    cout << "maximum length of a word is : " << word_length(str);
    return 0;
}
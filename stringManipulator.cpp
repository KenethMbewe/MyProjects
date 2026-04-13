#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to reverse the string
string Reverse(string text)
{
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }
    return reversed;
}

// Function for count vowels
int countVowels(string text)
{
    int count = 0;

    for (int i = 0; i < text.length(); i++)
    {
        char c = tolower(text[i]);

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u')
        {
            count++;
        }
    }

    return count;
}

// Function for count words
int countWords(string text)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && !inWord)
        {
            inWord = true;
            count++;
        }
        else if (text[i] == ' ')
        {
            inWord = false;
        }
    }

    return count;
}

// Function to capitalize second letter of each word
string capitalizeSecondLetter(string text)
{
    string result = "";
    bool newWord = true;
    int letterCount = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            newWord = true;
            letterCount = 0;
            result += text[i];
        }
        else
        {
            letterCount++;

            if (newWord == true && letterCount == 2)
            {
                result += toupper(text[i]);
            }
            else
            {
                result += text[i];
            }

            newWord = false;
        }
    }

    return result;
}

int main()
{
    string fileData;

     //Openin the file
    ifstream file("input.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read entire file into string
    getline(file, fileData);
    file.close();

    cout << "File Content: " << fileData << endl;

    // Vowel counting
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // count the number of words
    cout << "Number of words: " << countWords(fileData) << endl;

    // Reverse string
    cout << "Reversed text: " << Reverse(fileData) << endl;

    // Capitalize second letter of each word
    cout << "Second letters capitalized: "
         << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
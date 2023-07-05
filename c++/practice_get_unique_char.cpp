#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>

std::string extractWordsFromMultilineText(const std::string& multilineText);
char getFirstUniqeSymbolToArray(const std::string& multilineText);
char findFirstUniqueCharacter(const std::string& multilineText);

int main() {
    std::string multilineText = "";
    std::string bufferLineText = "";
    std::cout << "Pleace enter text:\n";

    while (std::getline(std::cin, bufferLineText)) {
        if (bufferLineText == "\0") {
            break;
        }
        multilineText += bufferLineText + '\n';
    }

    std::string extractedWords = extractWordsFromMultilineText(multilineText);
    char uniqueChar = findFirstUniqueCharacter(extractedWords);
    
    if (uniqueChar != '\0') {
        std::cout << "First unique simbol: " << uniqueChar << std::endl;
    } else {
        std::cout << "There are no unique characters in a multiline" << std::endl;
    }

    return 0;
}

std::string extractWordsFromMultilineText(const std::string& multilineText) {
    std::string result;
    std::string word;

    for (char c : multilineText) {
        if (std::isalpha(c) || std::isspace(c)) {
            if (std::isalpha(c)) {
                word += c;
            } else if (!word.empty()) {
                result += word + ' ';
                word.clear();
            }
        }
    }
    //Set strint to lower case if in necessary
    //transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}

char findFirstUniqueCharacter(const std::string& multilineText) {
    std::vector<char> uniqueCharacters;

    std::istringstream iss(multilineText);
    std::string word;

    while (iss >> word) {
        std::unordered_map<char, int> charCount;

        // Counting the number of occurrences of each character in a word
        for (char c : word) {
            charCount[c]++;
        }

        // Search for the first unique character in a word
        for (char c : word) {
            if (charCount[c] == 1) {
                uniqueCharacters.push_back(c);
                break;
            }
        }
    }

    // Search for the first unique character in an array
    for (char c : uniqueCharacters) {
        if (std::count(uniqueCharacters.begin(), uniqueCharacters.end(), c) == 1) {
            return c;
        }
    }

    // If the unique symbol is not found, we return '\0'
    return '\0';
}
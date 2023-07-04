#include <iostream>
#include <string>
#include <bits/stdc++.h>

std::string extractWordsFromMultilineText(const std::string& multilineText);
char getFirstUniqeSymbolToArray(const std::string& multilineText);



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
    std::cout << extractedWords << std::endl;

    std::cout << extractedWords.length() << std::endl;
    getFirstUniqeSymbolToArray(extractedWords);

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

    if (!word.empty()) {
        result += word + ' ';
    }
  
    //set strint to lower case
    transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}

char getFirstUniqeSymbolToArray(const std::string& multilineText){
    char ff;
    return ff; 
}


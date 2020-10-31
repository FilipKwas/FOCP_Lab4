#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>


int main() {
 
    std::map<std::string, std::vector<int>> dictionary;
       
    std::ifstream input("TextFil3.txt");

        if (input.is_open()) {

            std::string word;
            int line_number = 0;

            while (getline(input, word)) {
                if (dictionary.find(word) == dictionary.end()) {
                    dictionary.insert({ word, {} });
                }
                else {
                    dictionary[word].push_back(line_number);
                }
                ++line_number;
            }
        }
    
        std::string tmp;
        
        std::cout << "Choose a word: " << std::endl;
        std::cin >> tmp;

        std::cout << "The word " << tmp << " appears in lines: " << std::endl;

        for (int i = 0; i < dictionary[tmp].size(); i++) {
            std::cout << dictionary[tmp][i] << std::endl;
        }

        return 0;
    }
#pragma once
#include <string>
#include <vector>

const std::string textFileExtension = ".txt";

std::string fileName;

int wordsCount;
int symbolsCount;
int userSymbolsCount;

// массив строк, в котором каждый элемент, начиная с [1], целое слово 
std::vector<std::string> wordsArray;
// массив строк, хранящий слова, введённые пользователем
std::vector<std::string> userWordsArray;
// для рандомного вывода слов
std::vector<int> randomIndexArray;

bool randomMode;
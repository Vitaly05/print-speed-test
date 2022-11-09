#pragma once
#include <string>
#include <vector>

const std::string textFileExtension = ".txt";

std::string fileName;

int wordsCount;
int symbolsCount;
int userSymbolsCount;

// ������ �����, � ������� ������ �������, ������� � [1], ����� ����� 
std::vector<std::string> wordsArray;
// ������ �����, �������� �����, �������� �������������
std::vector<std::string> userWordsArray;
// ��� ���������� ������ ����
std::vector<int> randomIndexArray;

bool randomMode;
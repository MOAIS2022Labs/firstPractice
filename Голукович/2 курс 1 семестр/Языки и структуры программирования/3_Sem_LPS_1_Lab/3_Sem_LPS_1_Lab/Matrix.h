#pragma once

#include <iostream>
#include <functional>
#include <fstream>
#include <Windows.h>

void read_and_check(int& pick, const short flag, const int a, const int b);

int** fill_Matrix_from_console(int& n, int& m);

int** fill_Matrix_from_file(int& n, int& m);

void print_Matrix(int** matrix, const int n, const int m);

//int** transpose_Matrix(int** matrix, int&n, int&m);

void delete_Matrix(int** matrix, const int m);
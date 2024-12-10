#!/bin/bash	

set CPP_FILES="menu.cpp menu_functions.cpp"
set EXE=bubble_sort.exe

if exist %EXE% del %EXE%

clang++ "%CPP_FILES%" -o %EXE%

./build.sh

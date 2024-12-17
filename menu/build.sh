#!/bin/bash	
CPP_FILES="menu.cpp menu_functions.cpp"
EXE="menu"

if exist %EXE% del %EXE%

clang++ "%CPP_FILES%" -o %EXE%



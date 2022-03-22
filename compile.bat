@echo off
set /p file="Name: "
g++ -pipe -O2 -std=c++17  %file%.cpp -o %file%.exe -lm && %file%.exe



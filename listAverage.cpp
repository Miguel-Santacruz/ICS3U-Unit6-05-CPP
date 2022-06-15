// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Jun 2022
// This program finds the class' average

#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <string>


int AverageOfList(std::list<int> listOfMarks) {
    // this function calculates the average
    int total = 0;
    int sizeOfList = listOfMarks.size();
    float average;

    for (int loopCounter = 0; loopCounter < sizeOfList; loopCounter++) {
        total += listOfMarks.front();
        listOfMarks.pop_front();
    }
    average = total / sizeOfList;

    return average;
}


main() {
    // this function checks the input and places it in a list

    std::list<int> listOfMarks;
    std::string markAsString;
    int mark;
    int answer;

    // input & output
    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << std::endl;
    while (true) {
        std::cout << "What is your mark(as a %): ";
        std::cin >> markAsString;
        try {
            mark = stoi(markAsString);
            if (mark == -1) {
                break;
            } else if (mark <= 0) {
                std::cout << "Invalid input. Continue please." << std::endl;
            } else {
                listOfMarks.push_back(mark);
            }
        } catch (std::invalid_argument) {
            std::cout << "invalid input. Continue please." << std::endl;
        }
    }
    std::cout << std::endl;

    answer = AverageOfList(listOfMarks);
    std::cout << "The average is " << answer << "%" << std::endl;
}

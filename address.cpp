// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 13th, 2022
// This program asks the user several questions regarding their address. It
// then formats it and displays it to the user.
#include <iostream>
#include <iomanip>
#include <string>

std::string formatAddress(std::string name, std::string question, std::string
                          numStreet, std::string nameStreet, std::string city,
                          std::string province, std::string postal,
                          std::string aptNum = "") {
    // declare string
    std::string address = name;
    // handles the case if user lives in an apartment or not, then it
    // formats it.
    if (aptNum != "") {
        address = address + "\n" + aptNum + "-" + numStreet + " " + nameStreet +
                  "\n" + city + " " + province + " " + postal;
    } else {
        address = address + "\n" + numStreet + " " + nameStreet + " \n"
                  + city + " " + province + " " + postal;
    }

    // return function
    return address;
}


int main() {
    // declare variable & string
    std::string userName, questionAtp, aptNumUser, userNumStreet;
    std::string userNameStreet, userCity, userProvince, userPostal;
    std::string fullAddress;

    aptNumUser == "";

    std::cout << "This program formats a Canadian mailing address";
    std::cout << std::endl;
    std::cout << std::endl;

    // gets user input
    std::cout << "Enter your full name: ";
    getline(std::cin, userName);
    std::cout << "Do you live in an apartment (y/n): ";
    getline(std::cin, questionAtp);

    // checks to see if user lives in an apartment and gathers user input to
    // format it to an address.
    if (questionAtp == "y") {
        std::cout << "Enter your apartment number: ";
        getline(std::cin, aptNumUser);
    }

    std::cout << "Enter your street number: ";
    getline(std::cin, userNumStreet);

    std::cout << "Enter you street name AND "
                 "type (Main St., Flower Cres., etc): ";
    getline(std::cin, userNameStreet);

    std::cout << "Enter your city: ";
    getline(std::cin, userCity);

    std::cout << "Enter your province (as an abbreviation, i.e ON, AB, etc): ";
    getline(std::cin, userProvince);

    std::cout << "Enter your postal code (A1B 2C3): ";
    getline(std::cin, userPostal);

    // assigns a variable to function call, giving it a returned value.
    if (aptNumUser != "") {
        fullAddress = formatAddress(userName, questionAtp, userNumStreet,
                                    userNameStreet, userCity, userProvince,
                                    userPostal, aptNumUser);

    } else {
        fullAddress = formatAddress(userName, questionAtp, userNumStreet,
                                    userNameStreet, userCity, userProvince,
                                    userPostal);
    }

    // displays the result to user, properly formatted.
    std::cout << std::endl;
    std::cout << "Your Canadian mail address is: " << std::endl;
    std::cout << fullAddress << std::endl;
}

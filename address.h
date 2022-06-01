//
// Created by Максим Уланов on 02.05.2022.
//
#pragma once
#include <iostream>

class address {
public:
    std::string country;
    std::string city;
    std::string house;

    friend class letter;

    address() {
        country = "country";
        city = "city";
        house = "house";
    }

    friend std::string full_address(address Obj);
    address& operator = (const address &equal);
};
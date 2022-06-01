//
// Created by Максим Уланов on 26.04.2022.
//
#pragma once
#include <iostream>

class fio {
public:
    std::string surname_recipient;
    std::string name_recipient;
    std::string patronymic_recipient;

    friend class letter;

    fio() {
        surname_recipient = "surname";
        name_recipient = "name";
        patronymic_recipient = "patronymic";
    }

    friend std::string full_fio(fio Obj);
    fio& operator = (const fio &equal);
};
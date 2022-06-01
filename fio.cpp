//
// Created by Максим Уланов on 31.05.2022.
//
#include "fio.h"

fio &fio::operator=(const fio &equal) {
    if (this == &equal)
        return *this;
    surname_recipient=equal.surname_recipient;
    name_recipient=equal.name_recipient;
    patronymic_recipient=equal.patronymic_recipient;
    return *this;
}

std::string full_fio(fio Obj) {
    std::string fio = Obj.surname_recipient + " " + Obj.name_recipient + " " + Obj.patronymic_recipient;
    return fio;
}
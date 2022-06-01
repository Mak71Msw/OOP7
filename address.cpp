//
// Created by Максим Уланов on 03.05.2022.
//

#include "address.h"
#include <iostream>

address &address::operator=(const address &equal) {
    if (this == &equal)
        return *this;
    country=equal.country;
    city=equal.city;
    house=equal.house;
    return *this;
}
std::string full_address(address Obj) {
    std::string address = "Country:" +Obj.country+ " " +
                          "City:" +Obj.city+ " " + "House:" +Obj.house;
    return address;
}
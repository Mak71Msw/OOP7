//
// Created by Максим Уланов on 26.04.2022.
//
#pragma once

#include <deque>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "StreamTable.h"
#include "fio.h"
#include "address.h"

class fio;
class address;

class letter
{
public:
    double price;
    fio fio_recipient;
    address recipient;
    address sender;

    static int count;

    letter()
    {
        count=0;
        price = 0.0;
    }

    letter& operator = (const letter &equal);
    friend int Delete_end(std::deque<letter> Myletters, int amount);
    friend void SearchRecipient(std::deque<letter> Myletters, int amount);
    friend void SortedPrice(std::deque<letter> Myletters);
    friend void Save(std::deque<letter> Myletters, std::string filename);
    friend void Read(std::deque<letter> &Myletters, int amount, std::string filename);

    friend bool operator>(const letter &s_1,const letter &s_2);
    friend bool operator<=(const letter &s_1,const letter &s_2);
    friend bool operator<(const letter &s_1,const letter &s_2);
    friend bool operator>=(const letter &s_1,const letter &s_2);
};
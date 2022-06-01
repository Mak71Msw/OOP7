//
// Created by Максим Уланов on 26.04.2022.
//
#pragma once

#include "letter.h"
#include <iostream>

class letter;
class fio;
class address;

class letter_box {

public:
    std::deque<letter> MyARRAY;
    int the_longest_Address1 = 55;
    int the_longest_Address2 = 55;
    int the_longest_FIO = 35;


    letter_box()
    {
        MyARRAY;
    }

    double CheckPrice()
    {
        while (true)
        {
            std::cout << "Стоимость письма: ";
            double a;
            std::cin >> a;

            if (std::cin.fail() or (a < 0))
            {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
            }
            else
                return a;
        }
    }

    std::string CheckCountry()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Страна: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
                   or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
                   or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
            }

        }while(str[i]);

        return str;
    }

    std::string CheckCity()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Город: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
                   or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
                   or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
            }

        }while(str[i]);

        return str;
    }

    std::string CheckHouse()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Дом/Корпус: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':')
                   or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "У номера дома нет странных символов!!!" << std::endl << "Повторите ввод!!!" << std::endl;
            }

        }while(str[i]);

        return str;
    }

    std::string CheckSurname()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Фамилия: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
                   or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
                   or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
            }

        }while(str[i]);

        return str;
    }

    std::string CheckName()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Имя: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
                   or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
                   or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
            }

        }while(str[i]);

        return str;
    }

    std::string CheckPatronymic()
    {
        int i;
        std::string str;
        do{
            std::cout<<"Отчество: ";
            std::cin>>str;

            for(i=0;str[i];i++)
            {
                if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
                   or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
                   or (str[i]<='~' and str[i]>='{'))
                    break;
            }

            if(str[i]) {
                std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
            }
        }while(str[i]);

        return str;
    }

    void AddElement() {


        bool exit=false;
        while(!exit)
        {
            //
            std::cout << "Menu: \n(1) - Add to the beginning\n(2) - Add to the end\n(3) - Exit\n";
            //
            int select=0;
            std::cout << ("Select function:\n");
            scanf("%d",&select);
            switch(select)
            {
                case 1:{
                    letter::count +=1;
                    letter letter;
                    std::cout << "Адрес получателя" << std::endl;
                    letter.recipient.country = CheckCountry();
                    letter.recipient.city = CheckCity();
                    letter.recipient.house = CheckHouse();

                    std::cout << "Адрес отправителя" << std::endl;
                    letter.sender.country = CheckCountry();
                    letter.sender.city = CheckCity();
                    letter.sender.house = CheckHouse();

                    std::cout << "ФИО получателя" << std::endl;
                    letter.fio_recipient.surname_recipient = CheckSurname();
                    letter.fio_recipient.name_recipient = CheckName();
                    letter.fio_recipient.patronymic_recipient = CheckPatronymic();

                    letter.price = CheckPrice() ;
                    std::cout << std::endl;

                    MyARRAY.push_front(letter);
                    break;
                }
                case 2:{
                    letter::count +=1;
                    letter letter;
                    std::cout << "Адрес получателя" << std::endl;
                    letter.recipient.country = CheckCountry();
                    letter.recipient.city = CheckCity();
                    letter.recipient.house = CheckHouse();

                    std::cout << "Адрес отправителя" << std::endl;
                    letter.sender.country = CheckCountry();
                    letter.sender.city = CheckCity();
                    letter.sender.house = CheckHouse();

                    std::cout << "ФИО получателя" << std::endl;
                    letter.fio_recipient.surname_recipient = CheckSurname();
                    letter.fio_recipient.name_recipient = CheckName();
                    letter.fio_recipient.patronymic_recipient = CheckPatronymic();

                    letter.price = CheckPrice() ;
                    std::cout << std::endl;

                    MyARRAY.push_back(letter);
                    break;
                }
                case 3:{
                    exit=true;
                    break;
                }
                default:{
                    std::cout<<("Invalid function number!");

                    //
                    }

                }

            }
            letter::count++;
        }


    void Output() const
    {
        StreamTable st(std::cout);
        st.AddCol(the_longest_Address1+2);
        st.AddCol(the_longest_Address2+2);
        st.AddCol(the_longest_FIO+2);
        st.AddCol(10);

        st.MakeBorderExt(true);
        st.SetDelimRow(true, '-');
        st.SetDelimCol(true, '|');

        st << "Address Recipient" << "Address Sender" << "FIO Recipient" << "Price";
        for (auto iter = MyARRAY.begin(); iter != MyARRAY.end(); iter++)
        {
            st << full_address(iter->recipient) << full_address(iter->sender)
            << full_fio(iter->fio_recipient) << iter->price;
        }
    }
};
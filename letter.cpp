//
// Created by Максим Уланов on 26.04.2022.
//

#include "letter.h"

int the_longest_Address1 = 55;
int the_longest_Address2 = 55;
int the_longest_FIO = 35;

letter &letter::operator=(const letter &equal) {
    if (this == &equal)
        return *this;

    recipient.country=equal.recipient.country;
    recipient.city=equal.recipient.city;
    recipient.house=equal.recipient.house;

    sender.country=equal.sender.country;
    sender.city=equal.sender.city;
    sender.house=equal.sender.house;

    fio_recipient.surname_recipient=equal.fio_recipient.surname_recipient;
    fio_recipient.name_recipient=equal.fio_recipient.name_recipient;
    fio_recipient.patronymic_recipient=equal.fio_recipient.patronymic_recipient;

    price=equal.price;

    return *this;
}

//double CheckPrice()
//{
//    while (true)
//    {
//        std::cout << "Стоимость письма: ";
//        double a;
//        std::cin >> a;
//
//        if (std::cin.fail() or (a < 0))
//        {
//            std::cin.clear();
//            std::cin.ignore(32767,'\n');
//        }
//        else
//            return a;
//    }
//}
//
//std::string CheckCountry()
//{
//    int i;
//    std::string str;
//    do{
//        std::cout<<"Страна: ";
//        std::cin>>str;
//
//        for(i=0;str[i];i++)
//        {
//            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
//               or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
//               or (str[i]<='~' and str[i]>='{'))
//                break;
//        }
//
//        if(str[i]) {
//            std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
//        }
//
//    }while(str[i]);
//
//    return str;
//}
//
//std::string CheckCity()
//{
//    int i;
//    std::string str;
//    do{
//        std::cout<<"Город: ";
//        std::cin>>str;
//
//        for(i=0;str[i];i++)
//        {
//            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
//               or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
//               or (str[i]<='~' and str[i]>='{'))
//                break;
//        }
//
//        if(str[i]) {
//            std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
//        }
//
//    }while(str[i]);
//
//    return str;
//}
//
//std::string CheckHouse()
//{
//    int i;
//    std::string str;
//    do{
//        std::cout<<"Дом/Корпус: ";
//        std::cin>>str;
//
//        for(i=0;str[i];i++)
//        {
//            if((str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':')
//               or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
//                break;
//        }
//
//        if(str[i]) {
//            std::cout << "У номера дома нет странных символов!!!" << std::endl << "Повторите ввод!!!" << std::endl;
//        }
//
//    }while(str[i]);
//
//    return str;
//}
//
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
//
//std::string CheckName()
//{
//    int i;
//    std::string str;
//    do{
//        std::cout<<"Имя: ";
//        std::cin>>str;
//
//        for(i=0;str[i];i++)
//        {
//            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
//               or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
//               or (str[i]<='~' and str[i]>='{'))
//                break;
//        }
//
//        if(str[i]) {
//            std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
//        }
//
//    }while(str[i]);
//
//    return str;
//}
//
//std::string CheckPatronymic()
//{
//    int i;
//    std::string str;
//    do{
//        std::cout<<"Отчество: ";
//        std::cin>>str;
//
//        for(i=0;str[i];i++)
//        {
//            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!')
//               or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[')
//               or (str[i]<='~' and str[i]>='{'))
//                break;
//        }
//
//        if(str[i]) {
//            std::cout << "Нужно вводить буквы!" << std::endl << "Повторите ввод!!!" << std::endl;
//        }
//    }while(str[i]);
//
//    return str;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//void Input(letter* Obj,int amount)
//{
//    std::cout << "Адрес получателя" << std::endl;
//    Obj[amount].recipient.country = CheckCountry();
//    Obj[amount].recipient.city = CheckCity();
//    Obj[amount].recipient.house = CheckHouse();
//
//    std::cout << "Адрес отправителя" << std::endl;
//    Obj[amount].sender.country = CheckCountry();
//    Obj[amount].sender.city = CheckCity();
//    Obj[amount].sender.house = CheckHouse();
//
//    std::cout << "ФИО получателя" << std::endl;
//    Obj[amount].fio_recipient.surname_recipient = CheckSurname();
//    Obj[amount].fio_recipient.name_recipient = CheckName();
//    Obj[amount].fio_recipient.patronymic_recipient = CheckPatronymic();
//
//    Obj[amount].price = CheckPrice() ;
//    std::cout << std::endl;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//bool operator== (letter &c1, letter &c2)
//{
//    return (c1.fio_recipient.GetSurname() == c2.fio_recipient.GetSurname() and
//            c1.fio_recipient.GetName() == c2.fio_recipient.GetName() and
//            c1.fio_recipient.GetPatronymic() == c2.fio_recipient.GetPatronymic());
//}

void SearchRecipient(std::deque<letter> Myletters, int amount)
{
    std::string k = CheckSurname();

    StreamTable st(std::cout);
    st.AddCol(the_longest_Address1+2);
    st.AddCol(the_longest_Address2+2);
    st.AddCol(the_longest_FIO+2);
    st.AddCol(10);

    st.MakeBorderExt(true);
    st.SetDelimRow(true, '-');
    st.SetDelimCol(true, '|');

    st << "Address Recipient" << "Address Sender" << "FIO Recipient" << "Price";
    bool no_any = true;

    for (auto iter = Myletters.begin(); iter != Myletters.end(); iter++)
    {
        if (iter->fio_recipient.surname_recipient == k)
        {
            st << full_address(iter->recipient) << full_address(iter->sender)
            << full_fio(iter->fio_recipient) << iter->price;
            no_any= false;
        }
    }
    if (no_any)
    {
        std::cout<<"Таких кентов тут нет"<<std::endl<<std::endl;
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int Delete_end(std::deque<letter> Myletters, int amount)
{
    Myletters.pop_back();
    amount--;

    StreamTable st(std::cout);
    st.AddCol(the_longest_Address1+2);
    st.AddCol(the_longest_Address2+2);
    st.AddCol(the_longest_FIO+2);
    st.AddCol(10);

    st.MakeBorderExt(true);
    st.SetDelimRow(true, '-');
    st.SetDelimCol(true, '|');

    st << "Address Recipient" << "Address Sender" << "FIO Recipient" << "Price";

    for (auto iter = Myletters.begin(); iter != Myletters.end(); iter++)
    {
        st << full_address(iter->recipient) << full_address(iter->sender)
           << full_fio(iter->fio_recipient) << iter->price;
    }
    return amount;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
bool operator>(const letter &s_1,const letter &s_2)
{
    return s_1.price > s_2.price;
}
bool operator<=(const letter &s_1,const letter &s_2)
{
    return s_1.price <= s_2.price;
}
bool operator<(const letter &s_1,const letter &s_2)
{
    return s_1.price < s_2.price;
}
bool operator>=(const letter &s_1,const letter &s_2)
{
    return s_1.price >= s_2.price;
}

void SortedPrice(std::deque<letter> Myletters)
{
//    for (int i = 0; i < amount; i++)
//    {
//        for (int j = amount - 1; j > i; j--)
//        {
//            if (Obj[j].price < Obj[j - 1].price)
//            {
//                std::swap(Obj[j], Obj[j-1]);
//            }
//        }
//    }

    sort(Myletters.begin(),Myletters.end());

    StreamTable st(std::cout);
    st.AddCol(the_longest_Address1+2);
    st.AddCol(the_longest_Address2+2);
    st.AddCol(the_longest_FIO+2);
    st.AddCol(10);

    st.MakeBorderExt(true);
    st.SetDelimRow(true, '-');
    st.SetDelimCol(true, '|');

    st << "Address Recipient" << "Address Sender" << "FIO Recipient" << "Price";

    for (auto iter = Myletters.begin(); iter != Myletters.end(); iter++)
        {
            st << full_address(iter->recipient) << full_address(iter->sender)
               << full_fio(iter->fio_recipient) << iter->price;
        }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void Save(std::deque<letter> Myletters, std::string filename)
{
    std::ofstream record(filename, std::ios::out);

    if (record)
    {
        for (auto iter = Myletters.begin(); iter != Myletters.end(); iter++)
        {
            record << iter->recipient.country<<" "<< iter->recipient.city<<" "<< iter->recipient.house <<" "
            <<iter->sender.country<<" "<< iter->sender.city<<" "<< iter->sender.house <<" "
            <<iter->fio_recipient.surname_recipient<<" "<<iter->fio_recipient.name_recipient<<" "
            <<iter->fio_recipient.patronymic_recipient<<" "<<iter->price<<std::endl;
        }
    }

    else
    {
        std::cout<<"Че-то не записывается(("<<std::endl;
    }
    record.close();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void Read(std::deque<letter> &Myletters, int amount, std::string filename)
{
    std::ifstream myfile(filename);
    int count=0;
    char *str = new char [1024];
    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            myfile.getline(str, 1024, '\n');
            count++;
        }
        delete[] str;
    }

    amount=count-1;
    myfile.close();

    Myletters.resize(amount);

    std::ifstream reading(filename);
    if (reading)
    {
        for (auto iter = Myletters.begin(); iter != Myletters.end(); iter++)
        {
            std::string country_recipient;
            std::string city_recipient;
            std::string house_recipient;
            std::string country_sender;
            std::string city_sender;
            std::string house_sender;
            std::string surname;
            std::string name;
            std::string patronymic;
            double price;

            reading >> country_recipient >> city_recipient >> house_recipient
            >> country_sender >> city_sender >> house_sender
            >> surname >> name >> patronymic >> price;

            iter->recipient.country = country_recipient;
            iter->recipient.city = city_recipient;
            iter->recipient.house = house_recipient;
            iter->sender.country = country_sender;
            iter->sender.city = city_sender;
            iter->sender.house = house_sender;
            iter->fio_recipient.surname_recipient = surname;
            iter->fio_recipient.name_recipient = name;
            iter->fio_recipient.patronymic_recipient = patronymic;
            iter->price = price;
        }
    }
    myfile.close();
    letter::count=amount;
    std::cout<<"Количество писем: "<<letter::count<<"\n";
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
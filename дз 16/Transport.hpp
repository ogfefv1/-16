//
//  Transport.hpp
//  дз 16
//
//  Created by Егор Джемлиханов on 28.10.2024.
//

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Transport
{
protected:
    string imia;
    double skorost;
    int emkost;

public:
    Transport(string n, double s, int c) : imia(n), skorost(s), emkost(c) {}

    void Output() const
    {
        cout << "Название транспорта: " << imia << "\nСкорость: " << skorost << "\nЕмкость: " << emkost << endl;
    }

    void Input()
    {
        cout << "напишите название транспорта: "; cin >> skorost;
        cout << "напишите скорость: "; cin >> skorost;
        cout << "напишите емкость: "; cin >> emkost;
    }
};

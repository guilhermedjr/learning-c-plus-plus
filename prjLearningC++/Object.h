#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "clsDatabase.h"
#include <future>
#include "../../Downloads/MySql/mysqlheaders/mysqlheaders/mysql.h"

using namespace std;

class Object : public Database
{
    
    private: MYSQL_RES Data;

    public: Object() : Database() {}

    public: string get()
    {
        if (this->DQLCommand("SELECT * from cliente", &Data))
        {
           
        }
    }
};


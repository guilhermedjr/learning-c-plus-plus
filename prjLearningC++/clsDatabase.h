#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "clsDbConnectionConfigs.h"
#include <Windows.h>
#include "../../Downloads/MySql/mysqlheaders/mysqlheaders/mysql.h"

using namespace std; 

	/*static char Server = "localhost";
	static char User = "root";
	static char Password = "root";
	static char Schema = "reachup";*/

class Database
{
    private: MYSQL connection;

    public: Database() {}

    public: bool connect() 
	{
		connection = *mysql_init(NULL);

		return mysql_real_connect(&connection, clsDbConnectionConfigs.Server, 
			clsDbConnectionConfigs.User, clsDbConnectionConfigs.Password, clsDbConnectionConfigs.Schema, 0, NULL, 0);
	}

    public: void disconnect() 
	{
		mysql_close(&connection);
	}

    public: bool DMLCommand(char SQLString) 
	{
		int hasError = mysql_query(&connection, SQLString);

		if (hasError)
		{
		   disconnect();
		   return false;
	    }
		disconnect();
		return true;
	}

    public: bool DMLCommand(char procedure, string parameters[15][2]) {}

    public: bool DQLCommand(char SQLString, MYSQL_RES &Data) 
	{
		MYSQL_ROW row;

		if (connect())
		{
			int hasError = mysql_query(&connection, SQLString);

			if (hasError)
			{
				return false;
			}

			Data = *mysql_store_result(&connection);
			return true;
		}
    }
    public: bool DQLCommand(char procedure, MYSQL_RES &Data, string parameters[15][2]) {}
};









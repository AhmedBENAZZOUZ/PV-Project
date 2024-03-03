#pragma once
#include <QtSql>

class DatabaseManager
{
public:
    static DatabaseManager& instance();
    QSqlDatabase& database();

private:
    DatabaseManager();
    ~DatabaseManager();
    QSqlDatabase m_database;
};

#include <iostream>

// import the SQL Library(Header) 
#include <sqlite3.h>


using namespace std;

int main() {

    sqlite3* db;
    char* errorMessage = 0;

    // Open an SQL Lite Database file or create one if it doesn't exist
    int rc = sqlite3_open("mydatabase.db", &db);

    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return (0);
    } else {
        cout << "Opened database successfully" << endl;
    }


    // Create an SQL Query (declarative) to create a table
    const char* createTableSQL = "CREATE TABLE COMPANY("
                        "ID INT PRIMARY KEY NOT NULL,"
                        "NAME TEXT NOT NULL,"
                        "AGE INT NOT NULL,"
                        "ADDRESS CHAR(50),"
                        "SALARY REAL);";


    // Execute the SQL query
    rc = sqlite3_exec(db, createTableSQL, 0, 0, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    } else {
        std::cout << "Table created successfully" << std::endl;
    }
    // Close the database
    sqlite3_close(db);
    
    return 0;
}
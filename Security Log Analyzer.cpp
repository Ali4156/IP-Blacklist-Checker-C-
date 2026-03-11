#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    int failedAttempts = 0;
    int successfulLogins = 0;

    ifstream file("security_log.txt");

    if (!file)
    {
        cout << "Log file not found.\n";
        return 0;
    }

    while (getline(file, line))
    {
        if (line.find("FAILED LOGIN") != string::npos)
        {
            failedAttempts++;
        }
        else if (line.find("SUCCESS LOGIN") != string::npos)
        {
            successfulLogins++;
        }
    }

    file.close();

    cout << "Security Log Analysis\n";
    cout << "---------------------\n";
    cout << "Successful Logins: " << successfulLogins << endl;
    cout << "Failed Login Attempts: " << failedAttempts << endl;

    if (failedAttempts > 5)
    {
        cout << "Warning: Possible brute force attack detected!\n";
    }

    return 0;
}
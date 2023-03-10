// Assign08-Payroll
//

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/**
 * returns the index of the found payrate corresponding to the payCod3
 * returns -1 if the payCode was not found
 */
int simpleSearch(const string payCode, string payCodeLookup[],
    const int ARRAY_SIZE) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (payCodeLookup[i] == payCode) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAX_ARRAY_SIZE = 25;
    double totalPayroll = 0.00;

    int index = 0;
    string payCodes[MAX_ARRAY_SIZE];
    double payRates[MAX_ARRAY_SIZE];
    double totalEmployeePay = 0.00;
    int id;
    string lastname;
    string firstname;
    string ssnumber;
    string payGrade;
    double hoursWorked;
    double currHourlyPayRate = 0.00;
    double employeePay = 0.00;
    int numRecords = 0;
    int indexOfFoundCode = 0;

    ifstream hourlypay;
    ifstream timesheet;

    hourlypay.open("HourlyPay.txt");
    if (!timesheet || !hourlypay) {
        cout << endl << "Error opening input file" << endl << endl;
        return -1;
    }

    while (index < MAX_ARRAY_SIZE) {
        hourlypay >> payCodes[index] >> payRates[index];
        index++;
    }
    hourlypay.close();

    timesheet.open("TimeSheet.txt");
    while (timesheet >> id >> lastname >> firstname >> ssnumber >> payGrade >>
        hoursWorked) {
        numRecords++;

        // lookup the index of the hourlypay rate for the paycode
        indexOfFoundCode = simpleSearch(payGrade, payCodes, MAX_ARRAY_SIZE);
        // change the employee payrate to value if > 0 invalid paycode
        if (indexOfFoundCode != -1) {
            // retrieve the corresponding payRate from the payRates array
            currHourlyPayRate = payRates[indexOfFoundCode];
        }

        // currHourlyPayRate = lookeduppayrate
        employeePay = currHourlyPayRate * hoursWorked;
        totalEmployeePay += employeePay;
        cout << id << setw(5) << right << payGrade << setw(5) << "$" << setw(10) << employeePay << setw(15) << ssnumber
            << setw(20) << lastname + "," + firstname << left << endl;
        currHourlyPayRate = 0.00;
    }
    timesheet.close();
    cout << endl;
    cout << numRecords << setw(8) << right << "records" << setw(5) << "$" << setw(8) << totalEmployeePay << " total payroll "
        << endl;

    return 0;
}

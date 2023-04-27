#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in_file;
    ofstream out_file;
    string filename;
    float num;
    int count = 0;
    float total = 0;
    float avg;

    cout << "Please enter the name of the file you would like to calculate: ";
    cin >> filename;
    in_file.open(filename.c_str());
    out_file.open("D:\FINAL_LAB_OUTput.txt");
    if (in_file.fail())
    {
        cout << "Error: File was not found" << endl;

        system("pause");
        return 1;
    }
    while (!in_file.eof())
    {
        in_file >> num;
        cout << num << ", ";
        out_file << num << ", ";
        count++;
        total = total + num;
    }
    avg = total / count;
    cout << endl;
    cout << "\nTotal: " << total << endl;
    cout << "Average: " << avg << endl << endl;
    out_file << endl;
    out_file << "\nTotal: " << total << endl;
    out_file << "Average: " << avg << endl;

    in_file.close();
    out_file.close();

    system("pause");
    return 0;
}
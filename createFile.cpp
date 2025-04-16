#include <fstream>
#include <windows.h>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
void Logs(const string& logMsg) {
    ofstream Logfile("log.txt", std::ios::app);
    if (Logfile.is_open()) {
        Logfile << logMsg << endl;
        Logfile.close();
    } else {
        cerr << "Can't open the log file" << endl;
    }
}
int main() {
    string input;
    cout << "Write a text here: ";
    getline(cin, input);
    ofstream outfile("OUTPUT.TXT");
    outfile << input << endl;
    outfile.close();
    	Sleep(150);
    cout << "Succesfully created!" << endl;
	Sleep(1200);
	ofstream batchFile("file.bat");
	batchFile << "yourcode"<< endl;
	batchFile.close();
    Logs("Program was succesfully launched");
	return 0;
}
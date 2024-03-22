#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a sample text.\n";
    outFile << "File operations are fun!\n";

    outFile.close();

    // Reading from a file
    ifstream inFile("example.txt");

    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "Contents of the file:\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    // Appending to a file
    ofstream appendFile("example.txt", ios::app);

    if (!appendFile) {
        cerr << "Error opening file for appending!" << endl;
        return 1;
    }

    appendFile << "\nAppending more text to the file.\n";
    appendFile << "File operations are versatile!\n";

    appendFile.close();

    // Displaying the updated file
    ifstream updatedFile("example.txt");

    if (!updatedFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nContents of the updated file:\n";
    while (getline(updatedFile, line)) {
        cout << line << endl;
    }

    updatedFile.close();

    return 0;
}

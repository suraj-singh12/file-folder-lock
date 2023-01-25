
// compile with: g++ fileName.cpp -std=c++17
#include <iostream>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;
using namespace std;
// #define recursive_directory_iterator std::filesystem::recursive_directory_iterator;

vector<string> recursivelyGetFiles(string path) {
    vector<string> files;
    for (const auto& dirEntry : std::filesystem::recursive_directory_iterator(path)) {
        if(std::filesystem::is_regular_file(dirEntry.path())) {
            string fileName = dirEntry.path().filename().string();
            // cout << dirEntry << "\n";
            // cout << dirEntry.path() << "\n";
            // cout << dirEntry.path().filename() << "\n";
            // cout << fileName << endl;
            string rawFileName = dirEntry.path().string();
            if(rawFileName.find("git") == string::npos)     // ignoring git files
                files.push_back(fileName);
        }
        // cout << "\n------------------------------\n";
    }
    return files;
}

vector<string> getFiles(string path) {
    vector<string> files;
    for (const auto & entry : fs::directory_iterator(path)) {
        std::cout << entry.path() << std::endl;
        files.push_back(entry.path().filename().string());
    }
    return files;
}
int main()  {
    string myPath = "../";
    auto files = recursivelyGetFiles(myPath);
    for(auto file : files) cout << file << endl;
    cout << endl;
    auto currentDirFiles = getFiles(myPath);
    for(auto file : currentDirFiles) cout << file << endl;
    cout << endl;
}
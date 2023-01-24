#include <bits/stdc++.h>
#include "json/json.h"
#include "json/jsoncpp.cpp"

using namespace std;

int main()
{

    ifstream file("sample-keys.json");
    Json::Value root;
    Json::Reader reader;

    string key, fname;
    cout << "\nEnter Your 16-Charcter Key::";
    cin >> key;

    reader.parse(file, root, false);
    const Json::Value actualJson = root["root"];

    for (int i = 0; i < actualJson.size(); i++)
    {
        string s = actualJson[i]["key"].asString();
        if (s == key)
        {
            cout << "Enter File Name::";
            cin.ignore();
            getline(cin, fname);

            if (actualJson[i]["file"].asString() == fname)
                cout << "Unlocked" << endl;
            else
                cout << "Key Mismatch!!";
            return 0;
        }
    }

    cout << "Key doesnt Exists!!";

    return 0;
}
//
// Created by giladby on 09/01/2020.
//

#include "Utils.h"

//split the given string by the given delimiter
vector<string> Utils::split(string str, const string &delimiter) {
    vector<string> strings;
    string token;
    int pos = str.find(delimiter);
    while ((unsigned) pos != (unsigned) string::npos) {
        token = str.substr(0, pos);
        strings.emplace_back(token);
        str.erase(0, pos + delimiter.length());
        pos = str.find(delimiter);
    }
    strings.emplace_back(str);
    return strings;
}
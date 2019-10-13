#pragma once

#include <string>
#include <vector>

class Des
{

public:
    Des();

    std::string encrypt(const std::string &initialMessage, const std::string &initialKey);

    std::string decrypt(const std::string &initialMessage, const std::string &initialKey);

private:
    static std::string hex2bin(const std::string &inputString);

    static std::string bin2hex(std::string inputString);

    static std::string permute(std::string inputString, std::vector<int> &permutationArray, int n);

    static std::string leftShift(std::string myString, int shifts);

    static std::string xor_(std::string stringA, std::string stringB);

    std::string crypt(const std::string &initialMessage, const std::vector<std::string> &rkb, const std::vector<std::string>& rk);

    std::vector<int> initialKeyPerm;
    std::vector<int> shift_table;
    std::vector<int> keyCompression;
    std::vector<int> initialPerm;
    std::vector<int> finalPerm;
    std::vector<int> pExpansion;
    std::vector<int> pCompression;
    std::vector<std::vector<std::vector<int>>> sBox;

    static void setH2b(std::unordered_map<char, std::string> &h2b);

    static void setBth(std::unordered_map<std::string, std::string> &b2h);

    void initKeys(const std::string& initialKey, std::vector<std::string> &rkb, std::vector<std::string> &rk);

    static std::string decimal2bin(int decimal);

};
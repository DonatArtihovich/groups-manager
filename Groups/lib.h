#pragma once
#include <string>

void registerUser(std::string login, std::string password);
bool loginUser(std::string login, std::string password);
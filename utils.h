#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

// Trim whitespace from the start of a string
std::string ltrim(const std::string& str);

// Trim whitespace from the end of a string
std::string rtrim(const std::string& str);

// Trim whitespace from both ends of a string
std::string trim(const std::string& str);

// Convert a string to lowercase
std::string toLower(const std::string& str);

// Convert a string to uppercase
std::string toUpper(const std::string& str);

// Split a string by a delimiter
std::vector<std::string> split(const std::string& str, char delimiter);

// Check if a string starts with a given prefix
bool startsWith(const std::string& str, const std::string& prefix);

// Check if a string ends with a given suffix
bool endsWith(const std::string& str, const std::string& suffix);

#endif // UTILS_H
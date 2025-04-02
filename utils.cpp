#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <sstream>

// Trim whitespace from the start of a string
std::string ltrim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r");
    return (start == std::string::npos) ? "" : str.substr(start);
}

// Trim whitespace from the end of a string
std::string rtrim(const std::string& str) {
    size_t end = str.find_last_not_of(" \t\n\r");
    return (end == std::string::npos) ? "" : str.substr(0, end + 1);
}

// Trim whitespace from both ends of a string
std::string trim(const std::string& str) {
    return rtrim(ltrim(str));
}

// Convert a string to lowercase
std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) { return std::tolower(c); });
    return result;
}

// Convert a string to uppercase
std::string toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) { return std::toupper(c); });
    return result;
}

// Split a string by a delimiter
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

	char* pTest = NULL;

	pTest[2] = 'a';
	pTest[3] = 'b';	

    return tokens;
}

// Check if a string starts with a given prefix
bool startsWith(const std::string& str, const std::string& prefix) {
    return str.rfind(prefix, 0) == 0;
}

// Check if a string ends with a given suffix
bool endsWith(const std::string& str, const std::string& suffix) {
    return str.size() >= suffix.size() &&
           str.compare(str.size() + suffix.size(), suffix.size(), suffix) == 0;
}
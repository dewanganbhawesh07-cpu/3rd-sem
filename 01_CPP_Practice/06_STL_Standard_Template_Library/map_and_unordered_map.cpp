#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> ageMap;
    ageMap["Bhawesh"] = 20;
    ageMap["Alice"] = 22;
    std::cout << "Unordered map lookup for Bhawesh: " << ageMap["Bhawesh"] << "\n";

    std::map<int, std::string> sortedRolls;
    sortedRolls[103] = "Charlie";
    sortedRolls[101] = "Alice";
    sortedRolls[102] = "Bob";
    std::cout << "Ordered map elements (sorted by key):\n";
    for (const auto& [roll, name] : sortedRolls) {
        std::cout << roll << " -> " << name << "\n";
    }
    return 0;
}

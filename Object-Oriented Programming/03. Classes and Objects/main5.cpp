// Define and Use a Tournament Class to Store and Display Team Information

#include <iostream>
#include <string>
#include <vector>

class Tournament {
public:
    std::string name;
    std::string sportsType;
    int numberOfTeams;
    std::vector<std::string> teams;
};

class Tester5 {
public:
    static void main() {
        Tournament asiaCup;

        // Print initial values (will be empty or zero)
        std::cout << asiaCup.name << " " << asiaCup.sportsType << " " << asiaCup.numberOfTeams << " ";
        for(const auto& team : asiaCup.teams) {
            std::cout << team << " ";
        }
        std::cout << std::endl;
        std::cout << "**************" << std::endl;

        // Assign values
        asiaCup.name = "Asia Cup";
        asiaCup.sportsType = "Cricket";
        asiaCup.numberOfTeams = 4;
        asiaCup.teams = {"BD", "IND", "PAK", "SL"};

        // Print updated info
        std::printf("%s %s Tournament is played between %d teams\n",
                    asiaCup.name.c_str(), asiaCup.sportsType.c_str(),
                    asiaCup.numberOfTeams);

        std::cout << "The teams are:" << std::endl;
        for(size_t i = 0; i < asiaCup.teams.size(); i++) {
            std::cout << asiaCup.teams[i] << std::endl;
        }
    }
};

int main() {
    Tester5::main();
    return 0;
}
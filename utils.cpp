#include "utils.h"
#include "ANSI-color-codes.h" // https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
#include <iostream>

void welcome() {
  // ASCII ART for RISK:
  // https://patorjk.com/software/taag/#p=testall&h=1&v=0&f=Big%20Money-ne&t=RISK
  std::cout << BRED << R"(
                                                 
 _____  _                           _    _             
| __  ||_| ___  ___  _ _  ___  ___ |_| _| | ___    ___ 
| __ -|| || -_||   || | || -_||   || || . || . |  | .'|
|_____||_||___||_|_| \_/ |___||_|_||_||___||___|  |__,|                                              
___________        ____________             _____  ______   _______   
\          \      /            \       _____\    \|\     \  \      \  
 \    /\    \    |\___/\  \\___/|     /    / \    |\\     \  |     /| 
  |   \_\    |    \|____\  \___|/    |    |  /___/| \|     |/     //  
  |      ___/           |  |      ____\    \ |   ||  |     |_____//   
  |      \  ____   __  /   / __  /    /\    \|___|/  |     |\     \   
 /     /\ \/    \ /  \/   /_/  ||    |/ \    \      /     /|\|     |  
/_____/ |\______||____________/||\____\ /____/|    /_____/ |/_____/|  
|     | | |     ||           | /| |   ||    | |   |     | / |    | |  
|_____|/ \|_____||___________|/  \|___||____|/    |_____|/  |____|/   

)" << '\n';
}

void showHelp(const std::map<std::string, std::string> &helpCommands) {
  for (const auto &entry : helpCommands) {
    std::cout << entry.first << ": " << entry.second << "\n\n";
  }
}

void initializeGame(std::list<Player> &players) {
  if (!players.empty()) {
    std::cout << "The game has already been initialized." << std::endl;
    return;
  }

  int numPlayers;
  std::cout << "Enter the number of players: ";
  std::cin >> numPlayers;
  std::cin.ignore(); // Clear the buffer

  for (int i = 0; i < numPlayers; ++i) {
    Player player;
    std::cout << "Enter the identifier for player " << i + 1 << ": ";
    std::string id;
    std::getline(std::cin, id);
    player.setId(id);
    players.push_back(player);
  }

  std::cout << "The game has been initialized successfully." << std::endl;
}

void processTurn(const std::string &argument,
                 const std::list<Player> &players) {
  // Implement the turn logic here
  // Includes territory allocation, unit claiming, attack, and fortification

  std::cout << "Processing turn for player " << argument << "..." << std::endl;
  // Turn logic

  std::cout << "(Turn completed successfully) The turn for player " << argument
            << " has ended." << std::endl;
}

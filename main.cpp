#include "ANSI-color-codes.h" // https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
#include "utils.h"
#include <iostream>

int main() {
  std::list<Player> players;
  std::map<std::string, std::string> helpCommands;
  helpCommands["help"] =
      "Usage: help\nDisplays help for all available commands.";
  helpCommands["initialize game"] =
      "Usage: initialize\nInitializes the game with players and territories.";
  helpCommands["turn"] =
      "Usage: turn <player_id>\nProcesses the turn for the specified player.";
  helpCommands["cls"] = "Usage: clear\nClean Screen.";
  helpCommands["exit"] = "Usage: exit\nTerminates the application.";
 

  // Welcome
  welcome();

  while (true) {
    std::cout << BGRN << "$ " << COLOR_RESET;
    std::string input;
    std::getline(std::cin, input);

    if (input == "help") {
      showHelp(helpCommands);
    } else if (input == "initialize") {
      initializeGame(players);
    } else if (input.substr(0, 5) == "turn") {
      std::string playerId = input.substr(6);
      processTurn(playerId, players);
    } else if(input == "cls"){
      system("cls");
      welcome();
    } else if (input == "exit") {
      break;
    } else {
      std::cout << "Unknown command. Type 'help' to see the list of available "
                   "commands."
                << std::endl;
    }
  }

  return 0;
}

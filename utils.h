#ifndef UTILS_H
#define UTILS_H

#include "./Player/Player.h"
#include <list>
#include <map>
#include <string>

void welcome();
void showHelp(const std::map<std::string, std::string> &helpCommands);
void initializeGame(std::list<Player> &players);
void processTurn(const std::string &argument, const std::list<Player> &players);

#endif // UTILS_H

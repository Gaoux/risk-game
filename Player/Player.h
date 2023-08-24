#ifndef PLAYER_H
#define PLAYER_H

#include <list>
#include <string>

class Player {
private:
  std::string id;
  std::list<std::string> territories;

public:
  Player();
  Player(const std::string id, const std::list<std::string> territories);
  ~Player();
  std::string getId() const;
  std::list<std::string> getTerritories() const;
  void setId(const std::string &newId);
  void setTerritories(const std::list<std::string> &newTerritories);
};

#endif // PLAYER_H

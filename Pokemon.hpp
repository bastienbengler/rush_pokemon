//
// Pokemon.hpp for Pokemon in /home/bengle_b/test/rush_pokemon
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Wed Jan 21 19:13:07 2015 Bengler Bastien
// Last update Fri Jan 23 19:31:43 2015 Bengler Bastien
//

#ifndef POKEMON_HPP_
# define POKEMON_HPP_

#include <iostream>

class	Pokemon
{
public:
  void setId(const int id);
  int getId() const;
  void setName(const std::string& name);
  const std::string& getName() const;
private:
  int _id;
  std::string _name;
};

#endif /* POKEMON_HPP_ */

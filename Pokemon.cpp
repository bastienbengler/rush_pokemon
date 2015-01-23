//
// Pokemon.cpp for Pokemon in /home/bengle_b/test/rush_pokemon
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Fri Jan 23 19:15:39 2015 Bengler Bastien
// Last update Fri Jan 23 19:31:41 2015 Bengler Bastien
//

#include "Pokemon.hpp"
#include <iostream>

void	Pokemon::setId(const int id)
{
  _id = id;
}

int	Pokemon::getId() const
{
  return _id;
}

void	Pokemon::setName(const std::string& name)
{
  _name = name;
}

const std::string&	Pokemon::getName() const
{
  return _name;
}

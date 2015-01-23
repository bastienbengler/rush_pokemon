//
// linkedlist.cpp for linkedlist in /home/bengle_b/test/template_linkedlist
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Wed Jan 21 15:58:45 2015 Bengler Bastien
// Last update Fri Jan 23 19:48:12 2015 Bengler Bastien
//

#include "linkedlist.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

template<typename T>
List<T>::List()
{
  list = new T;
  list->pokemon = new Pokemon;
  list->pokemon->setId(0);
  list->pokemon->setName("");
  list->setRoot(0);
  list->next = list;
  list->prev = list;
  std::cout << "ctor" << std::endl;
}

template<typename T>
List<T>::~List()
{
  T *ptr;

  if (list && list->next)
    list = list->next;
  while (list->getRoot())
    {
      ptr = list->next;
      if (list->pokemon)
	delete list->pokemon;
      if (list)
	delete list;
      list = ptr;
    }
  if (list->pokemon)
    delete list->pokemon;
  if (list)
    delete list;
}

template<typename T>
void	List<T>::parserXML()
{
  std::string line;
  std::ifstream myfile("pokedata.xml");
  Pokemon pokemon;

  if (myfile.is_open())
    {
      while (getline(myfile, line))
	{
	  if (line.find("pokemon id", 0) < line.length())
	    parseIdPokemon(line, pokemon);
	  if (pokemon.getId() && line.find("name", 0) < line.length())
	    parseNamePokemon(line, pokemon);
	  if (pokemon.getId() && (pokemon.getName()).length() > 0)
	    {
	      putInList(pokemon);
	      pokemon.setId(0);
	      pokemon.setName("");
	    }
	}
      myfile.close();
    }
}

template<typename T>
void	List<T>::parseNamePokemon(const std::string &line, Pokemon &pokemon)
{
  int	min = line.find(">", 0);
  int	max = line.find("<", min + 1);
  std::string tmp;

  while (min < max - 1)
    tmp += line.at(++min);
  pokemon.setName(tmp);
}

template<typename T>
void	List<T>::parseIdPokemon(const std::string &line, Pokemon &pokemon)
{
  Pokemon tmp;
  std::string id;

  int	min = line.find("\"", 0);
  int	max = line.find("\"", min + 1);
  while (min < max - 1)
    id += line.at(++min);
  tmp.setId(atoi(id.c_str()));
  pokemon = tmp;
}

template<typename T>
void	List<T>::putInList(const Pokemon& pokemon)
{
  T* tmp;
  T* tmp2 = new T;
  Pokemon *poke = new Pokemon;

  tmp = list->prev;
  tmp2->pokemon = poke;
  tmp2->pokemon->setId(pokemon.getId());
  tmp2->pokemon->setName(pokemon.getName());
  tmp2->setRoot(1);
  tmp2->prev = tmp;
  tmp2->next = list;
  list->prev = tmp2;
  tmp->next = tmp2;
}

template<typename T>
void	List<T>::dumplist()
{
  T* ptr;

  ptr = list;
  list = list->next;
  while (list->getRoot())
    {
      std::cout << "id : " << list->pokemon->getId() << std::endl;
      std::cout << "name : " << list->pokemon->getName() << std::endl;
      list = list->next;
    }
  list = ptr;
}

template List<Pokedex>::List();
template List<Pokedex>::~List();
template void List<Pokedex>::dumplist();
template void List<Pokedex>::parserXML();
template void List<Pokedex>::parseIdPokemon(const std::string &line, Pokemon& pokemon);
template void List<Pokedex>::parseNamePokemon(const std::string &line, Pokemon& pokemon);

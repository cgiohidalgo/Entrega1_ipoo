#ifndef _AVATAR_H_
#define _AVATAR_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <math.h>

using std::string;
using namespace std;

class Avatar {

public:
	Avatar();
  ~Avatar();
  void AsignarValores(char T);
  float SetPoder();
  float SetMana();
  float SetVida();

protected:

private:
  float Poder;
  float Mana;
  float Vida;
  string Tipo;
  //bool Postura;

  
};

#endif 
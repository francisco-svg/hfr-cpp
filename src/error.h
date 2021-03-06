/******************************************************************************/
/*                                                                            */
/* Copyright (C) 2009 Sylwester Wysocki <sw143@wp.pl>                         */
/*                                                                            */
/* Source code available at: https://github.com/dzik143/hfr-cpp               */
/*                                                                            */
/* This program is free software: you can redistribute it and/or modify       */
/* it under the terms of the GNU General Public License as published by       */
/* the Free Software Foundation, either version 3 of the License, or          */
/* (at your option) any later version.                                        */
/*                                                                            */
/* This program is distributed in the hope that it will be useful,            */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of             */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              */
/* GNU General Public License for more details.                               */
/*                                                                            */
/* You should have received a copy of the GNU General Public License          */
/* along with this program. If not, see <http://www.gnu.org/licenses/>        */
/*                                                                            */
/******************************************************************************/

#ifndef ERROR_H
#define ERROR_H

#include <ostream>
#include <string>

using namespace std;

class Error
{
  friend std::ostream &operator<<(std::ostream &, Error &);

public:

  const string opis;    // tresc bledu
  const string modul;   // nazwa modulu, w ktorym wystapil
  const string funkcja; // nazwa funkcji, w ktorym wystapil
  const string info;    // dodatkowe informacje

  Error(string opis_, string modul_, string funkcja_, string info_ = "") :
    opis(opis_),
    modul(modul_),
    funkcja(funkcja_),
    info(info_)
  {
  }
};
#endif

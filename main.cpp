/*
 Copyright 2016 Wouter Spekkink
 Authors : Wouter Spekkink <wouter.spekkink@gmail.com>
 Website : http://www.wouterspekkink.org

 This file is part of the Gephi CSV Parser.

 DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS HEADER.

 Copyright 2016 Wouter Spekkink. All rights reserved.

 The Gephi CSV Parser is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 The Gephi CSV Parser is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 #
 You should have received a copy of the GNU General Public License
 along with the Gephi CSV Parser.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <QApplication>
#include "./include/MainDialog.h"

int main(int argc, char *argv[]) 
{
  // Setting up the app
  QApplication CsvParser(argc, argv);

  MainDialog *dialog = new MainDialog;
  dialog->show();
  return CsvParser.exec();
}

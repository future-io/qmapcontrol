/***************************************************************************
 *   Copyright (C) 2007 by Kai Winter   *
 *   kaiwinter@gmx.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef BUSPLAN_H
#define BUSPLAN_H

#include <QtGui>
#include "../../../qmapcontrol.h"
using namespace qmapcontrol;
class Mapviewer : public QMainWindow
{
	Q_OBJECT
	public:
		Mapviewer(QWidget *parent = 0);

		~Mapviewer();

	private:
		MapControl* mc;
		MapAdapter* mapadapter;
		Layer* mainlayer;
		Layer* overlay;
		
		QMenu* mapMenu;
		QAction* osmAction;
		QAction* yahooActionMap;
		QAction* yahooActionSatellite;
		QAction* yahooActionOverlay;
		QAction* googleActionMap;
		QAction* wmsAction;
		
		void addZoomButtons();
		void createActions();
		void createMenu();
		
	public slots:
		void mapproviderSelected(QAction*);
};

#endif

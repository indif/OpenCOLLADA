// Copyright 2013 Autodesk, Inc.  All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which 
// otherwise accompanies this software in either electronic or hard copy form.   
//
//

#pragma once

#include "../IRefObject.h"
#include "../../strbasic.h"

namespace MaxSDK { namespace Graphics {

/** This class is a representation of a view which provides some common functions 
	to manipulate a viewport. For e.g., invalidate or render the view port, save or 
	load the view fragment graph etc.,.
 */
class IView : public ARefObject
{
public:
	/** Invalidate the current view fragment graph and redraw it later on
	*/
	virtual void RequestRedrawViewport() = 0;

	/** Load the view fragment graph from a specified xml file
	\param[in] fileName the file name of the xml file
	\return true if succeed or false otherwise.
	*/
	virtual bool LoadXML(const MCHAR* fileName) = 0;

	/** Unload the view fragment graph
	\return true if succeed or false otherwise.
	*/
	virtual bool UnloadXML() = 0;

	/** Save the view fragment graph to a specified xml file
	\param[in] fileName the file name of the xml file
	\return true if succeed or false otherwise.
	*/
	virtual bool SaveXML(const MCHAR* fileName) = 0;
};

} }// namespaces

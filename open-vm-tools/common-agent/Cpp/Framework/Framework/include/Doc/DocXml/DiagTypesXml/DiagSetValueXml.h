/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DiagSetValueXml_h_
#define DiagSetValueXml_h_


#include "Doc/DiagTypesDoc/CDiagSetValueDoc.h"

#include "Doc/DocXml/DiagTypesXml/DiagTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the DiagSetValue class to/from XML
	namespace DiagSetValueXml {

		/// Adds the DiagSetValueDoc into the XML.
		void DIAGTYPESXML_LINKAGE add(
			const SmartPtrCDiagSetValueDoc diagSetValueDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the DiagSetValueDoc from the XML.
		SmartPtrCDiagSetValueDoc DIAGTYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif

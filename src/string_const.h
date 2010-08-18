/* \file
 * $Id$
 * \author Caton Little
 * \brief 
 *
 * \section LICENSE
 *
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is FieldML
 *
 * The Initial Developer of the Original Code is Auckland Uniservices Ltd,
 * Auckland, New Zealand. Portions created by the Initial Developer are
 * Copyright (C) 2010 the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 */

#ifndef H_STRING_CONST
#define H_STRING_CONST

#include <libxml/encoding.h>
#include <string>

struct delete_object
{
  template <typename T>
  void operator()(T *ptr){ delete ptr;}
};


extern const char * const FML_VERSION_STRING;

extern const xmlChar * const FIELDML_TAG;

extern const xmlChar * const REGION_TAG;

extern const xmlChar * const ENSEMBLE_DOMAIN_TAG;
extern const xmlChar * const BOUNDS_TAG;
extern const xmlChar * const CONTIGUOUS_ENSEMBLE_BOUNDS_TAG;
extern const xmlChar * const ARBITRARY_ENSEMBLE_BOUNDS_TAG;

extern const xmlChar * const CONTINUOUS_DOMAIN_TAG;

extern const xmlChar * const MESH_DOMAIN_TAG;
extern const xmlChar * const MESH_SHAPES_TAG;
extern const xmlChar * const MESH_CONNECTIVITY_TAG;

extern const xmlChar * const CONTINUOUS_REFERENCE_TAG;
extern const xmlChar * const ALIASES_TAG;

extern const xmlChar * const CONTINUOUS_VARIABLE_TAG;

extern const xmlChar * const ENSEMBLE_VARIABLE_TAG;

extern const xmlChar * const ENSEMBLE_PARAMETERS_TAG;

extern const xmlChar * const CONTINUOUS_PARAMETERS_TAG;
extern const xmlChar * const SEMI_DENSE_DATA_TAG;
extern const xmlChar * const SPARSE_INDEXES_TAG;
extern const xmlChar * const DENSE_INDEXES_TAG;

extern const xmlChar * const CONTINUOUS_PIECEWISE_TAG;
extern const xmlChar * const ELEMENT_EVALUATORS_TAG;

extern const xmlChar * const CONTINUOUS_AGGREGATE_TAG;
extern const xmlChar * const SOURCE_FIELDS_TAG;

extern const xmlChar * const MARKUP_TAG;

extern const xmlChar * const MAP_ENTRY_TAG;

extern const xmlChar * const ENTRY_TAG;

extern const xmlChar * const DATA_LOCATION_TAG;

extern const xmlChar * const INLINE_DATA_TAG;
extern const xmlChar * const FILE_DATA_TAG;
extern const xmlChar * const SWIZZLE_TAG;

extern const xmlChar * const NAME_TAG;




extern const xmlChar * const NAME_ATTRIB;

extern const xmlChar * const VALUE_DOMAIN_ATTRIB;

extern const xmlChar * const COMPONENT_DOMAIN_ATTRIB;

extern const xmlChar * const IS_COMPONENT_DOMAIN_ATTRIB;

extern const xmlChar * const KEY_ATTRIB;
extern const xmlChar * const VALUE_ATTRIB;
extern const xmlChar * const DEFAULT_ATTRIB;

extern const xmlChar * const VALUE_COUNT_ATTRIB;

extern const xmlChar * const XI_COMPONENT_DOMAIN_ATTRIB;

extern const xmlChar * const VALUE_SOURCE_ATTRIB;
extern const xmlChar * const VALUE_INDEXES_ATTRIB;

extern const xmlChar * const EVALUATOR_ATTRIB;

extern const xmlChar * const INDEX_DOMAIN_ATTRIB;

extern const xmlChar * const FILE_ATTRIB;
extern const xmlChar * const TYPE_ATTRIB;
extern const xmlChar * const OFFSET_ATTRIB;

extern const xmlChar * const VERSION_ATTRIB;


extern const char * const STRING_TYPE_TEXT;
extern const char * const STRING_TYPE_LINES;

extern const char * const STRING_TRUE;

// strndup not available on all platforms.
const char *strdupN( const char *str, unsigned int n );

const char *strdupS( const char *str );

const std::string getDirectory( const std::string filename );

const std::string makeFilename( const std::string dir, const std::string file );

#endif // H_STRING_CONST
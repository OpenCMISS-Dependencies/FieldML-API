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
#include <cstring>

extern const char * const FML_VERSION_STRING;

extern const xmlChar * const XLINK_NAMESPACE_STRING;

extern const xmlChar * const FIELDML_TAG;
extern const xmlChar * const REGION_TAG;
extern const xmlChar * const AGGREGATE_EVALUATOR_TAG;
extern const xmlChar * const PARAMETER_EVALUATOR_TAG;
extern const xmlChar * const PIECEWISE_EVALUATOR_TAG;
extern const xmlChar * const CONSTANT_EVALUATOR_TAG;
extern const xmlChar * const REFERENCE_EVALUATOR_TAG;
extern const xmlChar * const EXTERNAL_EVALUATOR_TAG;
extern const xmlChar * const ARGUMENT_EVALUATOR_TAG;
extern const xmlChar * const MESH_TYPE_TAG;
extern const xmlChar * const CONTINUOUS_TYPE_TAG;
extern const xmlChar * const ENSEMBLE_TYPE_TAG;
extern const xmlChar * const BOOLEAN_TYPE_TAG;
extern const xmlChar * const DATA_RESOURCE_TAG;
extern const xmlChar * const IMPORT_TAG;
extern const xmlChar * const COMPONENT_EVALUATORS_TAG;
extern const xmlChar * const DOK_ARRAY_DATA_TAG;
extern const xmlChar * const DENSE_ARRAY_DATA_TAG;
extern const xmlChar * const SEMIDENSE_DATA_TAG;
extern const xmlChar * const SPARSE_INDEXES_TAG;
extern const xmlChar * const DENSE_INDEXES_TAG;
extern const xmlChar * const EVALUATOR_MAP_TAG;
extern const xmlChar * const INDEX_EVALUATORS_TAG;
extern const xmlChar * const EVALUATOR_MAP_ENTRY_TAG;
extern const xmlChar * const BINDINGS_TAG;
extern const xmlChar * const ARGUMENTS_TAG;
extern const xmlChar * const SHAPES_TAG;
extern const xmlChar * const CHART_TAG;
extern const xmlChar * const ELEMENTS_TAG;
extern const xmlChar * const COMPONENTS_TAG;
extern const xmlChar * const MEMBERS_TAG;
extern const xmlChar * const MEMBER_RANGE_TAG;
extern const xmlChar * const MEMBER_STRIDE_RANGE_DATA_TAG;
extern const xmlChar * const MEMBER_RANGE_DATA_TAG;
extern const xmlChar * const MEMBER_LIST_DATA_TAG;
extern const xmlChar * const ARGUMENT_TAG;
extern const xmlChar * const COMPONENT_EVALUATOR_TAG;
extern const xmlChar * const BIND_TAG;
extern const xmlChar * const BIND_INDEX_TAG;
extern const xmlChar * const INDEX_EVALUATOR_TAG;
extern const xmlChar * const IMPORT_EVALUATOR_TAG;
extern const xmlChar * const IMPORT_TYPE_TAG;
extern const xmlChar * const ARRAY_DATA_SOURCE_TAG;
extern const xmlChar * const DATA_RESOURCE_DESCRIPTION_TAG;
extern const xmlChar * const DATA_RESOURCE_STRING_TAG;
extern const xmlChar * const DATA_RESOURCE_HREF_TAG;
extern const xmlChar * const RAW_ARRAY_SIZE_TAG;
extern const xmlChar * const ARRAY_DATA_OFFSET_TAG;
extern const xmlChar * const ARRAY_DATA_SIZE_TAG;


extern const xmlChar * const VERSION_ATTRIB;
extern const xmlChar * const VALUE_DATA_ATTRIB;
extern const xmlChar * const KEY_DATA_ATTRIB;
extern const xmlChar * const DEFAULT_EVALUATOR_ATTRIB;
extern const xmlChar * const VALUE_ATTRIB;
extern const xmlChar * const VALUE_TYPE_ATTRIB;
extern const xmlChar * const DATA_ATTRIB;
extern const xmlChar * const COUNT_ATTRIB;
extern const xmlChar * const STRIDE_ATTRIB;
extern const xmlChar * const MAX_ATTRIB;
extern const xmlChar * const MIN_ATTRIB;
extern const xmlChar * const ORDER_ATTRIB;
extern const xmlChar * const DEFAULT_ATTRIB;
extern const xmlChar * const COMPONENT_ATTRIB;
extern const xmlChar * const SOURCE_ATTRIB;
extern const xmlChar * const ARGUMENT_ATTRIB;
extern const xmlChar * const INDEX_NUMBER_ATTRIB;
extern const xmlChar * const EVALUATOR_ATTRIB;
extern const xmlChar * const REGION_ATTRIB;
extern const xmlChar * const REMOTE_NAME_ATTRIB;
extern const xmlChar * const LOCAL_NAME_ATTRIB;
extern const xmlChar * const FORMAT_ATTRIB;
extern const xmlChar * const RANK_ATTRIB;
extern const xmlChar * const LOCATION_ATTRIB;
extern const xmlChar * const NAME_ATTRIB;
extern const xmlChar * const ID_ATTRIB;


extern const xmlChar * const HREF_ATTRIB;
extern const xmlChar * const QUALIFIED_HREF_ATTRIB;


extern const char * const PLAIN_TEXT_NAME;
extern const char * const HDF5_NAME;
extern const char * const PHDF5_NAME;

extern const char * const STRING_TRUE;

// strndup not available on all platforms.
char *strdupN( const char *str, unsigned int n );

char *strdupS( const char *str );

const std::string getDirectory( const std::string filename );

const std::string makeFilename( const std::string dir, const std::string file );

#endif // H_STRING_CONST

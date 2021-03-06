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

#ifndef H_HDF5_ARRAY_DATA_WRITER
#define H_HDF5_ARRAY_DATA_WRITER

#include "FieldmlIoContext.h"
#include "ArrayDataWriter.h"

#if defined FIELDML_HDF5_ARRAY || defined FIELDML_PHDF5_ARRAY
#include <hdf5.h>

class Hdf5ArrayDataWriter :
    public ArrayDataWriter
{
private:
    bool closed;
    hid_t file;
    hid_t dataset;
    hid_t dataspace;
    
    //Note: In the future, support will be added for non-scalar types that correspond to structured FieldML types.
    //The datatype will need to be checked against the FieldML type to ensure commensurability.
    hid_t datatype;
    int rank;
    hsize_t *hStrides;
    hsize_t *hSizes;
    hsize_t *hOffsets;
    
    bool initializeWithExistingDataset( int *sizes );
    
    bool initializeWithNewDataset( const std::string sourceName, int *sizes, FieldmlHandleType handleType );

    FmlIoErrorNumber writeSlab( const int *offsets, const int *sizes, hid_t requiredDatatype, const void *valueBuffer );

public:
    bool ok;

    Hdf5ArrayDataWriter( FieldmlIoContext *_context, const std::string root, FmlObjectHandle source, FieldmlHandleType handleType, bool append, int *sizes, int rank, hid_t fileAccessProperties );
    
    virtual FmlIoErrorNumber writeIntSlab( const int *offsets, const int *sizes, const int *valueBuffer );
    
    virtual FmlIoErrorNumber writeDoubleSlab( const int *offsets, const int *sizes, const double *valueBuffer );
    
    virtual FmlIoErrorNumber writeBooleanSlab( const int *offsets, const int *sizes, const FmlBoolean *valueBuffer );
    
    virtual FmlIoErrorNumber close();
    
    virtual ~Hdf5ArrayDataWriter();
    
    static Hdf5ArrayDataWriter *create( FieldmlIoContext *context, const std::string root, FmlObjectHandle source, FieldmlHandleType handleType, bool append, int *sizes, int rank );
};
#endif //FIELDML_HDF5_ARRAY || FIELDML_PHDF5_ARRAY

#endif //H_HDF5_ARRAY_DATA_WRITER

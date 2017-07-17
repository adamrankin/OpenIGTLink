/*=========================================================================

  Program:   OpenIGTLLink Library -- Dummy imgmeta data
  Module:    $RCSfile: $
  Language:  C
  Date:      $Date: $
  Version:   $Revision: $

  Copyright (c) Insight Software Consortium. All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __IGTL_TEST_DATA_VIDEOMETA_H
#define __IGTL_TEST_DATA_VIDEOMETA_H

unsigned char test_videometa_message[] = {
  /*------- OpenIGTLink message header -------*/
  0x00, 0x02,                                     /* Version number */
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x4D, 0x45, 0x54,
  0x41, 0x00, 0x00, 0x00,                         /* VIDEOMETA */
  0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x4E, 0x61,
  0x6D, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* Device name */
  0x00, 0x00, 0x00, 0x00, 0x49, 0x96, 0x02, 0xD4, /* Time stamp */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xD4, /* Body size */
  0x7D, 0xB9, 0x37, 0x17, 0xAB, 0x19, 0x8D, 0x48, /* CRC */

  /* Extended header
   0                 2                      4               8           12
   +-----------------+----------------------+---------------+-------------+
   | EXT_HEADER_SIZE | METADATA_HEADER_SIZE | METADATA_SIZE | MESSAGE_ID  |
   +-----------------+----------------------+---------------+-------------+*/
  0x00, 0x0C, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,


  /*---------- VIDEOMETA message body -----------*/
  /* Video meta data 0 */
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x44, 0x45,
  0x53, 0x43, 0x52, 0x49, 0x50, 0x54, 0x49, 0x4F,
  0x4E, 0x5F, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* video description */

  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* device name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x49, 0x44, 0x5F, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient ID */

  0x00, 0x04,                                     /* Zoom factor */
  0x40, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* Focal length */
  0x02, 0x00, 0x02, 0x00, 0x00, 0x40,             /* size */
  
  
  0xBF, 0x74, 0x73, 0xCD, 0x3E, 0x49, 0x59, 0xE6,
  0xBE, 0x63, 0xDD, 0x98, 0xBE, 0x49, 0x59, 0xE6,
  0x3E, 0x12, 0x49, 0x1B, 0x3F, 0x78, 0x52, 0xD6,
  0x3E, 0x63, 0xDD, 0x98, 0x3F, 0x78, 0x52, 0xD6,
  0xBD, 0xC8, 0x30, 0xAE, 0x42, 0x38, 0x36, 0x60,
  0x41, 0x9B, 0xC4, 0x67, 0x42, 0x38, 0x36, 0x60, /* matrix */
  
  0x05, /* data type */
  0x00, /* reserved */
  
  // ----------------------------
  /* Video meta data 1 */
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x44, 0x45,
  0x53, 0x43, 0x52, 0x49, 0x50, 0x54, 0x49, 0x4F,
  0x4E, 0x5F, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* video description */
  
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x31, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* device name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x49, 0x44, 0x5F, 0x31, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient ID */
  
  0xFF, 0xFE,                                     /* Zoom factor */
  0x40, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* Focal length */
  0x01, 0x00, 0x00, 0x80, 0x00, 0x20,             /* size */
  
  
  0xBF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
  0x42, 0xC8, 0x00, 0x00, 0x41, 0x80, 0x00, 0x00, /* matrix */
  
  0x05, /* data type */
  0x00, /* reserved */
  
  // ----------------------
  /* Video meta data 2 */
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x44, 0x45,
  0x53, 0x43, 0x52, 0x49, 0x50, 0x54, 0x49, 0x4F,
  0x4E, 0x5F, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* video description */
  
  0x56, 0x49, 0x44, 0x45, 0x4F, 0x5F, 0x32, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* device name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient name */
  
  0x50, 0x41, 0x54, 0x49, 0x45, 0x4E, 0x54, 0x5F,
  0x49, 0x44, 0x5F, 0x32, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* patient ID */
  
  0x00, 0x00,                                     /* Zoom factor */
  0x40, 0x34, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, /* Focal length */
  0x01, 0x00, 0x01, 0x00, 0x00, 0x20,             /* size */
  
  
  0xBF, 0x74, 0x73, 0xCD, 0x3E, 0x49, 0x59, 0xE6,
  0xBE, 0x63, 0xDD, 0x98, 0xBE, 0x49, 0x59, 0xE6,
  0x3E, 0x12, 0x49, 0x1B, 0x3F, 0x78, 0x52, 0xD6,
  0x3E, 0x63, 0xDD, 0x98, 0x3F, 0x78, 0x52, 0xD6,
  0xBD, 0xC8, 0x30, 0xAE, 0x43, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, /* matrix */
  
  0x05, /* data type */
  0x00, /* reserved */

  /*---------- Video Meta data body ------------*/
  0x00, 0x00                                     /* Index Count */

};

#endif /* IGTL_TEST_DATA_VIDEOMETA_H */




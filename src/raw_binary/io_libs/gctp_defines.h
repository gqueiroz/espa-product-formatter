/*****************************************************************************
FILE: gctp_defines.h
  
PURPOSE: Contains ESPA internal defines for GCTP projections

PROJECT:  Land Satellites Data System Science Research and Development (LSRD)
at the USGS EROS

LICENSE TYPE:  NASA Open Source Agreement Version 1.3

HISTORY:
Date         Programmer       Reason
----------   --------------   -------------------------------------
12/13/2013   Gail Schmidt     Original development
4/17/2014    Gail Schmidt     Updated to support additional projections

NOTES:
*****************************************************************************/

#ifndef GCTP_DEFINES_H
#define GCTP_DEFINES_H

/* GCTP projection numbers for ESPA projections */
#define GCTP_GEO_PROJ 0
#define GCTP_UTM_PROJ 1
#define GCTP_ALBERS_PROJ 3
#define GCTP_PS_PROJ 6 
#define GCTP_SIN_PROJ 16 

/* Local defines to use for the datum */
#define GCTP_WGS84 12

#endif

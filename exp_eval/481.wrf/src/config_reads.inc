!STARTOFREGISTRYGENERATEDINCLUDE 'inc/config_reads.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
! Contains namelist statements for module_config.F.
#ifndef NAMELIST_READ_UNIT
#  define NAMELIST_READ_UNIT nml_unit
#endif
#ifndef NAMELIST_READ_ERROR_LABEL
#  define NAMELIST_READ_ERROR_LABEL 9200
#endif
!
 READ  ( UNIT = NAMELIST_READ_UNIT , NML = time_control , ERR = NAMELIST_READ_ERROR_LABEL )
#ifndef NO_NAMELIST_PRINT
 WRITE ( UNIT = *                  , NML = time_control )
#endif
 READ  ( UNIT = NAMELIST_READ_UNIT , NML = domains , ERR = NAMELIST_READ_ERROR_LABEL )
#ifndef NO_NAMELIST_PRINT
 WRITE ( UNIT = *                  , NML = domains )
#endif
 READ  ( UNIT = NAMELIST_READ_UNIT , NML = physics , ERR = NAMELIST_READ_ERROR_LABEL )
#ifndef NO_NAMELIST_PRINT
 WRITE ( UNIT = *                  , NML = physics )
#endif
 READ  ( UNIT = NAMELIST_READ_UNIT , NML = dynamics , ERR = NAMELIST_READ_ERROR_LABEL )
#ifndef NO_NAMELIST_PRINT
 WRITE ( UNIT = *                  , NML = dynamics )
#endif
 READ  ( UNIT = NAMELIST_READ_UNIT , NML = bdy_control , ERR = NAMELIST_READ_ERROR_LABEL )
#ifndef NO_NAMELIST_PRINT
 WRITE ( UNIT = *                  , NML = bdy_control )
#endif
!ENDOFREGISTRYGENERATEDINCLUDE

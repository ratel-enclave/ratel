!
! WRF io macro file
!
! This file is used to generate the series of 40 meta-data get and 
! put calls in the WRF I/O API.  It contains an M4 macro and then
! a series of invocations of the macro to generate the subroutine
! definitions, which are then included by the file module_io.F
!

! $1 = get|put $2=dom|var $3=type $4=[char] $5=td|ti







INTERFACE wrf_get_dom_ti_real
  MODULE PROCEDURE wrf_get_dom_ti_real_arr, wrf_get_dom_ti_real_sca
END INTERFACE


INTERFACE wrf_put_dom_ti_real
  MODULE PROCEDURE wrf_put_dom_ti_real_arr, wrf_put_dom_ti_real_sca
END INTERFACE


INTERFACE wrf_get_dom_ti_double
  MODULE PROCEDURE wrf_get_dom_ti_double_arr, wrf_get_dom_ti_double_sca
END INTERFACE


INTERFACE wrf_put_dom_ti_double
  MODULE PROCEDURE wrf_put_dom_ti_double_arr, wrf_put_dom_ti_double_sca
END INTERFACE


INTERFACE wrf_get_dom_ti_integer
  MODULE PROCEDURE wrf_get_dom_ti_integer_arr, wrf_get_dom_ti_integer_sca
END INTERFACE


INTERFACE wrf_put_dom_ti_integer
  MODULE PROCEDURE wrf_put_dom_ti_integer_arr, wrf_put_dom_ti_integer_sca
END INTERFACE


INTERFACE wrf_get_dom_ti_logical
  MODULE PROCEDURE wrf_get_dom_ti_logical_arr, wrf_get_dom_ti_logical_sca
END INTERFACE


INTERFACE wrf_put_dom_ti_logical
  MODULE PROCEDURE wrf_put_dom_ti_logical_arr, wrf_put_dom_ti_logical_sca
END INTERFACE


INTERFACE wrf_get_dom_ti_char
  MODULE PROCEDURE wrf_get_dom_ti_char_arr
END INTERFACE


INTERFACE wrf_put_dom_ti_char
  MODULE PROCEDURE wrf_put_dom_ti_char_arr
END INTERFACE



INTERFACE wrf_get_dom_td_real
  MODULE PROCEDURE wrf_get_dom_td_real_arr, wrf_get_dom_td_real_sca
END INTERFACE


INTERFACE wrf_put_dom_td_real
  MODULE PROCEDURE wrf_put_dom_td_real_arr, wrf_put_dom_td_real_sca
END INTERFACE


INTERFACE wrf_get_dom_td_double
  MODULE PROCEDURE wrf_get_dom_td_double_arr, wrf_get_dom_td_double_sca
END INTERFACE


INTERFACE wrf_put_dom_td_double
  MODULE PROCEDURE wrf_put_dom_td_double_arr, wrf_put_dom_td_double_sca
END INTERFACE


INTERFACE wrf_get_dom_td_integer
  MODULE PROCEDURE wrf_get_dom_td_integer_arr, wrf_get_dom_td_integer_sca
END INTERFACE


INTERFACE wrf_put_dom_td_integer
  MODULE PROCEDURE wrf_put_dom_td_integer_arr, wrf_put_dom_td_integer_sca
END INTERFACE


INTERFACE wrf_get_dom_td_logical
  MODULE PROCEDURE wrf_get_dom_td_logical_arr, wrf_get_dom_td_logical_sca
END INTERFACE


INTERFACE wrf_put_dom_td_logical
  MODULE PROCEDURE wrf_put_dom_td_logical_arr, wrf_put_dom_td_logical_sca
END INTERFACE


INTERFACE wrf_get_dom_td_char
  MODULE PROCEDURE wrf_get_dom_td_char_arr
END INTERFACE


INTERFACE wrf_put_dom_td_char
  MODULE PROCEDURE wrf_put_dom_td_char_arr
END INTERFACE



INTERFACE wrf_get_var_ti_real
  MODULE PROCEDURE wrf_get_var_ti_real_arr, wrf_get_var_ti_real_sca
END INTERFACE


INTERFACE wrf_put_var_ti_real
  MODULE PROCEDURE wrf_put_var_ti_real_arr, wrf_put_var_ti_real_sca
END INTERFACE


INTERFACE wrf_get_var_ti_double
  MODULE PROCEDURE wrf_get_var_ti_double_arr, wrf_get_var_ti_double_sca
END INTERFACE


INTERFACE wrf_put_var_ti_double
  MODULE PROCEDURE wrf_put_var_ti_double_arr, wrf_put_var_ti_double_sca
END INTERFACE


INTERFACE wrf_get_var_ti_integer
  MODULE PROCEDURE wrf_get_var_ti_integer_arr, wrf_get_var_ti_integer_sca
END INTERFACE


INTERFACE wrf_put_var_ti_integer
  MODULE PROCEDURE wrf_put_var_ti_integer_arr, wrf_put_var_ti_integer_sca
END INTERFACE


INTERFACE wrf_get_var_ti_logical
  MODULE PROCEDURE wrf_get_var_ti_logical_arr, wrf_get_var_ti_logical_sca
END INTERFACE


INTERFACE wrf_put_var_ti_logical
  MODULE PROCEDURE wrf_put_var_ti_logical_arr, wrf_put_var_ti_logical_sca
END INTERFACE


INTERFACE wrf_get_var_ti_char
  MODULE PROCEDURE wrf_get_var_ti_char_arr
END INTERFACE


INTERFACE wrf_put_var_ti_char
  MODULE PROCEDURE wrf_put_var_ti_char_arr
END INTERFACE



INTERFACE wrf_get_var_td_real
  MODULE PROCEDURE wrf_get_var_td_real_arr, wrf_get_var_td_real_sca
END INTERFACE


INTERFACE wrf_put_var_td_real
  MODULE PROCEDURE wrf_put_var_td_real_arr, wrf_put_var_td_real_sca
END INTERFACE


INTERFACE wrf_get_var_td_double
  MODULE PROCEDURE wrf_get_var_td_double_arr, wrf_get_var_td_double_sca
END INTERFACE


INTERFACE wrf_put_var_td_double
  MODULE PROCEDURE wrf_put_var_td_double_arr, wrf_put_var_td_double_sca
END INTERFACE


INTERFACE wrf_get_var_td_integer
  MODULE PROCEDURE wrf_get_var_td_integer_arr, wrf_get_var_td_integer_sca
END INTERFACE


INTERFACE wrf_put_var_td_integer
  MODULE PROCEDURE wrf_put_var_td_integer_arr, wrf_put_var_td_integer_sca
END INTERFACE


INTERFACE wrf_get_var_td_logical
  MODULE PROCEDURE wrf_get_var_td_logical_arr, wrf_get_var_td_logical_sca
END INTERFACE


INTERFACE wrf_put_var_td_logical
  MODULE PROCEDURE wrf_put_var_td_logical_arr, wrf_put_var_td_logical_sca
END INTERFACE


INTERFACE wrf_get_var_td_char
  MODULE PROCEDURE wrf_get_var_td_char_arr
END INTERFACE


INTERFACE wrf_put_var_td_char
  MODULE PROCEDURE wrf_put_var_td_char_arr
END INTERFACE



CONTAINS

!--- get_dom_ti_real

SUBROUTINE wrf_get_dom_ti_real_arr ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_real ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_real_arr 
!--- get_dom_ti_real

SUBROUTINE wrf_get_dom_ti_real_sca ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_real ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_real ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_real_sca 


!--- put_dom_ti_real

SUBROUTINE wrf_put_dom_ti_real_arr ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_real ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_real_arr 
!--- put_dom_ti_real

SUBROUTINE wrf_put_dom_ti_real_sca ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_real ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_real ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_real ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_real_sca 


!--- get_dom_ti_double

SUBROUTINE wrf_get_dom_ti_double_arr ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_double ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_double_arr 
!--- get_dom_ti_double

SUBROUTINE wrf_get_dom_ti_double_sca ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_double ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_double ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_double_sca 


!--- put_dom_ti_double

SUBROUTINE wrf_put_dom_ti_double_arr ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_double ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_double_arr 
!--- put_dom_ti_double

SUBROUTINE wrf_put_dom_ti_double_sca ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_double ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_double ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_double ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_double_sca 


!--- get_dom_ti_integer

SUBROUTINE wrf_get_dom_ti_integer_arr ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_integer ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_integer_arr 
!--- get_dom_ti_integer

SUBROUTINE wrf_get_dom_ti_integer_sca ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_integer ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_integer_sca 


!--- put_dom_ti_integer

SUBROUTINE wrf_put_dom_ti_integer_arr ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_integer ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_integer_arr 
!--- put_dom_ti_integer

SUBROUTINE wrf_put_dom_ti_integer_sca ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_integer ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_integer ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_integer ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_integer_sca 


!--- get_dom_ti_logical

SUBROUTINE wrf_get_dom_ti_logical_arr ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_logical ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_logical_arr 
!--- get_dom_ti_logical

SUBROUTINE wrf_get_dom_ti_logical_sca ( DataHandle,Element,   Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_logical ( Hndl, Element,   Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_logical_sca 


!--- put_dom_ti_logical

SUBROUTINE wrf_put_dom_ti_logical_arr ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_logical ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_logical_arr 
!--- put_dom_ti_logical

SUBROUTINE wrf_put_dom_ti_logical_sca ( DataHandle,Element,   Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_logical ( Hndl, Element,   Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_logical ( Hndl, Element,   Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_logical ( Hndl, Element,   Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_logical_sca 


!--- get_dom_ti_char

SUBROUTINE wrf_get_dom_ti_char_arr ( DataHandle,Element,   Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_ti_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_ti_char ( Hndl, Element,   Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          len_of_str = LEN(Data)
          CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
          CALL wrf_dm_bcast_string( Data, len_of_str )
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_ti_char ( Hndl, Element,   Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           len_of_str = LEN(Data)
           CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
           CALL wrf_dm_bcast_string( Data, len_of_str )
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_ti_char ( Hndl, Element,   Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_ti_char_arr 


!--- put_dom_ti_char

SUBROUTINE wrf_put_dom_ti_char_arr ( DataHandle,Element,   Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_ti_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_ti_char ( Hndl, Element,   Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_ti_char ( Hndl, Element,   Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_ti_char ( Hndl, Element,   Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_ti_char ( Hndl, Element,   Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_ti_char_arr 



!--- get_dom_td_real

SUBROUTINE wrf_get_dom_td_real_arr ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_real_arr 
!--- get_dom_td_real

SUBROUTINE wrf_get_dom_td_real_sca ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_real ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_real_sca 


!--- put_dom_td_real

SUBROUTINE wrf_put_dom_td_real_arr ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_real_arr 
!--- put_dom_td_real

SUBROUTINE wrf_put_dom_td_real_sca ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_real ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_real_sca 


!--- get_dom_td_double

SUBROUTINE wrf_get_dom_td_double_arr ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_double_arr 
!--- get_dom_td_double

SUBROUTINE wrf_get_dom_td_double_sca ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_double ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_double_sca 


!--- put_dom_td_double

SUBROUTINE wrf_put_dom_td_double_arr ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_double_arr 
!--- put_dom_td_double

SUBROUTINE wrf_put_dom_td_double_sca ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_double ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_double_sca 


!--- get_dom_td_integer

SUBROUTINE wrf_get_dom_td_integer_arr ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_integer_arr 
!--- get_dom_td_integer

SUBROUTINE wrf_get_dom_td_integer_sca ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_integer_sca 


!--- put_dom_td_integer

SUBROUTINE wrf_put_dom_td_integer_arr ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_integer_arr 
!--- put_dom_td_integer

SUBROUTINE wrf_put_dom_td_integer_sca ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_integer ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_integer_sca 


!--- get_dom_td_logical

SUBROUTINE wrf_get_dom_td_logical_arr ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_logical_arr 
!--- get_dom_td_logical

SUBROUTINE wrf_get_dom_td_logical_sca ( DataHandle,Element, DateStr,  Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_logical_sca 


!--- put_dom_td_logical

SUBROUTINE wrf_put_dom_td_logical_arr ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_logical_arr 
!--- put_dom_td_logical

SUBROUTINE wrf_put_dom_td_logical_sca ( DataHandle,Element, DateStr,  Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_logical ( Hndl, Element, DateStr,  Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_logical_sca 


!--- get_dom_td_char

SUBROUTINE wrf_get_dom_td_char_arr ( DataHandle,Element, DateStr,  Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_dom_td_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          len_of_str = LEN(Data)
          CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
          CALL wrf_dm_bcast_string( Data, len_of_str )
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           len_of_str = LEN(Data)
           CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
           CALL wrf_dm_bcast_string( Data, len_of_str )
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_dom_td_char ( Hndl, Element, DateStr,  Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_dom_td_char_arr 


!--- put_dom_td_char

SUBROUTINE wrf_put_dom_td_char_arr ( DataHandle,Element, DateStr,  Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_dom_td_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_dom_td_char ( Hndl, Element, DateStr,  Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_dom_td_char_arr 



!--- get_var_ti_real

SUBROUTINE wrf_get_var_ti_real_arr ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_real_arr 
!--- get_var_ti_real

SUBROUTINE wrf_get_var_ti_real_sca ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_real ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_real_sca 


!--- put_var_ti_real

SUBROUTINE wrf_put_var_ti_real_arr ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_real_arr 
!--- put_var_ti_real

SUBROUTINE wrf_put_var_ti_real_sca ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_real ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_real_sca 


!--- get_var_ti_double

SUBROUTINE wrf_get_var_ti_double_arr ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_double_arr 
!--- get_var_ti_double

SUBROUTINE wrf_get_var_ti_double_sca ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_double ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_double_sca 


!--- put_var_ti_double

SUBROUTINE wrf_put_var_ti_double_arr ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_double_arr 
!--- put_var_ti_double

SUBROUTINE wrf_put_var_ti_double_sca ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_double ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_double_sca 


!--- get_var_ti_integer

SUBROUTINE wrf_get_var_ti_integer_arr ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_integer_arr 
!--- get_var_ti_integer

SUBROUTINE wrf_get_var_ti_integer_sca ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_integer ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_integer_sca 


!--- put_var_ti_integer

SUBROUTINE wrf_put_var_ti_integer_arr ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_integer_arr 
!--- put_var_ti_integer

SUBROUTINE wrf_put_var_ti_integer_sca ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_integer ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_integer_sca 


!--- get_var_ti_logical

SUBROUTINE wrf_get_var_ti_logical_arr ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_logical_arr 
!--- get_var_ti_logical

SUBROUTINE wrf_get_var_ti_logical_sca ( DataHandle,Element,  Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_logical ( Hndl, Element,  Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_logical_sca 


!--- put_var_ti_logical

SUBROUTINE wrf_put_var_ti_logical_arr ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_logical_arr 
!--- put_var_ti_logical

SUBROUTINE wrf_put_var_ti_logical_sca ( DataHandle,Element,  Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_logical ( Hndl, Element,  Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_logical_sca 


!--- get_var_ti_char

SUBROUTINE wrf_get_var_ti_char_arr ( DataHandle,Element,  Varname, Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_ti_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          len_of_str = LEN(Data)
          CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
          CALL wrf_dm_bcast_string( Data, len_of_str )
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           len_of_str = LEN(Data)
           CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
           CALL wrf_dm_bcast_string( Data, len_of_str )
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_ti_char ( Hndl, Element,  Varname, Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_ti_char_arr 


!--- put_var_ti_char

SUBROUTINE wrf_put_var_ti_char_arr ( DataHandle,Element,  Varname, Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element

CHARACTER*(*) , INTENT(IN)  :: VarName 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_ti_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_ti_char ( Hndl, Element,  Varname, Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_ti_char_arr 



!--- get_var_td_real

SUBROUTINE wrf_get_var_td_real_arr ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_real_arr 
!--- get_var_td_real

SUBROUTINE wrf_get_var_td_real_sca ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, RWORDSIZE*locCount )
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_real_sca 


!--- put_var_td_real

SUBROUTINE wrf_put_var_td_real_arr ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data (*)
 real  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_real_arr " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_real_arr 
!--- put_var_td_real

SUBROUTINE wrf_put_var_td_real_sca ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real  :: Data 
 real  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_real_sca " )


locCount = Count


Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_real ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_real_sca 


!--- get_var_td_double

SUBROUTINE wrf_get_var_td_double_arr ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_double_arr 
!--- get_var_td_double

SUBROUTINE wrf_get_var_td_double_sca ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_double_sca 


!--- put_var_td_double

SUBROUTINE wrf_put_var_td_double_arr ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data (*)
 real*8  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_double_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_double_arr 
!--- put_var_td_double

SUBROUTINE wrf_put_var_td_double_sca ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! real*8  :: Data 
 real*8  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_double_sca " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_double ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_double_sca 


!--- get_var_td_integer

SUBROUTINE wrf_get_var_td_integer_arr ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_integer_arr 
!--- get_var_td_integer

SUBROUTINE wrf_get_var_td_integer_sca ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, IWORDSIZE*locCount )
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_integer_sca 


!--- put_var_td_integer

SUBROUTINE wrf_put_var_td_integer_arr ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data (*)
 integer  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_integer_arr " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_integer_arr 
!--- put_var_td_integer

SUBROUTINE wrf_put_var_td_integer_sca ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! integer  :: Data 
 integer  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_integer_sca " )

locCount = Count



Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_integer ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_integer_sca 


!--- get_var_td_logical

SUBROUTINE wrf_get_var_td_logical_arr ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_logical_arr 
!--- get_var_td_logical

SUBROUTINE wrf_get_var_td_logical_sca ( DataHandle,Element, DateStr, Varname, Data, Count, Outcount, Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count
INTEGER ,       INTENT(OUT)  :: OutCount
INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
          CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount, Outcount, Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount, Outcount, Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           CALL wrf_dm_bcast_bytes( locCount, IWORDSIZE )
           CALL wrf_dm_bcast_bytes( Data, LWORDSIZE*locCount )
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                          locCount, Outcount, Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_logical_sca 


!--- put_var_td_logical

SUBROUTINE wrf_put_var_td_logical_arr ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data (*)
 logical  :: Data (*)

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_logical_arr " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_logical_arr 
!--- put_var_td_logical

SUBROUTINE wrf_put_var_td_logical_sca ( DataHandle,Element, DateStr, Varname, Data, Count,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! logical  :: Data 
 logical  :: Data 

INTEGER ,       INTENT(IN)  :: Count

INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_logical_sca " )



locCount = Count

Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                              locCount,  Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                                 locCount,  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_logical ( Hndl, Element, DateStr, Varname, Data, &
                          locCount,  Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_logical_sca 


!--- get_var_td_char

SUBROUTINE wrf_get_var_td_char_arr ( DataHandle,Element, DateStr, Varname, Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_get_var_td_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          len_of_str = LEN(Data)
          CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
          CALL wrf_dm_bcast_string( Data, len_of_str )
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           len_of_str = LEN(Data)
           CALL wrf_dm_bcast_bytes( len_of_str, IWORDSIZE )
           CALL wrf_dm_bcast_string( Data, len_of_str )
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_get_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_get_var_td_char_arr 


!--- put_var_td_char

SUBROUTINE wrf_put_var_td_char_arr ( DataHandle,Element, DateStr, Varname, Data,  Status )
USE module_state_description
IMPLICIT NONE
INTEGER ,       INTENT(IN)  :: DataHandle
CHARACTER*(*) , INTENT(IN)  :: Element
CHARACTER*(*) , INTENT(IN)  :: DateStr
CHARACTER*(*) , INTENT(IN)  :: VarName 

! CHARACTER*(*)  :: Data
 CHARACTER*(*)  :: Data



INTEGER ,       INTENT(OUT) :: Status

#include <wrf_status_codes.h>
INTEGER                     :: len_of_str
LOGICAL                     :: for_out
INTEGER, EXTERNAL           :: use_package
LOGICAL, EXTERNAL           :: wrf_dm_on_monitor, multi_files, use_output_servers
INTEGER                     :: locCount

INTEGER io_form , Hndl

CALL wrf_debug( DEBUG_LVL, "module_io.F (md_calls.m4) : in wrf_put_var_td_char_arr " )





Status = 0
CALL get_handle ( Hndl, io_form , for_out, DataHandle )
IF ( Hndl .GT. -1 ) THEN
  IF ( multi_files( io_form ) .OR. .NOT. (for_out .AND. use_output_servers()) ) THEN
    SELECT CASE ( use_package( io_form ) )
#ifdef INTERNAL_IO
      CASE ( IO_INTERNAL )
        CALL int_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef NETCDF
      CASE ( IO_NETCDF   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_ncd_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
          
          
          
          
          
          
          
          
          
          CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
#ifdef PHDF5
      CASE ( IO_PHDF5   )
        CALL ext_phdf5_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef HDF
      CASE ( IO_HDF   )
        CALL ext_hdf_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef XXX
      CASE ( IO_XXX   )
        CALL ext_xxx_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef YYY
      CASE ( IO_YYY   )
        CALL ext_yyy_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                               Status )
#endif
#ifdef INTIO
      CASE ( IO_INTIO   )
        IF ( multi_files(io_form) .OR.  wrf_dm_on_monitor() ) THEN
           CALL ext_int_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                                  Status )
        ENDIF
        IF ( .NOT. multi_files(io_form) ) THEN
           
           
           
           
           
           
           
           
           
           CALL wrf_dm_bcast_bytes( Status, IWORDSIZE )
        ENDIF
#endif
      CASE DEFAULT
    END SELECT
  ELSE IF ( for_out .AND. use_output_servers() ) THEN
    CALL ext_quilt_put_var_td_char ( Hndl, Element, DateStr, Varname, Data, &
                           Status )
  ELSE
    Status = 0
ENDIF
ELSE
  Status = WRF_ERR_FATAL_BAD_FILE_STATUS
ENDIF
RETURN
END SUBROUTINE wrf_put_var_td_char_arr 




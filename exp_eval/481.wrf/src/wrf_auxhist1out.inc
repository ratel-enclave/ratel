!STARTOFREGISTRYGENERATEDINCLUDE 'inc/wrf_auxhist1out.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'LU_INDEX'               , &  ! Data Name 
                       grid%lu_index               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'LAND USE CATEGORY'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxhist1out.inc ext_write_field LU_INDEX memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'U10'               , &  ! Data Name 
                       grid%u10               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'U at 10 M'               , &  ! Desc  
                       'm s-1'               , &  ! Units 
'inc/wrf_auxhist1out.inc ext_write_field U10 memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'V10'               , &  ! Data Name 
                       grid%v10               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'V at 10 M'               , &  ! Desc  
                       'm s-1'               , &  ! Units 
'inc/wrf_auxhist1out.inc ext_write_field V10 memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'XLAT'               , &  ! Data Name 
                       grid%xlat               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'LATITUDE, SOUTH IS NEGATIVE'               , &  ! Desc  
                       'degree_north'               , &  ! Units 
'inc/wrf_auxhist1out.inc ext_write_field XLAT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'XLONG'               , &  ! Data Name 
                       grid%xlong               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'LONGITUDE, WEST IS NEGATIVE'               , &  ! Desc  
                       'degree_east'               , &  ! Units 
'inc/wrf_auxhist1out.inc ext_write_field XLONG memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
!ENDOFREGISTRYGENERATEDINCLUDE

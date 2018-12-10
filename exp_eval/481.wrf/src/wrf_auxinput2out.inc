!STARTOFREGISTRYGENERATEDINCLUDE 'inc/wrf_auxinput2out.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'LANDMASK'               , &  ! Data Name 
                       grid%landmask               , &  ! Field 
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
                       'LAND MASK (1 FOR LAND, 0 FOR WATER)'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field LANDMASK memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TOPOSTDV'               , &  ! Data Name 
                       grid%topostdv               , &  ! Field 
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
                       'ELEVATION STD DEV'               , &  ! Desc  
                       'm'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TOPOSTDV memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TOPOSLPX'               , &  ! Data Name 
                       grid%toposlpx               , &  ! Field 
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
                       'ELEVATION X SLOPE'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TOPOSLPX memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TOPOSLPY'               , &  ! Data Name 
                       grid%toposlpy               , &  ! Field 
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
                       'ELEVATION Y SLOPE'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TOPOSLPY memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SHDMAX'               , &  ! Data Name 
                       grid%shdmax               , &  ! Field 
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
                       'ANNUAL MAX VEG FRACTION'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SHDMAX memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SHDMIN'               , &  ! Data Name 
                       grid%shdmin               , &  ! Field 
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
                       'ANNUAL MIN VEG FRACTION'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SHDMIN memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SNOALB'               , &  ! Data Name 
                       grid%snoalb               , &  ! Field 
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
                       'ANNUAL MAX SNOW ALBEDO IN FRACTION'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SNOALB memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SLOPECAT'               , &  ! Data Name 
                       grid%slopecat               , &  ! Field 
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
                       'SLOPE CATEGORY'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SLOPECAT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SOILHGT'               , &  ! Data Name 
                       grid%toposoil               , &  ! Field 
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
                       'ELEVATION OF LSM DATA'               , &  ! Desc  
                       'm'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SOILHGT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'LANDUSEF'               , &  ! Data Name 
                       grid%landusef               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XZY'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'land_cat_stag'               , &  ! Dimname 2 
                       'south_north'               , &  ! Dimname 3 
                       'LANDUSE FRACTION BY CATEGORY'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field LANDUSEF memorder XZY' , & ! Debug message
ids , (ide-1) , 1 , config_flags%num_land_cat , jds , (jde-1) ,  & 
ims , ime , 1 , config_flags%num_land_cat , jms , jme ,  & 
ips , MIN( (ide-1), ipe ) , 1 , config_flags%num_land_cat , jps , MIN( (jde-1), jpe ) ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SOILCTOP'               , &  ! Data Name 
                       grid%soilctop               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XZY'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'soil_cat_stag'               , &  ! Dimname 2 
                       'south_north'               , &  ! Dimname 3 
                       'SOIL CAT FRACTION (TOP)'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SOILCTOP memorder XZY' , & ! Debug message
ids , (ide-1) , 1 , config_flags%num_soil_cat , jds , (jde-1) ,  & 
ims , ime , 1 , config_flags%num_soil_cat , jms , jme ,  & 
ips , MIN( (ide-1), ipe ) , 1 , config_flags%num_soil_cat , jps , MIN( (jde-1), jpe ) ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SOILCAT'               , &  ! Data Name 
                       grid%soilcat               , &  ! Field 
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
                       'SOIL CAT DOMINANT TYPE'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SOILCAT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'VEGCAT'               , &  ! Data Name 
                       grid%vegcat               , &  ! Field 
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
                       'VEGETATION CAT DOMINANT TYPE'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field VEGCAT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TSLB'               , &  ! Data Name 
                       grid%tslb               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XZY'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'soil_layers_stag'               , &  ! Dimname 2 
                       'south_north'               , &  ! Dimname 3 
                       'SOIL TEMPERATURE'               , &  ! Desc  
                       'K'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TSLB memorder XZY' , & ! Debug message
ids , (ide-1) , 1 , config_flags%num_soil_layers , jds , (jde-1) ,  & 
ims , ime , 1 , config_flags%num_soil_layers , jms , jme ,  & 
ips , MIN( (ide-1), ipe ) , 1 , config_flags%num_soil_layers , jps , MIN( (jde-1), jpe ) ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SMOIS'               , &  ! Data Name 
                       grid%smois               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XZY'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'soil_layers_stag'               , &  ! Dimname 2 
                       'south_north'               , &  ! Dimname 3 
                       'SOIL MOISTURE'               , &  ! Desc  
                       'm3 m-3'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SMOIS memorder XZY' , & ! Debug message
ids , (ide-1) , 1 , config_flags%num_soil_layers , jds , (jde-1) ,  & 
ims , ime , 1 , config_flags%num_soil_layers , jms , jme ,  & 
ips , MIN( (ide-1), ipe ) , 1 , config_flags%num_soil_layers , jps , MIN( (jde-1), jpe ) ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SH2O'               , &  ! Data Name 
                       grid%sh2o               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XZY'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'soil_layers_stag'               , &  ! Dimname 2 
                       'south_north'               , &  ! Dimname 3 
                       'SOIL LIQUID WATER'               , &  ! Desc  
                       'm3 m-3'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SH2O memorder XZY' , & ! Debug message
ids , (ide-1) , 1 , config_flags%num_soil_layers , jds , (jde-1) ,  & 
ims , ime , 1 , config_flags%num_soil_layers , jms , jme ,  & 
ips , MIN( (ide-1), ipe ) , 1 , config_flags%num_soil_layers , jps , MIN( (jde-1), jpe ) ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'XICE'               , &  ! Data Name 
                       grid%xice               , &  ! Field 
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
                       'SEA ICE FLAG'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field XICE memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'IVGTYP'               , &  ! Data Name 
                       grid%ivgtyp               , &  ! Field 
                       WRF_integer             , &  ! FieldType 
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
                       'DOMINANT VEGETATION CATEGORY'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field IVGTYP memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'ISLTYP'               , &  ! Data Name 
                       grid%isltyp               , &  ! Field 
                       WRF_integer             , &  ! FieldType 
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
                       'DOMINANT SOIL CATEGORY'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field ISLTYP memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'VEGFRA'               , &  ! Data Name 
                       grid%vegfra               , &  ! Field 
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
                       'VEGETATION FRACTION'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field VEGFRA memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SST'               , &  ! Data Name 
                       grid%sst               , &  ! Field 
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
                       'SEA SURFACE TEMPERATURE'               , &  ! Desc  
                       'K'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SST memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MAPFAC_M'               , &  ! Data Name 
                       grid%msft               , &  ! Field 
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
                       'Map scale factor on mass grid'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field MAPFAC_M memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MAPFAC_U'               , &  ! Data Name 
                       grid%msfu               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
                       'west_east_stag'               , &  ! Dimname 1 
                       'south_north'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'Map scale factor on u-grid'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field MAPFAC_U memorder XY' , & ! Debug message
ids , ide , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( ide, ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MAPFAC_V'               , &  ! Data Name 
                       grid%msfv               , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator  , &  ! Comm
                       grid%iocommunicator  , &  ! Comm
                       grid%domdesc       , &  ! Comm
                       grid%bdy_mask       , &  ! bdy_mask
                       dryrun             , &  ! flag
                       'XY'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
                       'west_east'               , &  ! Dimname 1 
                       'south_north_stag'               , &  ! Dimname 2 
                       ''               , &  ! Dimname 3 
                       'Map scale factor on v-grid'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field MAPFAC_V memorder XY' , & ! Debug message
ids , (ide-1) , jds , jde , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( jde, jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'F'               , &  ! Data Name 
                       grid%f               , &  ! Field 
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
                       'Coriolis sine latitude term'               , &  ! Desc  
                       's-1'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field F memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'E'               , &  ! Data Name 
                       grid%e               , &  ! Field 
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
                       'Coriolis cosine latitude term'               , &  ! Desc  
                       's-1'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field E memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'SINALPHA'               , &  ! Data Name 
                       grid%sina               , &  ! Field 
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
                       'Local sine of map rotation'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field SINALPHA memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'COSALPHA'               , &  ! Data Name 
                       grid%cosa               , &  ! Field 
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
                       'Local cosine of map rotation'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field COSALPHA memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'HGT'               , &  ! Data Name 
                       grid%ht               , &  ! Field 
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
                       'Terrain Height'               , &  ! Desc  
                       'm'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field HGT memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TSK'               , &  ! Data Name 
                       grid%tsk               , &  ! Field 
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
                       'SURFACE SKIN TEMPERATURE'               , &  ! Desc  
                       'K'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TSK memorder XY' , & ! Debug message
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
'inc/wrf_auxinput2out.inc ext_write_field XLAT memorder XY' , & ! Debug message
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
'inc/wrf_auxinput2out.inc ext_write_field XLONG memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'ALBBCK'               , &  ! Data Name 
                       grid%albbck               , &  ! Field 
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
                       'BACKGROUND ALBEDO'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field ALBBCK memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'TMN'               , &  ! Data Name 
                       grid%tmn               , &  ! Field 
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
                       'SOIL TEMPERATURE AT LOWER BOUNDARY'               , &  ! Desc  
                       'K'               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field TMN memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
CALL wrf_ext_write_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'XLAND'               , &  ! Data Name 
                       grid%xland               , &  ! Field 
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
                       'LAND MASK (1 FOR LAND, 2 FOR WATER)'               , &  ! Desc  
                       ''               , &  ! Units 
'inc/wrf_auxinput2out.inc ext_write_field XLAND memorder XY' , & ! Debug message
ids , (ide-1) , jds , (jde-1) , 1 , 1 ,  & 
ims , ime , jms , jme , 1 , 1 ,  & 
ips , MIN( (ide-1), ipe ) , jps , MIN( (jde-1), jpe ) , 1 , 1 ,  & 
                       ierr )
!ENDOFREGISTRYGENERATEDINCLUDE

!STARTOFREGISTRYGENERATEDINCLUDE 'inc/wrf_bdyin.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BXS'               , &  ! Data Name 
                       grid%em_u_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BXE'               , &  ! Data Name 
                       grid%em_u_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BYS'               , &  ! Data Name 
                       grid%em_u_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BYS memorder YSZ' , & ! Debug message
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BYE'               , &  ! Data Name 
                       grid%em_u_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BYE memorder YEZ' , & ! Debug message
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BTXS'               , &  ! Data Name 
                       grid%em_u_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BTXE'               , &  ! Data Name 
                       grid%em_u_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BTYS'               , &  ! Data Name 
                       grid%em_u_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BTYS memorder YSZ' , & ! Debug message
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RU_BTYE'               , &  ! Data Name 
                       grid%em_u_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'X'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RU_BTYE memorder YEZ' , & ! Debug message
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, ide, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BXS'               , &  ! Data Name 
                       grid%em_v_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BXS memorder XSZ' , & ! Debug message
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BXE'               , &  ! Data Name 
                       grid%em_v_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BXE memorder XEZ' , & ! Debug message
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BYS'               , &  ! Data Name 
                       grid%em_v_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BYE'               , &  ! Data Name 
                       grid%em_v_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BTXS'               , &  ! Data Name 
                       grid%em_v_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BTXS memorder XSZ' , & ! Debug message
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BTXE'               , &  ! Data Name 
                       grid%em_v_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BTXE memorder XEZ' , & ! Debug message
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, jde, kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BTYS'               , &  ! Data Name 
                       grid%em_v_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RV_BTYE'               , &  ! Data Name 
                       grid%em_v_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Y'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RV_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BXS'               , &  ! Data Name 
                       grid%em_w_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BXE'               , &  ! Data Name 
                       grid%em_w_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BYS'               , &  ! Data Name 
                       grid%em_w_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BYE'               , &  ! Data Name 
                       grid%em_w_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BTXS'               , &  ! Data Name 
                       grid%em_w_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BTXE'               , &  ! Data Name 
                       grid%em_w_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BTYS'               , &  ! Data Name 
                       grid%em_w_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RW_BTYE'               , &  ! Data Name 
                       grid%em_w_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RW_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BXS'               , &  ! Data Name 
                       grid%em_ph_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BXE'               , &  ! Data Name 
                       grid%em_ph_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BYS'               , &  ! Data Name 
                       grid%em_ph_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BYE'               , &  ! Data Name 
                       grid%em_ph_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BTXS'               , &  ! Data Name 
                       grid%em_ph_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BTXE'               , &  ! Data Name 
                       grid%em_ph_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BTYS'               , &  ! Data Name 
                       grid%em_ph_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'PH_BTYE'               , &  ! Data Name 
                       grid%em_ph_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       'Z'               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field PH_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, kde, 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BXS'               , &  ! Data Name 
                       grid%em_t_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BXE'               , &  ! Data Name 
                       grid%em_t_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BYS'               , &  ! Data Name 
                       grid%em_t_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BYE'               , &  ! Data Name 
                       grid%em_t_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BTXS'               , &  ! Data Name 
                       grid%em_t_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BTXE'               , &  ! Data Name 
                       grid%em_t_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BTYS'               , &  ! Data Name 
                       grid%em_t_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'T_BTYE'               , &  ! Data Name 
                       grid%em_t_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field T_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BXS'               , &  ! Data Name 
                       grid%em_mu_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XS'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BXS memorder XS' , & ! Debug message
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BXE'               , &  ! Data Name 
                       grid%em_mu_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XE'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BXE memorder XE' , & ! Debug message
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BYS'               , &  ! Data Name 
                       grid%em_mu_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YS'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BYS memorder YS' , & ! Debug message
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BYE'               , &  ! Data Name 
                       grid%em_mu_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YE'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BYE memorder YE' , & ! Debug message
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BTXS'               , &  ! Data Name 
                       grid%em_mu_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XS'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BTXS memorder XS' , & ! Debug message
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BTXE'               , &  ! Data Name 
                       grid%em_mu_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XE'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BTXE memorder XE' , & ! Debug message
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (jde-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BTYS'               , &  ! Data Name 
                       grid%em_mu_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YS'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BTYS memorder YS' , & ! Debug message
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'MU_BTYE'               , &  ! Data Name 
                       grid%em_mu_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YE'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field MU_BTYE memorder YE' , & ! Debug message
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
1, MAX( ide , jde ), 1, config_flags%spec_bdy_width, 1, 1, &
1, (ide-1), 1, config_flags%spec_bdy_width, 1, 1, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BXS'               , &  ! Data Name 
                       grid%em_rqv_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BXE'               , &  ! Data Name 
                       grid%em_rqv_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BYS'               , &  ! Data Name 
                       grid%em_rqv_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BYE'               , &  ! Data Name 
                       grid%em_rqv_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BTXS'               , &  ! Data Name 
                       grid%em_rqv_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BTXE'               , &  ! Data Name 
                       grid%em_rqv_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BTYS'               , &  ! Data Name 
                       grid%em_rqv_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
IF ( grid%dyn_opt .EQ. dyn_em ) THEN
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQV_BTYE'               , &  ! Data Name 
                       grid%em_rqv_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQV_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
END IF
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BXS'               , &  ! Data Name 
                       grid%rqc_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BXE'               , &  ! Data Name 
                       grid%rqc_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BYS'               , &  ! Data Name 
                       grid%rqc_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BYE'               , &  ! Data Name 
                       grid%rqc_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BTXS'               , &  ! Data Name 
                       grid%rqc_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BTXE'               , &  ! Data Name 
                       grid%rqc_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BTYS'               , &  ! Data Name 
                       grid%rqc_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQC_BTYE'               , &  ! Data Name 
                       grid%rqc_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQC_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BXS'               , &  ! Data Name 
                       grid%rqr_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BXE'               , &  ! Data Name 
                       grid%rqr_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BYS'               , &  ! Data Name 
                       grid%rqr_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BYE'               , &  ! Data Name 
                       grid%rqr_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BTXS'               , &  ! Data Name 
                       grid%rqr_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BTXE'               , &  ! Data Name 
                       grid%rqr_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BTYS'               , &  ! Data Name 
                       grid%rqr_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQR_BTYE'               , &  ! Data Name 
                       grid%rqr_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQR_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BXS'               , &  ! Data Name 
                       grid%rqi_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BXE'               , &  ! Data Name 
                       grid%rqi_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BYS'               , &  ! Data Name 
                       grid%rqi_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BYE'               , &  ! Data Name 
                       grid%rqi_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BTXS'               , &  ! Data Name 
                       grid%rqi_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BTXE'               , &  ! Data Name 
                       grid%rqi_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BTYS'               , &  ! Data Name 
                       grid%rqi_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQI_BTYE'               , &  ! Data Name 
                       grid%rqi_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQI_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BXS'               , &  ! Data Name 
                       grid%rqs_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BXE'               , &  ! Data Name 
                       grid%rqs_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BYS'               , &  ! Data Name 
                       grid%rqs_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BYE'               , &  ! Data Name 
                       grid%rqs_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BTXS'               , &  ! Data Name 
                       grid%rqs_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BTXE'               , &  ! Data Name 
                       grid%rqs_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BTYS'               , &  ! Data Name 
                       grid%rqs_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQS_BTYE'               , &  ! Data Name 
                       grid%rqs_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQS_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BXS'               , &  ! Data Name 
                       grid%rqg_b(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BXE'               , &  ! Data Name 
                       grid%rqg_b(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BYS'               , &  ! Data Name 
                       grid%rqg_b(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BYE'               , &  ! Data Name 
                       grid%rqg_b(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BTXS'               , &  ! Data Name 
                       grid%rqg_bt(1,kds,1,1)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BTXS memorder XSZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BTXE'               , &  ! Data Name 
                       grid%rqg_bt(1,kds,1,2)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'XEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BTXE memorder XEZ' , & ! Debug message
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (jde-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BTYS'               , &  ! Data Name 
                       grid%rqg_bt(1,kds,1,3)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YSZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BTYS memorder YSZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
CALL wrf_ext_read_field (  &
                       fid                , &  ! DataHandle 
                       current_date(1:19) , &  ! DateStr 
                       'RQG_BTYE'               , &  ! Data Name 
                       grid%rqg_bt(1,kds,1,4)     , &  ! Field 
                       WRF_real             , &  ! FieldType 
                       grid%communicator , &  ! Comm
                       grid%iocommunicator , &  ! Comm
                       grid%domdesc      , &  ! Comm
                       grid%bdy_mask     , &  ! bdy_mask
                       'YEZ'               , &  ! MemoryOrder
                       ''               , &  ! Stagger
'inc/wrf_bdyin.inc ext_read_field RQG_BTYE memorder YEZ' , & ! Debug message
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
1, MAX( ide , jde ), kds, kde, 1, config_flags%spec_bdy_width, &
1, (ide-1), kds, (kde-1), 1, config_flags%spec_bdy_width, &
                       ierr )
!ENDOFREGISTRYGENERATEDINCLUDE

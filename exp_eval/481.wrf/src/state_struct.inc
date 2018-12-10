!STARTOFREGISTRYGENERATEDINCLUDE 'inc/state_struct.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
real                                     :: cfn
real                                     :: cfn1
real                                     :: epsts
integer                                  :: step_number
real                                     :: rdx
real                                     :: rdy
real                                     :: dts
real                                     :: dtseps
real                                     :: resm
real                                     :: zetatop
real                                     :: cf1
real                                     :: cf2
real                                     :: cf3
integer                                  :: number_at_same_level
integer                                  :: itimestep
integer                                  :: oid
integer                                  :: auxhist1_oid
integer                                  :: auxhist2_oid
integer                                  :: auxhist3_oid
integer                                  :: auxhist4_oid
integer                                  :: auxhist5_oid
integer                                  :: auxinput1_oid
integer                                  :: auxinput2_oid
integer                                  :: auxinput3_oid
integer                                  :: auxinput4_oid
integer                                  :: auxinput5_oid
integer                                  :: nframes
integer                                  :: lbc_fid
logical                                  :: tiled
logical                                  :: patched
logical                                  :: write_metadata
real                                     :: dtbc
integer                                  :: ifndsnowh
integer                                  :: ifndsoilw
real                                     :: u_frame
real                                     :: v_frame
real                                     :: p_top
integer                                  :: stepcu
integer                                  :: stepra
integer                                  :: stepbl
logical                                  :: warm_rain
integer                                  :: run_days
integer                                  :: run_hours
integer                                  :: run_minutes
integer                                  :: run_seconds
integer                                  :: start_year
integer                                  :: start_month
integer                                  :: start_day
integer                                  :: start_hour
integer                                  :: start_minute
integer                                  :: start_second
integer                                  :: end_year
integer                                  :: end_month
integer                                  :: end_day
integer                                  :: end_hour
integer                                  :: end_minute
integer                                  :: end_second
integer                                  :: interval_seconds
logical                                  :: input_from_file
integer                                  :: history_interval
integer                                  :: frames_per_outfile
logical                                  :: restart
integer                                  :: restart_interval
integer                                  :: io_form_input
integer                                  :: io_form_history
integer                                  :: io_form_restart
integer                                  :: io_form_boundary
integer                                  :: debug_level
character*256                               :: history_outname
character*256                               :: auxhist1_outname
character*256                               :: auxhist2_outname
character*256                               :: auxhist3_outname
character*256                               :: auxhist4_outname
character*256                               :: auxhist5_outname
character*256                               :: history_inname
character*256                               :: auxhist1_inname
character*256                               :: auxhist2_inname
character*256                               :: auxhist3_inname
character*256                               :: auxhist4_inname
character*256                               :: auxhist5_inname
integer                                  :: history_interval_mo
integer                                  :: history_interval_d
integer                                  :: history_interval_h
integer                                  :: history_interval_m
integer                                  :: history_interval_s
integer                                  :: inputout_interval_mo
integer                                  :: inputout_interval_d
integer                                  :: inputout_interval_h
integer                                  :: inputout_interval_m
integer                                  :: inputout_interval_s
integer                                  :: inputout_interval
integer                                  :: auxhist1_interval_mo
integer                                  :: auxhist1_interval_d
integer                                  :: auxhist1_interval_h
integer                                  :: auxhist1_interval_m
integer                                  :: auxhist1_interval_s
integer                                  :: auxhist1_interval
integer                                  :: auxhist2_interval_mo
integer                                  :: auxhist2_interval_d
integer                                  :: auxhist2_interval_h
integer                                  :: auxhist2_interval_m
integer                                  :: auxhist2_interval_s
integer                                  :: auxhist2_interval
integer                                  :: auxhist3_interval_mo
integer                                  :: auxhist3_interval_d
integer                                  :: auxhist3_interval_h
integer                                  :: auxhist3_interval_m
integer                                  :: auxhist3_interval_s
integer                                  :: auxhist3_interval
integer                                  :: auxhist4_interval_mo
integer                                  :: auxhist4_interval_d
integer                                  :: auxhist4_interval_h
integer                                  :: auxhist4_interval_m
integer                                  :: auxhist4_interval_s
integer                                  :: auxhist4_interval
integer                                  :: auxhist5_interval_mo
integer                                  :: auxhist5_interval_d
integer                                  :: auxhist5_interval_h
integer                                  :: auxhist5_interval_m
integer                                  :: auxhist5_interval_s
integer                                  :: auxhist5_interval
integer                                  :: auxinput1_interval_mo
integer                                  :: auxinput1_interval_d
integer                                  :: auxinput1_interval_h
integer                                  :: auxinput1_interval_m
integer                                  :: auxinput1_interval_s
integer                                  :: auxinput1_interval
integer                                  :: auxinput2_interval_mo
integer                                  :: auxinput2_interval_d
integer                                  :: auxinput2_interval_h
integer                                  :: auxinput2_interval_m
integer                                  :: auxinput2_interval_s
integer                                  :: auxinput2_interval
integer                                  :: auxinput3_interval_mo
integer                                  :: auxinput3_interval_d
integer                                  :: auxinput3_interval_h
integer                                  :: auxinput3_interval_m
integer                                  :: auxinput3_interval_s
integer                                  :: auxinput3_interval
integer                                  :: auxinput4_interval_mo
integer                                  :: auxinput4_interval_d
integer                                  :: auxinput4_interval_h
integer                                  :: auxinput4_interval_m
integer                                  :: auxinput4_interval_s
integer                                  :: auxinput4_interval
integer                                  :: auxinput5_interval_mo
integer                                  :: auxinput5_interval_d
integer                                  :: auxinput5_interval_h
integer                                  :: auxinput5_interval_m
integer                                  :: auxinput5_interval_s
integer                                  :: auxinput5_interval
integer                                  :: restart_interval_mo
integer                                  :: restart_interval_d
integer                                  :: restart_interval_h
integer                                  :: restart_interval_m
integer                                  :: restart_interval_s
integer                                  :: history_begin_y
integer                                  :: history_begin_mo
integer                                  :: history_begin_d
integer                                  :: history_begin_h
integer                                  :: history_begin_m
integer                                  :: history_begin_s
integer                                  :: inputout_begin_y
integer                                  :: inputout_begin_mo
integer                                  :: inputout_begin_d
integer                                  :: inputout_begin_h
integer                                  :: inputout_begin_m
integer                                  :: inputout_begin_s
integer                                  :: auxhist1_begin_y
integer                                  :: auxhist1_begin_mo
integer                                  :: auxhist1_begin_d
integer                                  :: auxhist1_begin_h
integer                                  :: auxhist1_begin_m
integer                                  :: auxhist1_begin_s
integer                                  :: auxhist2_begin_y
integer                                  :: auxhist2_begin_mo
integer                                  :: auxhist2_begin_d
integer                                  :: auxhist2_begin_h
integer                                  :: auxhist2_begin_m
integer                                  :: auxhist2_begin_s
integer                                  :: auxhist3_begin_y
integer                                  :: auxhist3_begin_mo
integer                                  :: auxhist3_begin_d
integer                                  :: auxhist3_begin_h
integer                                  :: auxhist3_begin_m
integer                                  :: auxhist3_begin_s
integer                                  :: auxhist4_begin_y
integer                                  :: auxhist4_begin_mo
integer                                  :: auxhist4_begin_d
integer                                  :: auxhist4_begin_h
integer                                  :: auxhist4_begin_m
integer                                  :: auxhist4_begin_s
integer                                  :: auxhist5_begin_y
integer                                  :: auxhist5_begin_mo
integer                                  :: auxhist5_begin_d
integer                                  :: auxhist5_begin_h
integer                                  :: auxhist5_begin_m
integer                                  :: auxhist5_begin_s
integer                                  :: auxinput1_begin_y
integer                                  :: auxinput1_begin_mo
integer                                  :: auxinput1_begin_d
integer                                  :: auxinput1_begin_h
integer                                  :: auxinput1_begin_m
integer                                  :: auxinput1_begin_s
integer                                  :: auxinput2_begin_y
integer                                  :: auxinput2_begin_mo
integer                                  :: auxinput2_begin_d
integer                                  :: auxinput2_begin_h
integer                                  :: auxinput2_begin_m
integer                                  :: auxinput2_begin_s
integer                                  :: auxinput3_begin_y
integer                                  :: auxinput3_begin_mo
integer                                  :: auxinput3_begin_d
integer                                  :: auxinput3_begin_h
integer                                  :: auxinput3_begin_m
integer                                  :: auxinput3_begin_s
integer                                  :: auxinput4_begin_y
integer                                  :: auxinput4_begin_mo
integer                                  :: auxinput4_begin_d
integer                                  :: auxinput4_begin_h
integer                                  :: auxinput4_begin_m
integer                                  :: auxinput4_begin_s
integer                                  :: auxinput5_begin_y
integer                                  :: auxinput5_begin_mo
integer                                  :: auxinput5_begin_d
integer                                  :: auxinput5_begin_h
integer                                  :: auxinput5_begin_m
integer                                  :: auxinput5_begin_s
integer                                  :: restart_begin_y
integer                                  :: restart_begin_mo
integer                                  :: restart_begin_d
integer                                  :: restart_begin_h
integer                                  :: restart_begin_m
integer                                  :: restart_begin_s
integer                                  :: history_end_y
integer                                  :: history_end_mo
integer                                  :: history_end_d
integer                                  :: history_end_h
integer                                  :: history_end_m
integer                                  :: history_end_s
integer                                  :: inputout_end_y
integer                                  :: inputout_end_mo
integer                                  :: inputout_end_d
integer                                  :: inputout_end_h
integer                                  :: inputout_end_m
integer                                  :: inputout_end_s
integer                                  :: auxhist1_end_y
integer                                  :: auxhist1_end_mo
integer                                  :: auxhist1_end_d
integer                                  :: auxhist1_end_h
integer                                  :: auxhist1_end_m
integer                                  :: auxhist1_end_s
integer                                  :: auxhist2_end_y
integer                                  :: auxhist2_end_mo
integer                                  :: auxhist2_end_d
integer                                  :: auxhist2_end_h
integer                                  :: auxhist2_end_m
integer                                  :: auxhist2_end_s
integer                                  :: auxhist3_end_y
integer                                  :: auxhist3_end_mo
integer                                  :: auxhist3_end_d
integer                                  :: auxhist3_end_h
integer                                  :: auxhist3_end_m
integer                                  :: auxhist3_end_s
integer                                  :: auxhist4_end_y
integer                                  :: auxhist4_end_mo
integer                                  :: auxhist4_end_d
integer                                  :: auxhist4_end_h
integer                                  :: auxhist4_end_m
integer                                  :: auxhist4_end_s
integer                                  :: auxhist5_end_y
integer                                  :: auxhist5_end_mo
integer                                  :: auxhist5_end_d
integer                                  :: auxhist5_end_h
integer                                  :: auxhist5_end_m
integer                                  :: auxhist5_end_s
integer                                  :: auxinput1_end_y
integer                                  :: auxinput1_end_mo
integer                                  :: auxinput1_end_d
integer                                  :: auxinput1_end_h
integer                                  :: auxinput1_end_m
integer                                  :: auxinput1_end_s
integer                                  :: auxinput2_end_y
integer                                  :: auxinput2_end_mo
integer                                  :: auxinput2_end_d
integer                                  :: auxinput2_end_h
integer                                  :: auxinput2_end_m
integer                                  :: auxinput2_end_s
integer                                  :: auxinput3_end_y
integer                                  :: auxinput3_end_mo
integer                                  :: auxinput3_end_d
integer                                  :: auxinput3_end_h
integer                                  :: auxinput3_end_m
integer                                  :: auxinput3_end_s
integer                                  :: auxinput4_end_y
integer                                  :: auxinput4_end_mo
integer                                  :: auxinput4_end_d
integer                                  :: auxinput4_end_h
integer                                  :: auxinput4_end_m
integer                                  :: auxinput4_end_s
integer                                  :: auxinput5_end_y
integer                                  :: auxinput5_end_mo
integer                                  :: auxinput5_end_d
integer                                  :: auxinput5_end_h
integer                                  :: auxinput5_end_m
integer                                  :: auxinput5_end_s
integer                                  :: io_form_auxinput1
integer                                  :: io_form_auxinput2
integer                                  :: io_form_auxinput3
integer                                  :: io_form_auxinput4
integer                                  :: io_form_auxinput5
integer                                  :: io_form_auxhist1
integer                                  :: io_form_auxhist2
integer                                  :: io_form_auxhist3
integer                                  :: io_form_auxhist4
integer                                  :: io_form_auxhist5
integer                                  :: julyr
integer                                  :: julday
real                                     :: gmt
character*256                               :: input_inname
character*256                               :: input_outname
character*256                               :: bdy_inname
character*256                               :: bdy_outname
character*256                               :: rst_inname
character*256                               :: rst_outname
logical                                  :: write_input
logical                                  :: write_restart_at_0h
integer                                  :: time_step
integer                                  :: time_step_fract_num
integer                                  :: time_step_fract_den
integer                                  :: max_dom
integer                                  :: s_we
integer                                  :: e_we
integer                                  :: s_sn
integer                                  :: e_sn
integer                                  :: s_vert
integer                                  :: e_vert
real                                     :: dx
real                                     :: dy
integer                                  :: grid_id
integer                                  :: parent_id
integer                                  :: level
integer                                  :: i_parent_start
integer                                  :: j_parent_start
integer                                  :: parent_grid_ratio
integer                                  :: parent_time_step_ratio
integer                                  :: feedback
integer                                  :: smooth_option
real                                     :: ztop
integer                                  :: moad_grid_ratio
integer                                  :: moad_time_step_ratio
integer                                  :: shw
integer                                  :: tile_sz_x
integer                                  :: tile_sz_y
integer                                  :: numtiles
integer                                  :: nproc_x
integer                                  :: nproc_y
integer                                  :: irand
real                                     :: dt
integer                                  :: mp_physics
integer                                  :: ra_lw_physics
integer                                  :: ra_sw_physics
real                                     :: radt
integer                                  :: sf_sfclay_physics
integer                                  :: sf_surface_physics
integer                                  :: bl_pbl_physics
real                                     :: bldt
integer                                  :: cu_physics
real                                     :: cudt
real                                     :: gsmdt
integer                                  :: isfflx
integer                                  :: ifsnow
integer                                  :: icloud
integer                                  :: surface_input_source
integer                                  :: num_soil_layers
integer                                  :: maxiens
integer                                  :: maxens
integer                                  :: maxens2
integer                                  :: maxens3
integer                                  :: ensdim
integer                                  :: chem_opt
integer                                  :: num_land_cat
integer                                  :: num_soil_cat
integer                                  :: dyn_opt
integer                                  :: rk_ord
integer                                  :: w_damping
integer                                  :: diff_opt
integer                                  :: km_opt
integer                                  :: damp_opt
real                                     :: zdamp
real                                     :: dampcoef
real                                     :: khdif
real                                     :: kvdif
real                                     :: smdiv
real                                     :: emdiv
real                                     :: epssm
logical                                  :: non_hydrostatic
integer                                  :: time_step_sound
integer                                  :: h_mom_adv_order
integer                                  :: v_mom_adv_order
integer                                  :: h_sca_adv_order
integer                                  :: v_sca_adv_order
logical                                  :: top_radiation
real                                     :: mix_cr_len
real                                     :: tke_upper_bound
real                                     :: kh_tke_upper_bound
real                                     :: kv_tke_upper_bound
real                                     :: tke_drag_coefficient
real                                     :: tke_heat_flux
logical                                  :: pert_coriolis
integer                                  :: spec_bdy_width
integer                                  :: spec_zone
integer                                  :: relax_zone
logical                                  :: specified
logical                                  :: periodic_x
logical                                  :: symmetric_xs
logical                                  :: symmetric_xe
logical                                  :: open_xs
logical                                  :: open_xe
logical                                  :: periodic_y
logical                                  :: symmetric_ys
logical                                  :: symmetric_ye
logical                                  :: open_ys
logical                                  :: open_ye
logical                                  :: nested
integer                                  :: real_data_init_type
real                                     :: cen_lat
real                                     :: cen_lon
real                                     :: truelat1
real                                     :: truelat2
real                                     :: moad_cen_lat
real                                     :: stand_lon
real                                     :: bdyfrq
integer                                  :: iswater
integer                                  :: isice
integer                                  :: isurban
integer                                  :: isoilwater
integer                                  :: map_proj
real      ,DIMENSION(:,:)     ,POINTER   :: lu_index
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_u_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_u_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_ru
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_v_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_v_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_rv
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_w_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_w_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_ww
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_rw
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_ph_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_ph_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_phb
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_phb_fine
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_ph0
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_php
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_t_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_t_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_t_init
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_tp_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_tp_2
real      ,DIMENSION(:,:)     ,POINTER   :: em_mu_1
real      ,DIMENSION(:,:)     ,POINTER   :: em_mu_2
real      ,DIMENSION(:,:)     ,POINTER   :: em_mub
real      ,DIMENSION(:,:)     ,POINTER   :: em_mub_fine
real      ,DIMENSION(:,:)     ,POINTER   :: em_mu0
real      ,DIMENSION(:,:)     ,POINTER   :: em_mudf
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_tke_1
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_tke_2
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_p
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_al
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_alt
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_alb
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_zx
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_zy
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_rdz
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_rdzw
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_pb
real      ,DIMENSION(:)       ,POINTER   :: em_fnm
real      ,DIMENSION(:)       ,POINTER   :: em_fnp
real      ,DIMENSION(:)       ,POINTER   :: em_rdnw
real      ,DIMENSION(:)       ,POINTER   :: em_rdn
real      ,DIMENSION(:)       ,POINTER   :: em_dnw
real      ,DIMENSION(:)       ,POINTER   :: em_dn
real      ,DIMENSION(:)       ,POINTER   :: em_znu
real      ,DIMENSION(:)       ,POINTER   :: em_znw
real      ,DIMENSION(:)       ,POINTER   :: em_t_base
real      ,DIMENSION(:,:,:)   ,POINTER   :: em_z
real      ,DIMENSION(:,:)     ,POINTER   :: q2
real      ,DIMENSION(:,:)     ,POINTER   :: t2
real      ,DIMENSION(:,:)     ,POINTER   :: th2
real      ,DIMENSION(:,:)     ,POINTER   :: psfc
real      ,DIMENSION(:,:)     ,POINTER   :: u10
real      ,DIMENSION(:,:)     ,POINTER   :: v10
integer   ,DIMENSION(:,:)     ,POINTER   :: imask
real      ,DIMENSION(:,:,:,:) ,POINTER   :: moist_1
real      ,DIMENSION(:,:,:,:) ,POINTER   :: moist_2
real      ,DIMENSION(:,:,:,:) ,POINTER   :: chem_1
real      ,DIMENSION(:,:,:,:) ,POINTER   :: chem_2
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_u_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_u_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_v_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_v_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_w_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_w_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_ph_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_ph_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_t_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_t_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_mu_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_mu_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_rqv_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: em_rqv_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqc_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqc_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqr_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqr_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqi_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqi_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqs_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqs_bt
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqg_b
real      ,DIMENSION(:,:,:,:) ,POINTER   :: rqg_bt
real      ,DIMENSION(:)       ,POINTER   :: fcx
real      ,DIMENSION(:)       ,POINTER   :: gcx
real      ,DIMENSION(:,:)     ,POINTER   :: sm000010
real      ,DIMENSION(:,:)     ,POINTER   :: sm010040
real      ,DIMENSION(:,:)     ,POINTER   :: sm040100
real      ,DIMENSION(:,:)     ,POINTER   :: sm100200
real      ,DIMENSION(:,:)     ,POINTER   :: sm010200
real      ,DIMENSION(:,:)     ,POINTER   :: soilm000
real      ,DIMENSION(:,:)     ,POINTER   :: soilm005
real      ,DIMENSION(:,:)     ,POINTER   :: soilm020
real      ,DIMENSION(:,:)     ,POINTER   :: soilm040
real      ,DIMENSION(:,:)     ,POINTER   :: soilm160
real      ,DIMENSION(:,:)     ,POINTER   :: soilm300
real      ,DIMENSION(:,:)     ,POINTER   :: sw000010
real      ,DIMENSION(:,:)     ,POINTER   :: sw010040
real      ,DIMENSION(:,:)     ,POINTER   :: sw040100
real      ,DIMENSION(:,:)     ,POINTER   :: sw100200
real      ,DIMENSION(:,:)     ,POINTER   :: sw010200
real      ,DIMENSION(:,:)     ,POINTER   :: soilw000
real      ,DIMENSION(:,:)     ,POINTER   :: soilw005
real      ,DIMENSION(:,:)     ,POINTER   :: soilw020
real      ,DIMENSION(:,:)     ,POINTER   :: soilw040
real      ,DIMENSION(:,:)     ,POINTER   :: soilw160
real      ,DIMENSION(:,:)     ,POINTER   :: soilw300
real      ,DIMENSION(:,:)     ,POINTER   :: st000010
real      ,DIMENSION(:,:)     ,POINTER   :: st010040
real      ,DIMENSION(:,:)     ,POINTER   :: st040100
real      ,DIMENSION(:,:)     ,POINTER   :: st100200
real      ,DIMENSION(:,:)     ,POINTER   :: st010200
real      ,DIMENSION(:,:)     ,POINTER   :: soilt000
real      ,DIMENSION(:,:)     ,POINTER   :: soilt005
real      ,DIMENSION(:,:)     ,POINTER   :: soilt020
real      ,DIMENSION(:,:)     ,POINTER   :: soilt040
real      ,DIMENSION(:,:)     ,POINTER   :: soilt160
real      ,DIMENSION(:,:)     ,POINTER   :: soilt300
real      ,DIMENSION(:,:)     ,POINTER   :: landmask
real      ,DIMENSION(:,:)     ,POINTER   :: topostdv
real      ,DIMENSION(:,:)     ,POINTER   :: toposlpx
real      ,DIMENSION(:,:)     ,POINTER   :: toposlpy
real      ,DIMENSION(:,:)     ,POINTER   :: shdmax
real      ,DIMENSION(:,:)     ,POINTER   :: shdmin
real      ,DIMENSION(:,:)     ,POINTER   :: snoalb
real      ,DIMENSION(:,:)     ,POINTER   :: slopecat
real      ,DIMENSION(:,:)     ,POINTER   :: toposoil
real      ,DIMENSION(:,:,:)   ,POINTER   :: landusef
real      ,DIMENSION(:,:,:)   ,POINTER   :: soilctop
real      ,DIMENSION(:,:,:)   ,POINTER   :: soilcbot
real      ,DIMENSION(:,:)     ,POINTER   :: soilcat
real      ,DIMENSION(:,:)     ,POINTER   :: vegcat
real      ,DIMENSION(:,:,:)   ,POINTER   :: tslb
real      ,DIMENSION(:)       ,POINTER   :: zs
real      ,DIMENSION(:)       ,POINTER   :: dzs
real      ,DIMENSION(:,:,:)   ,POINTER   :: smois
real      ,DIMENSION(:,:,:)   ,POINTER   :: sh2o
real      ,DIMENSION(:,:)     ,POINTER   :: xice
real      ,DIMENSION(:,:)     ,POINTER   :: smstav
real      ,DIMENSION(:,:)     ,POINTER   :: smstot
real      ,DIMENSION(:,:)     ,POINTER   :: sfcrunoff
real      ,DIMENSION(:,:)     ,POINTER   :: udrunoff
integer   ,DIMENSION(:,:)     ,POINTER   :: ivgtyp
integer   ,DIMENSION(:,:)     ,POINTER   :: isltyp
real      ,DIMENSION(:,:)     ,POINTER   :: vegfra
real      ,DIMENSION(:,:)     ,POINTER   :: sfcevp
real      ,DIMENSION(:,:)     ,POINTER   :: grdflx
real      ,DIMENSION(:,:)     ,POINTER   :: sfcexc
real      ,DIMENSION(:,:)     ,POINTER   :: acsnow
real      ,DIMENSION(:,:)     ,POINTER   :: acsnom
real      ,DIMENSION(:,:)     ,POINTER   :: snow
real      ,DIMENSION(:,:)     ,POINTER   :: snowh
real      ,DIMENSION(:,:)     ,POINTER   :: canwat
real      ,DIMENSION(:,:)     ,POINTER   :: sst
real      ,DIMENSION(:,:,:)   ,POINTER   :: smfr3d
real      ,DIMENSION(:,:,:)   ,POINTER   :: keepfr3dflag
real      ,DIMENSION(:,:)     ,POINTER   :: potevp
real      ,DIMENSION(:,:)     ,POINTER   :: snopcx
real      ,DIMENSION(:,:)     ,POINTER   :: soiltb
real      ,DIMENSION(:,:,:)   ,POINTER   :: tke_myj
real      ,DIMENSION(:,:)     ,POINTER   :: ct
real      ,DIMENSION(:,:)     ,POINTER   :: thz0
real      ,DIMENSION(:,:)     ,POINTER   :: z0
real      ,DIMENSION(:,:)     ,POINTER   :: qz0
real      ,DIMENSION(:,:)     ,POINTER   :: uz0
real      ,DIMENSION(:,:)     ,POINTER   :: vz0
real      ,DIMENSION(:,:)     ,POINTER   :: qsfc
real      ,DIMENSION(:,:)     ,POINTER   :: akhs
real      ,DIMENSION(:,:)     ,POINTER   :: akms
integer   ,DIMENSION(:,:)     ,POINTER   :: kpbl
real      ,DIMENSION(:,:)     ,POINTER   :: htop
real      ,DIMENSION(:,:)     ,POINTER   :: hbot
real      ,DIMENSION(:,:)     ,POINTER   :: cuppt
real      ,DIMENSION(:,:)     ,POINTER   :: totswdn
real      ,DIMENSION(:,:)     ,POINTER   :: totlwdn
real      ,DIMENSION(:,:)     ,POINTER   :: rswtoa
real      ,DIMENSION(:,:)     ,POINTER   :: rlwtoa
real      ,DIMENSION(:,:)     ,POINTER   :: czmean
real      ,DIMENSION(:,:)     ,POINTER   :: cfracl
real      ,DIMENSION(:,:)     ,POINTER   :: cfracm
real      ,DIMENSION(:,:)     ,POINTER   :: cfrach
real      ,DIMENSION(:,:)     ,POINTER   :: acfrst
integer   ,DIMENSION(:,:)     ,POINTER   :: ncfrst
real      ,DIMENSION(:,:)     ,POINTER   :: acfrcv
integer   ,DIMENSION(:,:)     ,POINTER   :: ncfrcv
real      ,DIMENSION(:,:,:)   ,POINTER   :: f_ice_phy
real      ,DIMENSION(:,:,:)   ,POINTER   :: f_rain_phy
real      ,DIMENSION(:,:,:)   ,POINTER   :: f_rimef_phy
real      ,DIMENSION(:,:,:)   ,POINTER   :: h_diabatic
real      ,DIMENSION(:,:)     ,POINTER   :: msft
real      ,DIMENSION(:,:)     ,POINTER   :: msfu
real      ,DIMENSION(:,:)     ,POINTER   :: msfv
real      ,DIMENSION(:,:)     ,POINTER   :: f
real      ,DIMENSION(:,:)     ,POINTER   :: e
real      ,DIMENSION(:,:)     ,POINTER   :: sina
real      ,DIMENSION(:,:)     ,POINTER   :: cosa
real      ,DIMENSION(:,:)     ,POINTER   :: ht
real      ,DIMENSION(:,:)     ,POINTER   :: ht_fine
real      ,DIMENSION(:,:)     ,POINTER   :: ht_int
real      ,DIMENSION(:,:)     ,POINTER   :: ht_input
real      ,DIMENSION(:,:)     ,POINTER   :: tsk
real      ,DIMENSION(:)       ,POINTER   :: u_base
real      ,DIMENSION(:)       ,POINTER   :: v_base
real      ,DIMENSION(:)       ,POINTER   :: qv_base
real      ,DIMENSION(:)       ,POINTER   :: z_base
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthcuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqvcuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqrcuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqccuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqscuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqicuten
real      ,DIMENSION(:,:,:)   ,POINTER   :: w0avg
real      ,DIMENSION(:,:)     ,POINTER   :: rainc
real      ,DIMENSION(:,:)     ,POINTER   :: rainnc
real      ,DIMENSION(:,:)     ,POINTER   :: raincv
real      ,DIMENSION(:,:)     ,POINTER   :: rainncv
real      ,DIMENSION(:,:)     ,POINTER   :: rainbl
real      ,DIMENSION(:,:)     ,POINTER   :: nca
integer   ,DIMENSION(:,:)     ,POINTER   :: lowlyr
real      ,DIMENSION(:,:)     ,POINTER   :: mass_flux
real      ,DIMENSION(:,:)     ,POINTER   :: apr_gr
real      ,DIMENSION(:,:)     ,POINTER   :: apr_w
real      ,DIMENSION(:,:)     ,POINTER   :: apr_mc
real      ,DIMENSION(:,:)     ,POINTER   :: apr_st
real      ,DIMENSION(:,:)     ,POINTER   :: apr_as
real      ,DIMENSION(:,:)     ,POINTER   :: apr_capma
real      ,DIMENSION(:,:)     ,POINTER   :: apr_capme
real      ,DIMENSION(:,:)     ,POINTER   :: apr_capmi
real      ,DIMENSION(:,:,:)   ,POINTER   :: xf_ens
real      ,DIMENSION(:,:,:)   ,POINTER   :: pr_ens
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthften
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqvften
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthraten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthratenlw
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthratensw
real      ,DIMENSION(:,:,:)   ,POINTER   :: cldfra
real      ,DIMENSION(:,:)     ,POINTER   :: swdown
real      ,DIMENSION(:,:)     ,POINTER   :: gsw
real      ,DIMENSION(:,:)     ,POINTER   :: glw
real      ,DIMENSION(:,:)     ,POINTER   :: xlat
real      ,DIMENSION(:,:)     ,POINTER   :: xlong
real      ,DIMENSION(:,:)     ,POINTER   :: albedo
real      ,DIMENSION(:,:)     ,POINTER   :: albbck
real      ,DIMENSION(:,:)     ,POINTER   :: emiss
real      ,DIMENSION(:,:)     ,POINTER   :: cldefi
real      ,DIMENSION(:,:,:)   ,POINTER   :: rublten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rvblten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rthblten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqvblten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqcblten
real      ,DIMENSION(:,:,:)   ,POINTER   :: rqiblten
real      ,DIMENSION(:,:)     ,POINTER   :: tmn
real      ,DIMENSION(:,:)     ,POINTER   :: xland
real      ,DIMENSION(:,:)     ,POINTER   :: znt
real      ,DIMENSION(:,:)     ,POINTER   :: ust
real      ,DIMENSION(:,:)     ,POINTER   :: mol
real      ,DIMENSION(:,:)     ,POINTER   :: pblh
real      ,DIMENSION(:,:)     ,POINTER   :: capg
real      ,DIMENSION(:,:)     ,POINTER   :: thc
real      ,DIMENSION(:,:)     ,POINTER   :: hfx
real      ,DIMENSION(:,:)     ,POINTER   :: qfx
real      ,DIMENSION(:,:)     ,POINTER   :: lh
real      ,DIMENSION(:,:)     ,POINTER   :: flhc
real      ,DIMENSION(:,:)     ,POINTER   :: flqc
real      ,DIMENSION(:,:)     ,POINTER   :: qsg
real      ,DIMENSION(:,:)     ,POINTER   :: qvg
real      ,DIMENSION(:,:)     ,POINTER   :: qcg
real      ,DIMENSION(:,:)     ,POINTER   :: soilt1
real      ,DIMENSION(:,:)     ,POINTER   :: tsnav
real      ,DIMENSION(:,:)     ,POINTER   :: snowc
real      ,DIMENSION(:,:)     ,POINTER   :: mavail
real      ,DIMENSION(:,:)     ,POINTER   :: tkesfcf
real      ,DIMENSION(:,:,:)   ,POINTER   :: taucldi
real      ,DIMENSION(:,:,:)   ,POINTER   :: taucldc
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor11
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor22
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor12
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor33
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor13
real      ,DIMENSION(:,:,:)   ,POINTER   :: defor23
real      ,DIMENSION(:,:,:)   ,POINTER   :: xkmv
real      ,DIMENSION(:,:,:)   ,POINTER   :: xkmh
real      ,DIMENSION(:,:,:)   ,POINTER   :: xkmhd
real      ,DIMENSION(:,:,:)   ,POINTER   :: xkhv
real      ,DIMENSION(:,:,:)   ,POINTER   :: xkhh
real      ,DIMENSION(:,:,:)   ,POINTER   :: div
real      ,DIMENSION(:,:,:)   ,POINTER   :: bn2
!ENDOFREGISTRYGENERATEDINCLUDE

!STARTOFREGISTRYGENERATEDINCLUDE 'inc/em_allocs.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
ALLOCATE(grid%lu_index(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%lu_index(sm31:em31,sm33:em33). ')
 endif
  grid%lu_index=initial_data_value
ALLOCATE(grid%em_u_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_u_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_u_1=initial_data_value
ALLOCATE(grid%em_u_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_u_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_u_2=initial_data_value
ALLOCATE(grid%em_ru(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ru(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_ru=initial_data_value
ALLOCATE(grid%em_v_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_v_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_v_1=initial_data_value
ALLOCATE(grid%em_v_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_v_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_v_2=initial_data_value
ALLOCATE(grid%em_rv(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rv(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_rv=initial_data_value
ALLOCATE(grid%em_w_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_w_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_w_1=initial_data_value
ALLOCATE(grid%em_w_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_w_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_w_2=initial_data_value
ALLOCATE(grid%em_ww(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ww(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_ww=initial_data_value
ALLOCATE(grid%em_rw(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rw(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_rw=initial_data_value
ALLOCATE(grid%em_ph_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ph_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_ph_1=initial_data_value
ALLOCATE(grid%em_ph_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ph_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_ph_2=initial_data_value
ALLOCATE(grid%em_phb(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_phb(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_phb=initial_data_value
ALLOCATE(grid%em_phb_fine(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_phb_fine(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_phb_fine=initial_data_value
ALLOCATE(grid%em_ph0(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ph0(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_ph0=initial_data_value
ALLOCATE(grid%em_php(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_php(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_php=initial_data_value
ALLOCATE(grid%em_t_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_t_1=initial_data_value
ALLOCATE(grid%em_t_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_t_2=initial_data_value
ALLOCATE(grid%em_t_init(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_init(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_t_init=initial_data_value
ALLOCATE(grid%em_tp_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_tp_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_tp_1=initial_data_value
ALLOCATE(grid%em_tp_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_tp_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_tp_2=initial_data_value
ALLOCATE(grid%em_mu_1(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mu_1(sm31:em31,sm33:em33). ')
 endif
  grid%em_mu_1=initial_data_value
ALLOCATE(grid%em_mu_2(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mu_2(sm31:em31,sm33:em33). ')
 endif
  grid%em_mu_2=initial_data_value
ALLOCATE(grid%em_mub(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mub(sm31:em31,sm33:em33). ')
 endif
  grid%em_mub=initial_data_value
ALLOCATE(grid%em_mub_fine(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mub_fine(sm31:em31,sm33:em33). ')
 endif
  grid%em_mub_fine=initial_data_value
ALLOCATE(grid%em_mu0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mu0(sm31:em31,sm33:em33). ')
 endif
  grid%em_mu0=initial_data_value
ALLOCATE(grid%em_mudf(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mudf(sm31:em31,sm33:em33). ')
 endif
  grid%em_mudf=initial_data_value
ALLOCATE(grid%em_tke_1(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_tke_1(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_tke_1=initial_data_value
ALLOCATE(grid%em_tke_2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_tke_2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_tke_2=initial_data_value
ALLOCATE(grid%em_p(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_p(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_p=initial_data_value
ALLOCATE(grid%em_al(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_al(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_al=initial_data_value
ALLOCATE(grid%em_alt(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_alt(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_alt=initial_data_value
ALLOCATE(grid%em_alb(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_alb(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_alb=initial_data_value
ALLOCATE(grid%em_zx(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_zx(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_zx=initial_data_value
ALLOCATE(grid%em_zy(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_zy(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_zy=initial_data_value
ALLOCATE(grid%em_rdz(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rdz(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_rdz=initial_data_value
ALLOCATE(grid%em_rdzw(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rdzw(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_rdzw=initial_data_value
ALLOCATE(grid%em_pb(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_pb(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_pb=initial_data_value
ALLOCATE(grid%em_fnm(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_fnm(sm32:em32). ')
 endif
  grid%em_fnm=initial_data_value
ALLOCATE(grid%em_fnp(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_fnp(sm32:em32). ')
 endif
  grid%em_fnp=initial_data_value
ALLOCATE(grid%em_rdnw(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rdnw(sm32:em32). ')
 endif
  grid%em_rdnw=initial_data_value
ALLOCATE(grid%em_rdn(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rdn(sm32:em32). ')
 endif
  grid%em_rdn=initial_data_value
ALLOCATE(grid%em_dnw(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_dnw(sm32:em32). ')
 endif
  grid%em_dnw=initial_data_value
ALLOCATE(grid%em_dn(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_dn(sm32:em32). ')
 endif
  grid%em_dn=initial_data_value
ALLOCATE(grid%em_znu(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_znu(sm32:em32). ')
 endif
  grid%em_znu=initial_data_value
ALLOCATE(grid%em_znw(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_znw(sm32:em32). ')
 endif
  grid%em_znw=initial_data_value
ALLOCATE(grid%em_t_base(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_base(sm32:em32). ')
 endif
  grid%em_t_base=initial_data_value
ALLOCATE(grid%em_z(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_z(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%em_z=initial_data_value
grid%cfn=initial_data_value
grid%cfn1=initial_data_value
grid%epsts=initial_data_value
grid%step_number=0
ALLOCATE(grid%q2(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%q2(sm31:em31,sm33:em33). ')
 endif
  grid%q2=initial_data_value
ALLOCATE(grid%t2(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%t2(sm31:em31,sm33:em33). ')
 endif
  grid%t2=initial_data_value
ALLOCATE(grid%th2(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%th2(sm31:em31,sm33:em33). ')
 endif
  grid%th2=initial_data_value
ALLOCATE(grid%psfc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%psfc(sm31:em31,sm33:em33). ')
 endif
  grid%psfc=initial_data_value
ALLOCATE(grid%u10(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%u10(sm31:em31,sm33:em33). ')
 endif
  grid%u10=initial_data_value
ALLOCATE(grid%v10(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%v10(sm31:em31,sm33:em33). ')
 endif
  grid%v10=initial_data_value
grid%rdx=initial_data_value
grid%rdy=initial_data_value
grid%dts=initial_data_value
grid%dtseps=initial_data_value
grid%resm=initial_data_value
grid%zetatop=initial_data_value
grid%cf1=initial_data_value
grid%cf2=initial_data_value
grid%cf3=initial_data_value
grid%number_at_same_level=0
grid%itimestep=0
grid%oid=0
grid%auxhist1_oid=0
grid%auxhist2_oid=0
grid%auxhist3_oid=0
grid%auxhist4_oid=0
grid%auxhist5_oid=0
grid%auxinput1_oid=0
grid%auxinput2_oid=0
grid%auxinput3_oid=0
grid%auxinput4_oid=0
grid%auxinput5_oid=0
grid%nframes=0
grid%lbc_fid=0
ALLOCATE(grid%imask(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%imask(sm31:em31,sm33:em33). ')
 endif
  grid%imask=0
ALLOCATE(grid%moist_1(sm31:em31,sm32:em32,sm33:em33,num_moist),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%moist_1(sm31:em31,sm32:em32,sm33:em33,num_moist). ')
 endif
  grid%moist_1=initial_data_value
ALLOCATE(grid%moist_2(sm31:em31,sm32:em32,sm33:em33,num_moist),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%moist_2(sm31:em31,sm32:em32,sm33:em33,num_moist). ')
 endif
  grid%moist_2=initial_data_value
ALLOCATE(grid%chem_1(sm31:em31,sm32:em32,sm33:em33,num_chem),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%chem_1(sm31:em31,sm32:em32,sm33:em33,num_chem). ')
 endif
  grid%chem_1=initial_data_value
ALLOCATE(grid%chem_2(sm31:em31,sm32:em32,sm33:em33,num_chem),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%chem_2(sm31:em31,sm32:em32,sm33:em33,num_chem). ')
 endif
  grid%chem_2=initial_data_value
ALLOCATE(grid%em_u_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_u_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_u_b=initial_data_value
ALLOCATE(grid%em_u_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_u_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_u_bt=initial_data_value
ALLOCATE(grid%em_v_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_v_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_v_b=initial_data_value
ALLOCATE(grid%em_v_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_v_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_v_bt=initial_data_value
ALLOCATE(grid%em_w_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_w_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_w_b=initial_data_value
ALLOCATE(grid%em_w_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_w_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_w_bt=initial_data_value
ALLOCATE(grid%em_ph_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ph_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_ph_b=initial_data_value
ALLOCATE(grid%em_ph_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_ph_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_ph_bt=initial_data_value
ALLOCATE(grid%em_t_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_t_b=initial_data_value
ALLOCATE(grid%em_t_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_t_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_t_bt=initial_data_value
ALLOCATE(grid%em_mu_b(max(ed31,ed33),1,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mu_b(max(ed31,ed33),1,spec_bdy_width,4). ')
 endif
  grid%em_mu_b=initial_data_value
ALLOCATE(grid%em_mu_bt(max(ed31,ed33),1,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_mu_bt(max(ed31,ed33),1,spec_bdy_width,4). ')
 endif
  grid%em_mu_bt=initial_data_value
ALLOCATE(grid%em_rqv_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rqv_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_rqv_b=initial_data_value
ALLOCATE(grid%em_rqv_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%em_rqv_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%em_rqv_bt=initial_data_value
ALLOCATE(grid%rqc_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqc_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqc_b=initial_data_value
ALLOCATE(grid%rqc_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqc_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqc_bt=initial_data_value
ALLOCATE(grid%rqr_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqr_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqr_b=initial_data_value
ALLOCATE(grid%rqr_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqr_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqr_bt=initial_data_value
ALLOCATE(grid%rqi_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqi_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqi_b=initial_data_value
ALLOCATE(grid%rqi_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqi_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqi_bt=initial_data_value
ALLOCATE(grid%rqs_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqs_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqs_b=initial_data_value
ALLOCATE(grid%rqs_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqs_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqs_bt=initial_data_value
ALLOCATE(grid%rqg_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqg_b(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqg_b=initial_data_value
ALLOCATE(grid%rqg_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqg_bt(max(ed31,ed33),sd32:ed32,spec_bdy_width,4). ')
 endif
  grid%rqg_bt=initial_data_value
ALLOCATE(grid%fcx(model_config_rec%spec_bdy_width),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%fcx(model_config_rec%spec_bdy_width). ')
 endif
  grid%fcx=initial_data_value
ALLOCATE(grid%gcx(model_config_rec%spec_bdy_width),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%gcx(model_config_rec%spec_bdy_width). ')
 endif
  grid%gcx=initial_data_value
grid%dtbc=initial_data_value
ALLOCATE(grid%sm000010(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sm000010(sm31:em31,sm33:em33). ')
 endif
  grid%sm000010=initial_data_value
ALLOCATE(grid%sm010040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sm010040(sm31:em31,sm33:em33). ')
 endif
  grid%sm010040=initial_data_value
ALLOCATE(grid%sm040100(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sm040100(sm31:em31,sm33:em33). ')
 endif
  grid%sm040100=initial_data_value
ALLOCATE(grid%sm100200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sm100200(sm31:em31,sm33:em33). ')
 endif
  grid%sm100200=initial_data_value
ALLOCATE(grid%sm010200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sm010200(sm31:em31,sm33:em33). ')
 endif
  grid%sm010200=initial_data_value
ALLOCATE(grid%soilm000(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm000(sm31:em31,sm33:em33). ')
 endif
  grid%soilm000=initial_data_value
ALLOCATE(grid%soilm005(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm005(sm31:em31,sm33:em33). ')
 endif
  grid%soilm005=initial_data_value
ALLOCATE(grid%soilm020(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm020(sm31:em31,sm33:em33). ')
 endif
  grid%soilm020=initial_data_value
ALLOCATE(grid%soilm040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm040(sm31:em31,sm33:em33). ')
 endif
  grid%soilm040=initial_data_value
ALLOCATE(grid%soilm160(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm160(sm31:em31,sm33:em33). ')
 endif
  grid%soilm160=initial_data_value
ALLOCATE(grid%soilm300(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilm300(sm31:em31,sm33:em33). ')
 endif
  grid%soilm300=initial_data_value
ALLOCATE(grid%sw000010(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sw000010(sm31:em31,sm33:em33). ')
 endif
  grid%sw000010=initial_data_value
ALLOCATE(grid%sw010040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sw010040(sm31:em31,sm33:em33). ')
 endif
  grid%sw010040=initial_data_value
ALLOCATE(grid%sw040100(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sw040100(sm31:em31,sm33:em33). ')
 endif
  grid%sw040100=initial_data_value
ALLOCATE(grid%sw100200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sw100200(sm31:em31,sm33:em33). ')
 endif
  grid%sw100200=initial_data_value
ALLOCATE(grid%sw010200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sw010200(sm31:em31,sm33:em33). ')
 endif
  grid%sw010200=initial_data_value
ALLOCATE(grid%soilw000(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw000(sm31:em31,sm33:em33). ')
 endif
  grid%soilw000=initial_data_value
ALLOCATE(grid%soilw005(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw005(sm31:em31,sm33:em33). ')
 endif
  grid%soilw005=initial_data_value
ALLOCATE(grid%soilw020(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw020(sm31:em31,sm33:em33). ')
 endif
  grid%soilw020=initial_data_value
ALLOCATE(grid%soilw040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw040(sm31:em31,sm33:em33). ')
 endif
  grid%soilw040=initial_data_value
ALLOCATE(grid%soilw160(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw160(sm31:em31,sm33:em33). ')
 endif
  grid%soilw160=initial_data_value
ALLOCATE(grid%soilw300(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilw300(sm31:em31,sm33:em33). ')
 endif
  grid%soilw300=initial_data_value
ALLOCATE(grid%st000010(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%st000010(sm31:em31,sm33:em33). ')
 endif
  grid%st000010=initial_data_value
ALLOCATE(grid%st010040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%st010040(sm31:em31,sm33:em33). ')
 endif
  grid%st010040=initial_data_value
ALLOCATE(grid%st040100(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%st040100(sm31:em31,sm33:em33). ')
 endif
  grid%st040100=initial_data_value
ALLOCATE(grid%st100200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%st100200(sm31:em31,sm33:em33). ')
 endif
  grid%st100200=initial_data_value
ALLOCATE(grid%st010200(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%st010200(sm31:em31,sm33:em33). ')
 endif
  grid%st010200=initial_data_value
ALLOCATE(grid%soilt000(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt000(sm31:em31,sm33:em33). ')
 endif
  grid%soilt000=initial_data_value
ALLOCATE(grid%soilt005(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt005(sm31:em31,sm33:em33). ')
 endif
  grid%soilt005=initial_data_value
ALLOCATE(grid%soilt020(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt020(sm31:em31,sm33:em33). ')
 endif
  grid%soilt020=initial_data_value
ALLOCATE(grid%soilt040(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt040(sm31:em31,sm33:em33). ')
 endif
  grid%soilt040=initial_data_value
ALLOCATE(grid%soilt160(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt160(sm31:em31,sm33:em33). ')
 endif
  grid%soilt160=initial_data_value
ALLOCATE(grid%soilt300(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt300(sm31:em31,sm33:em33). ')
 endif
  grid%soilt300=initial_data_value
ALLOCATE(grid%landmask(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%landmask(sm31:em31,sm33:em33). ')
 endif
  grid%landmask=initial_data_value
ALLOCATE(grid%topostdv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%topostdv(sm31:em31,sm33:em33). ')
 endif
  grid%topostdv=initial_data_value
ALLOCATE(grid%toposlpx(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%toposlpx(sm31:em31,sm33:em33). ')
 endif
  grid%toposlpx=initial_data_value
ALLOCATE(grid%toposlpy(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%toposlpy(sm31:em31,sm33:em33). ')
 endif
  grid%toposlpy=initial_data_value
ALLOCATE(grid%shdmax(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%shdmax(sm31:em31,sm33:em33). ')
 endif
  grid%shdmax=initial_data_value
ALLOCATE(grid%shdmin(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%shdmin(sm31:em31,sm33:em33). ')
 endif
  grid%shdmin=initial_data_value
ALLOCATE(grid%snoalb(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%snoalb(sm31:em31,sm33:em33). ')
 endif
  grid%snoalb=initial_data_value
ALLOCATE(grid%slopecat(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%slopecat(sm31:em31,sm33:em33). ')
 endif
  grid%slopecat=initial_data_value
ALLOCATE(grid%toposoil(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%toposoil(sm31:em31,sm33:em33). ')
 endif
  grid%toposoil=initial_data_value
ALLOCATE(grid%landusef(sm31:em31,model_config_rec%num_land_cat,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%landusef(sm31:em31,model_config_rec%num_land_cat,sm33:em33). ')
 endif
  grid%landusef=initial_data_value
ALLOCATE(grid%soilctop(sm31:em31,model_config_rec%num_soil_cat,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilctop(sm31:em31,model_config_rec%num_soil_cat,sm33:em33). ')
 endif
  grid%soilctop=initial_data_value
ALLOCATE(grid%soilcbot(sm31:em31,model_config_rec%num_soil_cat,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilcbot(sm31:em31,model_config_rec%num_soil_cat,sm33:em33). ')
 endif
  grid%soilcbot=initial_data_value
ALLOCATE(grid%soilcat(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilcat(sm31:em31,sm33:em33). ')
 endif
  grid%soilcat=initial_data_value
ALLOCATE(grid%vegcat(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%vegcat(sm31:em31,sm33:em33). ')
 endif
  grid%vegcat=initial_data_value
ALLOCATE(grid%tslb(sm31:em31,model_config_rec%num_soil_layers,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tslb(sm31:em31,model_config_rec%num_soil_layers,sm33:em33). ')
 endif
  grid%tslb=initial_data_value
ALLOCATE(grid%zs(model_config_rec%num_soil_layers),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%zs(model_config_rec%num_soil_layers). ')
 endif
  grid%zs=initial_data_value
ALLOCATE(grid%dzs(model_config_rec%num_soil_layers),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%dzs(model_config_rec%num_soil_layers). ')
 endif
  grid%dzs=initial_data_value
ALLOCATE(grid%smois(sm31:em31,model_config_rec%num_soil_layers,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%smois(sm31:em31,model_config_rec%num_soil_layers,sm33:em33). ')
 endif
  grid%smois=initial_data_value
ALLOCATE(grid%sh2o(sm31:em31,model_config_rec%num_soil_layers,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sh2o(sm31:em31,model_config_rec%num_soil_layers,sm33:em33). ')
 endif
  grid%sh2o=initial_data_value
ALLOCATE(grid%xice(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xice(sm31:em31,sm33:em33). ')
 endif
  grid%xice=initial_data_value
ALLOCATE(grid%smstav(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%smstav(sm31:em31,sm33:em33). ')
 endif
  grid%smstav=initial_data_value
ALLOCATE(grid%smstot(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%smstot(sm31:em31,sm33:em33). ')
 endif
  grid%smstot=initial_data_value
ALLOCATE(grid%sfcrunoff(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sfcrunoff(sm31:em31,sm33:em33). ')
 endif
  grid%sfcrunoff=initial_data_value
ALLOCATE(grid%udrunoff(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%udrunoff(sm31:em31,sm33:em33). ')
 endif
  grid%udrunoff=initial_data_value
ALLOCATE(grid%ivgtyp(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ivgtyp(sm31:em31,sm33:em33). ')
 endif
  grid%ivgtyp=0
ALLOCATE(grid%isltyp(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%isltyp(sm31:em31,sm33:em33). ')
 endif
  grid%isltyp=0
ALLOCATE(grid%vegfra(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%vegfra(sm31:em31,sm33:em33). ')
 endif
  grid%vegfra=initial_data_value
ALLOCATE(grid%sfcevp(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sfcevp(sm31:em31,sm33:em33). ')
 endif
  grid%sfcevp=initial_data_value
ALLOCATE(grid%grdflx(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%grdflx(sm31:em31,sm33:em33). ')
 endif
  grid%grdflx=initial_data_value
ALLOCATE(grid%sfcexc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sfcexc(sm31:em31,sm33:em33). ')
 endif
  grid%sfcexc=initial_data_value
ALLOCATE(grid%acsnow(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%acsnow(sm31:em31,sm33:em33). ')
 endif
  grid%acsnow=initial_data_value
ALLOCATE(grid%acsnom(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%acsnom(sm31:em31,sm33:em33). ')
 endif
  grid%acsnom=initial_data_value
ALLOCATE(grid%snow(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%snow(sm31:em31,sm33:em33). ')
 endif
  grid%snow=initial_data_value
ALLOCATE(grid%snowh(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%snowh(sm31:em31,sm33:em33). ')
 endif
  grid%snowh=initial_data_value
ALLOCATE(grid%canwat(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%canwat(sm31:em31,sm33:em33). ')
 endif
  grid%canwat=initial_data_value
ALLOCATE(grid%sst(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sst(sm31:em31,sm33:em33). ')
 endif
  grid%sst=initial_data_value
grid%ifndsnowh=0
grid%ifndsoilw=0
ALLOCATE(grid%smfr3d(sm31:em31,model_config_rec%num_soil_layers,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%smfr3d(sm31:em31,model_config_rec%num_soil_layers,sm33:em33). ')
 endif
  grid%smfr3d=initial_data_value
ALLOCATE(grid%keepfr3dflag(sm31:em31,model_config_rec%num_soil_layers,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%keepfr3dflag(sm31:em31,model_config_rec%num_soil_layers,sm33:em33). ')
 endif
  grid%keepfr3dflag=initial_data_value
ALLOCATE(grid%potevp(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%potevp(sm31:em31,sm33:em33). ')
 endif
  grid%potevp=initial_data_value
ALLOCATE(grid%snopcx(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%snopcx(sm31:em31,sm33:em33). ')
 endif
  grid%snopcx=initial_data_value
ALLOCATE(grid%soiltb(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soiltb(sm31:em31,sm33:em33). ')
 endif
  grid%soiltb=initial_data_value
ALLOCATE(grid%tke_myj(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tke_myj(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%tke_myj=initial_data_value
ALLOCATE(grid%ct(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ct(sm31:em31,sm33:em33). ')
 endif
  grid%ct=initial_data_value
ALLOCATE(grid%thz0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%thz0(sm31:em31,sm33:em33). ')
 endif
  grid%thz0=initial_data_value
ALLOCATE(grid%z0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%z0(sm31:em31,sm33:em33). ')
 endif
  grid%z0=initial_data_value
ALLOCATE(grid%qz0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qz0(sm31:em31,sm33:em33). ')
 endif
  grid%qz0=initial_data_value
ALLOCATE(grid%uz0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%uz0(sm31:em31,sm33:em33). ')
 endif
  grid%uz0=initial_data_value
ALLOCATE(grid%vz0(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%vz0(sm31:em31,sm33:em33). ')
 endif
  grid%vz0=initial_data_value
ALLOCATE(grid%qsfc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qsfc(sm31:em31,sm33:em33). ')
 endif
  grid%qsfc=initial_data_value
ALLOCATE(grid%akhs(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%akhs(sm31:em31,sm33:em33). ')
 endif
  grid%akhs=initial_data_value
ALLOCATE(grid%akms(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%akms(sm31:em31,sm33:em33). ')
 endif
  grid%akms=initial_data_value
ALLOCATE(grid%kpbl(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%kpbl(sm31:em31,sm33:em33). ')
 endif
  grid%kpbl=0
ALLOCATE(grid%htop(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%htop(sm31:em31,sm33:em33). ')
 endif
  grid%htop=initial_data_value
ALLOCATE(grid%hbot(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%hbot(sm31:em31,sm33:em33). ')
 endif
  grid%hbot=initial_data_value
ALLOCATE(grid%cuppt(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cuppt(sm31:em31,sm33:em33). ')
 endif
  grid%cuppt=initial_data_value
ALLOCATE(grid%totswdn(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%totswdn(sm31:em31,sm33:em33). ')
 endif
  grid%totswdn=initial_data_value
ALLOCATE(grid%totlwdn(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%totlwdn(sm31:em31,sm33:em33). ')
 endif
  grid%totlwdn=initial_data_value
ALLOCATE(grid%rswtoa(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rswtoa(sm31:em31,sm33:em33). ')
 endif
  grid%rswtoa=initial_data_value
ALLOCATE(grid%rlwtoa(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rlwtoa(sm31:em31,sm33:em33). ')
 endif
  grid%rlwtoa=initial_data_value
ALLOCATE(grid%czmean(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%czmean(sm31:em31,sm33:em33). ')
 endif
  grid%czmean=initial_data_value
ALLOCATE(grid%cfracl(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cfracl(sm31:em31,sm33:em33). ')
 endif
  grid%cfracl=initial_data_value
ALLOCATE(grid%cfracm(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cfracm(sm31:em31,sm33:em33). ')
 endif
  grid%cfracm=initial_data_value
ALLOCATE(grid%cfrach(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cfrach(sm31:em31,sm33:em33). ')
 endif
  grid%cfrach=initial_data_value
ALLOCATE(grid%acfrst(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%acfrst(sm31:em31,sm33:em33). ')
 endif
  grid%acfrst=initial_data_value
ALLOCATE(grid%ncfrst(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ncfrst(sm31:em31,sm33:em33). ')
 endif
  grid%ncfrst=0
ALLOCATE(grid%acfrcv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%acfrcv(sm31:em31,sm33:em33). ')
 endif
  grid%acfrcv=initial_data_value
ALLOCATE(grid%ncfrcv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ncfrcv(sm31:em31,sm33:em33). ')
 endif
  grid%ncfrcv=0
ALLOCATE(grid%f_ice_phy(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%f_ice_phy(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%f_ice_phy=initial_data_value
ALLOCATE(grid%f_rain_phy(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%f_rain_phy(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%f_rain_phy=initial_data_value
ALLOCATE(grid%f_rimef_phy(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%f_rimef_phy(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%f_rimef_phy=initial_data_value
ALLOCATE(grid%h_diabatic(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%h_diabatic(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%h_diabatic=initial_data_value
ALLOCATE(grid%msft(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%msft(sm31:em31,sm33:em33). ')
 endif
  grid%msft=initial_data_value
ALLOCATE(grid%msfu(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%msfu(sm31:em31,sm33:em33). ')
 endif
  grid%msfu=initial_data_value
ALLOCATE(grid%msfv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%msfv(sm31:em31,sm33:em33). ')
 endif
  grid%msfv=initial_data_value
ALLOCATE(grid%f(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%f(sm31:em31,sm33:em33). ')
 endif
  grid%f=initial_data_value
ALLOCATE(grid%e(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%e(sm31:em31,sm33:em33). ')
 endif
  grid%e=initial_data_value
ALLOCATE(grid%sina(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%sina(sm31:em31,sm33:em33). ')
 endif
  grid%sina=initial_data_value
ALLOCATE(grid%cosa(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cosa(sm31:em31,sm33:em33). ')
 endif
  grid%cosa=initial_data_value
ALLOCATE(grid%ht(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ht(sm31:em31,sm33:em33). ')
 endif
  grid%ht=initial_data_value
ALLOCATE(grid%ht_fine(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ht_fine(sm31:em31,sm33:em33). ')
 endif
  grid%ht_fine=initial_data_value
ALLOCATE(grid%ht_int(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ht_int(sm31:em31,sm33:em33). ')
 endif
  grid%ht_int=initial_data_value
ALLOCATE(grid%ht_input(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ht_input(sm31:em31,sm33:em33). ')
 endif
  grid%ht_input=initial_data_value
ALLOCATE(grid%tsk(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tsk(sm31:em31,sm33:em33). ')
 endif
  grid%tsk=initial_data_value
ALLOCATE(grid%u_base(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%u_base(sm32:em32). ')
 endif
  grid%u_base=initial_data_value
ALLOCATE(grid%v_base(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%v_base(sm32:em32). ')
 endif
  grid%v_base=initial_data_value
ALLOCATE(grid%qv_base(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qv_base(sm32:em32). ')
 endif
  grid%qv_base=initial_data_value
ALLOCATE(grid%z_base(sm32:em32),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%z_base(sm32:em32). ')
 endif
  grid%z_base=initial_data_value
grid%u_frame=initial_data_value
grid%v_frame=initial_data_value
grid%p_top=initial_data_value
ALLOCATE(grid%rthcuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthcuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthcuten=initial_data_value
ALLOCATE(grid%rqvcuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqvcuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqvcuten=initial_data_value
ALLOCATE(grid%rqrcuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqrcuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqrcuten=initial_data_value
ALLOCATE(grid%rqccuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqccuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqccuten=initial_data_value
ALLOCATE(grid%rqscuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqscuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqscuten=initial_data_value
ALLOCATE(grid%rqicuten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqicuten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqicuten=initial_data_value
ALLOCATE(grid%w0avg(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%w0avg(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%w0avg=initial_data_value
ALLOCATE(grid%rainc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rainc(sm31:em31,sm33:em33). ')
 endif
  grid%rainc=initial_data_value
ALLOCATE(grid%rainnc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rainnc(sm31:em31,sm33:em33). ')
 endif
  grid%rainnc=initial_data_value
ALLOCATE(grid%raincv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%raincv(sm31:em31,sm33:em33). ')
 endif
  grid%raincv=initial_data_value
ALLOCATE(grid%rainncv(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rainncv(sm31:em31,sm33:em33). ')
 endif
  grid%rainncv=initial_data_value
ALLOCATE(grid%rainbl(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rainbl(sm31:em31,sm33:em33). ')
 endif
  grid%rainbl=initial_data_value
ALLOCATE(grid%nca(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%nca(sm31:em31,sm33:em33). ')
 endif
  grid%nca=initial_data_value
ALLOCATE(grid%lowlyr(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%lowlyr(sm31:em31,sm33:em33). ')
 endif
  grid%lowlyr=0
ALLOCATE(grid%mass_flux(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%mass_flux(sm31:em31,sm33:em33). ')
 endif
  grid%mass_flux=initial_data_value
ALLOCATE(grid%apr_gr(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_gr(sm31:em31,sm33:em33). ')
 endif
  grid%apr_gr=initial_data_value
ALLOCATE(grid%apr_w(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_w(sm31:em31,sm33:em33). ')
 endif
  grid%apr_w=initial_data_value
ALLOCATE(grid%apr_mc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_mc(sm31:em31,sm33:em33). ')
 endif
  grid%apr_mc=initial_data_value
ALLOCATE(grid%apr_st(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_st(sm31:em31,sm33:em33). ')
 endif
  grid%apr_st=initial_data_value
ALLOCATE(grid%apr_as(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_as(sm31:em31,sm33:em33). ')
 endif
  grid%apr_as=initial_data_value
ALLOCATE(grid%apr_capma(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_capma(sm31:em31,sm33:em33). ')
 endif
  grid%apr_capma=initial_data_value
ALLOCATE(grid%apr_capme(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_capme(sm31:em31,sm33:em33). ')
 endif
  grid%apr_capme=initial_data_value
ALLOCATE(grid%apr_capmi(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%apr_capmi(sm31:em31,sm33:em33). ')
 endif
  grid%apr_capmi=initial_data_value
ALLOCATE(grid%xf_ens(sm31:em31,sm33:em33,model_config_rec%ensdim),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xf_ens(sm31:em31,sm33:em33,model_config_rec%ensdim). ')
 endif
  grid%xf_ens=initial_data_value
ALLOCATE(grid%pr_ens(sm31:em31,sm33:em33,model_config_rec%ensdim),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%pr_ens(sm31:em31,sm33:em33,model_config_rec%ensdim). ')
 endif
  grid%pr_ens=initial_data_value
ALLOCATE(grid%rthften(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthften(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthften=initial_data_value
ALLOCATE(grid%rqvften(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqvften(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqvften=initial_data_value
grid%stepcu=0
ALLOCATE(grid%rthraten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthraten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthraten=initial_data_value
ALLOCATE(grid%rthratenlw(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthratenlw(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthratenlw=initial_data_value
ALLOCATE(grid%rthratensw(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthratensw(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthratensw=initial_data_value
ALLOCATE(grid%cldfra(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cldfra(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%cldfra=initial_data_value
ALLOCATE(grid%swdown(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%swdown(sm31:em31,sm33:em33). ')
 endif
  grid%swdown=initial_data_value
ALLOCATE(grid%gsw(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%gsw(sm31:em31,sm33:em33). ')
 endif
  grid%gsw=initial_data_value
ALLOCATE(grid%glw(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%glw(sm31:em31,sm33:em33). ')
 endif
  grid%glw=initial_data_value
ALLOCATE(grid%xlat(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xlat(sm31:em31,sm33:em33). ')
 endif
  grid%xlat=initial_data_value
ALLOCATE(grid%xlong(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xlong(sm31:em31,sm33:em33). ')
 endif
  grid%xlong=initial_data_value
ALLOCATE(grid%albedo(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%albedo(sm31:em31,sm33:em33). ')
 endif
  grid%albedo=initial_data_value
ALLOCATE(grid%albbck(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%albbck(sm31:em31,sm33:em33). ')
 endif
  grid%albbck=initial_data_value
ALLOCATE(grid%emiss(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%emiss(sm31:em31,sm33:em33). ')
 endif
  grid%emiss=initial_data_value
ALLOCATE(grid%cldefi(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%cldefi(sm31:em31,sm33:em33). ')
 endif
  grid%cldefi=initial_data_value
grid%stepra=0
ALLOCATE(grid%rublten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rublten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rublten=initial_data_value
ALLOCATE(grid%rvblten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rvblten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rvblten=initial_data_value
ALLOCATE(grid%rthblten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rthblten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rthblten=initial_data_value
ALLOCATE(grid%rqvblten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqvblten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqvblten=initial_data_value
ALLOCATE(grid%rqcblten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqcblten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqcblten=initial_data_value
ALLOCATE(grid%rqiblten(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%rqiblten(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%rqiblten=initial_data_value
ALLOCATE(grid%tmn(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tmn(sm31:em31,sm33:em33). ')
 endif
  grid%tmn=initial_data_value
ALLOCATE(grid%xland(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xland(sm31:em31,sm33:em33). ')
 endif
  grid%xland=initial_data_value
ALLOCATE(grid%znt(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%znt(sm31:em31,sm33:em33). ')
 endif
  grid%znt=initial_data_value
ALLOCATE(grid%ust(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%ust(sm31:em31,sm33:em33). ')
 endif
  grid%ust=initial_data_value
ALLOCATE(grid%mol(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%mol(sm31:em31,sm33:em33). ')
 endif
  grid%mol=initial_data_value
ALLOCATE(grid%pblh(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%pblh(sm31:em31,sm33:em33). ')
 endif
  grid%pblh=initial_data_value
ALLOCATE(grid%capg(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%capg(sm31:em31,sm33:em33). ')
 endif
  grid%capg=initial_data_value
ALLOCATE(grid%thc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%thc(sm31:em31,sm33:em33). ')
 endif
  grid%thc=initial_data_value
ALLOCATE(grid%hfx(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%hfx(sm31:em31,sm33:em33). ')
 endif
  grid%hfx=initial_data_value
ALLOCATE(grid%qfx(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qfx(sm31:em31,sm33:em33). ')
 endif
  grid%qfx=initial_data_value
ALLOCATE(grid%lh(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%lh(sm31:em31,sm33:em33). ')
 endif
  grid%lh=initial_data_value
ALLOCATE(grid%flhc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%flhc(sm31:em31,sm33:em33). ')
 endif
  grid%flhc=initial_data_value
ALLOCATE(grid%flqc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%flqc(sm31:em31,sm33:em33). ')
 endif
  grid%flqc=initial_data_value
ALLOCATE(grid%qsg(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qsg(sm31:em31,sm33:em33). ')
 endif
  grid%qsg=initial_data_value
ALLOCATE(grid%qvg(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qvg(sm31:em31,sm33:em33). ')
 endif
  grid%qvg=initial_data_value
ALLOCATE(grid%qcg(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%qcg(sm31:em31,sm33:em33). ')
 endif
  grid%qcg=initial_data_value
ALLOCATE(grid%soilt1(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%soilt1(sm31:em31,sm33:em33). ')
 endif
  grid%soilt1=initial_data_value
ALLOCATE(grid%tsnav(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tsnav(sm31:em31,sm33:em33). ')
 endif
  grid%tsnav=initial_data_value
ALLOCATE(grid%snowc(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%snowc(sm31:em31,sm33:em33). ')
 endif
  grid%snowc=initial_data_value
ALLOCATE(grid%mavail(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%mavail(sm31:em31,sm33:em33). ')
 endif
  grid%mavail=initial_data_value
ALLOCATE(grid%tkesfcf(sm31:em31,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%tkesfcf(sm31:em31,sm33:em33). ')
 endif
  grid%tkesfcf=initial_data_value
grid%stepbl=0
ALLOCATE(grid%taucldi(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%taucldi(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%taucldi=initial_data_value
ALLOCATE(grid%taucldc(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%taucldc(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%taucldc=initial_data_value
ALLOCATE(grid%defor11(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor11(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor11=initial_data_value
ALLOCATE(grid%defor22(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor22(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor22=initial_data_value
ALLOCATE(grid%defor12(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor12(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor12=initial_data_value
ALLOCATE(grid%defor33(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor33(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor33=initial_data_value
ALLOCATE(grid%defor13(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor13(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor13=initial_data_value
ALLOCATE(grid%defor23(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%defor23(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%defor23=initial_data_value
ALLOCATE(grid%xkmv(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xkmv(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%xkmv=initial_data_value
ALLOCATE(grid%xkmh(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xkmh(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%xkmh=initial_data_value
ALLOCATE(grid%xkmhd(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xkmhd(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%xkmhd=initial_data_value
ALLOCATE(grid%xkhv(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xkhv(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%xkhv=initial_data_value
ALLOCATE(grid%xkhh(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%xkhh(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%xkhh=initial_data_value
ALLOCATE(grid%div(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%div(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%div=initial_data_value
ALLOCATE(grid%bn2(sm31:em31,sm32:em32,sm33:em33),STAT=ierr)
 if (ierr.ne.0) then
 CALL wrf_error_fatal ( &
'frame/module_domain.f: Failed to allocate grid%bn2(sm31:em31,sm32:em32,sm33:em33). ')
 endif
  grid%bn2=initial_data_value
grid%run_days=0
grid%run_hours=0
grid%run_minutes=0
grid%run_seconds=0
grid%start_year=0
grid%start_month=0
grid%start_day=0
grid%start_hour=0
grid%start_minute=0
grid%start_second=0
grid%end_year=0
grid%end_month=0
grid%end_day=0
grid%end_hour=0
grid%end_minute=0
grid%end_second=0
grid%interval_seconds=0
grid%history_interval=0
grid%frames_per_outfile=0
grid%restart_interval=0
grid%io_form_input=0
grid%io_form_history=0
grid%io_form_restart=0
grid%io_form_boundary=0
grid%debug_level=0
grid%history_interval_mo=0
grid%history_interval_d=0
grid%history_interval_h=0
grid%history_interval_m=0
grid%history_interval_s=0
grid%inputout_interval_mo=0
grid%inputout_interval_d=0
grid%inputout_interval_h=0
grid%inputout_interval_m=0
grid%inputout_interval_s=0
grid%inputout_interval=0
grid%auxhist1_interval_mo=0
grid%auxhist1_interval_d=0
grid%auxhist1_interval_h=0
grid%auxhist1_interval_m=0
grid%auxhist1_interval_s=0
grid%auxhist1_interval=0
grid%auxhist2_interval_mo=0
grid%auxhist2_interval_d=0
grid%auxhist2_interval_h=0
grid%auxhist2_interval_m=0
grid%auxhist2_interval_s=0
grid%auxhist2_interval=0
grid%auxhist3_interval_mo=0
grid%auxhist3_interval_d=0
grid%auxhist3_interval_h=0
grid%auxhist3_interval_m=0
grid%auxhist3_interval_s=0
grid%auxhist3_interval=0
grid%auxhist4_interval_mo=0
grid%auxhist4_interval_d=0
grid%auxhist4_interval_h=0
grid%auxhist4_interval_m=0
grid%auxhist4_interval_s=0
grid%auxhist4_interval=0
grid%auxhist5_interval_mo=0
grid%auxhist5_interval_d=0
grid%auxhist5_interval_h=0
grid%auxhist5_interval_m=0
grid%auxhist5_interval_s=0
grid%auxhist5_interval=0
grid%auxinput1_interval_mo=0
grid%auxinput1_interval_d=0
grid%auxinput1_interval_h=0
grid%auxinput1_interval_m=0
grid%auxinput1_interval_s=0
grid%auxinput1_interval=0
grid%auxinput2_interval_mo=0
grid%auxinput2_interval_d=0
grid%auxinput2_interval_h=0
grid%auxinput2_interval_m=0
grid%auxinput2_interval_s=0
grid%auxinput2_interval=0
grid%auxinput3_interval_mo=0
grid%auxinput3_interval_d=0
grid%auxinput3_interval_h=0
grid%auxinput3_interval_m=0
grid%auxinput3_interval_s=0
grid%auxinput3_interval=0
grid%auxinput4_interval_mo=0
grid%auxinput4_interval_d=0
grid%auxinput4_interval_h=0
grid%auxinput4_interval_m=0
grid%auxinput4_interval_s=0
grid%auxinput4_interval=0
grid%auxinput5_interval_mo=0
grid%auxinput5_interval_d=0
grid%auxinput5_interval_h=0
grid%auxinput5_interval_m=0
grid%auxinput5_interval_s=0
grid%auxinput5_interval=0
grid%restart_interval_mo=0
grid%restart_interval_d=0
grid%restart_interval_h=0
grid%restart_interval_m=0
grid%restart_interval_s=0
grid%history_begin_y=0
grid%history_begin_mo=0
grid%history_begin_d=0
grid%history_begin_h=0
grid%history_begin_m=0
grid%history_begin_s=0
grid%inputout_begin_y=0
grid%inputout_begin_mo=0
grid%inputout_begin_d=0
grid%inputout_begin_h=0
grid%inputout_begin_m=0
grid%inputout_begin_s=0
grid%auxhist1_begin_y=0
grid%auxhist1_begin_mo=0
grid%auxhist1_begin_d=0
grid%auxhist1_begin_h=0
grid%auxhist1_begin_m=0
grid%auxhist1_begin_s=0
grid%auxhist2_begin_y=0
grid%auxhist2_begin_mo=0
grid%auxhist2_begin_d=0
grid%auxhist2_begin_h=0
grid%auxhist2_begin_m=0
grid%auxhist2_begin_s=0
grid%auxhist3_begin_y=0
grid%auxhist3_begin_mo=0
grid%auxhist3_begin_d=0
grid%auxhist3_begin_h=0
grid%auxhist3_begin_m=0
grid%auxhist3_begin_s=0
grid%auxhist4_begin_y=0
grid%auxhist4_begin_mo=0
grid%auxhist4_begin_d=0
grid%auxhist4_begin_h=0
grid%auxhist4_begin_m=0
grid%auxhist4_begin_s=0
grid%auxhist5_begin_y=0
grid%auxhist5_begin_mo=0
grid%auxhist5_begin_d=0
grid%auxhist5_begin_h=0
grid%auxhist5_begin_m=0
grid%auxhist5_begin_s=0
grid%auxinput1_begin_y=0
grid%auxinput1_begin_mo=0
grid%auxinput1_begin_d=0
grid%auxinput1_begin_h=0
grid%auxinput1_begin_m=0
grid%auxinput1_begin_s=0
grid%auxinput2_begin_y=0
grid%auxinput2_begin_mo=0
grid%auxinput2_begin_d=0
grid%auxinput2_begin_h=0
grid%auxinput2_begin_m=0
grid%auxinput2_begin_s=0
grid%auxinput3_begin_y=0
grid%auxinput3_begin_mo=0
grid%auxinput3_begin_d=0
grid%auxinput3_begin_h=0
grid%auxinput3_begin_m=0
grid%auxinput3_begin_s=0
grid%auxinput4_begin_y=0
grid%auxinput4_begin_mo=0
grid%auxinput4_begin_d=0
grid%auxinput4_begin_h=0
grid%auxinput4_begin_m=0
grid%auxinput4_begin_s=0
grid%auxinput5_begin_y=0
grid%auxinput5_begin_mo=0
grid%auxinput5_begin_d=0
grid%auxinput5_begin_h=0
grid%auxinput5_begin_m=0
grid%auxinput5_begin_s=0
grid%restart_begin_y=0
grid%restart_begin_mo=0
grid%restart_begin_d=0
grid%restart_begin_h=0
grid%restart_begin_m=0
grid%restart_begin_s=0
grid%history_end_y=0
grid%history_end_mo=0
grid%history_end_d=0
grid%history_end_h=0
grid%history_end_m=0
grid%history_end_s=0
grid%inputout_end_y=0
grid%inputout_end_mo=0
grid%inputout_end_d=0
grid%inputout_end_h=0
grid%inputout_end_m=0
grid%inputout_end_s=0
grid%auxhist1_end_y=0
grid%auxhist1_end_mo=0
grid%auxhist1_end_d=0
grid%auxhist1_end_h=0
grid%auxhist1_end_m=0
grid%auxhist1_end_s=0
grid%auxhist2_end_y=0
grid%auxhist2_end_mo=0
grid%auxhist2_end_d=0
grid%auxhist2_end_h=0
grid%auxhist2_end_m=0
grid%auxhist2_end_s=0
grid%auxhist3_end_y=0
grid%auxhist3_end_mo=0
grid%auxhist3_end_d=0
grid%auxhist3_end_h=0
grid%auxhist3_end_m=0
grid%auxhist3_end_s=0
grid%auxhist4_end_y=0
grid%auxhist4_end_mo=0
grid%auxhist4_end_d=0
grid%auxhist4_end_h=0
grid%auxhist4_end_m=0
grid%auxhist4_end_s=0
grid%auxhist5_end_y=0
grid%auxhist5_end_mo=0
grid%auxhist5_end_d=0
grid%auxhist5_end_h=0
grid%auxhist5_end_m=0
grid%auxhist5_end_s=0
grid%auxinput1_end_y=0
grid%auxinput1_end_mo=0
grid%auxinput1_end_d=0
grid%auxinput1_end_h=0
grid%auxinput1_end_m=0
grid%auxinput1_end_s=0
grid%auxinput2_end_y=0
grid%auxinput2_end_mo=0
grid%auxinput2_end_d=0
grid%auxinput2_end_h=0
grid%auxinput2_end_m=0
grid%auxinput2_end_s=0
grid%auxinput3_end_y=0
grid%auxinput3_end_mo=0
grid%auxinput3_end_d=0
grid%auxinput3_end_h=0
grid%auxinput3_end_m=0
grid%auxinput3_end_s=0
grid%auxinput4_end_y=0
grid%auxinput4_end_mo=0
grid%auxinput4_end_d=0
grid%auxinput4_end_h=0
grid%auxinput4_end_m=0
grid%auxinput4_end_s=0
grid%auxinput5_end_y=0
grid%auxinput5_end_mo=0
grid%auxinput5_end_d=0
grid%auxinput5_end_h=0
grid%auxinput5_end_m=0
grid%auxinput5_end_s=0
grid%io_form_auxinput1=0
grid%io_form_auxinput2=0
grid%io_form_auxinput3=0
grid%io_form_auxinput4=0
grid%io_form_auxinput5=0
grid%io_form_auxhist1=0
grid%io_form_auxhist2=0
grid%io_form_auxhist3=0
grid%io_form_auxhist4=0
grid%io_form_auxhist5=0
grid%julyr=0
grid%julday=0
grid%gmt=initial_data_value
grid%time_step=0
grid%time_step_fract_num=0
grid%time_step_fract_den=0
grid%max_dom=0
grid%s_we=0
grid%e_we=0
grid%s_sn=0
grid%e_sn=0
grid%s_vert=0
grid%e_vert=0
grid%dx=initial_data_value
grid%dy=initial_data_value
grid%grid_id=0
grid%parent_id=0
grid%level=0
grid%i_parent_start=0
grid%j_parent_start=0
grid%parent_grid_ratio=0
grid%parent_time_step_ratio=0
grid%feedback=0
grid%smooth_option=0
grid%ztop=initial_data_value
grid%moad_grid_ratio=0
grid%moad_time_step_ratio=0
grid%shw=0
grid%tile_sz_x=0
grid%tile_sz_y=0
grid%numtiles=0
grid%nproc_x=0
grid%nproc_y=0
grid%irand=0
grid%dt=initial_data_value
grid%mp_physics=0
grid%ra_lw_physics=0
grid%ra_sw_physics=0
grid%radt=initial_data_value
grid%sf_sfclay_physics=0
grid%sf_surface_physics=0
grid%bl_pbl_physics=0
grid%bldt=initial_data_value
grid%cu_physics=0
grid%cudt=initial_data_value
grid%gsmdt=initial_data_value
grid%isfflx=0
grid%ifsnow=0
grid%icloud=0
grid%surface_input_source=0
grid%num_soil_layers=0
grid%maxiens=0
grid%maxens=0
grid%maxens2=0
grid%maxens3=0
grid%ensdim=0
grid%chem_opt=0
grid%num_land_cat=0
grid%num_soil_cat=0
grid%dyn_opt=0
grid%rk_ord=0
grid%w_damping=0
grid%diff_opt=0
grid%km_opt=0
grid%damp_opt=0
grid%zdamp=initial_data_value
grid%dampcoef=initial_data_value
grid%khdif=initial_data_value
grid%kvdif=initial_data_value
grid%smdiv=initial_data_value
grid%emdiv=initial_data_value
grid%epssm=initial_data_value
grid%time_step_sound=0
grid%h_mom_adv_order=0
grid%v_mom_adv_order=0
grid%h_sca_adv_order=0
grid%v_sca_adv_order=0
grid%mix_cr_len=initial_data_value
grid%tke_upper_bound=initial_data_value
grid%kh_tke_upper_bound=initial_data_value
grid%kv_tke_upper_bound=initial_data_value
grid%tke_drag_coefficient=initial_data_value
grid%tke_heat_flux=initial_data_value
grid%spec_bdy_width=0
grid%spec_zone=0
grid%relax_zone=0
grid%real_data_init_type=0
grid%cen_lat=initial_data_value
grid%cen_lon=initial_data_value
grid%truelat1=initial_data_value
grid%truelat2=initial_data_value
grid%moad_cen_lat=initial_data_value
grid%stand_lon=initial_data_value
grid%bdyfrq=initial_data_value
grid%iswater=0
grid%isice=0
grid%isurban=0
grid%isoilwater=0
grid%map_proj=0
!ENDOFREGISTRYGENERATEDINCLUDE

$benchnum  = '481';
$benchname = 'wrf';
$exename   = 'wrf';
$benchlang = 'F,C';
@base_exe  = ($exename);

$reltol   = 5e-2;
#$reltol = {'rsl.out.0000'   => 0.2, 'default' => 0.001};
$abstol   = 1.0e-2;

@sources = qw(   wrf_num_bytes_between.c pack_utils.c
	         module_driver_constants.F90  
		 module_domain.F90            
		 module_integrate.F90         
		 module_timing.F90            
		 module_configure.F90         
		 module_tiles.F90             
		 module_machine.F90           
		 module_nesting.F90           
		 module_wrf_error.F90         
		 module_state_description.F90 
		 module_sm.F90                
		 module_io.F90                
		 module_dm_stubs.F90          
		 module_quilt_outbuf_ops.F90  
		 module_io_quilt.F90          
		 module_bc.F90	
		 module_io_wrf.F90	
		 module_date_time.F90	
		 module_io_domain.F90	
		 module_bc_time_utilities.F90	
		 module_model_constants.F90 
		 module_soil_pre.F90   
		 module_bl_mrf.F90           
		 module_sf_myjsfc.F90        
		 module_bl_myjpbl.F90        
		 module_bl_ysu.F90        
		 module_cu_bmj.F90           
		 module_mp_kessler.F90       
		 module_mp_ncloud5.F90       
		 module_ra_sw.F90            
		 module_sf_sfclay.F90        
		 module_cu_kf.F90            
		 module_cu_kfeta.F90         
		 module_mp_lin.F90           
		 module_mp_wsm3.F90 
		 module_mp_wsm5.F90 module_mp_wsm6.F90
		 module_surface_driver.F90 module_cu_gd.F90 
		 module_sf_sfcdiags.F90
		 module_ra_gsfcsw.F90  
		 module_sf_slab.F90    
		 module_sf_noahlsm.F90 
		 module_sf_ruclsm.F90  
		 module_mp_ncloud3.F90 
		 module_mp_etanew.F90  
		 module_ra_rrtm.F90    
		 module_ra_gfdleta.F90 
		 module_physics_init.F90
		 module_physics_addtendc.F90
		 module_solvedebug_em.F90   
		 module_bc_em.F90           
		 module_advect_em.F90   	
		 module_diffusion_em.F90  	
		 module_small_step_em.F90 	
		 module_big_step_utilities_em.F90
		 module_em.F90         		
		 module_init_utilities.F90      
		 module_optional_si_input.F90 
		 ESMF_Alarm.F90 ESMF_Base.F90 ESMF_BaseTime.F90
		 ESMF_Calendar.F90 ESMF_Clock.F90 ESMF_Fraction.F90
		 ESMF_Mod.F90 ESMF_Time.F90 ESMF_TimeInterval.F90
		 Meat.F90
		 wrf_shutdown.F90       
		 collect_on_comm.c      
		 mediation_integrate.F90
		 mediation_feedback_domain.F90 
		 mediation_force_domain.F90 
		 mediation_interp_domain.F90 
		 mediation_wrfmain.F90	       
		 wrf_auxhist1in.F90 
		 wrf_auxhist1out.F90
		 wrf_auxhist2in.F90 
		 wrf_auxhist2out.F90
		 wrf_auxhist3in.F90 
		 wrf_auxhist3out.F90
		 wrf_auxhist4in.F90 
		 wrf_auxhist4out.F90
		 wrf_auxhist5in.F90 
		 wrf_auxhist5out.F90
		 wrf_auxinput1in.F90
		 wrf_auxinput1out.F90
		 wrf_auxinput2in.F90 
		 wrf_auxinput2out.F90
		 wrf_auxinput3in.F90 
		 wrf_auxinput3out.F90
		 wrf_auxinput4in.F90 
		 wrf_auxinput4out.F90
		 wrf_auxinput5in.F90 
		 wrf_auxinput5out.F90
		 wrf_bdyin.F90 
		 wrf_bdyout.F90
		 wrf_histin.F90
		 wrf_histout.F90
		 wrf_inputin.F90
		 wrf_inputout.F90
		 wrf_restartin.F90
		 wrf_restartout.F90 
		 couple_or_uncouple_em.F90 
		 interp_domain_em.F90 
		 interp_fcn.F90 
		 nest_init_utils.F90 
		 set_timekeeping.F90 
		 sint.F90 
		 solve_interface.F90               
		 start_domain.F90                  
		 module_pbl_driver.F90             
		 module_radiation_driver.F90       
		 module_cumulus_driver.F90         
		 module_microphysics_driver.F90    
		 solve_em.F90          
		 start_em.F90          
		 internal_header_util.F90 
		 io_int.F90
		 init_modules_em.F90   
		 init_modules.F90 
		 wrf_io.f90 field_routines.f90 wrf.F90
		 netcdf/attr.c
		 netcdf/dim.c
		 netcdf/error.c
		 netcdf/fort-attio.c
		 netcdf/fort-control.c
		 netcdf/fort-dim.c
		 netcdf/fort-genatt.c
		 netcdf/fort-geninq.c
		 netcdf/fort-genvar.c
		 netcdf/fort-lib.c
		 netcdf/fort-misc.c
		 netcdf/fort-v2compat.c
		 netcdf/fort-var1io.c
		 netcdf/fort-varaio.c
		 netcdf/fort-vario.c
		 netcdf/fort-varmio.c
		 netcdf/fort-varsio.c
		 netcdf/libvers.c
		 netcdf/nc.c
		 netcdf/ncx.c
		 netcdf/posixio.c
		 netcdf/putget.c
		 netcdf/string.c
		 netcdf/v1hpg.c
		 netcdf/v2i.c
		 netcdf/var.c
		 netcdf/typeSizes.f90
		 netcdf/netcdf.f90
		 );

$bench_fppflags = '-w -m literal.pm -I. -DINTIO -DIWORDSIZE=4 -DRWORDSIZE=4 -DLWORDSIZE=4 -DNETCDF -DEM_CORE=1 -DNMM_CORE=0 -DCOAMPS_CORE=0 -DEXP_CORE=0 -DF90_STANDALONE -DCONFIG_BUF_LEN=8192 -DMAX_DOMAINS_F=21 -DNO_NAMELIST_PRINT';

$bench_flags = '-I. -I./netcdf/include';

use File::Copy;
use IO::Dir;

sub post_setup {
    my ($me, @dirnames) = @_;

    # Skip this for children of parallel setup, as the contents of added_files
    # will be lost and the inter-run cleanup will blow away RRTM_DATA and
    # that will be the end of the error-free runs.
    return 0 if $::from_runspec == 2;

    my $endian = ($me->endian =~ /4321$/) ? 'be' : 'le';
    my $header_size = $me->accessor_nowarn('wrf_data_header_size');
    if (($header_size > 4 && $header_size < 32) || $header_size > 32) {
      $header_size = 64;
    } else {
      $header_size = 32;
    }

    # Move the files of the correct endianness into the run directories
    # where they can be found without having to teach the program any new
    # tricks.
    foreach my $dir (@dirnames) {
        my $dh = new IO::Dir ::jp($dir, $endian);
        if (!defined($dh)) {
            ::Log(0, "\nCouldn't open ".::jp($dir, $endian)." for reading: $!\n"
);
            return 1;
        }
        while (defined(my $file = $dh->read)) {
            next unless (-f ::jp($dir, $endian, $file));
            if (!copy(::jp($dir, $endian, $file), $dir)) {
                ::Log(0, "copy of $file into $dir did not complete: $!\n");
                return 1;
            }
            $me->{'added_files'}->{$file}++;
        }
        if (-d ::jp($dir, $endian, $header_size)) {
          # If the header size dir isn't present, just assume that the
          # proper data files are already present
          $dh = new IO::Dir ::jp($dir, $endian, $header_size);
          if (!defined($dh)) {
              ::Log(0, "\nCouldn't open ".::jp($dir, $endian, $header_size)." for reading: $!\n"
  );
              return 1;
          }
          while (defined(my $file = $dh->read)) {
              next unless (-f ::jp($dir, $endian, $header_size, $file));
              if (!copy(::jp($dir, $endian, $header_size, $file), $dir)) {
                  ::Log(0, "copy of $file into $dir did not complete: $!\n");
                  return 1;
              }
              $me->{'added_files'}->{$file}++;
          }
        }
    }

    return 0;
}

sub invoke {
    my ($me) = @_;
    my $name;
    my @rc;

    my $exe = $me->exe_file;

    # There's always at least one command to run
    push (@rc, { 'command' => $exe,
                 'args'    => [ ],
                 'output'  => "rsl.out.0000",
                 'error'   => "wrf.err",
                });

    return @rc;
}

%deps = (
          'ESMF_Alarm.F90' => [
                                'ESMF_Time.F90',
                                'ESMF_TimeInterval.F90',
                                'ESMF_Base.F90',
                              ],
          'ESMF_BaseTime.F90' => [
                                   'ESMF_Base.F90',
                                 ],
          'ESMF_Calendar.F90' => [
                                   'ESMF_BaseTime.F90',
                                   'ESMF_Base.F90',
                                 ],
          'ESMF_Clock.F90' => [
                                'ESMF_Alarm.F90',
                                'ESMF_Time.F90',
                                'ESMF_TimeInterval.F90',
                                'ESMF_Base.F90',
                              ],
          'ESMF_Mod.F90' => [
                              'Meat.F90',
                              'ESMF_Time.F90',
                              'ESMF_TimeInterval.F90',
                              'ESMF_Fraction.F90',
                              'ESMF_Clock.F90',
                              'ESMF_Calendar.F90',
                              'ESMF_BaseTime.F90',
                              'ESMF_Base.F90',
                              'ESMF_Alarm.F90',
                            ],
          'ESMF_Time.F90' => [
                               'ESMF_Calendar.F90',
                               'ESMF_TimeInterval.F90',
                               'ESMF_BaseTime.F90',
                               'ESMF_Base.F90',
                             ],
          'ESMF_TimeInterval.F90' => [
                                       'ESMF_Calendar.F90',
                                       'ESMF_Fraction.F90',
                                       'ESMF_BaseTime.F90',
                                       'ESMF_Base.F90',
                                     ],
          'Meat.F90' => [
                          'ESMF_Time.F90',
                          'ESMF_TimeInterval.F90',
                          'ESMF_Fraction.F90',
                          'ESMF_Clock.F90',
                          'ESMF_Calendar.F90',
                          'ESMF_BaseTime.F90',
                          'ESMF_Base.F90',
                          'ESMF_Alarm.F90',
                        ],
          'couple_or_uncouple_em.F90' => [
                                           'module_state_description.F90',
                                           'module_dm_stubs.F90',
                                           'module_tiles.F90',
                                           'module_machine.F90',
                                           'module_driver_constants.F90',
                                           'module_configure.F90',
                                           'module_domain.F90',
                                         ],
          'init_modules.F90' => [
                                  'module_io.F90',
                                  'module_io_wrf.F90',
                                  'module_tiles.F90',
                                  'module_timing.F90',
                                  'module_nesting.F90',
                                  'module_machine.F90',
                                  'module_domain.F90',
                                  'module_model_constants.F90',
                                  'module_driver_constants.F90',
                                  'module_configure.F90',
                                  'module_bc.F90',
                                ],
          'init_modules_em.F90' => [
                                     'module_big_step_utilities_em.F90',
                                   ],
          'internal_header_util.F90' => [
                                        ],
          'interp_domain_em.F90' => [
                                      'module_configure.F90',
                                      'module_domain.F90',
                                    ],
          'interp_fcn.F90' => [
                                'module_state_description.F90',
                                'module_wrf_error.F90',
                                'module_timing.F90',
                              ],
          'io_int.F90' => [
                          ],
          'mediation_feedback_domain.F90' => [
                                               'module_configure.F90',
                                               'module_domain.F90',
                                             ],
          'mediation_force_domain.F90' => [
                                            'module_configure.F90',
                                            'module_domain.F90',
                                          ],
          'mediation_integrate.F90' => [
                                         'module_bc_time_utilities.F90',
                                         'module_dm_stubs.F90',
                                         'module_io_domain.F90',
                                         'module_timing.F90',
                                         'ESMF_Mod.F90',
                                         'module_date_time.F90',
                                         'module_configure.F90',
                                         'module_domain.F90',
                                       ],
          'mediation_interp_domain.F90' => [
                                             'module_timing.F90',
                                             'module_configure.F90',
                                             'module_domain.F90',
                                           ],
          'mediation_wrfmain.F90' => [
                                       'ESMF_Mod.F90',
                                       'module_bc_time_utilities.F90',
                                       'module_timing.F90',
                                       'module_io_domain.F90',
                                       'module_configure.F90',
                                       'module_domain.F90',
                                     ],
          'module_advect_em.F90' => [
                                      'module_wrf_error.F90',
                                      'module_model_constants.F90',
                                      'module_bc.F90',
                                    ],
          'module_bc.F90' => [
                               'module_state_description.F90',
                               'module_wrf_error.F90',
                               'module_configure.F90',
                             ],
          'module_bc_em.F90' => [
                                  'module_wrf_error.F90',
                                  'module_configure.F90',
                                  'module_bc.F90',
                                ],
          'module_bc_time_utilities.F90' => [
                                              'ESMF_Mod.F90',
                                            ],
          'module_big_step_utilities_em.F90' => [
                                                  'module_configure.F90',
                                                  'module_state_description.F90',
                                                  'module_model_constants.F90',
                                                  'module_domain.F90',
                                                ],
          'module_bl_myjpbl.F90' => [
                                      'module_model_constants.F90',
                                    ],
          'module_configure.F90' => [
                                      'module_wrf_error.F90',
                                      'module_state_description.F90',
                                      'module_driver_constants.F90',
                                    ],
          'module_cu_bmj.F90' => [
                                   'module_model_constants.F90',
                                 ],
          'module_cu_kf.F90' => [
                                  'module_wrf_error.F90',
                                ],
          'module_cu_kfeta.F90' => [
                                     'module_wrf_error.F90',
                                   ],
          'module_cumulus_driver.F90' => [
                                           'module_cu_gd.F90',
                                           'module_cu_kfeta.F90',
                                           'module_cu_bmj.F90',
                                           'module_cu_kf.F90',
                                           'module_model_constants.F90',
                                           'module_state_description.F90',
                                           'module_bc.F90',
                                         ],
          'module_date_time.F90' => [
                                      'module_wrf_error.F90',
                                    ],
          'module_diffusion_em.F90' => [
                                         'module_wrf_error.F90',
                                         'module_model_constants.F90',
                                         'module_big_step_utilities_em.F90',
                                         'module_state_description.F90',
                                         'module_bc.F90',
                                         'module_configure.F90',
                                       ],
          'module_dm_stubs.F90' => [
                                     'module_domain.F90',
                                   ],
          'module_domain.F90' => [
                                   'module_configure.F90',
                                   'ESMF_Mod.F90',
                                   'module_wrf_error.F90',
                                   'module_state_description.F90',
                                   'module_machine.F90',
                                   'module_driver_constants.F90',
                                 ],
          'module_em.F90' => [
                               'module_state_description.F90',
                               'module_big_step_utilities_em.F90',
                               'module_advect_em.F90',
                               'module_model_constants.F90',
                             ],
          'module_integrate.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_timing.F90',
                                      'module_configure.F90',
                                      'module_nesting.F90',
                                      'module_driver_constants.F90',
                                      'module_domain.F90',
                                    ],
          'module_io.F90' => [
                               'module_driver_constants.F90',
                               'module_state_description.F90',
                             ],
          'module_io_domain.F90' => [
                                      'module_state_description.F90',
                                      'module_configure.F90',
                                      'module_domain.F90',
                                      'module_date_time.F90',
                                      'module_wrf_error.F90',
                                      'module_io_wrf.F90',
                                      'module_io.F90',
                                    ],
          'module_io_quilt.F90' => [
                                     'module_quilt_outbuf_ops.F90',
                                     'module_state_description.F90',
                                   ],
          'module_io_wrf.F90' => [
                                   'module_timing.F90',
                                   'module_bc_time_utilities.F90',
                                   'ESMF_Mod.F90',
                                   'module_configure.F90',
                                   'module_state_description.F90',
                                   'module_domain.F90',
                                   'module_io.F90',
                                   'module_date_time.F90',
                                   'module_wrf_error.F90',
                                 ],
          'module_machine.F90' => [
                                    'module_driver_constants.F90',
                                  ],
          'module_microphysics_driver.F90' => [
                                                'module_mp_etanew.F90',
                                                'module_mp_wsm6.F90',
                                                'module_mp_wsm5.F90',
                                                'module_mp_wsm3.F90',
                                                'module_mp_ncloud5.F90',
                                                'module_mp_ncloud3.F90',
                                                'module_mp_lin.F90',
                                                'module_mp_kessler.F90',
                                                'module_wrf_error.F90',
                                                'module_model_constants.F90',
                                                'module_bc.F90',
                                                'module_state_description.F90',
                                              ],
          'module_mp_lin.F90' => [
                                   'module_wrf_error.F90',
                                 ],
          'module_nesting.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_domain.F90',
                                    'module_driver_constants.F90',
                                    'module_machine.F90',
                                  ],
          'module_optional_si_input.F90' => [
                                              'module_io_domain.F90',
                                              'module_io_wrf.F90',
                                              'module_configure.F90',
                                              'module_domain.F90',
                                            ],
          'module_pbl_driver.F90' => [
                                       'module_bl_mrf.F90',
                                       'module_bl_ysu.F90',
                                       'module_bl_myjpbl.F90',
                                       'module_model_constants.F90',
                                       'module_state_description.F90',
                                       'module_bc.F90',
                                     ],
          'module_physics_addtendc.F90' => [
                                             'module_cu_kfeta.F90',
                                             'module_cu_kf.F90',
                                             'module_bc.F90',
                                             'module_configure.F90',
                                             'module_state_description.F90',
                                           ],
          'module_physics_init.F90' => [
                                         'module_mp_etanew.F90',
                                         'module_mp_wsm6.F90',
                                         'module_mp_wsm5.F90',
                                         'module_mp_wsm3.F90',
                                         'module_mp_ncloud5.F90',
                                         'module_mp_ncloud3.F90',
                                         'module_cu_gd.F90',
                                         'module_cu_bmj.F90',
                                         'module_cu_kfeta.F90',
                                         'module_cu_kf.F90',
                                         'module_bl_myjpbl.F90',
                                         'module_sf_ruclsm.F90',
                                         'module_sf_noahlsm.F90',
                                         'module_sf_myjsfc.F90',
                                         'module_bl_mrf.F90',
                                         'module_bl_ysu.F90',
                                         'module_sf_slab.F90',
                                         'module_sf_sfclay.F90',
                                         'module_ra_gfdleta.F90',
                                         'module_ra_gsfcsw.F90',
                                         'module_ra_sw.F90',
                                         'module_ra_rrtm.F90',
                                         'module_wrf_error.F90',
                                         'module_date_time.F90',
                                         'module_configure.F90',
                                         'module_bc.F90',
                                         'module_model_constants.F90',
                                         'module_state_description.F90',
                                         'module_domain.F90',
                                       ],
          'module_quilt_outbuf_ops.F90' => [
                                             'module_state_description.F90',
                                           ],
          'module_ra_gfdleta.F90' => [
                                       'module_dm_stubs.F90',
                                     ],
          'module_ra_rrtm.F90' => [
                                    'module_dm_stubs.F90',
                                    'module_wrf_error.F90',
                                  ],
          'module_radiation_driver.F90' => [
                                             'module_ra_gfdleta.F90',
                                             'module_ra_rrtm.F90',
                                             'module_ra_gsfcsw.F90',
                                             'module_ra_sw.F90',
                                             'module_wrf_error.F90',
                                             'module_model_constants.F90',
                                             'module_state_description.F90',
                                             'module_bc.F90',
                                           ],
          'module_sf_myjsfc.F90' => [
                                      'module_model_constants.F90',
                                    ],
          'module_sf_noahlsm.F90' => [
                                       'module_model_constants.F90',
                                     ],
          'module_sf_ruclsm.F90' => [
                                      'module_wrf_error.F90',
                                    ],
          'module_small_step_em.F90' => [
                                          'module_model_constants.F90',
                                          'module_configure.F90',
                                        ],
          'module_soil_pre.F90' => [
                                     'module_date_time.F90',
                                   ],
          'module_surface_driver.F90' => [
                                           'module_sf_sfcdiags.F90',
                                           'module_sf_slab.F90',
                                           'module_sf_ruclsm.F90',
                                           'module_sf_noahlsm.F90',
                                           'module_sf_myjsfc.F90',
                                           'module_sf_sfclay.F90',
                                           'module_model_constants.F90',
                                           'module_state_description.F90',
                                           'module_bc.F90',
                                         ],
          'module_tiles.F90' => [
                                  'module_wrf_error.F90',
                                  'module_machine.F90',
                                  'module_driver_constants.F90',
                                  'module_domain.F90',
                                ],
          'nest_init_utils.F90' => [
                                     'module_domain.F90',
                                   ],
          'set_timekeeping.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_domain.F90',
                                   ],
          'solve_em.F90' => [
                              'module_pbl_driver.F90',
                              'module_microphysics_driver.F90',
                              'module_cumulus_driver.F90',
                              'module_surface_driver.F90',
                              'module_radiation_driver.F90',
                              'module_state_description.F90',
                              'module_diffusion_em.F90',
                              'module_physics_addtendc.F90',
                              'module_solvedebug_em.F90',
                              'module_bc_em.F90',
                              'module_bc.F90',
                              'module_big_step_utilities_em.F90',
                              'module_em.F90',
                              'module_small_step_em.F90',
                              'module_model_constants.F90',
                              'module_dm_stubs.F90',
                              'module_tiles.F90',
                              'module_machine.F90',
                              'module_driver_constants.F90',
                              'module_configure.F90',
                              'module_domain.F90',
                            ],
          'solve_interface.F90' => [
                                     'module_wrf_error.F90',
                                     'module_configure.F90',
                                     'module_driver_constants.F90',
                                     'module_timing.F90',
                                     'module_domain.F90',
                                   ],
          'start_domain.F90' => [
                                  'module_domain.F90',
                                ],
          'start_em.F90' => [
                              'module_physics_init.F90',
                              'module_date_time.F90',
                              'module_configure.F90',
                              'module_bc_em.F90',
                              'module_bc.F90',
                              'module_model_constants.F90',
                              'module_state_description.F90',
                              'module_domain.F90',
                            ],
          'wrf.F90' => [
                         'ESMF_Mod.F90',
                         'module_wrf_error.F90',
                         'module_timing.F90',
                         'module_configure.F90',
                         'module_driver_constants.F90',
                         'module_integrate.F90',
                         'module_domain.F90',
                         'module_machine.F90',
                       ],
          'wrf_auxhist1in.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_bc_time_utilities.F90',
                                    'module_date_time.F90',
                                    'module_io_wrf.F90',
                                    'module_io.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                  ],
          'wrf_auxhist1out.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                     'module_io_wrf.F90',
                                     'module_wrf_error.F90',
                                     'module_io.F90',
                                   ],
          'wrf_auxhist2in.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_bc_time_utilities.F90',
                                    'module_date_time.F90',
                                    'module_io_wrf.F90',
                                    'module_io.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                  ],
          'wrf_auxhist2out.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                     'module_io_wrf.F90',
                                     'module_wrf_error.F90',
                                     'module_io.F90',
                                   ],
          'wrf_auxhist3in.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_bc_time_utilities.F90',
                                    'module_date_time.F90',
                                    'module_io_wrf.F90',
                                    'module_io.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                  ],
          'wrf_auxhist3out.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                     'module_io_wrf.F90',
                                     'module_wrf_error.F90',
                                     'module_io.F90',
                                   ],
          'wrf_auxhist4in.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_bc_time_utilities.F90',
                                    'module_date_time.F90',
                                    'module_io_wrf.F90',
                                    'module_io.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                  ],
          'wrf_auxhist4out.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                     'module_io_wrf.F90',
                                     'module_wrf_error.F90',
                                     'module_io.F90',
                                   ],
          'wrf_auxhist5in.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_bc_time_utilities.F90',
                                    'module_date_time.F90',
                                    'module_io_wrf.F90',
                                    'module_io.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                  ],
          'wrf_auxhist5out.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                     'module_io_wrf.F90',
                                     'module_wrf_error.F90',
                                     'module_io.F90',
                                   ],
          'wrf_auxinput1in.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_bc_time_utilities.F90',
                                     'module_date_time.F90',
                                     'module_io_wrf.F90',
                                     'module_io.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                   ],
          'wrf_auxinput1out.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_configure.F90',
                                      'module_state_description.F90',
                                      'module_domain.F90',
                                      'module_io_wrf.F90',
                                      'module_wrf_error.F90',
                                      'module_io.F90',
                                    ],
          'wrf_auxinput2in.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_bc_time_utilities.F90',
                                     'module_date_time.F90',
                                     'module_io_wrf.F90',
                                     'module_io.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                   ],
          'wrf_auxinput2out.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_configure.F90',
                                      'module_state_description.F90',
                                      'module_domain.F90',
                                      'module_io_wrf.F90',
                                      'module_wrf_error.F90',
                                      'module_io.F90',
                                    ],
          'wrf_auxinput3in.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_bc_time_utilities.F90',
                                     'module_date_time.F90',
                                     'module_io_wrf.F90',
                                     'module_io.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                   ],
          'wrf_auxinput3out.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_configure.F90',
                                      'module_state_description.F90',
                                      'module_domain.F90',
                                      'module_io_wrf.F90',
                                      'module_wrf_error.F90',
                                      'module_io.F90',
                                    ],
          'wrf_auxinput4in.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_bc_time_utilities.F90',
                                     'module_date_time.F90',
                                     'module_io_wrf.F90',
                                     'module_io.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                   ],
          'wrf_auxinput4out.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_configure.F90',
                                      'module_state_description.F90',
                                      'module_domain.F90',
                                      'module_io_wrf.F90',
                                      'module_wrf_error.F90',
                                      'module_io.F90',
                                    ],
          'wrf_auxinput5in.F90' => [
                                     'ESMF_Mod.F90',
                                     'module_bc_time_utilities.F90',
                                     'module_date_time.F90',
                                     'module_io_wrf.F90',
                                     'module_io.F90',
                                     'module_configure.F90',
                                     'module_state_description.F90',
                                     'module_domain.F90',
                                   ],
          'wrf_auxinput5out.F90' => [
                                      'ESMF_Mod.F90',
                                      'module_configure.F90',
                                      'module_state_description.F90',
                                      'module_domain.F90',
                                      'module_io_wrf.F90',
                                      'module_wrf_error.F90',
                                      'module_io.F90',
                                    ],
          'wrf_bdyin.F90' => [
                               'ESMF_Mod.F90',
                               'module_bc_time_utilities.F90',
                               'module_date_time.F90',
                               'module_io_wrf.F90',
                               'module_io.F90',
                               'module_configure.F90',
                               'module_state_description.F90',
                               'module_domain.F90',
                             ],
          'wrf_bdyout.F90' => [
                                'ESMF_Mod.F90',
                                'module_configure.F90',
                                'module_state_description.F90',
                                'module_domain.F90',
                                'module_io_wrf.F90',
                                'module_wrf_error.F90',
                                'module_io.F90',
                              ],
          'wrf_histin.F90' => [
                                'ESMF_Mod.F90',
                                'module_bc_time_utilities.F90',
                                'module_date_time.F90',
                                'module_io_wrf.F90',
                                'module_io.F90',
                                'module_configure.F90',
                                'module_state_description.F90',
                                'module_domain.F90',
                              ],
          'wrf_histout.F90' => [
                                 'ESMF_Mod.F90',
                                 'module_configure.F90',
                                 'module_state_description.F90',
                                 'module_domain.F90',
                                 'module_io_wrf.F90',
                                 'module_wrf_error.F90',
                                 'module_io.F90',
                               ],
          'wrf_inputin.F90' => [
                                 'ESMF_Mod.F90',
                                 'module_bc_time_utilities.F90',
                                 'module_date_time.F90',
                                 'module_io_wrf.F90',
                                 'module_io.F90',
                                 'module_configure.F90',
                                 'module_state_description.F90',
                                 'module_domain.F90',
                               ],
          'wrf_inputout.F90' => [
                                  'ESMF_Mod.F90',
                                  'module_configure.F90',
                                  'module_state_description.F90',
                                  'module_domain.F90',
                                  'module_io_wrf.F90',
                                  'module_wrf_error.F90',
                                  'module_io.F90',
                                ],
          'wrf_restartin.F90' => [
                                   'ESMF_Mod.F90',
                                   'module_bc_time_utilities.F90',
                                   'module_date_time.F90',
                                   'module_io_wrf.F90',
                                   'module_io.F90',
                                   'module_configure.F90',
                                   'module_state_description.F90',
                                   'module_domain.F90',
                                 ],
          'wrf_restartout.F90' => [
                                    'ESMF_Mod.F90',
                                    'module_configure.F90',
                                    'module_state_description.F90',
                                    'module_domain.F90',
                                    'module_io_wrf.F90',
                                    'module_wrf_error.F90',
                                    'module_io.F90',
                                  ],
          'field_routines.f90' => [
                                    'wrf_io.f90',
                                    'wrf_io.f90',
                                  ],
          'wrf_io.f90' => [
                          ],
                          
          'netcdf/netcdf.f90' => [
                           'netcdf/typeSizes.f90',
                          ],

        );

%srcdeps = (
          'couple_or_uncouple_em.F90' => [
                                           'em_dummy_args.inc',
                                         ],
          'internal_header_util.F90' => [
                                          'intio_tags.h',
                                        ],
          'interp_domain_em.F90' => [
                                      'em_nest_interpdown_interp.inc',
                                      'em_dummy_args.inc',
                                    ],
          'io_int.F90' => [
                            'wrf_status_codes.h',
                            'wrf_io_flags.h',
                            'intio_tags.h',
                          ],
          'mediation_feedback_domain.F90' => [
                                               'deref_kludge.h',
                                               'em_dummy_args.inc',
                                             ],
          'mediation_force_domain.F90' => [
                                            'deref_kludge.h',
                                            'em_dummy_args.inc',
                                          ],
          'mediation_integrate.F90' => [
                                         'deref_kludge.h',
                                       ],
          'mediation_interp_domain.F90' => [
                                             'em_actual_args.inc',
                                             'deref_kludge.h',
                                             'em_dummy_args.inc',
                                           ],
          'module_io.F90' => [
                               'wrf_io_flags.h',
                             ],
          'module_io_quilt.F90' => [
                                     'wrf_io_flags.h',
                                     'intio_tags.h',
                                   ],
          'module_quilt_outbuf_ops.F90' => [
                                             'wrf_io_flags.h',
                                           ],
          'solve_em.F90' => [
                              'em_dummy_args.inc',
                            ],
          'solve_interface.F90' => [
                                     'deref_kludge.h',
                                   ],
          'start_domain.F90' => [
                                  'deref_kludge.h',
                                ],
          'field_routines.f90' => [
                                    'wrf_status_codes.h',
                                  ],
          'wrf_io.f90' => [
                            'wrf_status_codes.h',
                          ],

        );

1;

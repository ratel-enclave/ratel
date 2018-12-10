!STARTOFREGISTRYGENERATEDINCLUDE 'inc/get_nl_config.inc'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
SUBROUTINE get_run_days ( run_days )
  USE module_configure
  integer , INTENT(OUT) :: run_days
  run_days = model_config_rec%run_days
  RETURN
END SUBROUTINE get_run_days
SUBROUTINE get_run_hours ( run_hours )
  USE module_configure
  integer , INTENT(OUT) :: run_hours
  run_hours = model_config_rec%run_hours
  RETURN
END SUBROUTINE get_run_hours
SUBROUTINE get_run_minutes ( run_minutes )
  USE module_configure
  integer , INTENT(OUT) :: run_minutes
  run_minutes = model_config_rec%run_minutes
  RETURN
END SUBROUTINE get_run_minutes
SUBROUTINE get_run_seconds ( run_seconds )
  USE module_configure
  integer , INTENT(OUT) :: run_seconds
  run_seconds = model_config_rec%run_seconds
  RETURN
END SUBROUTINE get_run_seconds
SUBROUTINE get_start_year ( id_id , start_year )
  USE module_configure
  integer , INTENT(OUT) :: start_year
  INTEGER id_id
  start_year = model_config_rec%start_year(id_id)
  RETURN
END SUBROUTINE get_start_year
SUBROUTINE get_start_month ( id_id , start_month )
  USE module_configure
  integer , INTENT(OUT) :: start_month
  INTEGER id_id
  start_month = model_config_rec%start_month(id_id)
  RETURN
END SUBROUTINE get_start_month
SUBROUTINE get_start_day ( id_id , start_day )
  USE module_configure
  integer , INTENT(OUT) :: start_day
  INTEGER id_id
  start_day = model_config_rec%start_day(id_id)
  RETURN
END SUBROUTINE get_start_day
SUBROUTINE get_start_hour ( id_id , start_hour )
  USE module_configure
  integer , INTENT(OUT) :: start_hour
  INTEGER id_id
  start_hour = model_config_rec%start_hour(id_id)
  RETURN
END SUBROUTINE get_start_hour
SUBROUTINE get_start_minute ( id_id , start_minute )
  USE module_configure
  integer , INTENT(OUT) :: start_minute
  INTEGER id_id
  start_minute = model_config_rec%start_minute(id_id)
  RETURN
END SUBROUTINE get_start_minute
SUBROUTINE get_start_second ( id_id , start_second )
  USE module_configure
  integer , INTENT(OUT) :: start_second
  INTEGER id_id
  start_second = model_config_rec%start_second(id_id)
  RETURN
END SUBROUTINE get_start_second
SUBROUTINE get_end_year ( id_id , end_year )
  USE module_configure
  integer , INTENT(OUT) :: end_year
  INTEGER id_id
  end_year = model_config_rec%end_year(id_id)
  RETURN
END SUBROUTINE get_end_year
SUBROUTINE get_end_month ( id_id , end_month )
  USE module_configure
  integer , INTENT(OUT) :: end_month
  INTEGER id_id
  end_month = model_config_rec%end_month(id_id)
  RETURN
END SUBROUTINE get_end_month
SUBROUTINE get_end_day ( id_id , end_day )
  USE module_configure
  integer , INTENT(OUT) :: end_day
  INTEGER id_id
  end_day = model_config_rec%end_day(id_id)
  RETURN
END SUBROUTINE get_end_day
SUBROUTINE get_end_hour ( id_id , end_hour )
  USE module_configure
  integer , INTENT(OUT) :: end_hour
  INTEGER id_id
  end_hour = model_config_rec%end_hour(id_id)
  RETURN
END SUBROUTINE get_end_hour
SUBROUTINE get_end_minute ( id_id , end_minute )
  USE module_configure
  integer , INTENT(OUT) :: end_minute
  INTEGER id_id
  end_minute = model_config_rec%end_minute(id_id)
  RETURN
END SUBROUTINE get_end_minute
SUBROUTINE get_end_second ( id_id , end_second )
  USE module_configure
  integer , INTENT(OUT) :: end_second
  INTEGER id_id
  end_second = model_config_rec%end_second(id_id)
  RETURN
END SUBROUTINE get_end_second
SUBROUTINE get_interval_seconds ( interval_seconds )
  USE module_configure
  integer , INTENT(OUT) :: interval_seconds
  interval_seconds = model_config_rec%interval_seconds
  RETURN
END SUBROUTINE get_interval_seconds
SUBROUTINE get_input_from_file ( id_id , input_from_file )
  USE module_configure
  logical , INTENT(OUT) :: input_from_file
  INTEGER id_id
  input_from_file = model_config_rec%input_from_file(id_id)
  RETURN
END SUBROUTINE get_input_from_file
SUBROUTINE get_history_interval ( id_id , history_interval )
  USE module_configure
  integer , INTENT(OUT) :: history_interval
  INTEGER id_id
  history_interval = model_config_rec%history_interval(id_id)
  RETURN
END SUBROUTINE get_history_interval
SUBROUTINE get_frames_per_outfile ( id_id , frames_per_outfile )
  USE module_configure
  integer , INTENT(OUT) :: frames_per_outfile
  INTEGER id_id
  frames_per_outfile = model_config_rec%frames_per_outfile(id_id)
  RETURN
END SUBROUTINE get_frames_per_outfile
SUBROUTINE get_restart ( restart )
  USE module_configure
  logical , INTENT(OUT) :: restart
  restart = model_config_rec%restart
  RETURN
END SUBROUTINE get_restart
SUBROUTINE get_restart_interval ( restart_interval )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval
  restart_interval = model_config_rec%restart_interval
  RETURN
END SUBROUTINE get_restart_interval
SUBROUTINE get_io_form_input ( io_form_input )
  USE module_configure
  integer , INTENT(OUT) :: io_form_input
  io_form_input = model_config_rec%io_form_input
  RETURN
END SUBROUTINE get_io_form_input
SUBROUTINE get_io_form_history ( io_form_history )
  USE module_configure
  integer , INTENT(OUT) :: io_form_history
  io_form_history = model_config_rec%io_form_history
  RETURN
END SUBROUTINE get_io_form_history
SUBROUTINE get_io_form_restart ( io_form_restart )
  USE module_configure
  integer , INTENT(OUT) :: io_form_restart
  io_form_restart = model_config_rec%io_form_restart
  RETURN
END SUBROUTINE get_io_form_restart
SUBROUTINE get_io_form_boundary ( io_form_boundary )
  USE module_configure
  integer , INTENT(OUT) :: io_form_boundary
  io_form_boundary = model_config_rec%io_form_boundary
  RETURN
END SUBROUTINE get_io_form_boundary
SUBROUTINE get_debug_level ( debug_level )
  USE module_configure
  integer , INTENT(OUT) :: debug_level
  debug_level = model_config_rec%debug_level
  RETURN
END SUBROUTINE get_debug_level
SUBROUTINE get_history_outname ( history_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: history_outname
  history_outname = model_config_rec%history_outname
  RETURN
END SUBROUTINE get_history_outname
SUBROUTINE get_auxhist1_outname ( auxhist1_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist1_outname
  auxhist1_outname = model_config_rec%auxhist1_outname
  RETURN
END SUBROUTINE get_auxhist1_outname
SUBROUTINE get_auxhist2_outname ( auxhist2_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist2_outname
  auxhist2_outname = model_config_rec%auxhist2_outname
  RETURN
END SUBROUTINE get_auxhist2_outname
SUBROUTINE get_auxhist3_outname ( auxhist3_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist3_outname
  auxhist3_outname = model_config_rec%auxhist3_outname
  RETURN
END SUBROUTINE get_auxhist3_outname
SUBROUTINE get_auxhist4_outname ( auxhist4_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist4_outname
  auxhist4_outname = model_config_rec%auxhist4_outname
  RETURN
END SUBROUTINE get_auxhist4_outname
SUBROUTINE get_auxhist5_outname ( auxhist5_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist5_outname
  auxhist5_outname = model_config_rec%auxhist5_outname
  RETURN
END SUBROUTINE get_auxhist5_outname
SUBROUTINE get_history_inname ( history_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: history_inname
  history_inname = model_config_rec%history_inname
  RETURN
END SUBROUTINE get_history_inname
SUBROUTINE get_auxhist1_inname ( auxhist1_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist1_inname
  auxhist1_inname = model_config_rec%auxhist1_inname
  RETURN
END SUBROUTINE get_auxhist1_inname
SUBROUTINE get_auxhist2_inname ( auxhist2_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist2_inname
  auxhist2_inname = model_config_rec%auxhist2_inname
  RETURN
END SUBROUTINE get_auxhist2_inname
SUBROUTINE get_auxhist3_inname ( auxhist3_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist3_inname
  auxhist3_inname = model_config_rec%auxhist3_inname
  RETURN
END SUBROUTINE get_auxhist3_inname
SUBROUTINE get_auxhist4_inname ( auxhist4_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist4_inname
  auxhist4_inname = model_config_rec%auxhist4_inname
  RETURN
END SUBROUTINE get_auxhist4_inname
SUBROUTINE get_auxhist5_inname ( auxhist5_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: auxhist5_inname
  auxhist5_inname = model_config_rec%auxhist5_inname
  RETURN
END SUBROUTINE get_auxhist5_inname
SUBROUTINE get_history_interval_mo ( id_id , history_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: history_interval_mo
  INTEGER id_id
  history_interval_mo = model_config_rec%history_interval_mo(id_id)
  RETURN
END SUBROUTINE get_history_interval_mo
SUBROUTINE get_history_interval_d ( id_id , history_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: history_interval_d
  INTEGER id_id
  history_interval_d = model_config_rec%history_interval_d(id_id)
  RETURN
END SUBROUTINE get_history_interval_d
SUBROUTINE get_history_interval_h ( id_id , history_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: history_interval_h
  INTEGER id_id
  history_interval_h = model_config_rec%history_interval_h(id_id)
  RETURN
END SUBROUTINE get_history_interval_h
SUBROUTINE get_history_interval_m ( id_id , history_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: history_interval_m
  INTEGER id_id
  history_interval_m = model_config_rec%history_interval_m(id_id)
  RETURN
END SUBROUTINE get_history_interval_m
SUBROUTINE get_history_interval_s ( id_id , history_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: history_interval_s
  INTEGER id_id
  history_interval_s = model_config_rec%history_interval_s(id_id)
  RETURN
END SUBROUTINE get_history_interval_s
SUBROUTINE get_inputout_interval_mo ( id_id , inputout_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval_mo
  INTEGER id_id
  inputout_interval_mo = model_config_rec%inputout_interval_mo(id_id)
  RETURN
END SUBROUTINE get_inputout_interval_mo
SUBROUTINE get_inputout_interval_d ( id_id , inputout_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval_d
  INTEGER id_id
  inputout_interval_d = model_config_rec%inputout_interval_d(id_id)
  RETURN
END SUBROUTINE get_inputout_interval_d
SUBROUTINE get_inputout_interval_h ( id_id , inputout_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval_h
  INTEGER id_id
  inputout_interval_h = model_config_rec%inputout_interval_h(id_id)
  RETURN
END SUBROUTINE get_inputout_interval_h
SUBROUTINE get_inputout_interval_m ( id_id , inputout_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval_m
  INTEGER id_id
  inputout_interval_m = model_config_rec%inputout_interval_m(id_id)
  RETURN
END SUBROUTINE get_inputout_interval_m
SUBROUTINE get_inputout_interval_s ( id_id , inputout_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval_s
  INTEGER id_id
  inputout_interval_s = model_config_rec%inputout_interval_s(id_id)
  RETURN
END SUBROUTINE get_inputout_interval_s
SUBROUTINE get_inputout_interval ( id_id , inputout_interval )
  USE module_configure
  integer , INTENT(OUT) :: inputout_interval
  INTEGER id_id
  inputout_interval = model_config_rec%inputout_interval(id_id)
  RETURN
END SUBROUTINE get_inputout_interval
SUBROUTINE get_auxhist1_interval_mo ( id_id , auxhist1_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval_mo
  INTEGER id_id
  auxhist1_interval_mo = model_config_rec%auxhist1_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval_mo
SUBROUTINE get_auxhist1_interval_d ( id_id , auxhist1_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval_d
  INTEGER id_id
  auxhist1_interval_d = model_config_rec%auxhist1_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval_d
SUBROUTINE get_auxhist1_interval_h ( id_id , auxhist1_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval_h
  INTEGER id_id
  auxhist1_interval_h = model_config_rec%auxhist1_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval_h
SUBROUTINE get_auxhist1_interval_m ( id_id , auxhist1_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval_m
  INTEGER id_id
  auxhist1_interval_m = model_config_rec%auxhist1_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval_m
SUBROUTINE get_auxhist1_interval_s ( id_id , auxhist1_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval_s
  INTEGER id_id
  auxhist1_interval_s = model_config_rec%auxhist1_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval_s
SUBROUTINE get_auxhist1_interval ( id_id , auxhist1_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_interval
  INTEGER id_id
  auxhist1_interval = model_config_rec%auxhist1_interval(id_id)
  RETURN
END SUBROUTINE get_auxhist1_interval
SUBROUTINE get_auxhist2_interval_mo ( id_id , auxhist2_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval_mo
  INTEGER id_id
  auxhist2_interval_mo = model_config_rec%auxhist2_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval_mo
SUBROUTINE get_auxhist2_interval_d ( id_id , auxhist2_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval_d
  INTEGER id_id
  auxhist2_interval_d = model_config_rec%auxhist2_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval_d
SUBROUTINE get_auxhist2_interval_h ( id_id , auxhist2_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval_h
  INTEGER id_id
  auxhist2_interval_h = model_config_rec%auxhist2_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval_h
SUBROUTINE get_auxhist2_interval_m ( id_id , auxhist2_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval_m
  INTEGER id_id
  auxhist2_interval_m = model_config_rec%auxhist2_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval_m
SUBROUTINE get_auxhist2_interval_s ( id_id , auxhist2_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval_s
  INTEGER id_id
  auxhist2_interval_s = model_config_rec%auxhist2_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval_s
SUBROUTINE get_auxhist2_interval ( id_id , auxhist2_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_interval
  INTEGER id_id
  auxhist2_interval = model_config_rec%auxhist2_interval(id_id)
  RETURN
END SUBROUTINE get_auxhist2_interval
SUBROUTINE get_auxhist3_interval_mo ( id_id , auxhist3_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval_mo
  INTEGER id_id
  auxhist3_interval_mo = model_config_rec%auxhist3_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval_mo
SUBROUTINE get_auxhist3_interval_d ( id_id , auxhist3_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval_d
  INTEGER id_id
  auxhist3_interval_d = model_config_rec%auxhist3_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval_d
SUBROUTINE get_auxhist3_interval_h ( id_id , auxhist3_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval_h
  INTEGER id_id
  auxhist3_interval_h = model_config_rec%auxhist3_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval_h
SUBROUTINE get_auxhist3_interval_m ( id_id , auxhist3_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval_m
  INTEGER id_id
  auxhist3_interval_m = model_config_rec%auxhist3_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval_m
SUBROUTINE get_auxhist3_interval_s ( id_id , auxhist3_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval_s
  INTEGER id_id
  auxhist3_interval_s = model_config_rec%auxhist3_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval_s
SUBROUTINE get_auxhist3_interval ( id_id , auxhist3_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_interval
  INTEGER id_id
  auxhist3_interval = model_config_rec%auxhist3_interval(id_id)
  RETURN
END SUBROUTINE get_auxhist3_interval
SUBROUTINE get_auxhist4_interval_mo ( id_id , auxhist4_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval_mo
  INTEGER id_id
  auxhist4_interval_mo = model_config_rec%auxhist4_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval_mo
SUBROUTINE get_auxhist4_interval_d ( id_id , auxhist4_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval_d
  INTEGER id_id
  auxhist4_interval_d = model_config_rec%auxhist4_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval_d
SUBROUTINE get_auxhist4_interval_h ( id_id , auxhist4_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval_h
  INTEGER id_id
  auxhist4_interval_h = model_config_rec%auxhist4_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval_h
SUBROUTINE get_auxhist4_interval_m ( id_id , auxhist4_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval_m
  INTEGER id_id
  auxhist4_interval_m = model_config_rec%auxhist4_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval_m
SUBROUTINE get_auxhist4_interval_s ( id_id , auxhist4_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval_s
  INTEGER id_id
  auxhist4_interval_s = model_config_rec%auxhist4_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval_s
SUBROUTINE get_auxhist4_interval ( id_id , auxhist4_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_interval
  INTEGER id_id
  auxhist4_interval = model_config_rec%auxhist4_interval(id_id)
  RETURN
END SUBROUTINE get_auxhist4_interval
SUBROUTINE get_auxhist5_interval_mo ( id_id , auxhist5_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval_mo
  INTEGER id_id
  auxhist5_interval_mo = model_config_rec%auxhist5_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval_mo
SUBROUTINE get_auxhist5_interval_d ( id_id , auxhist5_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval_d
  INTEGER id_id
  auxhist5_interval_d = model_config_rec%auxhist5_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval_d
SUBROUTINE get_auxhist5_interval_h ( id_id , auxhist5_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval_h
  INTEGER id_id
  auxhist5_interval_h = model_config_rec%auxhist5_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval_h
SUBROUTINE get_auxhist5_interval_m ( id_id , auxhist5_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval_m
  INTEGER id_id
  auxhist5_interval_m = model_config_rec%auxhist5_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval_m
SUBROUTINE get_auxhist5_interval_s ( id_id , auxhist5_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval_s
  INTEGER id_id
  auxhist5_interval_s = model_config_rec%auxhist5_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval_s
SUBROUTINE get_auxhist5_interval ( id_id , auxhist5_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_interval
  INTEGER id_id
  auxhist5_interval = model_config_rec%auxhist5_interval(id_id)
  RETURN
END SUBROUTINE get_auxhist5_interval
SUBROUTINE get_auxinput1_interval_mo ( id_id , auxinput1_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval_mo
  INTEGER id_id
  auxinput1_interval_mo = model_config_rec%auxinput1_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval_mo
SUBROUTINE get_auxinput1_interval_d ( id_id , auxinput1_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval_d
  INTEGER id_id
  auxinput1_interval_d = model_config_rec%auxinput1_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval_d
SUBROUTINE get_auxinput1_interval_h ( id_id , auxinput1_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval_h
  INTEGER id_id
  auxinput1_interval_h = model_config_rec%auxinput1_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval_h
SUBROUTINE get_auxinput1_interval_m ( id_id , auxinput1_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval_m
  INTEGER id_id
  auxinput1_interval_m = model_config_rec%auxinput1_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval_m
SUBROUTINE get_auxinput1_interval_s ( id_id , auxinput1_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval_s
  INTEGER id_id
  auxinput1_interval_s = model_config_rec%auxinput1_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval_s
SUBROUTINE get_auxinput1_interval ( id_id , auxinput1_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_interval
  INTEGER id_id
  auxinput1_interval = model_config_rec%auxinput1_interval(id_id)
  RETURN
END SUBROUTINE get_auxinput1_interval
SUBROUTINE get_auxinput2_interval_mo ( id_id , auxinput2_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval_mo
  INTEGER id_id
  auxinput2_interval_mo = model_config_rec%auxinput2_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval_mo
SUBROUTINE get_auxinput2_interval_d ( id_id , auxinput2_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval_d
  INTEGER id_id
  auxinput2_interval_d = model_config_rec%auxinput2_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval_d
SUBROUTINE get_auxinput2_interval_h ( id_id , auxinput2_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval_h
  INTEGER id_id
  auxinput2_interval_h = model_config_rec%auxinput2_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval_h
SUBROUTINE get_auxinput2_interval_m ( id_id , auxinput2_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval_m
  INTEGER id_id
  auxinput2_interval_m = model_config_rec%auxinput2_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval_m
SUBROUTINE get_auxinput2_interval_s ( id_id , auxinput2_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval_s
  INTEGER id_id
  auxinput2_interval_s = model_config_rec%auxinput2_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval_s
SUBROUTINE get_auxinput2_interval ( id_id , auxinput2_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_interval
  INTEGER id_id
  auxinput2_interval = model_config_rec%auxinput2_interval(id_id)
  RETURN
END SUBROUTINE get_auxinput2_interval
SUBROUTINE get_auxinput3_interval_mo ( id_id , auxinput3_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval_mo
  INTEGER id_id
  auxinput3_interval_mo = model_config_rec%auxinput3_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval_mo
SUBROUTINE get_auxinput3_interval_d ( id_id , auxinput3_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval_d
  INTEGER id_id
  auxinput3_interval_d = model_config_rec%auxinput3_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval_d
SUBROUTINE get_auxinput3_interval_h ( id_id , auxinput3_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval_h
  INTEGER id_id
  auxinput3_interval_h = model_config_rec%auxinput3_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval_h
SUBROUTINE get_auxinput3_interval_m ( id_id , auxinput3_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval_m
  INTEGER id_id
  auxinput3_interval_m = model_config_rec%auxinput3_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval_m
SUBROUTINE get_auxinput3_interval_s ( id_id , auxinput3_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval_s
  INTEGER id_id
  auxinput3_interval_s = model_config_rec%auxinput3_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval_s
SUBROUTINE get_auxinput3_interval ( id_id , auxinput3_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_interval
  INTEGER id_id
  auxinput3_interval = model_config_rec%auxinput3_interval(id_id)
  RETURN
END SUBROUTINE get_auxinput3_interval
SUBROUTINE get_auxinput4_interval_mo ( id_id , auxinput4_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval_mo
  INTEGER id_id
  auxinput4_interval_mo = model_config_rec%auxinput4_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval_mo
SUBROUTINE get_auxinput4_interval_d ( id_id , auxinput4_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval_d
  INTEGER id_id
  auxinput4_interval_d = model_config_rec%auxinput4_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval_d
SUBROUTINE get_auxinput4_interval_h ( id_id , auxinput4_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval_h
  INTEGER id_id
  auxinput4_interval_h = model_config_rec%auxinput4_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval_h
SUBROUTINE get_auxinput4_interval_m ( id_id , auxinput4_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval_m
  INTEGER id_id
  auxinput4_interval_m = model_config_rec%auxinput4_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval_m
SUBROUTINE get_auxinput4_interval_s ( id_id , auxinput4_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval_s
  INTEGER id_id
  auxinput4_interval_s = model_config_rec%auxinput4_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval_s
SUBROUTINE get_auxinput4_interval ( id_id , auxinput4_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_interval
  INTEGER id_id
  auxinput4_interval = model_config_rec%auxinput4_interval(id_id)
  RETURN
END SUBROUTINE get_auxinput4_interval
SUBROUTINE get_auxinput5_interval_mo ( id_id , auxinput5_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval_mo
  INTEGER id_id
  auxinput5_interval_mo = model_config_rec%auxinput5_interval_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval_mo
SUBROUTINE get_auxinput5_interval_d ( id_id , auxinput5_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval_d
  INTEGER id_id
  auxinput5_interval_d = model_config_rec%auxinput5_interval_d(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval_d
SUBROUTINE get_auxinput5_interval_h ( id_id , auxinput5_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval_h
  INTEGER id_id
  auxinput5_interval_h = model_config_rec%auxinput5_interval_h(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval_h
SUBROUTINE get_auxinput5_interval_m ( id_id , auxinput5_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval_m
  INTEGER id_id
  auxinput5_interval_m = model_config_rec%auxinput5_interval_m(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval_m
SUBROUTINE get_auxinput5_interval_s ( id_id , auxinput5_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval_s
  INTEGER id_id
  auxinput5_interval_s = model_config_rec%auxinput5_interval_s(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval_s
SUBROUTINE get_auxinput5_interval ( id_id , auxinput5_interval )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_interval
  INTEGER id_id
  auxinput5_interval = model_config_rec%auxinput5_interval(id_id)
  RETURN
END SUBROUTINE get_auxinput5_interval
SUBROUTINE get_restart_interval_mo ( restart_interval_mo )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval_mo
  restart_interval_mo = model_config_rec%restart_interval_mo
  RETURN
END SUBROUTINE get_restart_interval_mo
SUBROUTINE get_restart_interval_d ( restart_interval_d )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval_d
  restart_interval_d = model_config_rec%restart_interval_d
  RETURN
END SUBROUTINE get_restart_interval_d
SUBROUTINE get_restart_interval_h ( restart_interval_h )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval_h
  restart_interval_h = model_config_rec%restart_interval_h
  RETURN
END SUBROUTINE get_restart_interval_h
SUBROUTINE get_restart_interval_m ( restart_interval_m )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval_m
  restart_interval_m = model_config_rec%restart_interval_m
  RETURN
END SUBROUTINE get_restart_interval_m
SUBROUTINE get_restart_interval_s ( restart_interval_s )
  USE module_configure
  integer , INTENT(OUT) :: restart_interval_s
  restart_interval_s = model_config_rec%restart_interval_s
  RETURN
END SUBROUTINE get_restart_interval_s
SUBROUTINE get_history_begin_y ( id_id , history_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_y
  INTEGER id_id
  history_begin_y = model_config_rec%history_begin_y(id_id)
  RETURN
END SUBROUTINE get_history_begin_y
SUBROUTINE get_history_begin_mo ( id_id , history_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_mo
  INTEGER id_id
  history_begin_mo = model_config_rec%history_begin_mo(id_id)
  RETURN
END SUBROUTINE get_history_begin_mo
SUBROUTINE get_history_begin_d ( id_id , history_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_d
  INTEGER id_id
  history_begin_d = model_config_rec%history_begin_d(id_id)
  RETURN
END SUBROUTINE get_history_begin_d
SUBROUTINE get_history_begin_h ( id_id , history_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_h
  INTEGER id_id
  history_begin_h = model_config_rec%history_begin_h(id_id)
  RETURN
END SUBROUTINE get_history_begin_h
SUBROUTINE get_history_begin_m ( id_id , history_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_m
  INTEGER id_id
  history_begin_m = model_config_rec%history_begin_m(id_id)
  RETURN
END SUBROUTINE get_history_begin_m
SUBROUTINE get_history_begin_s ( id_id , history_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: history_begin_s
  INTEGER id_id
  history_begin_s = model_config_rec%history_begin_s(id_id)
  RETURN
END SUBROUTINE get_history_begin_s
SUBROUTINE get_inputout_begin_y ( id_id , inputout_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_y
  INTEGER id_id
  inputout_begin_y = model_config_rec%inputout_begin_y(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_y
SUBROUTINE get_inputout_begin_mo ( id_id , inputout_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_mo
  INTEGER id_id
  inputout_begin_mo = model_config_rec%inputout_begin_mo(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_mo
SUBROUTINE get_inputout_begin_d ( id_id , inputout_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_d
  INTEGER id_id
  inputout_begin_d = model_config_rec%inputout_begin_d(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_d
SUBROUTINE get_inputout_begin_h ( id_id , inputout_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_h
  INTEGER id_id
  inputout_begin_h = model_config_rec%inputout_begin_h(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_h
SUBROUTINE get_inputout_begin_m ( id_id , inputout_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_m
  INTEGER id_id
  inputout_begin_m = model_config_rec%inputout_begin_m(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_m
SUBROUTINE get_inputout_begin_s ( id_id , inputout_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: inputout_begin_s
  INTEGER id_id
  inputout_begin_s = model_config_rec%inputout_begin_s(id_id)
  RETURN
END SUBROUTINE get_inputout_begin_s
SUBROUTINE get_auxhist1_begin_y ( id_id , auxhist1_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_y
  INTEGER id_id
  auxhist1_begin_y = model_config_rec%auxhist1_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_y
SUBROUTINE get_auxhist1_begin_mo ( id_id , auxhist1_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_mo
  INTEGER id_id
  auxhist1_begin_mo = model_config_rec%auxhist1_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_mo
SUBROUTINE get_auxhist1_begin_d ( id_id , auxhist1_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_d
  INTEGER id_id
  auxhist1_begin_d = model_config_rec%auxhist1_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_d
SUBROUTINE get_auxhist1_begin_h ( id_id , auxhist1_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_h
  INTEGER id_id
  auxhist1_begin_h = model_config_rec%auxhist1_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_h
SUBROUTINE get_auxhist1_begin_m ( id_id , auxhist1_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_m
  INTEGER id_id
  auxhist1_begin_m = model_config_rec%auxhist1_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_m
SUBROUTINE get_auxhist1_begin_s ( id_id , auxhist1_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_begin_s
  INTEGER id_id
  auxhist1_begin_s = model_config_rec%auxhist1_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxhist1_begin_s
SUBROUTINE get_auxhist2_begin_y ( id_id , auxhist2_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_y
  INTEGER id_id
  auxhist2_begin_y = model_config_rec%auxhist2_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_y
SUBROUTINE get_auxhist2_begin_mo ( id_id , auxhist2_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_mo
  INTEGER id_id
  auxhist2_begin_mo = model_config_rec%auxhist2_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_mo
SUBROUTINE get_auxhist2_begin_d ( id_id , auxhist2_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_d
  INTEGER id_id
  auxhist2_begin_d = model_config_rec%auxhist2_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_d
SUBROUTINE get_auxhist2_begin_h ( id_id , auxhist2_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_h
  INTEGER id_id
  auxhist2_begin_h = model_config_rec%auxhist2_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_h
SUBROUTINE get_auxhist2_begin_m ( id_id , auxhist2_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_m
  INTEGER id_id
  auxhist2_begin_m = model_config_rec%auxhist2_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_m
SUBROUTINE get_auxhist2_begin_s ( id_id , auxhist2_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_begin_s
  INTEGER id_id
  auxhist2_begin_s = model_config_rec%auxhist2_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxhist2_begin_s
SUBROUTINE get_auxhist3_begin_y ( id_id , auxhist3_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_y
  INTEGER id_id
  auxhist3_begin_y = model_config_rec%auxhist3_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_y
SUBROUTINE get_auxhist3_begin_mo ( id_id , auxhist3_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_mo
  INTEGER id_id
  auxhist3_begin_mo = model_config_rec%auxhist3_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_mo
SUBROUTINE get_auxhist3_begin_d ( id_id , auxhist3_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_d
  INTEGER id_id
  auxhist3_begin_d = model_config_rec%auxhist3_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_d
SUBROUTINE get_auxhist3_begin_h ( id_id , auxhist3_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_h
  INTEGER id_id
  auxhist3_begin_h = model_config_rec%auxhist3_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_h
SUBROUTINE get_auxhist3_begin_m ( id_id , auxhist3_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_m
  INTEGER id_id
  auxhist3_begin_m = model_config_rec%auxhist3_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_m
SUBROUTINE get_auxhist3_begin_s ( id_id , auxhist3_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_begin_s
  INTEGER id_id
  auxhist3_begin_s = model_config_rec%auxhist3_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxhist3_begin_s
SUBROUTINE get_auxhist4_begin_y ( id_id , auxhist4_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_y
  INTEGER id_id
  auxhist4_begin_y = model_config_rec%auxhist4_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_y
SUBROUTINE get_auxhist4_begin_mo ( id_id , auxhist4_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_mo
  INTEGER id_id
  auxhist4_begin_mo = model_config_rec%auxhist4_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_mo
SUBROUTINE get_auxhist4_begin_d ( id_id , auxhist4_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_d
  INTEGER id_id
  auxhist4_begin_d = model_config_rec%auxhist4_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_d
SUBROUTINE get_auxhist4_begin_h ( id_id , auxhist4_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_h
  INTEGER id_id
  auxhist4_begin_h = model_config_rec%auxhist4_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_h
SUBROUTINE get_auxhist4_begin_m ( id_id , auxhist4_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_m
  INTEGER id_id
  auxhist4_begin_m = model_config_rec%auxhist4_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_m
SUBROUTINE get_auxhist4_begin_s ( id_id , auxhist4_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_begin_s
  INTEGER id_id
  auxhist4_begin_s = model_config_rec%auxhist4_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxhist4_begin_s
SUBROUTINE get_auxhist5_begin_y ( id_id , auxhist5_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_y
  INTEGER id_id
  auxhist5_begin_y = model_config_rec%auxhist5_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_y
SUBROUTINE get_auxhist5_begin_mo ( id_id , auxhist5_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_mo
  INTEGER id_id
  auxhist5_begin_mo = model_config_rec%auxhist5_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_mo
SUBROUTINE get_auxhist5_begin_d ( id_id , auxhist5_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_d
  INTEGER id_id
  auxhist5_begin_d = model_config_rec%auxhist5_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_d
SUBROUTINE get_auxhist5_begin_h ( id_id , auxhist5_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_h
  INTEGER id_id
  auxhist5_begin_h = model_config_rec%auxhist5_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_h
SUBROUTINE get_auxhist5_begin_m ( id_id , auxhist5_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_m
  INTEGER id_id
  auxhist5_begin_m = model_config_rec%auxhist5_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_m
SUBROUTINE get_auxhist5_begin_s ( id_id , auxhist5_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_begin_s
  INTEGER id_id
  auxhist5_begin_s = model_config_rec%auxhist5_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxhist5_begin_s
SUBROUTINE get_auxinput1_begin_y ( id_id , auxinput1_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_y
  INTEGER id_id
  auxinput1_begin_y = model_config_rec%auxinput1_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_y
SUBROUTINE get_auxinput1_begin_mo ( id_id , auxinput1_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_mo
  INTEGER id_id
  auxinput1_begin_mo = model_config_rec%auxinput1_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_mo
SUBROUTINE get_auxinput1_begin_d ( id_id , auxinput1_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_d
  INTEGER id_id
  auxinput1_begin_d = model_config_rec%auxinput1_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_d
SUBROUTINE get_auxinput1_begin_h ( id_id , auxinput1_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_h
  INTEGER id_id
  auxinput1_begin_h = model_config_rec%auxinput1_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_h
SUBROUTINE get_auxinput1_begin_m ( id_id , auxinput1_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_m
  INTEGER id_id
  auxinput1_begin_m = model_config_rec%auxinput1_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_m
SUBROUTINE get_auxinput1_begin_s ( id_id , auxinput1_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_begin_s
  INTEGER id_id
  auxinput1_begin_s = model_config_rec%auxinput1_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxinput1_begin_s
SUBROUTINE get_auxinput2_begin_y ( id_id , auxinput2_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_y
  INTEGER id_id
  auxinput2_begin_y = model_config_rec%auxinput2_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_y
SUBROUTINE get_auxinput2_begin_mo ( id_id , auxinput2_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_mo
  INTEGER id_id
  auxinput2_begin_mo = model_config_rec%auxinput2_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_mo
SUBROUTINE get_auxinput2_begin_d ( id_id , auxinput2_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_d
  INTEGER id_id
  auxinput2_begin_d = model_config_rec%auxinput2_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_d
SUBROUTINE get_auxinput2_begin_h ( id_id , auxinput2_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_h
  INTEGER id_id
  auxinput2_begin_h = model_config_rec%auxinput2_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_h
SUBROUTINE get_auxinput2_begin_m ( id_id , auxinput2_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_m
  INTEGER id_id
  auxinput2_begin_m = model_config_rec%auxinput2_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_m
SUBROUTINE get_auxinput2_begin_s ( id_id , auxinput2_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_begin_s
  INTEGER id_id
  auxinput2_begin_s = model_config_rec%auxinput2_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxinput2_begin_s
SUBROUTINE get_auxinput3_begin_y ( id_id , auxinput3_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_y
  INTEGER id_id
  auxinput3_begin_y = model_config_rec%auxinput3_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_y
SUBROUTINE get_auxinput3_begin_mo ( id_id , auxinput3_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_mo
  INTEGER id_id
  auxinput3_begin_mo = model_config_rec%auxinput3_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_mo
SUBROUTINE get_auxinput3_begin_d ( id_id , auxinput3_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_d
  INTEGER id_id
  auxinput3_begin_d = model_config_rec%auxinput3_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_d
SUBROUTINE get_auxinput3_begin_h ( id_id , auxinput3_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_h
  INTEGER id_id
  auxinput3_begin_h = model_config_rec%auxinput3_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_h
SUBROUTINE get_auxinput3_begin_m ( id_id , auxinput3_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_m
  INTEGER id_id
  auxinput3_begin_m = model_config_rec%auxinput3_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_m
SUBROUTINE get_auxinput3_begin_s ( id_id , auxinput3_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_begin_s
  INTEGER id_id
  auxinput3_begin_s = model_config_rec%auxinput3_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxinput3_begin_s
SUBROUTINE get_auxinput4_begin_y ( id_id , auxinput4_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_y
  INTEGER id_id
  auxinput4_begin_y = model_config_rec%auxinput4_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_y
SUBROUTINE get_auxinput4_begin_mo ( id_id , auxinput4_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_mo
  INTEGER id_id
  auxinput4_begin_mo = model_config_rec%auxinput4_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_mo
SUBROUTINE get_auxinput4_begin_d ( id_id , auxinput4_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_d
  INTEGER id_id
  auxinput4_begin_d = model_config_rec%auxinput4_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_d
SUBROUTINE get_auxinput4_begin_h ( id_id , auxinput4_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_h
  INTEGER id_id
  auxinput4_begin_h = model_config_rec%auxinput4_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_h
SUBROUTINE get_auxinput4_begin_m ( id_id , auxinput4_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_m
  INTEGER id_id
  auxinput4_begin_m = model_config_rec%auxinput4_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_m
SUBROUTINE get_auxinput4_begin_s ( id_id , auxinput4_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_begin_s
  INTEGER id_id
  auxinput4_begin_s = model_config_rec%auxinput4_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxinput4_begin_s
SUBROUTINE get_auxinput5_begin_y ( id_id , auxinput5_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_y
  INTEGER id_id
  auxinput5_begin_y = model_config_rec%auxinput5_begin_y(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_y
SUBROUTINE get_auxinput5_begin_mo ( id_id , auxinput5_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_mo
  INTEGER id_id
  auxinput5_begin_mo = model_config_rec%auxinput5_begin_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_mo
SUBROUTINE get_auxinput5_begin_d ( id_id , auxinput5_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_d
  INTEGER id_id
  auxinput5_begin_d = model_config_rec%auxinput5_begin_d(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_d
SUBROUTINE get_auxinput5_begin_h ( id_id , auxinput5_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_h
  INTEGER id_id
  auxinput5_begin_h = model_config_rec%auxinput5_begin_h(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_h
SUBROUTINE get_auxinput5_begin_m ( id_id , auxinput5_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_m
  INTEGER id_id
  auxinput5_begin_m = model_config_rec%auxinput5_begin_m(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_m
SUBROUTINE get_auxinput5_begin_s ( id_id , auxinput5_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_begin_s
  INTEGER id_id
  auxinput5_begin_s = model_config_rec%auxinput5_begin_s(id_id)
  RETURN
END SUBROUTINE get_auxinput5_begin_s
SUBROUTINE get_restart_begin_y ( restart_begin_y )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_y
  restart_begin_y = model_config_rec%restart_begin_y
  RETURN
END SUBROUTINE get_restart_begin_y
SUBROUTINE get_restart_begin_mo ( restart_begin_mo )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_mo
  restart_begin_mo = model_config_rec%restart_begin_mo
  RETURN
END SUBROUTINE get_restart_begin_mo
SUBROUTINE get_restart_begin_d ( restart_begin_d )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_d
  restart_begin_d = model_config_rec%restart_begin_d
  RETURN
END SUBROUTINE get_restart_begin_d
SUBROUTINE get_restart_begin_h ( restart_begin_h )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_h
  restart_begin_h = model_config_rec%restart_begin_h
  RETURN
END SUBROUTINE get_restart_begin_h
SUBROUTINE get_restart_begin_m ( restart_begin_m )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_m
  restart_begin_m = model_config_rec%restart_begin_m
  RETURN
END SUBROUTINE get_restart_begin_m
SUBROUTINE get_restart_begin_s ( restart_begin_s )
  USE module_configure
  integer , INTENT(OUT) :: restart_begin_s
  restart_begin_s = model_config_rec%restart_begin_s
  RETURN
END SUBROUTINE get_restart_begin_s
SUBROUTINE get_history_end_y ( id_id , history_end_y )
  USE module_configure
  integer , INTENT(OUT) :: history_end_y
  INTEGER id_id
  history_end_y = model_config_rec%history_end_y(id_id)
  RETURN
END SUBROUTINE get_history_end_y
SUBROUTINE get_history_end_mo ( id_id , history_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: history_end_mo
  INTEGER id_id
  history_end_mo = model_config_rec%history_end_mo(id_id)
  RETURN
END SUBROUTINE get_history_end_mo
SUBROUTINE get_history_end_d ( id_id , history_end_d )
  USE module_configure
  integer , INTENT(OUT) :: history_end_d
  INTEGER id_id
  history_end_d = model_config_rec%history_end_d(id_id)
  RETURN
END SUBROUTINE get_history_end_d
SUBROUTINE get_history_end_h ( id_id , history_end_h )
  USE module_configure
  integer , INTENT(OUT) :: history_end_h
  INTEGER id_id
  history_end_h = model_config_rec%history_end_h(id_id)
  RETURN
END SUBROUTINE get_history_end_h
SUBROUTINE get_history_end_m ( id_id , history_end_m )
  USE module_configure
  integer , INTENT(OUT) :: history_end_m
  INTEGER id_id
  history_end_m = model_config_rec%history_end_m(id_id)
  RETURN
END SUBROUTINE get_history_end_m
SUBROUTINE get_history_end_s ( id_id , history_end_s )
  USE module_configure
  integer , INTENT(OUT) :: history_end_s
  INTEGER id_id
  history_end_s = model_config_rec%history_end_s(id_id)
  RETURN
END SUBROUTINE get_history_end_s
SUBROUTINE get_inputout_end_y ( id_id , inputout_end_y )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_y
  INTEGER id_id
  inputout_end_y = model_config_rec%inputout_end_y(id_id)
  RETURN
END SUBROUTINE get_inputout_end_y
SUBROUTINE get_inputout_end_mo ( id_id , inputout_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_mo
  INTEGER id_id
  inputout_end_mo = model_config_rec%inputout_end_mo(id_id)
  RETURN
END SUBROUTINE get_inputout_end_mo
SUBROUTINE get_inputout_end_d ( id_id , inputout_end_d )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_d
  INTEGER id_id
  inputout_end_d = model_config_rec%inputout_end_d(id_id)
  RETURN
END SUBROUTINE get_inputout_end_d
SUBROUTINE get_inputout_end_h ( id_id , inputout_end_h )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_h
  INTEGER id_id
  inputout_end_h = model_config_rec%inputout_end_h(id_id)
  RETURN
END SUBROUTINE get_inputout_end_h
SUBROUTINE get_inputout_end_m ( id_id , inputout_end_m )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_m
  INTEGER id_id
  inputout_end_m = model_config_rec%inputout_end_m(id_id)
  RETURN
END SUBROUTINE get_inputout_end_m
SUBROUTINE get_inputout_end_s ( id_id , inputout_end_s )
  USE module_configure
  integer , INTENT(OUT) :: inputout_end_s
  INTEGER id_id
  inputout_end_s = model_config_rec%inputout_end_s(id_id)
  RETURN
END SUBROUTINE get_inputout_end_s
SUBROUTINE get_auxhist1_end_y ( id_id , auxhist1_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_y
  INTEGER id_id
  auxhist1_end_y = model_config_rec%auxhist1_end_y(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_y
SUBROUTINE get_auxhist1_end_mo ( id_id , auxhist1_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_mo
  INTEGER id_id
  auxhist1_end_mo = model_config_rec%auxhist1_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_mo
SUBROUTINE get_auxhist1_end_d ( id_id , auxhist1_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_d
  INTEGER id_id
  auxhist1_end_d = model_config_rec%auxhist1_end_d(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_d
SUBROUTINE get_auxhist1_end_h ( id_id , auxhist1_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_h
  INTEGER id_id
  auxhist1_end_h = model_config_rec%auxhist1_end_h(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_h
SUBROUTINE get_auxhist1_end_m ( id_id , auxhist1_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_m
  INTEGER id_id
  auxhist1_end_m = model_config_rec%auxhist1_end_m(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_m
SUBROUTINE get_auxhist1_end_s ( id_id , auxhist1_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist1_end_s
  INTEGER id_id
  auxhist1_end_s = model_config_rec%auxhist1_end_s(id_id)
  RETURN
END SUBROUTINE get_auxhist1_end_s
SUBROUTINE get_auxhist2_end_y ( id_id , auxhist2_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_y
  INTEGER id_id
  auxhist2_end_y = model_config_rec%auxhist2_end_y(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_y
SUBROUTINE get_auxhist2_end_mo ( id_id , auxhist2_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_mo
  INTEGER id_id
  auxhist2_end_mo = model_config_rec%auxhist2_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_mo
SUBROUTINE get_auxhist2_end_d ( id_id , auxhist2_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_d
  INTEGER id_id
  auxhist2_end_d = model_config_rec%auxhist2_end_d(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_d
SUBROUTINE get_auxhist2_end_h ( id_id , auxhist2_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_h
  INTEGER id_id
  auxhist2_end_h = model_config_rec%auxhist2_end_h(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_h
SUBROUTINE get_auxhist2_end_m ( id_id , auxhist2_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_m
  INTEGER id_id
  auxhist2_end_m = model_config_rec%auxhist2_end_m(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_m
SUBROUTINE get_auxhist2_end_s ( id_id , auxhist2_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist2_end_s
  INTEGER id_id
  auxhist2_end_s = model_config_rec%auxhist2_end_s(id_id)
  RETURN
END SUBROUTINE get_auxhist2_end_s
SUBROUTINE get_auxhist3_end_y ( id_id , auxhist3_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_y
  INTEGER id_id
  auxhist3_end_y = model_config_rec%auxhist3_end_y(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_y
SUBROUTINE get_auxhist3_end_mo ( id_id , auxhist3_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_mo
  INTEGER id_id
  auxhist3_end_mo = model_config_rec%auxhist3_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_mo
SUBROUTINE get_auxhist3_end_d ( id_id , auxhist3_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_d
  INTEGER id_id
  auxhist3_end_d = model_config_rec%auxhist3_end_d(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_d
SUBROUTINE get_auxhist3_end_h ( id_id , auxhist3_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_h
  INTEGER id_id
  auxhist3_end_h = model_config_rec%auxhist3_end_h(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_h
SUBROUTINE get_auxhist3_end_m ( id_id , auxhist3_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_m
  INTEGER id_id
  auxhist3_end_m = model_config_rec%auxhist3_end_m(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_m
SUBROUTINE get_auxhist3_end_s ( id_id , auxhist3_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist3_end_s
  INTEGER id_id
  auxhist3_end_s = model_config_rec%auxhist3_end_s(id_id)
  RETURN
END SUBROUTINE get_auxhist3_end_s
SUBROUTINE get_auxhist4_end_y ( id_id , auxhist4_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_y
  INTEGER id_id
  auxhist4_end_y = model_config_rec%auxhist4_end_y(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_y
SUBROUTINE get_auxhist4_end_mo ( id_id , auxhist4_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_mo
  INTEGER id_id
  auxhist4_end_mo = model_config_rec%auxhist4_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_mo
SUBROUTINE get_auxhist4_end_d ( id_id , auxhist4_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_d
  INTEGER id_id
  auxhist4_end_d = model_config_rec%auxhist4_end_d(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_d
SUBROUTINE get_auxhist4_end_h ( id_id , auxhist4_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_h
  INTEGER id_id
  auxhist4_end_h = model_config_rec%auxhist4_end_h(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_h
SUBROUTINE get_auxhist4_end_m ( id_id , auxhist4_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_m
  INTEGER id_id
  auxhist4_end_m = model_config_rec%auxhist4_end_m(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_m
SUBROUTINE get_auxhist4_end_s ( id_id , auxhist4_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist4_end_s
  INTEGER id_id
  auxhist4_end_s = model_config_rec%auxhist4_end_s(id_id)
  RETURN
END SUBROUTINE get_auxhist4_end_s
SUBROUTINE get_auxhist5_end_y ( id_id , auxhist5_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_y
  INTEGER id_id
  auxhist5_end_y = model_config_rec%auxhist5_end_y(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_y
SUBROUTINE get_auxhist5_end_mo ( id_id , auxhist5_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_mo
  INTEGER id_id
  auxhist5_end_mo = model_config_rec%auxhist5_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_mo
SUBROUTINE get_auxhist5_end_d ( id_id , auxhist5_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_d
  INTEGER id_id
  auxhist5_end_d = model_config_rec%auxhist5_end_d(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_d
SUBROUTINE get_auxhist5_end_h ( id_id , auxhist5_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_h
  INTEGER id_id
  auxhist5_end_h = model_config_rec%auxhist5_end_h(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_h
SUBROUTINE get_auxhist5_end_m ( id_id , auxhist5_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_m
  INTEGER id_id
  auxhist5_end_m = model_config_rec%auxhist5_end_m(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_m
SUBROUTINE get_auxhist5_end_s ( id_id , auxhist5_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxhist5_end_s
  INTEGER id_id
  auxhist5_end_s = model_config_rec%auxhist5_end_s(id_id)
  RETURN
END SUBROUTINE get_auxhist5_end_s
SUBROUTINE get_auxinput1_end_y ( id_id , auxinput1_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_y
  INTEGER id_id
  auxinput1_end_y = model_config_rec%auxinput1_end_y(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_y
SUBROUTINE get_auxinput1_end_mo ( id_id , auxinput1_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_mo
  INTEGER id_id
  auxinput1_end_mo = model_config_rec%auxinput1_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_mo
SUBROUTINE get_auxinput1_end_d ( id_id , auxinput1_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_d
  INTEGER id_id
  auxinput1_end_d = model_config_rec%auxinput1_end_d(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_d
SUBROUTINE get_auxinput1_end_h ( id_id , auxinput1_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_h
  INTEGER id_id
  auxinput1_end_h = model_config_rec%auxinput1_end_h(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_h
SUBROUTINE get_auxinput1_end_m ( id_id , auxinput1_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_m
  INTEGER id_id
  auxinput1_end_m = model_config_rec%auxinput1_end_m(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_m
SUBROUTINE get_auxinput1_end_s ( id_id , auxinput1_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput1_end_s
  INTEGER id_id
  auxinput1_end_s = model_config_rec%auxinput1_end_s(id_id)
  RETURN
END SUBROUTINE get_auxinput1_end_s
SUBROUTINE get_auxinput2_end_y ( id_id , auxinput2_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_y
  INTEGER id_id
  auxinput2_end_y = model_config_rec%auxinput2_end_y(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_y
SUBROUTINE get_auxinput2_end_mo ( id_id , auxinput2_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_mo
  INTEGER id_id
  auxinput2_end_mo = model_config_rec%auxinput2_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_mo
SUBROUTINE get_auxinput2_end_d ( id_id , auxinput2_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_d
  INTEGER id_id
  auxinput2_end_d = model_config_rec%auxinput2_end_d(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_d
SUBROUTINE get_auxinput2_end_h ( id_id , auxinput2_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_h
  INTEGER id_id
  auxinput2_end_h = model_config_rec%auxinput2_end_h(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_h
SUBROUTINE get_auxinput2_end_m ( id_id , auxinput2_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_m
  INTEGER id_id
  auxinput2_end_m = model_config_rec%auxinput2_end_m(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_m
SUBROUTINE get_auxinput2_end_s ( id_id , auxinput2_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput2_end_s
  INTEGER id_id
  auxinput2_end_s = model_config_rec%auxinput2_end_s(id_id)
  RETURN
END SUBROUTINE get_auxinput2_end_s
SUBROUTINE get_auxinput3_end_y ( id_id , auxinput3_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_y
  INTEGER id_id
  auxinput3_end_y = model_config_rec%auxinput3_end_y(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_y
SUBROUTINE get_auxinput3_end_mo ( id_id , auxinput3_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_mo
  INTEGER id_id
  auxinput3_end_mo = model_config_rec%auxinput3_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_mo
SUBROUTINE get_auxinput3_end_d ( id_id , auxinput3_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_d
  INTEGER id_id
  auxinput3_end_d = model_config_rec%auxinput3_end_d(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_d
SUBROUTINE get_auxinput3_end_h ( id_id , auxinput3_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_h
  INTEGER id_id
  auxinput3_end_h = model_config_rec%auxinput3_end_h(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_h
SUBROUTINE get_auxinput3_end_m ( id_id , auxinput3_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_m
  INTEGER id_id
  auxinput3_end_m = model_config_rec%auxinput3_end_m(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_m
SUBROUTINE get_auxinput3_end_s ( id_id , auxinput3_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput3_end_s
  INTEGER id_id
  auxinput3_end_s = model_config_rec%auxinput3_end_s(id_id)
  RETURN
END SUBROUTINE get_auxinput3_end_s
SUBROUTINE get_auxinput4_end_y ( id_id , auxinput4_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_y
  INTEGER id_id
  auxinput4_end_y = model_config_rec%auxinput4_end_y(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_y
SUBROUTINE get_auxinput4_end_mo ( id_id , auxinput4_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_mo
  INTEGER id_id
  auxinput4_end_mo = model_config_rec%auxinput4_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_mo
SUBROUTINE get_auxinput4_end_d ( id_id , auxinput4_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_d
  INTEGER id_id
  auxinput4_end_d = model_config_rec%auxinput4_end_d(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_d
SUBROUTINE get_auxinput4_end_h ( id_id , auxinput4_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_h
  INTEGER id_id
  auxinput4_end_h = model_config_rec%auxinput4_end_h(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_h
SUBROUTINE get_auxinput4_end_m ( id_id , auxinput4_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_m
  INTEGER id_id
  auxinput4_end_m = model_config_rec%auxinput4_end_m(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_m
SUBROUTINE get_auxinput4_end_s ( id_id , auxinput4_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput4_end_s
  INTEGER id_id
  auxinput4_end_s = model_config_rec%auxinput4_end_s(id_id)
  RETURN
END SUBROUTINE get_auxinput4_end_s
SUBROUTINE get_auxinput5_end_y ( id_id , auxinput5_end_y )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_y
  INTEGER id_id
  auxinput5_end_y = model_config_rec%auxinput5_end_y(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_y
SUBROUTINE get_auxinput5_end_mo ( id_id , auxinput5_end_mo )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_mo
  INTEGER id_id
  auxinput5_end_mo = model_config_rec%auxinput5_end_mo(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_mo
SUBROUTINE get_auxinput5_end_d ( id_id , auxinput5_end_d )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_d
  INTEGER id_id
  auxinput5_end_d = model_config_rec%auxinput5_end_d(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_d
SUBROUTINE get_auxinput5_end_h ( id_id , auxinput5_end_h )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_h
  INTEGER id_id
  auxinput5_end_h = model_config_rec%auxinput5_end_h(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_h
SUBROUTINE get_auxinput5_end_m ( id_id , auxinput5_end_m )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_m
  INTEGER id_id
  auxinput5_end_m = model_config_rec%auxinput5_end_m(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_m
SUBROUTINE get_auxinput5_end_s ( id_id , auxinput5_end_s )
  USE module_configure
  integer , INTENT(OUT) :: auxinput5_end_s
  INTEGER id_id
  auxinput5_end_s = model_config_rec%auxinput5_end_s(id_id)
  RETURN
END SUBROUTINE get_auxinput5_end_s
SUBROUTINE get_io_form_auxinput1 ( io_form_auxinput1 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxinput1
  io_form_auxinput1 = model_config_rec%io_form_auxinput1
  RETURN
END SUBROUTINE get_io_form_auxinput1
SUBROUTINE get_io_form_auxinput2 ( io_form_auxinput2 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxinput2
  io_form_auxinput2 = model_config_rec%io_form_auxinput2
  RETURN
END SUBROUTINE get_io_form_auxinput2
SUBROUTINE get_io_form_auxinput3 ( io_form_auxinput3 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxinput3
  io_form_auxinput3 = model_config_rec%io_form_auxinput3
  RETURN
END SUBROUTINE get_io_form_auxinput3
SUBROUTINE get_io_form_auxinput4 ( io_form_auxinput4 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxinput4
  io_form_auxinput4 = model_config_rec%io_form_auxinput4
  RETURN
END SUBROUTINE get_io_form_auxinput4
SUBROUTINE get_io_form_auxinput5 ( io_form_auxinput5 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxinput5
  io_form_auxinput5 = model_config_rec%io_form_auxinput5
  RETURN
END SUBROUTINE get_io_form_auxinput5
SUBROUTINE get_io_form_auxhist1 ( io_form_auxhist1 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxhist1
  io_form_auxhist1 = model_config_rec%io_form_auxhist1
  RETURN
END SUBROUTINE get_io_form_auxhist1
SUBROUTINE get_io_form_auxhist2 ( io_form_auxhist2 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxhist2
  io_form_auxhist2 = model_config_rec%io_form_auxhist2
  RETURN
END SUBROUTINE get_io_form_auxhist2
SUBROUTINE get_io_form_auxhist3 ( io_form_auxhist3 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxhist3
  io_form_auxhist3 = model_config_rec%io_form_auxhist3
  RETURN
END SUBROUTINE get_io_form_auxhist3
SUBROUTINE get_io_form_auxhist4 ( io_form_auxhist4 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxhist4
  io_form_auxhist4 = model_config_rec%io_form_auxhist4
  RETURN
END SUBROUTINE get_io_form_auxhist4
SUBROUTINE get_io_form_auxhist5 ( io_form_auxhist5 )
  USE module_configure
  integer , INTENT(OUT) :: io_form_auxhist5
  io_form_auxhist5 = model_config_rec%io_form_auxhist5
  RETURN
END SUBROUTINE get_io_form_auxhist5
SUBROUTINE get_julyr ( id_id , julyr )
  USE module_configure
  integer , INTENT(OUT) :: julyr
  INTEGER id_id
  julyr = model_config_rec%julyr(id_id)
  RETURN
END SUBROUTINE get_julyr
SUBROUTINE get_julday ( id_id , julday )
  USE module_configure
  integer , INTENT(OUT) :: julday
  INTEGER id_id
  julday = model_config_rec%julday(id_id)
  RETURN
END SUBROUTINE get_julday
SUBROUTINE get_gmt ( id_id , gmt )
  USE module_configure
  real , INTENT(OUT) :: gmt
  INTEGER id_id
  gmt = model_config_rec%gmt(id_id)
  RETURN
END SUBROUTINE get_gmt
SUBROUTINE get_input_inname ( input_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: input_inname
  input_inname = model_config_rec%input_inname
  RETURN
END SUBROUTINE get_input_inname
SUBROUTINE get_input_outname ( input_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: input_outname
  input_outname = model_config_rec%input_outname
  RETURN
END SUBROUTINE get_input_outname
SUBROUTINE get_bdy_inname ( bdy_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: bdy_inname
  bdy_inname = model_config_rec%bdy_inname
  RETURN
END SUBROUTINE get_bdy_inname
SUBROUTINE get_bdy_outname ( bdy_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: bdy_outname
  bdy_outname = model_config_rec%bdy_outname
  RETURN
END SUBROUTINE get_bdy_outname
SUBROUTINE get_rst_inname ( rst_inname )
  USE module_configure
  character*256 , INTENT(OUT) :: rst_inname
  rst_inname = model_config_rec%rst_inname
  RETURN
END SUBROUTINE get_rst_inname
SUBROUTINE get_rst_outname ( rst_outname )
  USE module_configure
  character*256 , INTENT(OUT) :: rst_outname
  rst_outname = model_config_rec%rst_outname
  RETURN
END SUBROUTINE get_rst_outname
SUBROUTINE get_write_input ( write_input )
  USE module_configure
  logical , INTENT(OUT) :: write_input
  write_input = model_config_rec%write_input
  RETURN
END SUBROUTINE get_write_input
SUBROUTINE get_write_restart_at_0h ( write_restart_at_0h )
  USE module_configure
  logical , INTENT(OUT) :: write_restart_at_0h
  write_restart_at_0h = model_config_rec%write_restart_at_0h
  RETURN
END SUBROUTINE get_write_restart_at_0h
SUBROUTINE get_time_step ( time_step )
  USE module_configure
  integer , INTENT(OUT) :: time_step
  time_step = model_config_rec%time_step
  RETURN
END SUBROUTINE get_time_step
SUBROUTINE get_time_step_fract_num ( time_step_fract_num )
  USE module_configure
  integer , INTENT(OUT) :: time_step_fract_num
  time_step_fract_num = model_config_rec%time_step_fract_num
  RETURN
END SUBROUTINE get_time_step_fract_num
SUBROUTINE get_time_step_fract_den ( time_step_fract_den )
  USE module_configure
  integer , INTENT(OUT) :: time_step_fract_den
  time_step_fract_den = model_config_rec%time_step_fract_den
  RETURN
END SUBROUTINE get_time_step_fract_den
SUBROUTINE get_max_dom ( max_dom )
  USE module_configure
  integer , INTENT(OUT) :: max_dom
  max_dom = model_config_rec%max_dom
  RETURN
END SUBROUTINE get_max_dom
SUBROUTINE get_s_we ( id_id , s_we )
  USE module_configure
  integer , INTENT(OUT) :: s_we
  INTEGER id_id
  s_we = model_config_rec%s_we(id_id)
  RETURN
END SUBROUTINE get_s_we
SUBROUTINE get_e_we ( id_id , e_we )
  USE module_configure
  integer , INTENT(OUT) :: e_we
  INTEGER id_id
  e_we = model_config_rec%e_we(id_id)
  RETURN
END SUBROUTINE get_e_we
SUBROUTINE get_s_sn ( id_id , s_sn )
  USE module_configure
  integer , INTENT(OUT) :: s_sn
  INTEGER id_id
  s_sn = model_config_rec%s_sn(id_id)
  RETURN
END SUBROUTINE get_s_sn
SUBROUTINE get_e_sn ( id_id , e_sn )
  USE module_configure
  integer , INTENT(OUT) :: e_sn
  INTEGER id_id
  e_sn = model_config_rec%e_sn(id_id)
  RETURN
END SUBROUTINE get_e_sn
SUBROUTINE get_s_vert ( id_id , s_vert )
  USE module_configure
  integer , INTENT(OUT) :: s_vert
  INTEGER id_id
  s_vert = model_config_rec%s_vert(id_id)
  RETURN
END SUBROUTINE get_s_vert
SUBROUTINE get_e_vert ( id_id , e_vert )
  USE module_configure
  integer , INTENT(OUT) :: e_vert
  INTEGER id_id
  e_vert = model_config_rec%e_vert(id_id)
  RETURN
END SUBROUTINE get_e_vert
SUBROUTINE get_dx ( id_id , dx )
  USE module_configure
  real , INTENT(OUT) :: dx
  INTEGER id_id
  dx = model_config_rec%dx(id_id)
  RETURN
END SUBROUTINE get_dx
SUBROUTINE get_dy ( id_id , dy )
  USE module_configure
  real , INTENT(OUT) :: dy
  INTEGER id_id
  dy = model_config_rec%dy(id_id)
  RETURN
END SUBROUTINE get_dy
SUBROUTINE get_grid_id ( id_id , grid_id )
  USE module_configure
  integer , INTENT(OUT) :: grid_id
  INTEGER id_id
  grid_id = model_config_rec%grid_id(id_id)
  RETURN
END SUBROUTINE get_grid_id
SUBROUTINE get_parent_id ( id_id , parent_id )
  USE module_configure
  integer , INTENT(OUT) :: parent_id
  INTEGER id_id
  parent_id = model_config_rec%parent_id(id_id)
  RETURN
END SUBROUTINE get_parent_id
SUBROUTINE get_level ( id_id , level )
  USE module_configure
  integer , INTENT(OUT) :: level
  INTEGER id_id
  level = model_config_rec%level(id_id)
  RETURN
END SUBROUTINE get_level
SUBROUTINE get_i_parent_start ( id_id , i_parent_start )
  USE module_configure
  integer , INTENT(OUT) :: i_parent_start
  INTEGER id_id
  i_parent_start = model_config_rec%i_parent_start(id_id)
  RETURN
END SUBROUTINE get_i_parent_start
SUBROUTINE get_j_parent_start ( id_id , j_parent_start )
  USE module_configure
  integer , INTENT(OUT) :: j_parent_start
  INTEGER id_id
  j_parent_start = model_config_rec%j_parent_start(id_id)
  RETURN
END SUBROUTINE get_j_parent_start
SUBROUTINE get_parent_grid_ratio ( id_id , parent_grid_ratio )
  USE module_configure
  integer , INTENT(OUT) :: parent_grid_ratio
  INTEGER id_id
  parent_grid_ratio = model_config_rec%parent_grid_ratio(id_id)
  RETURN
END SUBROUTINE get_parent_grid_ratio
SUBROUTINE get_parent_time_step_ratio ( id_id , parent_time_step_ratio )
  USE module_configure
  integer , INTENT(OUT) :: parent_time_step_ratio
  INTEGER id_id
  parent_time_step_ratio = model_config_rec%parent_time_step_ratio(id_id)
  RETURN
END SUBROUTINE get_parent_time_step_ratio
SUBROUTINE get_feedback ( feedback )
  USE module_configure
  integer , INTENT(OUT) :: feedback
  feedback = model_config_rec%feedback
  RETURN
END SUBROUTINE get_feedback
SUBROUTINE get_smooth_option ( smooth_option )
  USE module_configure
  integer , INTENT(OUT) :: smooth_option
  smooth_option = model_config_rec%smooth_option
  RETURN
END SUBROUTINE get_smooth_option
SUBROUTINE get_ztop ( id_id , ztop )
  USE module_configure
  real , INTENT(OUT) :: ztop
  INTEGER id_id
  ztop = model_config_rec%ztop(id_id)
  RETURN
END SUBROUTINE get_ztop
SUBROUTINE get_moad_grid_ratio ( id_id , moad_grid_ratio )
  USE module_configure
  integer , INTENT(OUT) :: moad_grid_ratio
  INTEGER id_id
  moad_grid_ratio = model_config_rec%moad_grid_ratio(id_id)
  RETURN
END SUBROUTINE get_moad_grid_ratio
SUBROUTINE get_moad_time_step_ratio ( id_id , moad_time_step_ratio )
  USE module_configure
  integer , INTENT(OUT) :: moad_time_step_ratio
  INTEGER id_id
  moad_time_step_ratio = model_config_rec%moad_time_step_ratio(id_id)
  RETURN
END SUBROUTINE get_moad_time_step_ratio
SUBROUTINE get_shw ( id_id , shw )
  USE module_configure
  integer , INTENT(OUT) :: shw
  INTEGER id_id
  shw = model_config_rec%shw(id_id)
  RETURN
END SUBROUTINE get_shw
SUBROUTINE get_tile_sz_x ( tile_sz_x )
  USE module_configure
  integer , INTENT(OUT) :: tile_sz_x
  tile_sz_x = model_config_rec%tile_sz_x
  RETURN
END SUBROUTINE get_tile_sz_x
SUBROUTINE get_tile_sz_y ( tile_sz_y )
  USE module_configure
  integer , INTENT(OUT) :: tile_sz_y
  tile_sz_y = model_config_rec%tile_sz_y
  RETURN
END SUBROUTINE get_tile_sz_y
SUBROUTINE get_numtiles ( numtiles )
  USE module_configure
  integer , INTENT(OUT) :: numtiles
  numtiles = model_config_rec%numtiles
  RETURN
END SUBROUTINE get_numtiles
SUBROUTINE get_nproc_x ( nproc_x )
  USE module_configure
  integer , INTENT(OUT) :: nproc_x
  nproc_x = model_config_rec%nproc_x
  RETURN
END SUBROUTINE get_nproc_x
SUBROUTINE get_nproc_y ( nproc_y )
  USE module_configure
  integer , INTENT(OUT) :: nproc_y
  nproc_y = model_config_rec%nproc_y
  RETURN
END SUBROUTINE get_nproc_y
SUBROUTINE get_irand ( irand )
  USE module_configure
  integer , INTENT(OUT) :: irand
  irand = model_config_rec%irand
  RETURN
END SUBROUTINE get_irand
SUBROUTINE get_dt ( id_id , dt )
  USE module_configure
  real , INTENT(OUT) :: dt
  INTEGER id_id
  dt = model_config_rec%dt(id_id)
  RETURN
END SUBROUTINE get_dt
SUBROUTINE get_mp_physics ( id_id , mp_physics )
  USE module_configure
  integer , INTENT(OUT) :: mp_physics
  INTEGER id_id
  mp_physics = model_config_rec%mp_physics(id_id)
  RETURN
END SUBROUTINE get_mp_physics
SUBROUTINE get_ra_lw_physics ( id_id , ra_lw_physics )
  USE module_configure
  integer , INTENT(OUT) :: ra_lw_physics
  INTEGER id_id
  ra_lw_physics = model_config_rec%ra_lw_physics(id_id)
  RETURN
END SUBROUTINE get_ra_lw_physics
SUBROUTINE get_ra_sw_physics ( id_id , ra_sw_physics )
  USE module_configure
  integer , INTENT(OUT) :: ra_sw_physics
  INTEGER id_id
  ra_sw_physics = model_config_rec%ra_sw_physics(id_id)
  RETURN
END SUBROUTINE get_ra_sw_physics
SUBROUTINE get_radt ( id_id , radt )
  USE module_configure
  real , INTENT(OUT) :: radt
  INTEGER id_id
  radt = model_config_rec%radt(id_id)
  RETURN
END SUBROUTINE get_radt
SUBROUTINE get_sf_sfclay_physics ( id_id , sf_sfclay_physics )
  USE module_configure
  integer , INTENT(OUT) :: sf_sfclay_physics
  INTEGER id_id
  sf_sfclay_physics = model_config_rec%sf_sfclay_physics(id_id)
  RETURN
END SUBROUTINE get_sf_sfclay_physics
SUBROUTINE get_sf_surface_physics ( id_id , sf_surface_physics )
  USE module_configure
  integer , INTENT(OUT) :: sf_surface_physics
  INTEGER id_id
  sf_surface_physics = model_config_rec%sf_surface_physics(id_id)
  RETURN
END SUBROUTINE get_sf_surface_physics
SUBROUTINE get_bl_pbl_physics ( id_id , bl_pbl_physics )
  USE module_configure
  integer , INTENT(OUT) :: bl_pbl_physics
  INTEGER id_id
  bl_pbl_physics = model_config_rec%bl_pbl_physics(id_id)
  RETURN
END SUBROUTINE get_bl_pbl_physics
SUBROUTINE get_bldt ( id_id , bldt )
  USE module_configure
  real , INTENT(OUT) :: bldt
  INTEGER id_id
  bldt = model_config_rec%bldt(id_id)
  RETURN
END SUBROUTINE get_bldt
SUBROUTINE get_cu_physics ( id_id , cu_physics )
  USE module_configure
  integer , INTENT(OUT) :: cu_physics
  INTEGER id_id
  cu_physics = model_config_rec%cu_physics(id_id)
  RETURN
END SUBROUTINE get_cu_physics
SUBROUTINE get_cudt ( id_id , cudt )
  USE module_configure
  real , INTENT(OUT) :: cudt
  INTEGER id_id
  cudt = model_config_rec%cudt(id_id)
  RETURN
END SUBROUTINE get_cudt
SUBROUTINE get_gsmdt ( id_id , gsmdt )
  USE module_configure
  real , INTENT(OUT) :: gsmdt
  INTEGER id_id
  gsmdt = model_config_rec%gsmdt(id_id)
  RETURN
END SUBROUTINE get_gsmdt
SUBROUTINE get_isfflx ( isfflx )
  USE module_configure
  integer , INTENT(OUT) :: isfflx
  isfflx = model_config_rec%isfflx
  RETURN
END SUBROUTINE get_isfflx
SUBROUTINE get_ifsnow ( ifsnow )
  USE module_configure
  integer , INTENT(OUT) :: ifsnow
  ifsnow = model_config_rec%ifsnow
  RETURN
END SUBROUTINE get_ifsnow
SUBROUTINE get_icloud ( icloud )
  USE module_configure
  integer , INTENT(OUT) :: icloud
  icloud = model_config_rec%icloud
  RETURN
END SUBROUTINE get_icloud
SUBROUTINE get_surface_input_source ( surface_input_source )
  USE module_configure
  integer , INTENT(OUT) :: surface_input_source
  surface_input_source = model_config_rec%surface_input_source
  RETURN
END SUBROUTINE get_surface_input_source
SUBROUTINE get_num_soil_layers ( num_soil_layers )
  USE module_configure
  integer , INTENT(OUT) :: num_soil_layers
  num_soil_layers = model_config_rec%num_soil_layers
  RETURN
END SUBROUTINE get_num_soil_layers
SUBROUTINE get_maxiens ( maxiens )
  USE module_configure
  integer , INTENT(OUT) :: maxiens
  maxiens = model_config_rec%maxiens
  RETURN
END SUBROUTINE get_maxiens
SUBROUTINE get_maxens ( maxens )
  USE module_configure
  integer , INTENT(OUT) :: maxens
  maxens = model_config_rec%maxens
  RETURN
END SUBROUTINE get_maxens
SUBROUTINE get_maxens2 ( maxens2 )
  USE module_configure
  integer , INTENT(OUT) :: maxens2
  maxens2 = model_config_rec%maxens2
  RETURN
END SUBROUTINE get_maxens2
SUBROUTINE get_maxens3 ( maxens3 )
  USE module_configure
  integer , INTENT(OUT) :: maxens3
  maxens3 = model_config_rec%maxens3
  RETURN
END SUBROUTINE get_maxens3
SUBROUTINE get_ensdim ( ensdim )
  USE module_configure
  integer , INTENT(OUT) :: ensdim
  ensdim = model_config_rec%ensdim
  RETURN
END SUBROUTINE get_ensdim
SUBROUTINE get_chem_opt ( id_id , chem_opt )
  USE module_configure
  integer , INTENT(OUT) :: chem_opt
  INTEGER id_id
  chem_opt = model_config_rec%chem_opt(id_id)
  RETURN
END SUBROUTINE get_chem_opt
SUBROUTINE get_num_land_cat ( num_land_cat )
  USE module_configure
  integer , INTENT(OUT) :: num_land_cat
  num_land_cat = model_config_rec%num_land_cat
  RETURN
END SUBROUTINE get_num_land_cat
SUBROUTINE get_num_soil_cat ( num_soil_cat )
  USE module_configure
  integer , INTENT(OUT) :: num_soil_cat
  num_soil_cat = model_config_rec%num_soil_cat
  RETURN
END SUBROUTINE get_num_soil_cat
SUBROUTINE get_dyn_opt ( dyn_opt )
  USE module_configure
  integer , INTENT(OUT) :: dyn_opt
  dyn_opt = model_config_rec%dyn_opt
  RETURN
END SUBROUTINE get_dyn_opt
SUBROUTINE get_rk_ord ( rk_ord )
  USE module_configure
  integer , INTENT(OUT) :: rk_ord
  rk_ord = model_config_rec%rk_ord
  RETURN
END SUBROUTINE get_rk_ord
SUBROUTINE get_w_damping ( w_damping )
  USE module_configure
  integer , INTENT(OUT) :: w_damping
  w_damping = model_config_rec%w_damping
  RETURN
END SUBROUTINE get_w_damping
SUBROUTINE get_diff_opt ( diff_opt )
  USE module_configure
  integer , INTENT(OUT) :: diff_opt
  diff_opt = model_config_rec%diff_opt
  RETURN
END SUBROUTINE get_diff_opt
SUBROUTINE get_km_opt ( km_opt )
  USE module_configure
  integer , INTENT(OUT) :: km_opt
  km_opt = model_config_rec%km_opt
  RETURN
END SUBROUTINE get_km_opt
SUBROUTINE get_damp_opt ( damp_opt )
  USE module_configure
  integer , INTENT(OUT) :: damp_opt
  damp_opt = model_config_rec%damp_opt
  RETURN
END SUBROUTINE get_damp_opt
SUBROUTINE get_zdamp ( id_id , zdamp )
  USE module_configure
  real , INTENT(OUT) :: zdamp
  INTEGER id_id
  zdamp = model_config_rec%zdamp(id_id)
  RETURN
END SUBROUTINE get_zdamp
SUBROUTINE get_dampcoef ( id_id , dampcoef )
  USE module_configure
  real , INTENT(OUT) :: dampcoef
  INTEGER id_id
  dampcoef = model_config_rec%dampcoef(id_id)
  RETURN
END SUBROUTINE get_dampcoef
SUBROUTINE get_khdif ( id_id , khdif )
  USE module_configure
  real , INTENT(OUT) :: khdif
  INTEGER id_id
  khdif = model_config_rec%khdif(id_id)
  RETURN
END SUBROUTINE get_khdif
SUBROUTINE get_kvdif ( id_id , kvdif )
  USE module_configure
  real , INTENT(OUT) :: kvdif
  INTEGER id_id
  kvdif = model_config_rec%kvdif(id_id)
  RETURN
END SUBROUTINE get_kvdif
SUBROUTINE get_smdiv ( id_id , smdiv )
  USE module_configure
  real , INTENT(OUT) :: smdiv
  INTEGER id_id
  smdiv = model_config_rec%smdiv(id_id)
  RETURN
END SUBROUTINE get_smdiv
SUBROUTINE get_emdiv ( id_id , emdiv )
  USE module_configure
  real , INTENT(OUT) :: emdiv
  INTEGER id_id
  emdiv = model_config_rec%emdiv(id_id)
  RETURN
END SUBROUTINE get_emdiv
SUBROUTINE get_epssm ( id_id , epssm )
  USE module_configure
  real , INTENT(OUT) :: epssm
  INTEGER id_id
  epssm = model_config_rec%epssm(id_id)
  RETURN
END SUBROUTINE get_epssm
SUBROUTINE get_non_hydrostatic ( id_id , non_hydrostatic )
  USE module_configure
  logical , INTENT(OUT) :: non_hydrostatic
  INTEGER id_id
  non_hydrostatic = model_config_rec%non_hydrostatic(id_id)
  RETURN
END SUBROUTINE get_non_hydrostatic
SUBROUTINE get_time_step_sound ( id_id , time_step_sound )
  USE module_configure
  integer , INTENT(OUT) :: time_step_sound
  INTEGER id_id
  time_step_sound = model_config_rec%time_step_sound(id_id)
  RETURN
END SUBROUTINE get_time_step_sound
SUBROUTINE get_h_mom_adv_order ( id_id , h_mom_adv_order )
  USE module_configure
  integer , INTENT(OUT) :: h_mom_adv_order
  INTEGER id_id
  h_mom_adv_order = model_config_rec%h_mom_adv_order(id_id)
  RETURN
END SUBROUTINE get_h_mom_adv_order
SUBROUTINE get_v_mom_adv_order ( id_id , v_mom_adv_order )
  USE module_configure
  integer , INTENT(OUT) :: v_mom_adv_order
  INTEGER id_id
  v_mom_adv_order = model_config_rec%v_mom_adv_order(id_id)
  RETURN
END SUBROUTINE get_v_mom_adv_order
SUBROUTINE get_h_sca_adv_order ( id_id , h_sca_adv_order )
  USE module_configure
  integer , INTENT(OUT) :: h_sca_adv_order
  INTEGER id_id
  h_sca_adv_order = model_config_rec%h_sca_adv_order(id_id)
  RETURN
END SUBROUTINE get_h_sca_adv_order
SUBROUTINE get_v_sca_adv_order ( id_id , v_sca_adv_order )
  USE module_configure
  integer , INTENT(OUT) :: v_sca_adv_order
  INTEGER id_id
  v_sca_adv_order = model_config_rec%v_sca_adv_order(id_id)
  RETURN
END SUBROUTINE get_v_sca_adv_order
SUBROUTINE get_top_radiation ( id_id , top_radiation )
  USE module_configure
  logical , INTENT(OUT) :: top_radiation
  INTEGER id_id
  top_radiation = model_config_rec%top_radiation(id_id)
  RETURN
END SUBROUTINE get_top_radiation
SUBROUTINE get_mix_cr_len ( id_id , mix_cr_len )
  USE module_configure
  real , INTENT(OUT) :: mix_cr_len
  INTEGER id_id
  mix_cr_len = model_config_rec%mix_cr_len(id_id)
  RETURN
END SUBROUTINE get_mix_cr_len
SUBROUTINE get_tke_upper_bound ( id_id , tke_upper_bound )
  USE module_configure
  real , INTENT(OUT) :: tke_upper_bound
  INTEGER id_id
  tke_upper_bound = model_config_rec%tke_upper_bound(id_id)
  RETURN
END SUBROUTINE get_tke_upper_bound
SUBROUTINE get_kh_tke_upper_bound ( id_id , kh_tke_upper_bound )
  USE module_configure
  real , INTENT(OUT) :: kh_tke_upper_bound
  INTEGER id_id
  kh_tke_upper_bound = model_config_rec%kh_tke_upper_bound(id_id)
  RETURN
END SUBROUTINE get_kh_tke_upper_bound
SUBROUTINE get_kv_tke_upper_bound ( id_id , kv_tke_upper_bound )
  USE module_configure
  real , INTENT(OUT) :: kv_tke_upper_bound
  INTEGER id_id
  kv_tke_upper_bound = model_config_rec%kv_tke_upper_bound(id_id)
  RETURN
END SUBROUTINE get_kv_tke_upper_bound
SUBROUTINE get_tke_drag_coefficient ( id_id , tke_drag_coefficient )
  USE module_configure
  real , INTENT(OUT) :: tke_drag_coefficient
  INTEGER id_id
  tke_drag_coefficient = model_config_rec%tke_drag_coefficient(id_id)
  RETURN
END SUBROUTINE get_tke_drag_coefficient
SUBROUTINE get_tke_heat_flux ( id_id , tke_heat_flux )
  USE module_configure
  real , INTENT(OUT) :: tke_heat_flux
  INTEGER id_id
  tke_heat_flux = model_config_rec%tke_heat_flux(id_id)
  RETURN
END SUBROUTINE get_tke_heat_flux
SUBROUTINE get_pert_coriolis ( id_id , pert_coriolis )
  USE module_configure
  logical , INTENT(OUT) :: pert_coriolis
  INTEGER id_id
  pert_coriolis = model_config_rec%pert_coriolis(id_id)
  RETURN
END SUBROUTINE get_pert_coriolis
SUBROUTINE get_spec_bdy_width ( spec_bdy_width )
  USE module_configure
  integer , INTENT(OUT) :: spec_bdy_width
  spec_bdy_width = model_config_rec%spec_bdy_width
  RETURN
END SUBROUTINE get_spec_bdy_width
SUBROUTINE get_spec_zone ( spec_zone )
  USE module_configure
  integer , INTENT(OUT) :: spec_zone
  spec_zone = model_config_rec%spec_zone
  RETURN
END SUBROUTINE get_spec_zone
SUBROUTINE get_relax_zone ( relax_zone )
  USE module_configure
  integer , INTENT(OUT) :: relax_zone
  relax_zone = model_config_rec%relax_zone
  RETURN
END SUBROUTINE get_relax_zone
SUBROUTINE get_specified ( id_id , specified )
  USE module_configure
  logical , INTENT(OUT) :: specified
  INTEGER id_id
  specified = model_config_rec%specified(id_id)
  RETURN
END SUBROUTINE get_specified
SUBROUTINE get_periodic_x ( id_id , periodic_x )
  USE module_configure
  logical , INTENT(OUT) :: periodic_x
  INTEGER id_id
  periodic_x = model_config_rec%periodic_x(id_id)
  RETURN
END SUBROUTINE get_periodic_x
SUBROUTINE get_symmetric_xs ( id_id , symmetric_xs )
  USE module_configure
  logical , INTENT(OUT) :: symmetric_xs
  INTEGER id_id
  symmetric_xs = model_config_rec%symmetric_xs(id_id)
  RETURN
END SUBROUTINE get_symmetric_xs
SUBROUTINE get_symmetric_xe ( id_id , symmetric_xe )
  USE module_configure
  logical , INTENT(OUT) :: symmetric_xe
  INTEGER id_id
  symmetric_xe = model_config_rec%symmetric_xe(id_id)
  RETURN
END SUBROUTINE get_symmetric_xe
SUBROUTINE get_open_xs ( id_id , open_xs )
  USE module_configure
  logical , INTENT(OUT) :: open_xs
  INTEGER id_id
  open_xs = model_config_rec%open_xs(id_id)
  RETURN
END SUBROUTINE get_open_xs
SUBROUTINE get_open_xe ( id_id , open_xe )
  USE module_configure
  logical , INTENT(OUT) :: open_xe
  INTEGER id_id
  open_xe = model_config_rec%open_xe(id_id)
  RETURN
END SUBROUTINE get_open_xe
SUBROUTINE get_periodic_y ( id_id , periodic_y )
  USE module_configure
  logical , INTENT(OUT) :: periodic_y
  INTEGER id_id
  periodic_y = model_config_rec%periodic_y(id_id)
  RETURN
END SUBROUTINE get_periodic_y
SUBROUTINE get_symmetric_ys ( id_id , symmetric_ys )
  USE module_configure
  logical , INTENT(OUT) :: symmetric_ys
  INTEGER id_id
  symmetric_ys = model_config_rec%symmetric_ys(id_id)
  RETURN
END SUBROUTINE get_symmetric_ys
SUBROUTINE get_symmetric_ye ( id_id , symmetric_ye )
  USE module_configure
  logical , INTENT(OUT) :: symmetric_ye
  INTEGER id_id
  symmetric_ye = model_config_rec%symmetric_ye(id_id)
  RETURN
END SUBROUTINE get_symmetric_ye
SUBROUTINE get_open_ys ( id_id , open_ys )
  USE module_configure
  logical , INTENT(OUT) :: open_ys
  INTEGER id_id
  open_ys = model_config_rec%open_ys(id_id)
  RETURN
END SUBROUTINE get_open_ys
SUBROUTINE get_open_ye ( id_id , open_ye )
  USE module_configure
  logical , INTENT(OUT) :: open_ye
  INTEGER id_id
  open_ye = model_config_rec%open_ye(id_id)
  RETURN
END SUBROUTINE get_open_ye
SUBROUTINE get_nested ( id_id , nested )
  USE module_configure
  logical , INTENT(OUT) :: nested
  INTEGER id_id
  nested = model_config_rec%nested(id_id)
  RETURN
END SUBROUTINE get_nested
SUBROUTINE get_real_data_init_type ( real_data_init_type )
  USE module_configure
  integer , INTENT(OUT) :: real_data_init_type
  real_data_init_type = model_config_rec%real_data_init_type
  RETURN
END SUBROUTINE get_real_data_init_type
SUBROUTINE get_cen_lat ( id_id , cen_lat )
  USE module_configure
  real , INTENT(OUT) :: cen_lat
  INTEGER id_id
  cen_lat = model_config_rec%cen_lat(id_id)
  RETURN
END SUBROUTINE get_cen_lat
SUBROUTINE get_cen_lon ( id_id , cen_lon )
  USE module_configure
  real , INTENT(OUT) :: cen_lon
  INTEGER id_id
  cen_lon = model_config_rec%cen_lon(id_id)
  RETURN
END SUBROUTINE get_cen_lon
SUBROUTINE get_truelat1 ( id_id , truelat1 )
  USE module_configure
  real , INTENT(OUT) :: truelat1
  INTEGER id_id
  truelat1 = model_config_rec%truelat1(id_id)
  RETURN
END SUBROUTINE get_truelat1
SUBROUTINE get_truelat2 ( id_id , truelat2 )
  USE module_configure
  real , INTENT(OUT) :: truelat2
  INTEGER id_id
  truelat2 = model_config_rec%truelat2(id_id)
  RETURN
END SUBROUTINE get_truelat2
SUBROUTINE get_moad_cen_lat ( id_id , moad_cen_lat )
  USE module_configure
  real , INTENT(OUT) :: moad_cen_lat
  INTEGER id_id
  moad_cen_lat = model_config_rec%moad_cen_lat(id_id)
  RETURN
END SUBROUTINE get_moad_cen_lat
SUBROUTINE get_stand_lon ( id_id , stand_lon )
  USE module_configure
  real , INTENT(OUT) :: stand_lon
  INTEGER id_id
  stand_lon = model_config_rec%stand_lon(id_id)
  RETURN
END SUBROUTINE get_stand_lon
SUBROUTINE get_bdyfrq ( id_id , bdyfrq )
  USE module_configure
  real , INTENT(OUT) :: bdyfrq
  INTEGER id_id
  bdyfrq = model_config_rec%bdyfrq(id_id)
  RETURN
END SUBROUTINE get_bdyfrq
SUBROUTINE get_iswater ( id_id , iswater )
  USE module_configure
  integer , INTENT(OUT) :: iswater
  INTEGER id_id
  iswater = model_config_rec%iswater(id_id)
  RETURN
END SUBROUTINE get_iswater
SUBROUTINE get_isice ( id_id , isice )
  USE module_configure
  integer , INTENT(OUT) :: isice
  INTEGER id_id
  isice = model_config_rec%isice(id_id)
  RETURN
END SUBROUTINE get_isice
SUBROUTINE get_isurban ( id_id , isurban )
  USE module_configure
  integer , INTENT(OUT) :: isurban
  INTEGER id_id
  isurban = model_config_rec%isurban(id_id)
  RETURN
END SUBROUTINE get_isurban
SUBROUTINE get_isoilwater ( id_id , isoilwater )
  USE module_configure
  integer , INTENT(OUT) :: isoilwater
  INTEGER id_id
  isoilwater = model_config_rec%isoilwater(id_id)
  RETURN
END SUBROUTINE get_isoilwater
SUBROUTINE get_map_proj ( id_id , map_proj )
  USE module_configure
  integer , INTENT(OUT) :: map_proj
  INTEGER id_id
  map_proj = model_config_rec%map_proj(id_id)
  RETURN
END SUBROUTINE get_map_proj
SUBROUTINE set_run_days ( run_days )
  USE module_configure
  integer , INTENT(IN) :: run_days
  model_config_rec%run_days = run_days 
  RETURN
END SUBROUTINE set_run_days
SUBROUTINE set_run_hours ( run_hours )
  USE module_configure
  integer , INTENT(IN) :: run_hours
  model_config_rec%run_hours = run_hours 
  RETURN
END SUBROUTINE set_run_hours
SUBROUTINE set_run_minutes ( run_minutes )
  USE module_configure
  integer , INTENT(IN) :: run_minutes
  model_config_rec%run_minutes = run_minutes 
  RETURN
END SUBROUTINE set_run_minutes
SUBROUTINE set_run_seconds ( run_seconds )
  USE module_configure
  integer , INTENT(IN) :: run_seconds
  model_config_rec%run_seconds = run_seconds 
  RETURN
END SUBROUTINE set_run_seconds
SUBROUTINE set_start_year ( id_id , start_year )
  USE module_configure
  integer , INTENT(IN) :: start_year
  INTEGER id_id
  model_config_rec%start_year(id_id) = start_year
  RETURN
END SUBROUTINE set_start_year
SUBROUTINE set_start_month ( id_id , start_month )
  USE module_configure
  integer , INTENT(IN) :: start_month
  INTEGER id_id
  model_config_rec%start_month(id_id) = start_month
  RETURN
END SUBROUTINE set_start_month
SUBROUTINE set_start_day ( id_id , start_day )
  USE module_configure
  integer , INTENT(IN) :: start_day
  INTEGER id_id
  model_config_rec%start_day(id_id) = start_day
  RETURN
END SUBROUTINE set_start_day
SUBROUTINE set_start_hour ( id_id , start_hour )
  USE module_configure
  integer , INTENT(IN) :: start_hour
  INTEGER id_id
  model_config_rec%start_hour(id_id) = start_hour
  RETURN
END SUBROUTINE set_start_hour
SUBROUTINE set_start_minute ( id_id , start_minute )
  USE module_configure
  integer , INTENT(IN) :: start_minute
  INTEGER id_id
  model_config_rec%start_minute(id_id) = start_minute
  RETURN
END SUBROUTINE set_start_minute
SUBROUTINE set_start_second ( id_id , start_second )
  USE module_configure
  integer , INTENT(IN) :: start_second
  INTEGER id_id
  model_config_rec%start_second(id_id) = start_second
  RETURN
END SUBROUTINE set_start_second
SUBROUTINE set_end_year ( id_id , end_year )
  USE module_configure
  integer , INTENT(IN) :: end_year
  INTEGER id_id
  model_config_rec%end_year(id_id) = end_year
  RETURN
END SUBROUTINE set_end_year
SUBROUTINE set_end_month ( id_id , end_month )
  USE module_configure
  integer , INTENT(IN) :: end_month
  INTEGER id_id
  model_config_rec%end_month(id_id) = end_month
  RETURN
END SUBROUTINE set_end_month
SUBROUTINE set_end_day ( id_id , end_day )
  USE module_configure
  integer , INTENT(IN) :: end_day
  INTEGER id_id
  model_config_rec%end_day(id_id) = end_day
  RETURN
END SUBROUTINE set_end_day
SUBROUTINE set_end_hour ( id_id , end_hour )
  USE module_configure
  integer , INTENT(IN) :: end_hour
  INTEGER id_id
  model_config_rec%end_hour(id_id) = end_hour
  RETURN
END SUBROUTINE set_end_hour
SUBROUTINE set_end_minute ( id_id , end_minute )
  USE module_configure
  integer , INTENT(IN) :: end_minute
  INTEGER id_id
  model_config_rec%end_minute(id_id) = end_minute
  RETURN
END SUBROUTINE set_end_minute
SUBROUTINE set_end_second ( id_id , end_second )
  USE module_configure
  integer , INTENT(IN) :: end_second
  INTEGER id_id
  model_config_rec%end_second(id_id) = end_second
  RETURN
END SUBROUTINE set_end_second
SUBROUTINE set_interval_seconds ( interval_seconds )
  USE module_configure
  integer , INTENT(IN) :: interval_seconds
  model_config_rec%interval_seconds = interval_seconds 
  RETURN
END SUBROUTINE set_interval_seconds
SUBROUTINE set_input_from_file ( id_id , input_from_file )
  USE module_configure
  logical , INTENT(IN) :: input_from_file
  INTEGER id_id
  model_config_rec%input_from_file(id_id) = input_from_file
  RETURN
END SUBROUTINE set_input_from_file
SUBROUTINE set_history_interval ( id_id , history_interval )
  USE module_configure
  integer , INTENT(IN) :: history_interval
  INTEGER id_id
  model_config_rec%history_interval(id_id) = history_interval
  RETURN
END SUBROUTINE set_history_interval
SUBROUTINE set_frames_per_outfile ( id_id , frames_per_outfile )
  USE module_configure
  integer , INTENT(IN) :: frames_per_outfile
  INTEGER id_id
  model_config_rec%frames_per_outfile(id_id) = frames_per_outfile
  RETURN
END SUBROUTINE set_frames_per_outfile
SUBROUTINE set_restart ( restart )
  USE module_configure
  logical , INTENT(IN) :: restart
  model_config_rec%restart = restart 
  RETURN
END SUBROUTINE set_restart
SUBROUTINE set_restart_interval ( restart_interval )
  USE module_configure
  integer , INTENT(IN) :: restart_interval
  model_config_rec%restart_interval = restart_interval 
  RETURN
END SUBROUTINE set_restart_interval
SUBROUTINE set_io_form_input ( io_form_input )
  USE module_configure
  integer , INTENT(IN) :: io_form_input
  model_config_rec%io_form_input = io_form_input 
  RETURN
END SUBROUTINE set_io_form_input
SUBROUTINE set_io_form_history ( io_form_history )
  USE module_configure
  integer , INTENT(IN) :: io_form_history
  model_config_rec%io_form_history = io_form_history 
  RETURN
END SUBROUTINE set_io_form_history
SUBROUTINE set_io_form_restart ( io_form_restart )
  USE module_configure
  integer , INTENT(IN) :: io_form_restart
  model_config_rec%io_form_restart = io_form_restart 
  RETURN
END SUBROUTINE set_io_form_restart
SUBROUTINE set_io_form_boundary ( io_form_boundary )
  USE module_configure
  integer , INTENT(IN) :: io_form_boundary
  model_config_rec%io_form_boundary = io_form_boundary 
  RETURN
END SUBROUTINE set_io_form_boundary
SUBROUTINE set_debug_level ( debug_level )
  USE module_configure
  integer , INTENT(IN) :: debug_level
  model_config_rec%debug_level = debug_level 
  RETURN
END SUBROUTINE set_debug_level
SUBROUTINE set_history_outname ( history_outname )
  USE module_configure
  character*256 , INTENT(IN) :: history_outname
  model_config_rec%history_outname = history_outname 
  RETURN
END SUBROUTINE set_history_outname
SUBROUTINE set_auxhist1_outname ( auxhist1_outname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist1_outname
  model_config_rec%auxhist1_outname = auxhist1_outname 
  RETURN
END SUBROUTINE set_auxhist1_outname
SUBROUTINE set_auxhist2_outname ( auxhist2_outname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist2_outname
  model_config_rec%auxhist2_outname = auxhist2_outname 
  RETURN
END SUBROUTINE set_auxhist2_outname
SUBROUTINE set_auxhist3_outname ( auxhist3_outname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist3_outname
  model_config_rec%auxhist3_outname = auxhist3_outname 
  RETURN
END SUBROUTINE set_auxhist3_outname
SUBROUTINE set_auxhist4_outname ( auxhist4_outname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist4_outname
  model_config_rec%auxhist4_outname = auxhist4_outname 
  RETURN
END SUBROUTINE set_auxhist4_outname
SUBROUTINE set_auxhist5_outname ( auxhist5_outname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist5_outname
  model_config_rec%auxhist5_outname = auxhist5_outname 
  RETURN
END SUBROUTINE set_auxhist5_outname
SUBROUTINE set_history_inname ( history_inname )
  USE module_configure
  character*256 , INTENT(IN) :: history_inname
  model_config_rec%history_inname = history_inname 
  RETURN
END SUBROUTINE set_history_inname
SUBROUTINE set_auxhist1_inname ( auxhist1_inname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist1_inname
  model_config_rec%auxhist1_inname = auxhist1_inname 
  RETURN
END SUBROUTINE set_auxhist1_inname
SUBROUTINE set_auxhist2_inname ( auxhist2_inname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist2_inname
  model_config_rec%auxhist2_inname = auxhist2_inname 
  RETURN
END SUBROUTINE set_auxhist2_inname
SUBROUTINE set_auxhist3_inname ( auxhist3_inname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist3_inname
  model_config_rec%auxhist3_inname = auxhist3_inname 
  RETURN
END SUBROUTINE set_auxhist3_inname
SUBROUTINE set_auxhist4_inname ( auxhist4_inname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist4_inname
  model_config_rec%auxhist4_inname = auxhist4_inname 
  RETURN
END SUBROUTINE set_auxhist4_inname
SUBROUTINE set_auxhist5_inname ( auxhist5_inname )
  USE module_configure
  character*256 , INTENT(IN) :: auxhist5_inname
  model_config_rec%auxhist5_inname = auxhist5_inname 
  RETURN
END SUBROUTINE set_auxhist5_inname
SUBROUTINE set_history_interval_mo ( id_id , history_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: history_interval_mo
  INTEGER id_id
  model_config_rec%history_interval_mo(id_id) = history_interval_mo
  RETURN
END SUBROUTINE set_history_interval_mo
SUBROUTINE set_history_interval_d ( id_id , history_interval_d )
  USE module_configure
  integer , INTENT(IN) :: history_interval_d
  INTEGER id_id
  model_config_rec%history_interval_d(id_id) = history_interval_d
  RETURN
END SUBROUTINE set_history_interval_d
SUBROUTINE set_history_interval_h ( id_id , history_interval_h )
  USE module_configure
  integer , INTENT(IN) :: history_interval_h
  INTEGER id_id
  model_config_rec%history_interval_h(id_id) = history_interval_h
  RETURN
END SUBROUTINE set_history_interval_h
SUBROUTINE set_history_interval_m ( id_id , history_interval_m )
  USE module_configure
  integer , INTENT(IN) :: history_interval_m
  INTEGER id_id
  model_config_rec%history_interval_m(id_id) = history_interval_m
  RETURN
END SUBROUTINE set_history_interval_m
SUBROUTINE set_history_interval_s ( id_id , history_interval_s )
  USE module_configure
  integer , INTENT(IN) :: history_interval_s
  INTEGER id_id
  model_config_rec%history_interval_s(id_id) = history_interval_s
  RETURN
END SUBROUTINE set_history_interval_s
SUBROUTINE set_inputout_interval_mo ( id_id , inputout_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval_mo
  INTEGER id_id
  model_config_rec%inputout_interval_mo(id_id) = inputout_interval_mo
  RETURN
END SUBROUTINE set_inputout_interval_mo
SUBROUTINE set_inputout_interval_d ( id_id , inputout_interval_d )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval_d
  INTEGER id_id
  model_config_rec%inputout_interval_d(id_id) = inputout_interval_d
  RETURN
END SUBROUTINE set_inputout_interval_d
SUBROUTINE set_inputout_interval_h ( id_id , inputout_interval_h )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval_h
  INTEGER id_id
  model_config_rec%inputout_interval_h(id_id) = inputout_interval_h
  RETURN
END SUBROUTINE set_inputout_interval_h
SUBROUTINE set_inputout_interval_m ( id_id , inputout_interval_m )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval_m
  INTEGER id_id
  model_config_rec%inputout_interval_m(id_id) = inputout_interval_m
  RETURN
END SUBROUTINE set_inputout_interval_m
SUBROUTINE set_inputout_interval_s ( id_id , inputout_interval_s )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval_s
  INTEGER id_id
  model_config_rec%inputout_interval_s(id_id) = inputout_interval_s
  RETURN
END SUBROUTINE set_inputout_interval_s
SUBROUTINE set_inputout_interval ( id_id , inputout_interval )
  USE module_configure
  integer , INTENT(IN) :: inputout_interval
  INTEGER id_id
  model_config_rec%inputout_interval(id_id) = inputout_interval
  RETURN
END SUBROUTINE set_inputout_interval
SUBROUTINE set_auxhist1_interval_mo ( id_id , auxhist1_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval_mo
  INTEGER id_id
  model_config_rec%auxhist1_interval_mo(id_id) = auxhist1_interval_mo
  RETURN
END SUBROUTINE set_auxhist1_interval_mo
SUBROUTINE set_auxhist1_interval_d ( id_id , auxhist1_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval_d
  INTEGER id_id
  model_config_rec%auxhist1_interval_d(id_id) = auxhist1_interval_d
  RETURN
END SUBROUTINE set_auxhist1_interval_d
SUBROUTINE set_auxhist1_interval_h ( id_id , auxhist1_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval_h
  INTEGER id_id
  model_config_rec%auxhist1_interval_h(id_id) = auxhist1_interval_h
  RETURN
END SUBROUTINE set_auxhist1_interval_h
SUBROUTINE set_auxhist1_interval_m ( id_id , auxhist1_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval_m
  INTEGER id_id
  model_config_rec%auxhist1_interval_m(id_id) = auxhist1_interval_m
  RETURN
END SUBROUTINE set_auxhist1_interval_m
SUBROUTINE set_auxhist1_interval_s ( id_id , auxhist1_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval_s
  INTEGER id_id
  model_config_rec%auxhist1_interval_s(id_id) = auxhist1_interval_s
  RETURN
END SUBROUTINE set_auxhist1_interval_s
SUBROUTINE set_auxhist1_interval ( id_id , auxhist1_interval )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_interval
  INTEGER id_id
  model_config_rec%auxhist1_interval(id_id) = auxhist1_interval
  RETURN
END SUBROUTINE set_auxhist1_interval
SUBROUTINE set_auxhist2_interval_mo ( id_id , auxhist2_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval_mo
  INTEGER id_id
  model_config_rec%auxhist2_interval_mo(id_id) = auxhist2_interval_mo
  RETURN
END SUBROUTINE set_auxhist2_interval_mo
SUBROUTINE set_auxhist2_interval_d ( id_id , auxhist2_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval_d
  INTEGER id_id
  model_config_rec%auxhist2_interval_d(id_id) = auxhist2_interval_d
  RETURN
END SUBROUTINE set_auxhist2_interval_d
SUBROUTINE set_auxhist2_interval_h ( id_id , auxhist2_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval_h
  INTEGER id_id
  model_config_rec%auxhist2_interval_h(id_id) = auxhist2_interval_h
  RETURN
END SUBROUTINE set_auxhist2_interval_h
SUBROUTINE set_auxhist2_interval_m ( id_id , auxhist2_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval_m
  INTEGER id_id
  model_config_rec%auxhist2_interval_m(id_id) = auxhist2_interval_m
  RETURN
END SUBROUTINE set_auxhist2_interval_m
SUBROUTINE set_auxhist2_interval_s ( id_id , auxhist2_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval_s
  INTEGER id_id
  model_config_rec%auxhist2_interval_s(id_id) = auxhist2_interval_s
  RETURN
END SUBROUTINE set_auxhist2_interval_s
SUBROUTINE set_auxhist2_interval ( id_id , auxhist2_interval )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_interval
  INTEGER id_id
  model_config_rec%auxhist2_interval(id_id) = auxhist2_interval
  RETURN
END SUBROUTINE set_auxhist2_interval
SUBROUTINE set_auxhist3_interval_mo ( id_id , auxhist3_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval_mo
  INTEGER id_id
  model_config_rec%auxhist3_interval_mo(id_id) = auxhist3_interval_mo
  RETURN
END SUBROUTINE set_auxhist3_interval_mo
SUBROUTINE set_auxhist3_interval_d ( id_id , auxhist3_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval_d
  INTEGER id_id
  model_config_rec%auxhist3_interval_d(id_id) = auxhist3_interval_d
  RETURN
END SUBROUTINE set_auxhist3_interval_d
SUBROUTINE set_auxhist3_interval_h ( id_id , auxhist3_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval_h
  INTEGER id_id
  model_config_rec%auxhist3_interval_h(id_id) = auxhist3_interval_h
  RETURN
END SUBROUTINE set_auxhist3_interval_h
SUBROUTINE set_auxhist3_interval_m ( id_id , auxhist3_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval_m
  INTEGER id_id
  model_config_rec%auxhist3_interval_m(id_id) = auxhist3_interval_m
  RETURN
END SUBROUTINE set_auxhist3_interval_m
SUBROUTINE set_auxhist3_interval_s ( id_id , auxhist3_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval_s
  INTEGER id_id
  model_config_rec%auxhist3_interval_s(id_id) = auxhist3_interval_s
  RETURN
END SUBROUTINE set_auxhist3_interval_s
SUBROUTINE set_auxhist3_interval ( id_id , auxhist3_interval )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_interval
  INTEGER id_id
  model_config_rec%auxhist3_interval(id_id) = auxhist3_interval
  RETURN
END SUBROUTINE set_auxhist3_interval
SUBROUTINE set_auxhist4_interval_mo ( id_id , auxhist4_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval_mo
  INTEGER id_id
  model_config_rec%auxhist4_interval_mo(id_id) = auxhist4_interval_mo
  RETURN
END SUBROUTINE set_auxhist4_interval_mo
SUBROUTINE set_auxhist4_interval_d ( id_id , auxhist4_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval_d
  INTEGER id_id
  model_config_rec%auxhist4_interval_d(id_id) = auxhist4_interval_d
  RETURN
END SUBROUTINE set_auxhist4_interval_d
SUBROUTINE set_auxhist4_interval_h ( id_id , auxhist4_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval_h
  INTEGER id_id
  model_config_rec%auxhist4_interval_h(id_id) = auxhist4_interval_h
  RETURN
END SUBROUTINE set_auxhist4_interval_h
SUBROUTINE set_auxhist4_interval_m ( id_id , auxhist4_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval_m
  INTEGER id_id
  model_config_rec%auxhist4_interval_m(id_id) = auxhist4_interval_m
  RETURN
END SUBROUTINE set_auxhist4_interval_m
SUBROUTINE set_auxhist4_interval_s ( id_id , auxhist4_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval_s
  INTEGER id_id
  model_config_rec%auxhist4_interval_s(id_id) = auxhist4_interval_s
  RETURN
END SUBROUTINE set_auxhist4_interval_s
SUBROUTINE set_auxhist4_interval ( id_id , auxhist4_interval )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_interval
  INTEGER id_id
  model_config_rec%auxhist4_interval(id_id) = auxhist4_interval
  RETURN
END SUBROUTINE set_auxhist4_interval
SUBROUTINE set_auxhist5_interval_mo ( id_id , auxhist5_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval_mo
  INTEGER id_id
  model_config_rec%auxhist5_interval_mo(id_id) = auxhist5_interval_mo
  RETURN
END SUBROUTINE set_auxhist5_interval_mo
SUBROUTINE set_auxhist5_interval_d ( id_id , auxhist5_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval_d
  INTEGER id_id
  model_config_rec%auxhist5_interval_d(id_id) = auxhist5_interval_d
  RETURN
END SUBROUTINE set_auxhist5_interval_d
SUBROUTINE set_auxhist5_interval_h ( id_id , auxhist5_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval_h
  INTEGER id_id
  model_config_rec%auxhist5_interval_h(id_id) = auxhist5_interval_h
  RETURN
END SUBROUTINE set_auxhist5_interval_h
SUBROUTINE set_auxhist5_interval_m ( id_id , auxhist5_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval_m
  INTEGER id_id
  model_config_rec%auxhist5_interval_m(id_id) = auxhist5_interval_m
  RETURN
END SUBROUTINE set_auxhist5_interval_m
SUBROUTINE set_auxhist5_interval_s ( id_id , auxhist5_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval_s
  INTEGER id_id
  model_config_rec%auxhist5_interval_s(id_id) = auxhist5_interval_s
  RETURN
END SUBROUTINE set_auxhist5_interval_s
SUBROUTINE set_auxhist5_interval ( id_id , auxhist5_interval )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_interval
  INTEGER id_id
  model_config_rec%auxhist5_interval(id_id) = auxhist5_interval
  RETURN
END SUBROUTINE set_auxhist5_interval
SUBROUTINE set_auxinput1_interval_mo ( id_id , auxinput1_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval_mo
  INTEGER id_id
  model_config_rec%auxinput1_interval_mo(id_id) = auxinput1_interval_mo
  RETURN
END SUBROUTINE set_auxinput1_interval_mo
SUBROUTINE set_auxinput1_interval_d ( id_id , auxinput1_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval_d
  INTEGER id_id
  model_config_rec%auxinput1_interval_d(id_id) = auxinput1_interval_d
  RETURN
END SUBROUTINE set_auxinput1_interval_d
SUBROUTINE set_auxinput1_interval_h ( id_id , auxinput1_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval_h
  INTEGER id_id
  model_config_rec%auxinput1_interval_h(id_id) = auxinput1_interval_h
  RETURN
END SUBROUTINE set_auxinput1_interval_h
SUBROUTINE set_auxinput1_interval_m ( id_id , auxinput1_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval_m
  INTEGER id_id
  model_config_rec%auxinput1_interval_m(id_id) = auxinput1_interval_m
  RETURN
END SUBROUTINE set_auxinput1_interval_m
SUBROUTINE set_auxinput1_interval_s ( id_id , auxinput1_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval_s
  INTEGER id_id
  model_config_rec%auxinput1_interval_s(id_id) = auxinput1_interval_s
  RETURN
END SUBROUTINE set_auxinput1_interval_s
SUBROUTINE set_auxinput1_interval ( id_id , auxinput1_interval )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_interval
  INTEGER id_id
  model_config_rec%auxinput1_interval(id_id) = auxinput1_interval
  RETURN
END SUBROUTINE set_auxinput1_interval
SUBROUTINE set_auxinput2_interval_mo ( id_id , auxinput2_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval_mo
  INTEGER id_id
  model_config_rec%auxinput2_interval_mo(id_id) = auxinput2_interval_mo
  RETURN
END SUBROUTINE set_auxinput2_interval_mo
SUBROUTINE set_auxinput2_interval_d ( id_id , auxinput2_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval_d
  INTEGER id_id
  model_config_rec%auxinput2_interval_d(id_id) = auxinput2_interval_d
  RETURN
END SUBROUTINE set_auxinput2_interval_d
SUBROUTINE set_auxinput2_interval_h ( id_id , auxinput2_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval_h
  INTEGER id_id
  model_config_rec%auxinput2_interval_h(id_id) = auxinput2_interval_h
  RETURN
END SUBROUTINE set_auxinput2_interval_h
SUBROUTINE set_auxinput2_interval_m ( id_id , auxinput2_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval_m
  INTEGER id_id
  model_config_rec%auxinput2_interval_m(id_id) = auxinput2_interval_m
  RETURN
END SUBROUTINE set_auxinput2_interval_m
SUBROUTINE set_auxinput2_interval_s ( id_id , auxinput2_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval_s
  INTEGER id_id
  model_config_rec%auxinput2_interval_s(id_id) = auxinput2_interval_s
  RETURN
END SUBROUTINE set_auxinput2_interval_s
SUBROUTINE set_auxinput2_interval ( id_id , auxinput2_interval )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_interval
  INTEGER id_id
  model_config_rec%auxinput2_interval(id_id) = auxinput2_interval
  RETURN
END SUBROUTINE set_auxinput2_interval
SUBROUTINE set_auxinput3_interval_mo ( id_id , auxinput3_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval_mo
  INTEGER id_id
  model_config_rec%auxinput3_interval_mo(id_id) = auxinput3_interval_mo
  RETURN
END SUBROUTINE set_auxinput3_interval_mo
SUBROUTINE set_auxinput3_interval_d ( id_id , auxinput3_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval_d
  INTEGER id_id
  model_config_rec%auxinput3_interval_d(id_id) = auxinput3_interval_d
  RETURN
END SUBROUTINE set_auxinput3_interval_d
SUBROUTINE set_auxinput3_interval_h ( id_id , auxinput3_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval_h
  INTEGER id_id
  model_config_rec%auxinput3_interval_h(id_id) = auxinput3_interval_h
  RETURN
END SUBROUTINE set_auxinput3_interval_h
SUBROUTINE set_auxinput3_interval_m ( id_id , auxinput3_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval_m
  INTEGER id_id
  model_config_rec%auxinput3_interval_m(id_id) = auxinput3_interval_m
  RETURN
END SUBROUTINE set_auxinput3_interval_m
SUBROUTINE set_auxinput3_interval_s ( id_id , auxinput3_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval_s
  INTEGER id_id
  model_config_rec%auxinput3_interval_s(id_id) = auxinput3_interval_s
  RETURN
END SUBROUTINE set_auxinput3_interval_s
SUBROUTINE set_auxinput3_interval ( id_id , auxinput3_interval )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_interval
  INTEGER id_id
  model_config_rec%auxinput3_interval(id_id) = auxinput3_interval
  RETURN
END SUBROUTINE set_auxinput3_interval
SUBROUTINE set_auxinput4_interval_mo ( id_id , auxinput4_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval_mo
  INTEGER id_id
  model_config_rec%auxinput4_interval_mo(id_id) = auxinput4_interval_mo
  RETURN
END SUBROUTINE set_auxinput4_interval_mo
SUBROUTINE set_auxinput4_interval_d ( id_id , auxinput4_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval_d
  INTEGER id_id
  model_config_rec%auxinput4_interval_d(id_id) = auxinput4_interval_d
  RETURN
END SUBROUTINE set_auxinput4_interval_d
SUBROUTINE set_auxinput4_interval_h ( id_id , auxinput4_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval_h
  INTEGER id_id
  model_config_rec%auxinput4_interval_h(id_id) = auxinput4_interval_h
  RETURN
END SUBROUTINE set_auxinput4_interval_h
SUBROUTINE set_auxinput4_interval_m ( id_id , auxinput4_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval_m
  INTEGER id_id
  model_config_rec%auxinput4_interval_m(id_id) = auxinput4_interval_m
  RETURN
END SUBROUTINE set_auxinput4_interval_m
SUBROUTINE set_auxinput4_interval_s ( id_id , auxinput4_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval_s
  INTEGER id_id
  model_config_rec%auxinput4_interval_s(id_id) = auxinput4_interval_s
  RETURN
END SUBROUTINE set_auxinput4_interval_s
SUBROUTINE set_auxinput4_interval ( id_id , auxinput4_interval )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_interval
  INTEGER id_id
  model_config_rec%auxinput4_interval(id_id) = auxinput4_interval
  RETURN
END SUBROUTINE set_auxinput4_interval
SUBROUTINE set_auxinput5_interval_mo ( id_id , auxinput5_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval_mo
  INTEGER id_id
  model_config_rec%auxinput5_interval_mo(id_id) = auxinput5_interval_mo
  RETURN
END SUBROUTINE set_auxinput5_interval_mo
SUBROUTINE set_auxinput5_interval_d ( id_id , auxinput5_interval_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval_d
  INTEGER id_id
  model_config_rec%auxinput5_interval_d(id_id) = auxinput5_interval_d
  RETURN
END SUBROUTINE set_auxinput5_interval_d
SUBROUTINE set_auxinput5_interval_h ( id_id , auxinput5_interval_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval_h
  INTEGER id_id
  model_config_rec%auxinput5_interval_h(id_id) = auxinput5_interval_h
  RETURN
END SUBROUTINE set_auxinput5_interval_h
SUBROUTINE set_auxinput5_interval_m ( id_id , auxinput5_interval_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval_m
  INTEGER id_id
  model_config_rec%auxinput5_interval_m(id_id) = auxinput5_interval_m
  RETURN
END SUBROUTINE set_auxinput5_interval_m
SUBROUTINE set_auxinput5_interval_s ( id_id , auxinput5_interval_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval_s
  INTEGER id_id
  model_config_rec%auxinput5_interval_s(id_id) = auxinput5_interval_s
  RETURN
END SUBROUTINE set_auxinput5_interval_s
SUBROUTINE set_auxinput5_interval ( id_id , auxinput5_interval )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_interval
  INTEGER id_id
  model_config_rec%auxinput5_interval(id_id) = auxinput5_interval
  RETURN
END SUBROUTINE set_auxinput5_interval
SUBROUTINE set_restart_interval_mo ( restart_interval_mo )
  USE module_configure
  integer , INTENT(IN) :: restart_interval_mo
  model_config_rec%restart_interval_mo = restart_interval_mo 
  RETURN
END SUBROUTINE set_restart_interval_mo
SUBROUTINE set_restart_interval_d ( restart_interval_d )
  USE module_configure
  integer , INTENT(IN) :: restart_interval_d
  model_config_rec%restart_interval_d = restart_interval_d 
  RETURN
END SUBROUTINE set_restart_interval_d
SUBROUTINE set_restart_interval_h ( restart_interval_h )
  USE module_configure
  integer , INTENT(IN) :: restart_interval_h
  model_config_rec%restart_interval_h = restart_interval_h 
  RETURN
END SUBROUTINE set_restart_interval_h
SUBROUTINE set_restart_interval_m ( restart_interval_m )
  USE module_configure
  integer , INTENT(IN) :: restart_interval_m
  model_config_rec%restart_interval_m = restart_interval_m 
  RETURN
END SUBROUTINE set_restart_interval_m
SUBROUTINE set_restart_interval_s ( restart_interval_s )
  USE module_configure
  integer , INTENT(IN) :: restart_interval_s
  model_config_rec%restart_interval_s = restart_interval_s 
  RETURN
END SUBROUTINE set_restart_interval_s
SUBROUTINE set_history_begin_y ( id_id , history_begin_y )
  USE module_configure
  integer , INTENT(IN) :: history_begin_y
  INTEGER id_id
  model_config_rec%history_begin_y(id_id) = history_begin_y
  RETURN
END SUBROUTINE set_history_begin_y
SUBROUTINE set_history_begin_mo ( id_id , history_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: history_begin_mo
  INTEGER id_id
  model_config_rec%history_begin_mo(id_id) = history_begin_mo
  RETURN
END SUBROUTINE set_history_begin_mo
SUBROUTINE set_history_begin_d ( id_id , history_begin_d )
  USE module_configure
  integer , INTENT(IN) :: history_begin_d
  INTEGER id_id
  model_config_rec%history_begin_d(id_id) = history_begin_d
  RETURN
END SUBROUTINE set_history_begin_d
SUBROUTINE set_history_begin_h ( id_id , history_begin_h )
  USE module_configure
  integer , INTENT(IN) :: history_begin_h
  INTEGER id_id
  model_config_rec%history_begin_h(id_id) = history_begin_h
  RETURN
END SUBROUTINE set_history_begin_h
SUBROUTINE set_history_begin_m ( id_id , history_begin_m )
  USE module_configure
  integer , INTENT(IN) :: history_begin_m
  INTEGER id_id
  model_config_rec%history_begin_m(id_id) = history_begin_m
  RETURN
END SUBROUTINE set_history_begin_m
SUBROUTINE set_history_begin_s ( id_id , history_begin_s )
  USE module_configure
  integer , INTENT(IN) :: history_begin_s
  INTEGER id_id
  model_config_rec%history_begin_s(id_id) = history_begin_s
  RETURN
END SUBROUTINE set_history_begin_s
SUBROUTINE set_inputout_begin_y ( id_id , inputout_begin_y )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_y
  INTEGER id_id
  model_config_rec%inputout_begin_y(id_id) = inputout_begin_y
  RETURN
END SUBROUTINE set_inputout_begin_y
SUBROUTINE set_inputout_begin_mo ( id_id , inputout_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_mo
  INTEGER id_id
  model_config_rec%inputout_begin_mo(id_id) = inputout_begin_mo
  RETURN
END SUBROUTINE set_inputout_begin_mo
SUBROUTINE set_inputout_begin_d ( id_id , inputout_begin_d )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_d
  INTEGER id_id
  model_config_rec%inputout_begin_d(id_id) = inputout_begin_d
  RETURN
END SUBROUTINE set_inputout_begin_d
SUBROUTINE set_inputout_begin_h ( id_id , inputout_begin_h )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_h
  INTEGER id_id
  model_config_rec%inputout_begin_h(id_id) = inputout_begin_h
  RETURN
END SUBROUTINE set_inputout_begin_h
SUBROUTINE set_inputout_begin_m ( id_id , inputout_begin_m )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_m
  INTEGER id_id
  model_config_rec%inputout_begin_m(id_id) = inputout_begin_m
  RETURN
END SUBROUTINE set_inputout_begin_m
SUBROUTINE set_inputout_begin_s ( id_id , inputout_begin_s )
  USE module_configure
  integer , INTENT(IN) :: inputout_begin_s
  INTEGER id_id
  model_config_rec%inputout_begin_s(id_id) = inputout_begin_s
  RETURN
END SUBROUTINE set_inputout_begin_s
SUBROUTINE set_auxhist1_begin_y ( id_id , auxhist1_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_y
  INTEGER id_id
  model_config_rec%auxhist1_begin_y(id_id) = auxhist1_begin_y
  RETURN
END SUBROUTINE set_auxhist1_begin_y
SUBROUTINE set_auxhist1_begin_mo ( id_id , auxhist1_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_mo
  INTEGER id_id
  model_config_rec%auxhist1_begin_mo(id_id) = auxhist1_begin_mo
  RETURN
END SUBROUTINE set_auxhist1_begin_mo
SUBROUTINE set_auxhist1_begin_d ( id_id , auxhist1_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_d
  INTEGER id_id
  model_config_rec%auxhist1_begin_d(id_id) = auxhist1_begin_d
  RETURN
END SUBROUTINE set_auxhist1_begin_d
SUBROUTINE set_auxhist1_begin_h ( id_id , auxhist1_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_h
  INTEGER id_id
  model_config_rec%auxhist1_begin_h(id_id) = auxhist1_begin_h
  RETURN
END SUBROUTINE set_auxhist1_begin_h
SUBROUTINE set_auxhist1_begin_m ( id_id , auxhist1_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_m
  INTEGER id_id
  model_config_rec%auxhist1_begin_m(id_id) = auxhist1_begin_m
  RETURN
END SUBROUTINE set_auxhist1_begin_m
SUBROUTINE set_auxhist1_begin_s ( id_id , auxhist1_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_begin_s
  INTEGER id_id
  model_config_rec%auxhist1_begin_s(id_id) = auxhist1_begin_s
  RETURN
END SUBROUTINE set_auxhist1_begin_s
SUBROUTINE set_auxhist2_begin_y ( id_id , auxhist2_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_y
  INTEGER id_id
  model_config_rec%auxhist2_begin_y(id_id) = auxhist2_begin_y
  RETURN
END SUBROUTINE set_auxhist2_begin_y
SUBROUTINE set_auxhist2_begin_mo ( id_id , auxhist2_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_mo
  INTEGER id_id
  model_config_rec%auxhist2_begin_mo(id_id) = auxhist2_begin_mo
  RETURN
END SUBROUTINE set_auxhist2_begin_mo
SUBROUTINE set_auxhist2_begin_d ( id_id , auxhist2_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_d
  INTEGER id_id
  model_config_rec%auxhist2_begin_d(id_id) = auxhist2_begin_d
  RETURN
END SUBROUTINE set_auxhist2_begin_d
SUBROUTINE set_auxhist2_begin_h ( id_id , auxhist2_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_h
  INTEGER id_id
  model_config_rec%auxhist2_begin_h(id_id) = auxhist2_begin_h
  RETURN
END SUBROUTINE set_auxhist2_begin_h
SUBROUTINE set_auxhist2_begin_m ( id_id , auxhist2_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_m
  INTEGER id_id
  model_config_rec%auxhist2_begin_m(id_id) = auxhist2_begin_m
  RETURN
END SUBROUTINE set_auxhist2_begin_m
SUBROUTINE set_auxhist2_begin_s ( id_id , auxhist2_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_begin_s
  INTEGER id_id
  model_config_rec%auxhist2_begin_s(id_id) = auxhist2_begin_s
  RETURN
END SUBROUTINE set_auxhist2_begin_s
SUBROUTINE set_auxhist3_begin_y ( id_id , auxhist3_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_y
  INTEGER id_id
  model_config_rec%auxhist3_begin_y(id_id) = auxhist3_begin_y
  RETURN
END SUBROUTINE set_auxhist3_begin_y
SUBROUTINE set_auxhist3_begin_mo ( id_id , auxhist3_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_mo
  INTEGER id_id
  model_config_rec%auxhist3_begin_mo(id_id) = auxhist3_begin_mo
  RETURN
END SUBROUTINE set_auxhist3_begin_mo
SUBROUTINE set_auxhist3_begin_d ( id_id , auxhist3_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_d
  INTEGER id_id
  model_config_rec%auxhist3_begin_d(id_id) = auxhist3_begin_d
  RETURN
END SUBROUTINE set_auxhist3_begin_d
SUBROUTINE set_auxhist3_begin_h ( id_id , auxhist3_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_h
  INTEGER id_id
  model_config_rec%auxhist3_begin_h(id_id) = auxhist3_begin_h
  RETURN
END SUBROUTINE set_auxhist3_begin_h
SUBROUTINE set_auxhist3_begin_m ( id_id , auxhist3_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_m
  INTEGER id_id
  model_config_rec%auxhist3_begin_m(id_id) = auxhist3_begin_m
  RETURN
END SUBROUTINE set_auxhist3_begin_m
SUBROUTINE set_auxhist3_begin_s ( id_id , auxhist3_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_begin_s
  INTEGER id_id
  model_config_rec%auxhist3_begin_s(id_id) = auxhist3_begin_s
  RETURN
END SUBROUTINE set_auxhist3_begin_s
SUBROUTINE set_auxhist4_begin_y ( id_id , auxhist4_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_y
  INTEGER id_id
  model_config_rec%auxhist4_begin_y(id_id) = auxhist4_begin_y
  RETURN
END SUBROUTINE set_auxhist4_begin_y
SUBROUTINE set_auxhist4_begin_mo ( id_id , auxhist4_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_mo
  INTEGER id_id
  model_config_rec%auxhist4_begin_mo(id_id) = auxhist4_begin_mo
  RETURN
END SUBROUTINE set_auxhist4_begin_mo
SUBROUTINE set_auxhist4_begin_d ( id_id , auxhist4_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_d
  INTEGER id_id
  model_config_rec%auxhist4_begin_d(id_id) = auxhist4_begin_d
  RETURN
END SUBROUTINE set_auxhist4_begin_d
SUBROUTINE set_auxhist4_begin_h ( id_id , auxhist4_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_h
  INTEGER id_id
  model_config_rec%auxhist4_begin_h(id_id) = auxhist4_begin_h
  RETURN
END SUBROUTINE set_auxhist4_begin_h
SUBROUTINE set_auxhist4_begin_m ( id_id , auxhist4_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_m
  INTEGER id_id
  model_config_rec%auxhist4_begin_m(id_id) = auxhist4_begin_m
  RETURN
END SUBROUTINE set_auxhist4_begin_m
SUBROUTINE set_auxhist4_begin_s ( id_id , auxhist4_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_begin_s
  INTEGER id_id
  model_config_rec%auxhist4_begin_s(id_id) = auxhist4_begin_s
  RETURN
END SUBROUTINE set_auxhist4_begin_s
SUBROUTINE set_auxhist5_begin_y ( id_id , auxhist5_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_y
  INTEGER id_id
  model_config_rec%auxhist5_begin_y(id_id) = auxhist5_begin_y
  RETURN
END SUBROUTINE set_auxhist5_begin_y
SUBROUTINE set_auxhist5_begin_mo ( id_id , auxhist5_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_mo
  INTEGER id_id
  model_config_rec%auxhist5_begin_mo(id_id) = auxhist5_begin_mo
  RETURN
END SUBROUTINE set_auxhist5_begin_mo
SUBROUTINE set_auxhist5_begin_d ( id_id , auxhist5_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_d
  INTEGER id_id
  model_config_rec%auxhist5_begin_d(id_id) = auxhist5_begin_d
  RETURN
END SUBROUTINE set_auxhist5_begin_d
SUBROUTINE set_auxhist5_begin_h ( id_id , auxhist5_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_h
  INTEGER id_id
  model_config_rec%auxhist5_begin_h(id_id) = auxhist5_begin_h
  RETURN
END SUBROUTINE set_auxhist5_begin_h
SUBROUTINE set_auxhist5_begin_m ( id_id , auxhist5_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_m
  INTEGER id_id
  model_config_rec%auxhist5_begin_m(id_id) = auxhist5_begin_m
  RETURN
END SUBROUTINE set_auxhist5_begin_m
SUBROUTINE set_auxhist5_begin_s ( id_id , auxhist5_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_begin_s
  INTEGER id_id
  model_config_rec%auxhist5_begin_s(id_id) = auxhist5_begin_s
  RETURN
END SUBROUTINE set_auxhist5_begin_s
SUBROUTINE set_auxinput1_begin_y ( id_id , auxinput1_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_y
  INTEGER id_id
  model_config_rec%auxinput1_begin_y(id_id) = auxinput1_begin_y
  RETURN
END SUBROUTINE set_auxinput1_begin_y
SUBROUTINE set_auxinput1_begin_mo ( id_id , auxinput1_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_mo
  INTEGER id_id
  model_config_rec%auxinput1_begin_mo(id_id) = auxinput1_begin_mo
  RETURN
END SUBROUTINE set_auxinput1_begin_mo
SUBROUTINE set_auxinput1_begin_d ( id_id , auxinput1_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_d
  INTEGER id_id
  model_config_rec%auxinput1_begin_d(id_id) = auxinput1_begin_d
  RETURN
END SUBROUTINE set_auxinput1_begin_d
SUBROUTINE set_auxinput1_begin_h ( id_id , auxinput1_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_h
  INTEGER id_id
  model_config_rec%auxinput1_begin_h(id_id) = auxinput1_begin_h
  RETURN
END SUBROUTINE set_auxinput1_begin_h
SUBROUTINE set_auxinput1_begin_m ( id_id , auxinput1_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_m
  INTEGER id_id
  model_config_rec%auxinput1_begin_m(id_id) = auxinput1_begin_m
  RETURN
END SUBROUTINE set_auxinput1_begin_m
SUBROUTINE set_auxinput1_begin_s ( id_id , auxinput1_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_begin_s
  INTEGER id_id
  model_config_rec%auxinput1_begin_s(id_id) = auxinput1_begin_s
  RETURN
END SUBROUTINE set_auxinput1_begin_s
SUBROUTINE set_auxinput2_begin_y ( id_id , auxinput2_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_y
  INTEGER id_id
  model_config_rec%auxinput2_begin_y(id_id) = auxinput2_begin_y
  RETURN
END SUBROUTINE set_auxinput2_begin_y
SUBROUTINE set_auxinput2_begin_mo ( id_id , auxinput2_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_mo
  INTEGER id_id
  model_config_rec%auxinput2_begin_mo(id_id) = auxinput2_begin_mo
  RETURN
END SUBROUTINE set_auxinput2_begin_mo
SUBROUTINE set_auxinput2_begin_d ( id_id , auxinput2_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_d
  INTEGER id_id
  model_config_rec%auxinput2_begin_d(id_id) = auxinput2_begin_d
  RETURN
END SUBROUTINE set_auxinput2_begin_d
SUBROUTINE set_auxinput2_begin_h ( id_id , auxinput2_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_h
  INTEGER id_id
  model_config_rec%auxinput2_begin_h(id_id) = auxinput2_begin_h
  RETURN
END SUBROUTINE set_auxinput2_begin_h
SUBROUTINE set_auxinput2_begin_m ( id_id , auxinput2_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_m
  INTEGER id_id
  model_config_rec%auxinput2_begin_m(id_id) = auxinput2_begin_m
  RETURN
END SUBROUTINE set_auxinput2_begin_m
SUBROUTINE set_auxinput2_begin_s ( id_id , auxinput2_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_begin_s
  INTEGER id_id
  model_config_rec%auxinput2_begin_s(id_id) = auxinput2_begin_s
  RETURN
END SUBROUTINE set_auxinput2_begin_s
SUBROUTINE set_auxinput3_begin_y ( id_id , auxinput3_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_y
  INTEGER id_id
  model_config_rec%auxinput3_begin_y(id_id) = auxinput3_begin_y
  RETURN
END SUBROUTINE set_auxinput3_begin_y
SUBROUTINE set_auxinput3_begin_mo ( id_id , auxinput3_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_mo
  INTEGER id_id
  model_config_rec%auxinput3_begin_mo(id_id) = auxinput3_begin_mo
  RETURN
END SUBROUTINE set_auxinput3_begin_mo
SUBROUTINE set_auxinput3_begin_d ( id_id , auxinput3_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_d
  INTEGER id_id
  model_config_rec%auxinput3_begin_d(id_id) = auxinput3_begin_d
  RETURN
END SUBROUTINE set_auxinput3_begin_d
SUBROUTINE set_auxinput3_begin_h ( id_id , auxinput3_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_h
  INTEGER id_id
  model_config_rec%auxinput3_begin_h(id_id) = auxinput3_begin_h
  RETURN
END SUBROUTINE set_auxinput3_begin_h
SUBROUTINE set_auxinput3_begin_m ( id_id , auxinput3_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_m
  INTEGER id_id
  model_config_rec%auxinput3_begin_m(id_id) = auxinput3_begin_m
  RETURN
END SUBROUTINE set_auxinput3_begin_m
SUBROUTINE set_auxinput3_begin_s ( id_id , auxinput3_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_begin_s
  INTEGER id_id
  model_config_rec%auxinput3_begin_s(id_id) = auxinput3_begin_s
  RETURN
END SUBROUTINE set_auxinput3_begin_s
SUBROUTINE set_auxinput4_begin_y ( id_id , auxinput4_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_y
  INTEGER id_id
  model_config_rec%auxinput4_begin_y(id_id) = auxinput4_begin_y
  RETURN
END SUBROUTINE set_auxinput4_begin_y
SUBROUTINE set_auxinput4_begin_mo ( id_id , auxinput4_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_mo
  INTEGER id_id
  model_config_rec%auxinput4_begin_mo(id_id) = auxinput4_begin_mo
  RETURN
END SUBROUTINE set_auxinput4_begin_mo
SUBROUTINE set_auxinput4_begin_d ( id_id , auxinput4_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_d
  INTEGER id_id
  model_config_rec%auxinput4_begin_d(id_id) = auxinput4_begin_d
  RETURN
END SUBROUTINE set_auxinput4_begin_d
SUBROUTINE set_auxinput4_begin_h ( id_id , auxinput4_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_h
  INTEGER id_id
  model_config_rec%auxinput4_begin_h(id_id) = auxinput4_begin_h
  RETURN
END SUBROUTINE set_auxinput4_begin_h
SUBROUTINE set_auxinput4_begin_m ( id_id , auxinput4_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_m
  INTEGER id_id
  model_config_rec%auxinput4_begin_m(id_id) = auxinput4_begin_m
  RETURN
END SUBROUTINE set_auxinput4_begin_m
SUBROUTINE set_auxinput4_begin_s ( id_id , auxinput4_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_begin_s
  INTEGER id_id
  model_config_rec%auxinput4_begin_s(id_id) = auxinput4_begin_s
  RETURN
END SUBROUTINE set_auxinput4_begin_s
SUBROUTINE set_auxinput5_begin_y ( id_id , auxinput5_begin_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_y
  INTEGER id_id
  model_config_rec%auxinput5_begin_y(id_id) = auxinput5_begin_y
  RETURN
END SUBROUTINE set_auxinput5_begin_y
SUBROUTINE set_auxinput5_begin_mo ( id_id , auxinput5_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_mo
  INTEGER id_id
  model_config_rec%auxinput5_begin_mo(id_id) = auxinput5_begin_mo
  RETURN
END SUBROUTINE set_auxinput5_begin_mo
SUBROUTINE set_auxinput5_begin_d ( id_id , auxinput5_begin_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_d
  INTEGER id_id
  model_config_rec%auxinput5_begin_d(id_id) = auxinput5_begin_d
  RETURN
END SUBROUTINE set_auxinput5_begin_d
SUBROUTINE set_auxinput5_begin_h ( id_id , auxinput5_begin_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_h
  INTEGER id_id
  model_config_rec%auxinput5_begin_h(id_id) = auxinput5_begin_h
  RETURN
END SUBROUTINE set_auxinput5_begin_h
SUBROUTINE set_auxinput5_begin_m ( id_id , auxinput5_begin_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_m
  INTEGER id_id
  model_config_rec%auxinput5_begin_m(id_id) = auxinput5_begin_m
  RETURN
END SUBROUTINE set_auxinput5_begin_m
SUBROUTINE set_auxinput5_begin_s ( id_id , auxinput5_begin_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_begin_s
  INTEGER id_id
  model_config_rec%auxinput5_begin_s(id_id) = auxinput5_begin_s
  RETURN
END SUBROUTINE set_auxinput5_begin_s
SUBROUTINE set_restart_begin_y ( restart_begin_y )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_y
  model_config_rec%restart_begin_y = restart_begin_y 
  RETURN
END SUBROUTINE set_restart_begin_y
SUBROUTINE set_restart_begin_mo ( restart_begin_mo )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_mo
  model_config_rec%restart_begin_mo = restart_begin_mo 
  RETURN
END SUBROUTINE set_restart_begin_mo
SUBROUTINE set_restart_begin_d ( restart_begin_d )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_d
  model_config_rec%restart_begin_d = restart_begin_d 
  RETURN
END SUBROUTINE set_restart_begin_d
SUBROUTINE set_restart_begin_h ( restart_begin_h )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_h
  model_config_rec%restart_begin_h = restart_begin_h 
  RETURN
END SUBROUTINE set_restart_begin_h
SUBROUTINE set_restart_begin_m ( restart_begin_m )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_m
  model_config_rec%restart_begin_m = restart_begin_m 
  RETURN
END SUBROUTINE set_restart_begin_m
SUBROUTINE set_restart_begin_s ( restart_begin_s )
  USE module_configure
  integer , INTENT(IN) :: restart_begin_s
  model_config_rec%restart_begin_s = restart_begin_s 
  RETURN
END SUBROUTINE set_restart_begin_s
SUBROUTINE set_history_end_y ( id_id , history_end_y )
  USE module_configure
  integer , INTENT(IN) :: history_end_y
  INTEGER id_id
  model_config_rec%history_end_y(id_id) = history_end_y
  RETURN
END SUBROUTINE set_history_end_y
SUBROUTINE set_history_end_mo ( id_id , history_end_mo )
  USE module_configure
  integer , INTENT(IN) :: history_end_mo
  INTEGER id_id
  model_config_rec%history_end_mo(id_id) = history_end_mo
  RETURN
END SUBROUTINE set_history_end_mo
SUBROUTINE set_history_end_d ( id_id , history_end_d )
  USE module_configure
  integer , INTENT(IN) :: history_end_d
  INTEGER id_id
  model_config_rec%history_end_d(id_id) = history_end_d
  RETURN
END SUBROUTINE set_history_end_d
SUBROUTINE set_history_end_h ( id_id , history_end_h )
  USE module_configure
  integer , INTENT(IN) :: history_end_h
  INTEGER id_id
  model_config_rec%history_end_h(id_id) = history_end_h
  RETURN
END SUBROUTINE set_history_end_h
SUBROUTINE set_history_end_m ( id_id , history_end_m )
  USE module_configure
  integer , INTENT(IN) :: history_end_m
  INTEGER id_id
  model_config_rec%history_end_m(id_id) = history_end_m
  RETURN
END SUBROUTINE set_history_end_m
SUBROUTINE set_history_end_s ( id_id , history_end_s )
  USE module_configure
  integer , INTENT(IN) :: history_end_s
  INTEGER id_id
  model_config_rec%history_end_s(id_id) = history_end_s
  RETURN
END SUBROUTINE set_history_end_s
SUBROUTINE set_inputout_end_y ( id_id , inputout_end_y )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_y
  INTEGER id_id
  model_config_rec%inputout_end_y(id_id) = inputout_end_y
  RETURN
END SUBROUTINE set_inputout_end_y
SUBROUTINE set_inputout_end_mo ( id_id , inputout_end_mo )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_mo
  INTEGER id_id
  model_config_rec%inputout_end_mo(id_id) = inputout_end_mo
  RETURN
END SUBROUTINE set_inputout_end_mo
SUBROUTINE set_inputout_end_d ( id_id , inputout_end_d )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_d
  INTEGER id_id
  model_config_rec%inputout_end_d(id_id) = inputout_end_d
  RETURN
END SUBROUTINE set_inputout_end_d
SUBROUTINE set_inputout_end_h ( id_id , inputout_end_h )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_h
  INTEGER id_id
  model_config_rec%inputout_end_h(id_id) = inputout_end_h
  RETURN
END SUBROUTINE set_inputout_end_h
SUBROUTINE set_inputout_end_m ( id_id , inputout_end_m )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_m
  INTEGER id_id
  model_config_rec%inputout_end_m(id_id) = inputout_end_m
  RETURN
END SUBROUTINE set_inputout_end_m
SUBROUTINE set_inputout_end_s ( id_id , inputout_end_s )
  USE module_configure
  integer , INTENT(IN) :: inputout_end_s
  INTEGER id_id
  model_config_rec%inputout_end_s(id_id) = inputout_end_s
  RETURN
END SUBROUTINE set_inputout_end_s
SUBROUTINE set_auxhist1_end_y ( id_id , auxhist1_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_y
  INTEGER id_id
  model_config_rec%auxhist1_end_y(id_id) = auxhist1_end_y
  RETURN
END SUBROUTINE set_auxhist1_end_y
SUBROUTINE set_auxhist1_end_mo ( id_id , auxhist1_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_mo
  INTEGER id_id
  model_config_rec%auxhist1_end_mo(id_id) = auxhist1_end_mo
  RETURN
END SUBROUTINE set_auxhist1_end_mo
SUBROUTINE set_auxhist1_end_d ( id_id , auxhist1_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_d
  INTEGER id_id
  model_config_rec%auxhist1_end_d(id_id) = auxhist1_end_d
  RETURN
END SUBROUTINE set_auxhist1_end_d
SUBROUTINE set_auxhist1_end_h ( id_id , auxhist1_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_h
  INTEGER id_id
  model_config_rec%auxhist1_end_h(id_id) = auxhist1_end_h
  RETURN
END SUBROUTINE set_auxhist1_end_h
SUBROUTINE set_auxhist1_end_m ( id_id , auxhist1_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_m
  INTEGER id_id
  model_config_rec%auxhist1_end_m(id_id) = auxhist1_end_m
  RETURN
END SUBROUTINE set_auxhist1_end_m
SUBROUTINE set_auxhist1_end_s ( id_id , auxhist1_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist1_end_s
  INTEGER id_id
  model_config_rec%auxhist1_end_s(id_id) = auxhist1_end_s
  RETURN
END SUBROUTINE set_auxhist1_end_s
SUBROUTINE set_auxhist2_end_y ( id_id , auxhist2_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_y
  INTEGER id_id
  model_config_rec%auxhist2_end_y(id_id) = auxhist2_end_y
  RETURN
END SUBROUTINE set_auxhist2_end_y
SUBROUTINE set_auxhist2_end_mo ( id_id , auxhist2_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_mo
  INTEGER id_id
  model_config_rec%auxhist2_end_mo(id_id) = auxhist2_end_mo
  RETURN
END SUBROUTINE set_auxhist2_end_mo
SUBROUTINE set_auxhist2_end_d ( id_id , auxhist2_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_d
  INTEGER id_id
  model_config_rec%auxhist2_end_d(id_id) = auxhist2_end_d
  RETURN
END SUBROUTINE set_auxhist2_end_d
SUBROUTINE set_auxhist2_end_h ( id_id , auxhist2_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_h
  INTEGER id_id
  model_config_rec%auxhist2_end_h(id_id) = auxhist2_end_h
  RETURN
END SUBROUTINE set_auxhist2_end_h
SUBROUTINE set_auxhist2_end_m ( id_id , auxhist2_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_m
  INTEGER id_id
  model_config_rec%auxhist2_end_m(id_id) = auxhist2_end_m
  RETURN
END SUBROUTINE set_auxhist2_end_m
SUBROUTINE set_auxhist2_end_s ( id_id , auxhist2_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist2_end_s
  INTEGER id_id
  model_config_rec%auxhist2_end_s(id_id) = auxhist2_end_s
  RETURN
END SUBROUTINE set_auxhist2_end_s
SUBROUTINE set_auxhist3_end_y ( id_id , auxhist3_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_y
  INTEGER id_id
  model_config_rec%auxhist3_end_y(id_id) = auxhist3_end_y
  RETURN
END SUBROUTINE set_auxhist3_end_y
SUBROUTINE set_auxhist3_end_mo ( id_id , auxhist3_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_mo
  INTEGER id_id
  model_config_rec%auxhist3_end_mo(id_id) = auxhist3_end_mo
  RETURN
END SUBROUTINE set_auxhist3_end_mo
SUBROUTINE set_auxhist3_end_d ( id_id , auxhist3_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_d
  INTEGER id_id
  model_config_rec%auxhist3_end_d(id_id) = auxhist3_end_d
  RETURN
END SUBROUTINE set_auxhist3_end_d
SUBROUTINE set_auxhist3_end_h ( id_id , auxhist3_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_h
  INTEGER id_id
  model_config_rec%auxhist3_end_h(id_id) = auxhist3_end_h
  RETURN
END SUBROUTINE set_auxhist3_end_h
SUBROUTINE set_auxhist3_end_m ( id_id , auxhist3_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_m
  INTEGER id_id
  model_config_rec%auxhist3_end_m(id_id) = auxhist3_end_m
  RETURN
END SUBROUTINE set_auxhist3_end_m
SUBROUTINE set_auxhist3_end_s ( id_id , auxhist3_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist3_end_s
  INTEGER id_id
  model_config_rec%auxhist3_end_s(id_id) = auxhist3_end_s
  RETURN
END SUBROUTINE set_auxhist3_end_s
SUBROUTINE set_auxhist4_end_y ( id_id , auxhist4_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_y
  INTEGER id_id
  model_config_rec%auxhist4_end_y(id_id) = auxhist4_end_y
  RETURN
END SUBROUTINE set_auxhist4_end_y
SUBROUTINE set_auxhist4_end_mo ( id_id , auxhist4_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_mo
  INTEGER id_id
  model_config_rec%auxhist4_end_mo(id_id) = auxhist4_end_mo
  RETURN
END SUBROUTINE set_auxhist4_end_mo
SUBROUTINE set_auxhist4_end_d ( id_id , auxhist4_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_d
  INTEGER id_id
  model_config_rec%auxhist4_end_d(id_id) = auxhist4_end_d
  RETURN
END SUBROUTINE set_auxhist4_end_d
SUBROUTINE set_auxhist4_end_h ( id_id , auxhist4_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_h
  INTEGER id_id
  model_config_rec%auxhist4_end_h(id_id) = auxhist4_end_h
  RETURN
END SUBROUTINE set_auxhist4_end_h
SUBROUTINE set_auxhist4_end_m ( id_id , auxhist4_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_m
  INTEGER id_id
  model_config_rec%auxhist4_end_m(id_id) = auxhist4_end_m
  RETURN
END SUBROUTINE set_auxhist4_end_m
SUBROUTINE set_auxhist4_end_s ( id_id , auxhist4_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist4_end_s
  INTEGER id_id
  model_config_rec%auxhist4_end_s(id_id) = auxhist4_end_s
  RETURN
END SUBROUTINE set_auxhist4_end_s
SUBROUTINE set_auxhist5_end_y ( id_id , auxhist5_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_y
  INTEGER id_id
  model_config_rec%auxhist5_end_y(id_id) = auxhist5_end_y
  RETURN
END SUBROUTINE set_auxhist5_end_y
SUBROUTINE set_auxhist5_end_mo ( id_id , auxhist5_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_mo
  INTEGER id_id
  model_config_rec%auxhist5_end_mo(id_id) = auxhist5_end_mo
  RETURN
END SUBROUTINE set_auxhist5_end_mo
SUBROUTINE set_auxhist5_end_d ( id_id , auxhist5_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_d
  INTEGER id_id
  model_config_rec%auxhist5_end_d(id_id) = auxhist5_end_d
  RETURN
END SUBROUTINE set_auxhist5_end_d
SUBROUTINE set_auxhist5_end_h ( id_id , auxhist5_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_h
  INTEGER id_id
  model_config_rec%auxhist5_end_h(id_id) = auxhist5_end_h
  RETURN
END SUBROUTINE set_auxhist5_end_h
SUBROUTINE set_auxhist5_end_m ( id_id , auxhist5_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_m
  INTEGER id_id
  model_config_rec%auxhist5_end_m(id_id) = auxhist5_end_m
  RETURN
END SUBROUTINE set_auxhist5_end_m
SUBROUTINE set_auxhist5_end_s ( id_id , auxhist5_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxhist5_end_s
  INTEGER id_id
  model_config_rec%auxhist5_end_s(id_id) = auxhist5_end_s
  RETURN
END SUBROUTINE set_auxhist5_end_s
SUBROUTINE set_auxinput1_end_y ( id_id , auxinput1_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_y
  INTEGER id_id
  model_config_rec%auxinput1_end_y(id_id) = auxinput1_end_y
  RETURN
END SUBROUTINE set_auxinput1_end_y
SUBROUTINE set_auxinput1_end_mo ( id_id , auxinput1_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_mo
  INTEGER id_id
  model_config_rec%auxinput1_end_mo(id_id) = auxinput1_end_mo
  RETURN
END SUBROUTINE set_auxinput1_end_mo
SUBROUTINE set_auxinput1_end_d ( id_id , auxinput1_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_d
  INTEGER id_id
  model_config_rec%auxinput1_end_d(id_id) = auxinput1_end_d
  RETURN
END SUBROUTINE set_auxinput1_end_d
SUBROUTINE set_auxinput1_end_h ( id_id , auxinput1_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_h
  INTEGER id_id
  model_config_rec%auxinput1_end_h(id_id) = auxinput1_end_h
  RETURN
END SUBROUTINE set_auxinput1_end_h
SUBROUTINE set_auxinput1_end_m ( id_id , auxinput1_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_m
  INTEGER id_id
  model_config_rec%auxinput1_end_m(id_id) = auxinput1_end_m
  RETURN
END SUBROUTINE set_auxinput1_end_m
SUBROUTINE set_auxinput1_end_s ( id_id , auxinput1_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput1_end_s
  INTEGER id_id
  model_config_rec%auxinput1_end_s(id_id) = auxinput1_end_s
  RETURN
END SUBROUTINE set_auxinput1_end_s
SUBROUTINE set_auxinput2_end_y ( id_id , auxinput2_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_y
  INTEGER id_id
  model_config_rec%auxinput2_end_y(id_id) = auxinput2_end_y
  RETURN
END SUBROUTINE set_auxinput2_end_y
SUBROUTINE set_auxinput2_end_mo ( id_id , auxinput2_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_mo
  INTEGER id_id
  model_config_rec%auxinput2_end_mo(id_id) = auxinput2_end_mo
  RETURN
END SUBROUTINE set_auxinput2_end_mo
SUBROUTINE set_auxinput2_end_d ( id_id , auxinput2_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_d
  INTEGER id_id
  model_config_rec%auxinput2_end_d(id_id) = auxinput2_end_d
  RETURN
END SUBROUTINE set_auxinput2_end_d
SUBROUTINE set_auxinput2_end_h ( id_id , auxinput2_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_h
  INTEGER id_id
  model_config_rec%auxinput2_end_h(id_id) = auxinput2_end_h
  RETURN
END SUBROUTINE set_auxinput2_end_h
SUBROUTINE set_auxinput2_end_m ( id_id , auxinput2_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_m
  INTEGER id_id
  model_config_rec%auxinput2_end_m(id_id) = auxinput2_end_m
  RETURN
END SUBROUTINE set_auxinput2_end_m
SUBROUTINE set_auxinput2_end_s ( id_id , auxinput2_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput2_end_s
  INTEGER id_id
  model_config_rec%auxinput2_end_s(id_id) = auxinput2_end_s
  RETURN
END SUBROUTINE set_auxinput2_end_s
SUBROUTINE set_auxinput3_end_y ( id_id , auxinput3_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_y
  INTEGER id_id
  model_config_rec%auxinput3_end_y(id_id) = auxinput3_end_y
  RETURN
END SUBROUTINE set_auxinput3_end_y
SUBROUTINE set_auxinput3_end_mo ( id_id , auxinput3_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_mo
  INTEGER id_id
  model_config_rec%auxinput3_end_mo(id_id) = auxinput3_end_mo
  RETURN
END SUBROUTINE set_auxinput3_end_mo
SUBROUTINE set_auxinput3_end_d ( id_id , auxinput3_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_d
  INTEGER id_id
  model_config_rec%auxinput3_end_d(id_id) = auxinput3_end_d
  RETURN
END SUBROUTINE set_auxinput3_end_d
SUBROUTINE set_auxinput3_end_h ( id_id , auxinput3_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_h
  INTEGER id_id
  model_config_rec%auxinput3_end_h(id_id) = auxinput3_end_h
  RETURN
END SUBROUTINE set_auxinput3_end_h
SUBROUTINE set_auxinput3_end_m ( id_id , auxinput3_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_m
  INTEGER id_id
  model_config_rec%auxinput3_end_m(id_id) = auxinput3_end_m
  RETURN
END SUBROUTINE set_auxinput3_end_m
SUBROUTINE set_auxinput3_end_s ( id_id , auxinput3_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput3_end_s
  INTEGER id_id
  model_config_rec%auxinput3_end_s(id_id) = auxinput3_end_s
  RETURN
END SUBROUTINE set_auxinput3_end_s
SUBROUTINE set_auxinput4_end_y ( id_id , auxinput4_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_y
  INTEGER id_id
  model_config_rec%auxinput4_end_y(id_id) = auxinput4_end_y
  RETURN
END SUBROUTINE set_auxinput4_end_y
SUBROUTINE set_auxinput4_end_mo ( id_id , auxinput4_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_mo
  INTEGER id_id
  model_config_rec%auxinput4_end_mo(id_id) = auxinput4_end_mo
  RETURN
END SUBROUTINE set_auxinput4_end_mo
SUBROUTINE set_auxinput4_end_d ( id_id , auxinput4_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_d
  INTEGER id_id
  model_config_rec%auxinput4_end_d(id_id) = auxinput4_end_d
  RETURN
END SUBROUTINE set_auxinput4_end_d
SUBROUTINE set_auxinput4_end_h ( id_id , auxinput4_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_h
  INTEGER id_id
  model_config_rec%auxinput4_end_h(id_id) = auxinput4_end_h
  RETURN
END SUBROUTINE set_auxinput4_end_h
SUBROUTINE set_auxinput4_end_m ( id_id , auxinput4_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_m
  INTEGER id_id
  model_config_rec%auxinput4_end_m(id_id) = auxinput4_end_m
  RETURN
END SUBROUTINE set_auxinput4_end_m
SUBROUTINE set_auxinput4_end_s ( id_id , auxinput4_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput4_end_s
  INTEGER id_id
  model_config_rec%auxinput4_end_s(id_id) = auxinput4_end_s
  RETURN
END SUBROUTINE set_auxinput4_end_s
SUBROUTINE set_auxinput5_end_y ( id_id , auxinput5_end_y )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_y
  INTEGER id_id
  model_config_rec%auxinput5_end_y(id_id) = auxinput5_end_y
  RETURN
END SUBROUTINE set_auxinput5_end_y
SUBROUTINE set_auxinput5_end_mo ( id_id , auxinput5_end_mo )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_mo
  INTEGER id_id
  model_config_rec%auxinput5_end_mo(id_id) = auxinput5_end_mo
  RETURN
END SUBROUTINE set_auxinput5_end_mo
SUBROUTINE set_auxinput5_end_d ( id_id , auxinput5_end_d )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_d
  INTEGER id_id
  model_config_rec%auxinput5_end_d(id_id) = auxinput5_end_d
  RETURN
END SUBROUTINE set_auxinput5_end_d
SUBROUTINE set_auxinput5_end_h ( id_id , auxinput5_end_h )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_h
  INTEGER id_id
  model_config_rec%auxinput5_end_h(id_id) = auxinput5_end_h
  RETURN
END SUBROUTINE set_auxinput5_end_h
SUBROUTINE set_auxinput5_end_m ( id_id , auxinput5_end_m )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_m
  INTEGER id_id
  model_config_rec%auxinput5_end_m(id_id) = auxinput5_end_m
  RETURN
END SUBROUTINE set_auxinput5_end_m
SUBROUTINE set_auxinput5_end_s ( id_id , auxinput5_end_s )
  USE module_configure
  integer , INTENT(IN) :: auxinput5_end_s
  INTEGER id_id
  model_config_rec%auxinput5_end_s(id_id) = auxinput5_end_s
  RETURN
END SUBROUTINE set_auxinput5_end_s
SUBROUTINE set_io_form_auxinput1 ( io_form_auxinput1 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxinput1
  model_config_rec%io_form_auxinput1 = io_form_auxinput1 
  RETURN
END SUBROUTINE set_io_form_auxinput1
SUBROUTINE set_io_form_auxinput2 ( io_form_auxinput2 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxinput2
  model_config_rec%io_form_auxinput2 = io_form_auxinput2 
  RETURN
END SUBROUTINE set_io_form_auxinput2
SUBROUTINE set_io_form_auxinput3 ( io_form_auxinput3 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxinput3
  model_config_rec%io_form_auxinput3 = io_form_auxinput3 
  RETURN
END SUBROUTINE set_io_form_auxinput3
SUBROUTINE set_io_form_auxinput4 ( io_form_auxinput4 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxinput4
  model_config_rec%io_form_auxinput4 = io_form_auxinput4 
  RETURN
END SUBROUTINE set_io_form_auxinput4
SUBROUTINE set_io_form_auxinput5 ( io_form_auxinput5 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxinput5
  model_config_rec%io_form_auxinput5 = io_form_auxinput5 
  RETURN
END SUBROUTINE set_io_form_auxinput5
SUBROUTINE set_io_form_auxhist1 ( io_form_auxhist1 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxhist1
  model_config_rec%io_form_auxhist1 = io_form_auxhist1 
  RETURN
END SUBROUTINE set_io_form_auxhist1
SUBROUTINE set_io_form_auxhist2 ( io_form_auxhist2 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxhist2
  model_config_rec%io_form_auxhist2 = io_form_auxhist2 
  RETURN
END SUBROUTINE set_io_form_auxhist2
SUBROUTINE set_io_form_auxhist3 ( io_form_auxhist3 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxhist3
  model_config_rec%io_form_auxhist3 = io_form_auxhist3 
  RETURN
END SUBROUTINE set_io_form_auxhist3
SUBROUTINE set_io_form_auxhist4 ( io_form_auxhist4 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxhist4
  model_config_rec%io_form_auxhist4 = io_form_auxhist4 
  RETURN
END SUBROUTINE set_io_form_auxhist4
SUBROUTINE set_io_form_auxhist5 ( io_form_auxhist5 )
  USE module_configure
  integer , INTENT(IN) :: io_form_auxhist5
  model_config_rec%io_form_auxhist5 = io_form_auxhist5 
  RETURN
END SUBROUTINE set_io_form_auxhist5
SUBROUTINE set_julyr ( id_id , julyr )
  USE module_configure
  integer , INTENT(IN) :: julyr
  INTEGER id_id
  model_config_rec%julyr(id_id) = julyr
  RETURN
END SUBROUTINE set_julyr
SUBROUTINE set_julday ( id_id , julday )
  USE module_configure
  integer , INTENT(IN) :: julday
  INTEGER id_id
  model_config_rec%julday(id_id) = julday
  RETURN
END SUBROUTINE set_julday
SUBROUTINE set_gmt ( id_id , gmt )
  USE module_configure
  real , INTENT(IN) :: gmt
  INTEGER id_id
  model_config_rec%gmt(id_id) = gmt
  RETURN
END SUBROUTINE set_gmt
SUBROUTINE set_input_inname ( input_inname )
  USE module_configure
  character*256 , INTENT(IN) :: input_inname
  model_config_rec%input_inname = input_inname 
  RETURN
END SUBROUTINE set_input_inname
SUBROUTINE set_input_outname ( input_outname )
  USE module_configure
  character*256 , INTENT(IN) :: input_outname
  model_config_rec%input_outname = input_outname 
  RETURN
END SUBROUTINE set_input_outname
SUBROUTINE set_bdy_inname ( bdy_inname )
  USE module_configure
  character*256 , INTENT(IN) :: bdy_inname
  model_config_rec%bdy_inname = bdy_inname 
  RETURN
END SUBROUTINE set_bdy_inname
SUBROUTINE set_bdy_outname ( bdy_outname )
  USE module_configure
  character*256 , INTENT(IN) :: bdy_outname
  model_config_rec%bdy_outname = bdy_outname 
  RETURN
END SUBROUTINE set_bdy_outname
SUBROUTINE set_rst_inname ( rst_inname )
  USE module_configure
  character*256 , INTENT(IN) :: rst_inname
  model_config_rec%rst_inname = rst_inname 
  RETURN
END SUBROUTINE set_rst_inname
SUBROUTINE set_rst_outname ( rst_outname )
  USE module_configure
  character*256 , INTENT(IN) :: rst_outname
  model_config_rec%rst_outname = rst_outname 
  RETURN
END SUBROUTINE set_rst_outname
SUBROUTINE set_write_input ( write_input )
  USE module_configure
  logical , INTENT(IN) :: write_input
  model_config_rec%write_input = write_input 
  RETURN
END SUBROUTINE set_write_input
SUBROUTINE set_write_restart_at_0h ( write_restart_at_0h )
  USE module_configure
  logical , INTENT(IN) :: write_restart_at_0h
  model_config_rec%write_restart_at_0h = write_restart_at_0h 
  RETURN
END SUBROUTINE set_write_restart_at_0h
SUBROUTINE set_time_step ( time_step )
  USE module_configure
  integer , INTENT(IN) :: time_step
  model_config_rec%time_step = time_step 
  RETURN
END SUBROUTINE set_time_step
SUBROUTINE set_time_step_fract_num ( time_step_fract_num )
  USE module_configure
  integer , INTENT(IN) :: time_step_fract_num
  model_config_rec%time_step_fract_num = time_step_fract_num 
  RETURN
END SUBROUTINE set_time_step_fract_num
SUBROUTINE set_time_step_fract_den ( time_step_fract_den )
  USE module_configure
  integer , INTENT(IN) :: time_step_fract_den
  model_config_rec%time_step_fract_den = time_step_fract_den 
  RETURN
END SUBROUTINE set_time_step_fract_den
SUBROUTINE set_max_dom ( max_dom )
  USE module_configure
  integer , INTENT(IN) :: max_dom
  model_config_rec%max_dom = max_dom 
  RETURN
END SUBROUTINE set_max_dom
SUBROUTINE set_s_we ( id_id , s_we )
  USE module_configure
  integer , INTENT(IN) :: s_we
  INTEGER id_id
  model_config_rec%s_we(id_id) = s_we
  RETURN
END SUBROUTINE set_s_we
SUBROUTINE set_e_we ( id_id , e_we )
  USE module_configure
  integer , INTENT(IN) :: e_we
  INTEGER id_id
  model_config_rec%e_we(id_id) = e_we
  RETURN
END SUBROUTINE set_e_we
SUBROUTINE set_s_sn ( id_id , s_sn )
  USE module_configure
  integer , INTENT(IN) :: s_sn
  INTEGER id_id
  model_config_rec%s_sn(id_id) = s_sn
  RETURN
END SUBROUTINE set_s_sn
SUBROUTINE set_e_sn ( id_id , e_sn )
  USE module_configure
  integer , INTENT(IN) :: e_sn
  INTEGER id_id
  model_config_rec%e_sn(id_id) = e_sn
  RETURN
END SUBROUTINE set_e_sn
SUBROUTINE set_s_vert ( id_id , s_vert )
  USE module_configure
  integer , INTENT(IN) :: s_vert
  INTEGER id_id
  model_config_rec%s_vert(id_id) = s_vert
  RETURN
END SUBROUTINE set_s_vert
SUBROUTINE set_e_vert ( id_id , e_vert )
  USE module_configure
  integer , INTENT(IN) :: e_vert
  INTEGER id_id
  model_config_rec%e_vert(id_id) = e_vert
  RETURN
END SUBROUTINE set_e_vert
SUBROUTINE set_dx ( id_id , dx )
  USE module_configure
  real , INTENT(IN) :: dx
  INTEGER id_id
  model_config_rec%dx(id_id) = dx
  RETURN
END SUBROUTINE set_dx
SUBROUTINE set_dy ( id_id , dy )
  USE module_configure
  real , INTENT(IN) :: dy
  INTEGER id_id
  model_config_rec%dy(id_id) = dy
  RETURN
END SUBROUTINE set_dy
SUBROUTINE set_grid_id ( id_id , grid_id )
  USE module_configure
  integer , INTENT(IN) :: grid_id
  INTEGER id_id
  model_config_rec%grid_id(id_id) = grid_id
  RETURN
END SUBROUTINE set_grid_id
SUBROUTINE set_parent_id ( id_id , parent_id )
  USE module_configure
  integer , INTENT(IN) :: parent_id
  INTEGER id_id
  model_config_rec%parent_id(id_id) = parent_id
  RETURN
END SUBROUTINE set_parent_id
SUBROUTINE set_level ( id_id , level )
  USE module_configure
  integer , INTENT(IN) :: level
  INTEGER id_id
  model_config_rec%level(id_id) = level
  RETURN
END SUBROUTINE set_level
SUBROUTINE set_i_parent_start ( id_id , i_parent_start )
  USE module_configure
  integer , INTENT(IN) :: i_parent_start
  INTEGER id_id
  model_config_rec%i_parent_start(id_id) = i_parent_start
  RETURN
END SUBROUTINE set_i_parent_start
SUBROUTINE set_j_parent_start ( id_id , j_parent_start )
  USE module_configure
  integer , INTENT(IN) :: j_parent_start
  INTEGER id_id
  model_config_rec%j_parent_start(id_id) = j_parent_start
  RETURN
END SUBROUTINE set_j_parent_start
SUBROUTINE set_parent_grid_ratio ( id_id , parent_grid_ratio )
  USE module_configure
  integer , INTENT(IN) :: parent_grid_ratio
  INTEGER id_id
  model_config_rec%parent_grid_ratio(id_id) = parent_grid_ratio
  RETURN
END SUBROUTINE set_parent_grid_ratio
SUBROUTINE set_parent_time_step_ratio ( id_id , parent_time_step_ratio )
  USE module_configure
  integer , INTENT(IN) :: parent_time_step_ratio
  INTEGER id_id
  model_config_rec%parent_time_step_ratio(id_id) = parent_time_step_ratio
  RETURN
END SUBROUTINE set_parent_time_step_ratio
SUBROUTINE set_feedback ( feedback )
  USE module_configure
  integer , INTENT(IN) :: feedback
  model_config_rec%feedback = feedback 
  RETURN
END SUBROUTINE set_feedback
SUBROUTINE set_smooth_option ( smooth_option )
  USE module_configure
  integer , INTENT(IN) :: smooth_option
  model_config_rec%smooth_option = smooth_option 
  RETURN
END SUBROUTINE set_smooth_option
SUBROUTINE set_ztop ( id_id , ztop )
  USE module_configure
  real , INTENT(IN) :: ztop
  INTEGER id_id
  model_config_rec%ztop(id_id) = ztop
  RETURN
END SUBROUTINE set_ztop
SUBROUTINE set_moad_grid_ratio ( id_id , moad_grid_ratio )
  USE module_configure
  integer , INTENT(IN) :: moad_grid_ratio
  INTEGER id_id
  model_config_rec%moad_grid_ratio(id_id) = moad_grid_ratio
  RETURN
END SUBROUTINE set_moad_grid_ratio
SUBROUTINE set_moad_time_step_ratio ( id_id , moad_time_step_ratio )
  USE module_configure
  integer , INTENT(IN) :: moad_time_step_ratio
  INTEGER id_id
  model_config_rec%moad_time_step_ratio(id_id) = moad_time_step_ratio
  RETURN
END SUBROUTINE set_moad_time_step_ratio
SUBROUTINE set_shw ( id_id , shw )
  USE module_configure
  integer , INTENT(IN) :: shw
  INTEGER id_id
  model_config_rec%shw(id_id) = shw
  RETURN
END SUBROUTINE set_shw
SUBROUTINE set_tile_sz_x ( tile_sz_x )
  USE module_configure
  integer , INTENT(IN) :: tile_sz_x
  model_config_rec%tile_sz_x = tile_sz_x 
  RETURN
END SUBROUTINE set_tile_sz_x
SUBROUTINE set_tile_sz_y ( tile_sz_y )
  USE module_configure
  integer , INTENT(IN) :: tile_sz_y
  model_config_rec%tile_sz_y = tile_sz_y 
  RETURN
END SUBROUTINE set_tile_sz_y
SUBROUTINE set_numtiles ( numtiles )
  USE module_configure
  integer , INTENT(IN) :: numtiles
  model_config_rec%numtiles = numtiles 
  RETURN
END SUBROUTINE set_numtiles
SUBROUTINE set_nproc_x ( nproc_x )
  USE module_configure
  integer , INTENT(IN) :: nproc_x
  model_config_rec%nproc_x = nproc_x 
  RETURN
END SUBROUTINE set_nproc_x
SUBROUTINE set_nproc_y ( nproc_y )
  USE module_configure
  integer , INTENT(IN) :: nproc_y
  model_config_rec%nproc_y = nproc_y 
  RETURN
END SUBROUTINE set_nproc_y
SUBROUTINE set_irand ( irand )
  USE module_configure
  integer , INTENT(IN) :: irand
  model_config_rec%irand = irand 
  RETURN
END SUBROUTINE set_irand
SUBROUTINE set_dt ( id_id , dt )
  USE module_configure
  real , INTENT(IN) :: dt
  INTEGER id_id
  model_config_rec%dt(id_id) = dt
  RETURN
END SUBROUTINE set_dt
SUBROUTINE set_mp_physics ( id_id , mp_physics )
  USE module_configure
  integer , INTENT(IN) :: mp_physics
  INTEGER id_id
  model_config_rec%mp_physics(id_id) = mp_physics
  RETURN
END SUBROUTINE set_mp_physics
SUBROUTINE set_ra_lw_physics ( id_id , ra_lw_physics )
  USE module_configure
  integer , INTENT(IN) :: ra_lw_physics
  INTEGER id_id
  model_config_rec%ra_lw_physics(id_id) = ra_lw_physics
  RETURN
END SUBROUTINE set_ra_lw_physics
SUBROUTINE set_ra_sw_physics ( id_id , ra_sw_physics )
  USE module_configure
  integer , INTENT(IN) :: ra_sw_physics
  INTEGER id_id
  model_config_rec%ra_sw_physics(id_id) = ra_sw_physics
  RETURN
END SUBROUTINE set_ra_sw_physics
SUBROUTINE set_radt ( id_id , radt )
  USE module_configure
  real , INTENT(IN) :: radt
  INTEGER id_id
  model_config_rec%radt(id_id) = radt
  RETURN
END SUBROUTINE set_radt
SUBROUTINE set_sf_sfclay_physics ( id_id , sf_sfclay_physics )
  USE module_configure
  integer , INTENT(IN) :: sf_sfclay_physics
  INTEGER id_id
  model_config_rec%sf_sfclay_physics(id_id) = sf_sfclay_physics
  RETURN
END SUBROUTINE set_sf_sfclay_physics
SUBROUTINE set_sf_surface_physics ( id_id , sf_surface_physics )
  USE module_configure
  integer , INTENT(IN) :: sf_surface_physics
  INTEGER id_id
  model_config_rec%sf_surface_physics(id_id) = sf_surface_physics
  RETURN
END SUBROUTINE set_sf_surface_physics
SUBROUTINE set_bl_pbl_physics ( id_id , bl_pbl_physics )
  USE module_configure
  integer , INTENT(IN) :: bl_pbl_physics
  INTEGER id_id
  model_config_rec%bl_pbl_physics(id_id) = bl_pbl_physics
  RETURN
END SUBROUTINE set_bl_pbl_physics
SUBROUTINE set_bldt ( id_id , bldt )
  USE module_configure
  real , INTENT(IN) :: bldt
  INTEGER id_id
  model_config_rec%bldt(id_id) = bldt
  RETURN
END SUBROUTINE set_bldt
SUBROUTINE set_cu_physics ( id_id , cu_physics )
  USE module_configure
  integer , INTENT(IN) :: cu_physics
  INTEGER id_id
  model_config_rec%cu_physics(id_id) = cu_physics
  RETURN
END SUBROUTINE set_cu_physics
SUBROUTINE set_cudt ( id_id , cudt )
  USE module_configure
  real , INTENT(IN) :: cudt
  INTEGER id_id
  model_config_rec%cudt(id_id) = cudt
  RETURN
END SUBROUTINE set_cudt
SUBROUTINE set_gsmdt ( id_id , gsmdt )
  USE module_configure
  real , INTENT(IN) :: gsmdt
  INTEGER id_id
  model_config_rec%gsmdt(id_id) = gsmdt
  RETURN
END SUBROUTINE set_gsmdt
SUBROUTINE set_isfflx ( isfflx )
  USE module_configure
  integer , INTENT(IN) :: isfflx
  model_config_rec%isfflx = isfflx 
  RETURN
END SUBROUTINE set_isfflx
SUBROUTINE set_ifsnow ( ifsnow )
  USE module_configure
  integer , INTENT(IN) :: ifsnow
  model_config_rec%ifsnow = ifsnow 
  RETURN
END SUBROUTINE set_ifsnow
SUBROUTINE set_icloud ( icloud )
  USE module_configure
  integer , INTENT(IN) :: icloud
  model_config_rec%icloud = icloud 
  RETURN
END SUBROUTINE set_icloud
SUBROUTINE set_surface_input_source ( surface_input_source )
  USE module_configure
  integer , INTENT(IN) :: surface_input_source
  model_config_rec%surface_input_source = surface_input_source 
  RETURN
END SUBROUTINE set_surface_input_source
SUBROUTINE set_num_soil_layers ( num_soil_layers )
  USE module_configure
  integer , INTENT(IN) :: num_soil_layers
  model_config_rec%num_soil_layers = num_soil_layers 
  RETURN
END SUBROUTINE set_num_soil_layers
SUBROUTINE set_maxiens ( maxiens )
  USE module_configure
  integer , INTENT(IN) :: maxiens
  model_config_rec%maxiens = maxiens 
  RETURN
END SUBROUTINE set_maxiens
SUBROUTINE set_maxens ( maxens )
  USE module_configure
  integer , INTENT(IN) :: maxens
  model_config_rec%maxens = maxens 
  RETURN
END SUBROUTINE set_maxens
SUBROUTINE set_maxens2 ( maxens2 )
  USE module_configure
  integer , INTENT(IN) :: maxens2
  model_config_rec%maxens2 = maxens2 
  RETURN
END SUBROUTINE set_maxens2
SUBROUTINE set_maxens3 ( maxens3 )
  USE module_configure
  integer , INTENT(IN) :: maxens3
  model_config_rec%maxens3 = maxens3 
  RETURN
END SUBROUTINE set_maxens3
SUBROUTINE set_ensdim ( ensdim )
  USE module_configure
  integer , INTENT(IN) :: ensdim
  model_config_rec%ensdim = ensdim 
  RETURN
END SUBROUTINE set_ensdim
SUBROUTINE set_chem_opt ( id_id , chem_opt )
  USE module_configure
  integer , INTENT(IN) :: chem_opt
  INTEGER id_id
  model_config_rec%chem_opt(id_id) = chem_opt
  RETURN
END SUBROUTINE set_chem_opt
SUBROUTINE set_num_land_cat ( num_land_cat )
  USE module_configure
  integer , INTENT(IN) :: num_land_cat
  model_config_rec%num_land_cat = num_land_cat 
  RETURN
END SUBROUTINE set_num_land_cat
SUBROUTINE set_num_soil_cat ( num_soil_cat )
  USE module_configure
  integer , INTENT(IN) :: num_soil_cat
  model_config_rec%num_soil_cat = num_soil_cat 
  RETURN
END SUBROUTINE set_num_soil_cat
SUBROUTINE set_dyn_opt ( dyn_opt )
  USE module_configure
  integer , INTENT(IN) :: dyn_opt
  model_config_rec%dyn_opt = dyn_opt 
  RETURN
END SUBROUTINE set_dyn_opt
SUBROUTINE set_rk_ord ( rk_ord )
  USE module_configure
  integer , INTENT(IN) :: rk_ord
  model_config_rec%rk_ord = rk_ord 
  RETURN
END SUBROUTINE set_rk_ord
SUBROUTINE set_w_damping ( w_damping )
  USE module_configure
  integer , INTENT(IN) :: w_damping
  model_config_rec%w_damping = w_damping 
  RETURN
END SUBROUTINE set_w_damping
SUBROUTINE set_diff_opt ( diff_opt )
  USE module_configure
  integer , INTENT(IN) :: diff_opt
  model_config_rec%diff_opt = diff_opt 
  RETURN
END SUBROUTINE set_diff_opt
SUBROUTINE set_km_opt ( km_opt )
  USE module_configure
  integer , INTENT(IN) :: km_opt
  model_config_rec%km_opt = km_opt 
  RETURN
END SUBROUTINE set_km_opt
SUBROUTINE set_damp_opt ( damp_opt )
  USE module_configure
  integer , INTENT(IN) :: damp_opt
  model_config_rec%damp_opt = damp_opt 
  RETURN
END SUBROUTINE set_damp_opt
SUBROUTINE set_zdamp ( id_id , zdamp )
  USE module_configure
  real , INTENT(IN) :: zdamp
  INTEGER id_id
  model_config_rec%zdamp(id_id) = zdamp
  RETURN
END SUBROUTINE set_zdamp
SUBROUTINE set_dampcoef ( id_id , dampcoef )
  USE module_configure
  real , INTENT(IN) :: dampcoef
  INTEGER id_id
  model_config_rec%dampcoef(id_id) = dampcoef
  RETURN
END SUBROUTINE set_dampcoef
SUBROUTINE set_khdif ( id_id , khdif )
  USE module_configure
  real , INTENT(IN) :: khdif
  INTEGER id_id
  model_config_rec%khdif(id_id) = khdif
  RETURN
END SUBROUTINE set_khdif
SUBROUTINE set_kvdif ( id_id , kvdif )
  USE module_configure
  real , INTENT(IN) :: kvdif
  INTEGER id_id
  model_config_rec%kvdif(id_id) = kvdif
  RETURN
END SUBROUTINE set_kvdif
SUBROUTINE set_smdiv ( id_id , smdiv )
  USE module_configure
  real , INTENT(IN) :: smdiv
  INTEGER id_id
  model_config_rec%smdiv(id_id) = smdiv
  RETURN
END SUBROUTINE set_smdiv
SUBROUTINE set_emdiv ( id_id , emdiv )
  USE module_configure
  real , INTENT(IN) :: emdiv
  INTEGER id_id
  model_config_rec%emdiv(id_id) = emdiv
  RETURN
END SUBROUTINE set_emdiv
SUBROUTINE set_epssm ( id_id , epssm )
  USE module_configure
  real , INTENT(IN) :: epssm
  INTEGER id_id
  model_config_rec%epssm(id_id) = epssm
  RETURN
END SUBROUTINE set_epssm
SUBROUTINE set_non_hydrostatic ( id_id , non_hydrostatic )
  USE module_configure
  logical , INTENT(IN) :: non_hydrostatic
  INTEGER id_id
  model_config_rec%non_hydrostatic(id_id) = non_hydrostatic
  RETURN
END SUBROUTINE set_non_hydrostatic
SUBROUTINE set_time_step_sound ( id_id , time_step_sound )
  USE module_configure
  integer , INTENT(IN) :: time_step_sound
  INTEGER id_id
  model_config_rec%time_step_sound(id_id) = time_step_sound
  RETURN
END SUBROUTINE set_time_step_sound
SUBROUTINE set_h_mom_adv_order ( id_id , h_mom_adv_order )
  USE module_configure
  integer , INTENT(IN) :: h_mom_adv_order
  INTEGER id_id
  model_config_rec%h_mom_adv_order(id_id) = h_mom_adv_order
  RETURN
END SUBROUTINE set_h_mom_adv_order
SUBROUTINE set_v_mom_adv_order ( id_id , v_mom_adv_order )
  USE module_configure
  integer , INTENT(IN) :: v_mom_adv_order
  INTEGER id_id
  model_config_rec%v_mom_adv_order(id_id) = v_mom_adv_order
  RETURN
END SUBROUTINE set_v_mom_adv_order
SUBROUTINE set_h_sca_adv_order ( id_id , h_sca_adv_order )
  USE module_configure
  integer , INTENT(IN) :: h_sca_adv_order
  INTEGER id_id
  model_config_rec%h_sca_adv_order(id_id) = h_sca_adv_order
  RETURN
END SUBROUTINE set_h_sca_adv_order
SUBROUTINE set_v_sca_adv_order ( id_id , v_sca_adv_order )
  USE module_configure
  integer , INTENT(IN) :: v_sca_adv_order
  INTEGER id_id
  model_config_rec%v_sca_adv_order(id_id) = v_sca_adv_order
  RETURN
END SUBROUTINE set_v_sca_adv_order
SUBROUTINE set_top_radiation ( id_id , top_radiation )
  USE module_configure
  logical , INTENT(IN) :: top_radiation
  INTEGER id_id
  model_config_rec%top_radiation(id_id) = top_radiation
  RETURN
END SUBROUTINE set_top_radiation
SUBROUTINE set_mix_cr_len ( id_id , mix_cr_len )
  USE module_configure
  real , INTENT(IN) :: mix_cr_len
  INTEGER id_id
  model_config_rec%mix_cr_len(id_id) = mix_cr_len
  RETURN
END SUBROUTINE set_mix_cr_len
SUBROUTINE set_tke_upper_bound ( id_id , tke_upper_bound )
  USE module_configure
  real , INTENT(IN) :: tke_upper_bound
  INTEGER id_id
  model_config_rec%tke_upper_bound(id_id) = tke_upper_bound
  RETURN
END SUBROUTINE set_tke_upper_bound
SUBROUTINE set_kh_tke_upper_bound ( id_id , kh_tke_upper_bound )
  USE module_configure
  real , INTENT(IN) :: kh_tke_upper_bound
  INTEGER id_id
  model_config_rec%kh_tke_upper_bound(id_id) = kh_tke_upper_bound
  RETURN
END SUBROUTINE set_kh_tke_upper_bound
SUBROUTINE set_kv_tke_upper_bound ( id_id , kv_tke_upper_bound )
  USE module_configure
  real , INTENT(IN) :: kv_tke_upper_bound
  INTEGER id_id
  model_config_rec%kv_tke_upper_bound(id_id) = kv_tke_upper_bound
  RETURN
END SUBROUTINE set_kv_tke_upper_bound
SUBROUTINE set_tke_drag_coefficient ( id_id , tke_drag_coefficient )
  USE module_configure
  real , INTENT(IN) :: tke_drag_coefficient
  INTEGER id_id
  model_config_rec%tke_drag_coefficient(id_id) = tke_drag_coefficient
  RETURN
END SUBROUTINE set_tke_drag_coefficient
SUBROUTINE set_tke_heat_flux ( id_id , tke_heat_flux )
  USE module_configure
  real , INTENT(IN) :: tke_heat_flux
  INTEGER id_id
  model_config_rec%tke_heat_flux(id_id) = tke_heat_flux
  RETURN
END SUBROUTINE set_tke_heat_flux
SUBROUTINE set_pert_coriolis ( id_id , pert_coriolis )
  USE module_configure
  logical , INTENT(IN) :: pert_coriolis
  INTEGER id_id
  model_config_rec%pert_coriolis(id_id) = pert_coriolis
  RETURN
END SUBROUTINE set_pert_coriolis
SUBROUTINE set_spec_bdy_width ( spec_bdy_width )
  USE module_configure
  integer , INTENT(IN) :: spec_bdy_width
  model_config_rec%spec_bdy_width = spec_bdy_width 
  RETURN
END SUBROUTINE set_spec_bdy_width
SUBROUTINE set_spec_zone ( spec_zone )
  USE module_configure
  integer , INTENT(IN) :: spec_zone
  model_config_rec%spec_zone = spec_zone 
  RETURN
END SUBROUTINE set_spec_zone
SUBROUTINE set_relax_zone ( relax_zone )
  USE module_configure
  integer , INTENT(IN) :: relax_zone
  model_config_rec%relax_zone = relax_zone 
  RETURN
END SUBROUTINE set_relax_zone
SUBROUTINE set_specified ( id_id , specified )
  USE module_configure
  logical , INTENT(IN) :: specified
  INTEGER id_id
  model_config_rec%specified(id_id) = specified
  RETURN
END SUBROUTINE set_specified
SUBROUTINE set_periodic_x ( id_id , periodic_x )
  USE module_configure
  logical , INTENT(IN) :: periodic_x
  INTEGER id_id
  model_config_rec%periodic_x(id_id) = periodic_x
  RETURN
END SUBROUTINE set_periodic_x
SUBROUTINE set_symmetric_xs ( id_id , symmetric_xs )
  USE module_configure
  logical , INTENT(IN) :: symmetric_xs
  INTEGER id_id
  model_config_rec%symmetric_xs(id_id) = symmetric_xs
  RETURN
END SUBROUTINE set_symmetric_xs
SUBROUTINE set_symmetric_xe ( id_id , symmetric_xe )
  USE module_configure
  logical , INTENT(IN) :: symmetric_xe
  INTEGER id_id
  model_config_rec%symmetric_xe(id_id) = symmetric_xe
  RETURN
END SUBROUTINE set_symmetric_xe
SUBROUTINE set_open_xs ( id_id , open_xs )
  USE module_configure
  logical , INTENT(IN) :: open_xs
  INTEGER id_id
  model_config_rec%open_xs(id_id) = open_xs
  RETURN
END SUBROUTINE set_open_xs
SUBROUTINE set_open_xe ( id_id , open_xe )
  USE module_configure
  logical , INTENT(IN) :: open_xe
  INTEGER id_id
  model_config_rec%open_xe(id_id) = open_xe
  RETURN
END SUBROUTINE set_open_xe
SUBROUTINE set_periodic_y ( id_id , periodic_y )
  USE module_configure
  logical , INTENT(IN) :: periodic_y
  INTEGER id_id
  model_config_rec%periodic_y(id_id) = periodic_y
  RETURN
END SUBROUTINE set_periodic_y
SUBROUTINE set_symmetric_ys ( id_id , symmetric_ys )
  USE module_configure
  logical , INTENT(IN) :: symmetric_ys
  INTEGER id_id
  model_config_rec%symmetric_ys(id_id) = symmetric_ys
  RETURN
END SUBROUTINE set_symmetric_ys
SUBROUTINE set_symmetric_ye ( id_id , symmetric_ye )
  USE module_configure
  logical , INTENT(IN) :: symmetric_ye
  INTEGER id_id
  model_config_rec%symmetric_ye(id_id) = symmetric_ye
  RETURN
END SUBROUTINE set_symmetric_ye
SUBROUTINE set_open_ys ( id_id , open_ys )
  USE module_configure
  logical , INTENT(IN) :: open_ys
  INTEGER id_id
  model_config_rec%open_ys(id_id) = open_ys
  RETURN
END SUBROUTINE set_open_ys
SUBROUTINE set_open_ye ( id_id , open_ye )
  USE module_configure
  logical , INTENT(IN) :: open_ye
  INTEGER id_id
  model_config_rec%open_ye(id_id) = open_ye
  RETURN
END SUBROUTINE set_open_ye
SUBROUTINE set_nested ( id_id , nested )
  USE module_configure
  logical , INTENT(IN) :: nested
  INTEGER id_id
  model_config_rec%nested(id_id) = nested
  RETURN
END SUBROUTINE set_nested
SUBROUTINE set_real_data_init_type ( real_data_init_type )
  USE module_configure
  integer , INTENT(IN) :: real_data_init_type
  model_config_rec%real_data_init_type = real_data_init_type 
  RETURN
END SUBROUTINE set_real_data_init_type
SUBROUTINE set_cen_lat ( id_id , cen_lat )
  USE module_configure
  real , INTENT(IN) :: cen_lat
  INTEGER id_id
  model_config_rec%cen_lat(id_id) = cen_lat
  RETURN
END SUBROUTINE set_cen_lat
SUBROUTINE set_cen_lon ( id_id , cen_lon )
  USE module_configure
  real , INTENT(IN) :: cen_lon
  INTEGER id_id
  model_config_rec%cen_lon(id_id) = cen_lon
  RETURN
END SUBROUTINE set_cen_lon
SUBROUTINE set_truelat1 ( id_id , truelat1 )
  USE module_configure
  real , INTENT(IN) :: truelat1
  INTEGER id_id
  model_config_rec%truelat1(id_id) = truelat1
  RETURN
END SUBROUTINE set_truelat1
SUBROUTINE set_truelat2 ( id_id , truelat2 )
  USE module_configure
  real , INTENT(IN) :: truelat2
  INTEGER id_id
  model_config_rec%truelat2(id_id) = truelat2
  RETURN
END SUBROUTINE set_truelat2
SUBROUTINE set_moad_cen_lat ( id_id , moad_cen_lat )
  USE module_configure
  real , INTENT(IN) :: moad_cen_lat
  INTEGER id_id
  model_config_rec%moad_cen_lat(id_id) = moad_cen_lat
  RETURN
END SUBROUTINE set_moad_cen_lat
SUBROUTINE set_stand_lon ( id_id , stand_lon )
  USE module_configure
  real , INTENT(IN) :: stand_lon
  INTEGER id_id
  model_config_rec%stand_lon(id_id) = stand_lon
  RETURN
END SUBROUTINE set_stand_lon
SUBROUTINE set_bdyfrq ( id_id , bdyfrq )
  USE module_configure
  real , INTENT(IN) :: bdyfrq
  INTEGER id_id
  model_config_rec%bdyfrq(id_id) = bdyfrq
  RETURN
END SUBROUTINE set_bdyfrq
SUBROUTINE set_iswater ( id_id , iswater )
  USE module_configure
  integer , INTENT(IN) :: iswater
  INTEGER id_id
  model_config_rec%iswater(id_id) = iswater
  RETURN
END SUBROUTINE set_iswater
SUBROUTINE set_isice ( id_id , isice )
  USE module_configure
  integer , INTENT(IN) :: isice
  INTEGER id_id
  model_config_rec%isice(id_id) = isice
  RETURN
END SUBROUTINE set_isice
SUBROUTINE set_isurban ( id_id , isurban )
  USE module_configure
  integer , INTENT(IN) :: isurban
  INTEGER id_id
  model_config_rec%isurban(id_id) = isurban
  RETURN
END SUBROUTINE set_isurban
SUBROUTINE set_isoilwater ( id_id , isoilwater )
  USE module_configure
  integer , INTENT(IN) :: isoilwater
  INTEGER id_id
  model_config_rec%isoilwater(id_id) = isoilwater
  RETURN
END SUBROUTINE set_isoilwater
SUBROUTINE set_map_proj ( id_id , map_proj )
  USE module_configure
  integer , INTENT(IN) :: map_proj
  INTEGER id_id
  model_config_rec%map_proj(id_id) = map_proj
  RETURN
END SUBROUTINE set_map_proj
!ENDOFREGISTRYGENERATEDINCLUDE

!STARTOFREGISTRYGENERATEDINCLUDE 'frame/module_state_description.F'
!
! WARNING This file is generated automatically by use_registry
! using the data base in the file named Registry.
! Do not edit.  Your changes to this file will be lost.
!
MODULE module_state_description
  ! package constants
  INTEGER, PARAMETER :: dyn_em = 2
  INTEGER, PARAMETER :: passiveqv = 0
  INTEGER, PARAMETER :: kesslerscheme = 1
  INTEGER, PARAMETER :: linscheme = 2
  INTEGER, PARAMETER :: wsm3scheme = 3
  INTEGER, PARAMETER :: wsm5scheme = 4
  INTEGER, PARAMETER :: etampnew = 5
  INTEGER, PARAMETER :: wsm6scheme = 6
  INTEGER, PARAMETER :: ncepcloud3 = 98
  INTEGER, PARAMETER :: ncepcloud5 = 99
  INTEGER, PARAMETER :: rrtmscheme = 1
  INTEGER, PARAMETER :: gfdllwscheme = 99
  INTEGER, PARAMETER :: swradscheme = 1
  INTEGER, PARAMETER :: gsfcswscheme = 2
  INTEGER, PARAMETER :: gfdlswscheme = 99
  INTEGER, PARAMETER :: sfclayscheme = 1
  INTEGER, PARAMETER :: myjsfcscheme = 2
  INTEGER, PARAMETER :: slabscheme = 1
  INTEGER, PARAMETER :: lsmscheme = 2
  INTEGER, PARAMETER :: ruclsmscheme = 3
  INTEGER, PARAMETER :: ysuscheme = 1
  INTEGER, PARAMETER :: myjpblscheme = 2
  INTEGER, PARAMETER :: mrfscheme = 99
  INTEGER, PARAMETER :: kfetascheme = 1
  INTEGER, PARAMETER :: bmjscheme = 2
  INTEGER, PARAMETER :: gdscheme = 3
  INTEGER, PARAMETER :: kfscheme = 99
  INTEGER, PARAMETER :: io_intio = 1
  INTEGER, PARAMETER :: io_netcdf = 2
  INTEGER, PARAMETER :: io_hdf = 3
  INTEGER, PARAMETER :: io_phdf5 = 4
  INTEGER, PARAMETER :: io_yyy = 5
  INTEGER, PARAMETER :: io_zzz = 6
  INTEGER, PARAMETER :: io_mcel = 7
  ! 4D array constants
  INTEGER, PARAMETER :: PARAM_qv = 1
  INTEGER            ::     P_qv = 1
  INTEGER, PARAMETER :: PARAM_qc = 2
  INTEGER            ::     P_qc = 1
  INTEGER, PARAMETER :: PARAM_qr = 3
  INTEGER            ::     P_qr = 1
  INTEGER, PARAMETER :: PARAM_qi = 4
  INTEGER            ::     P_qi = 1
  INTEGER, PARAMETER :: PARAM_qs = 5
  INTEGER            ::     P_qs = 1
  INTEGER, PARAMETER :: PARAM_qg = 6
  INTEGER            ::     P_qg = 1
  INTEGER, PARAMETER :: PARAM_NUM_moist = 7
  INTEGER            ::       NUM_moist = 1
  INTEGER, PARAMETER :: PARAM_NUM_chem = 1
  INTEGER            ::       NUM_chem = 1
  INTEGER, PARAMETER :: P_XSB                          = 1
  INTEGER, PARAMETER :: P_XEB                          = 2
  INTEGER, PARAMETER :: P_YSB                          = 3
  INTEGER, PARAMETER :: P_YEB                          = 4
  INTEGER, PARAMETER :: NUM_TIME_LEVELS = 2
  INTEGER , PARAMETER :: PARAM_FIRST_SCALAR = 2
CONTAINS
SUBROUTINE init_module_state_description
END SUBROUTINE init_module_state_description
END MODULE module_state_description
!ENDOFREGISTRYGENERATEDINCLUDE

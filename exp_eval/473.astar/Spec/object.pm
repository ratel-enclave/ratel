$benchnum  = '473';
$benchname = 'astar';
$exename   = 'astar';
$benchlang = 'CXX';
@base_exe  = ($exename);

$reltol = 0.001;

@sources=qw(CreateWay_.cpp Places_.cpp RegBounds_.cpp RegMng_.cpp Way2_.cpp
            WayInit_.cpp Library.cpp Random.cpp Region_.cpp RegWay_.cpp
            Way_.cpp);

$need_math = 'yes';

use Config;

if ("$Config{'byteorder'}" =~ /1234/) {
   $bench_flags = '-DSPEC_CPU_LITTLE_ENDIAN';
} elsif ("$Config{'byteorder'}" =~ /4321/) {
   $bench_flags = '-DSPEC_CPU_BIG_ENDIAN';
}

sub invoke {
    my ($me) = @_;
    my @rc;
    my $name;
    my $input;

    my $exe = $me->exe_file;

    for ($me->input_files_base) {
        if (($name) = m/(.*).cfg/) {
          $input = $name;
          push (@rc, { 'command' => $exe,
                     'args'    => ["$input.cfg"],
                     'output'  => "$input.out",
                     'error'   => "$input.err",
                    });
          }
    }
    return @rc;
}

1;

$benchnum  = '462';
$benchname = 'libquantum';
$exename   = 'libquantum';
$benchlang = 'C';
@base_exe  = ($exename);

@sources=qw(classic.c complex.c decoherence.c expn.c gates.c  
            matrix.c measure.c oaddn.c objcode.c omuln.c qec.c qft.c 
            qureg.c shor.c version.c specrand.c);

$need_math = 'yes';

$obiwan = 1;

sub invoke {
    my ($me) = @_;
    my (@rc);
    my $name;

    my @temp = main::read_file('control');
    my $exe = $me->exe_file;

    for (@temp) {
	my ($name, @params) = split(/\s+/);
	push (@rc, { 'command' => $exe, 
	             'args'    => \@params,
		     'output'  => "$name.out",
		     'error'   => "$name.err",
		    });
    }
    return @rc;
}

1;

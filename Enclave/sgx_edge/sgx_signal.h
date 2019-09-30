#ifndef _SGX_EDGE_SIGNAL_H__
#define _SGX_EDGE_SIGNAL_H__

long ocall_sigaltstack(long ss_ptr, long oldss_ptr);

long ocall_rt_sigprocmask(long how, long set_ptr, long oldset_ptr, long _r10);

/* simulate sigreturn */
void ocall_sigreturn_simulation(long prt);

#endif  //_SGX_EDGE_SIGNAL_H__
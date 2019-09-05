
#include <stddef.h>
#include <dr_api.h>
static void event_exit(void);
DR_EXPORT void dr_client_main	(	client_id_t 	id,int 	argc,const char * 	argv[] )
{
	dr_printf("init\n");
    dr_register_exit_event(event_exit);
}	

static void event_exit(void) {
    dr_printf("exit\n");
}

#include <u.h>
#include <libc.h>

void
main(int, char**)
{
	const char msg[] = "UwU\r\n";
	for(;;){
		if(write(0, msg, sizeof(msg)-1) != sizeof(msg)-1)
			exits(nil);
		sleep(5 * 1000);
	}
}

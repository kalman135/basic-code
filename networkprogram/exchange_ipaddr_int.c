#include <stdio.h>  //snpringtf
#include <stdint.h>  //uint8_t
#include <stdlib.h>  //malloc
#include <string.h>  //memset
int main()
{
	uint8_t ip1= 172;
	uint8_t ip2 = 16;
	uint8_t ip3 = 3;
	uint8_t ip4 = 46;
	unsigned int ip = 0;
	char *dst = (char *)malloc(24);
	int para = 2886730542;
	int dst_size = 24;
	
	memset(dst, 0, dst_size);
	snprintf(dst, dst_size, "%d.%d.%d.%d\n",
		(para >> 24) & 0xff, (para >> 16) & 0xff,
		(para >> 8) & 0xff, para & 0xff);
	printf("ip: %s",dst);
	
	ip = (ip1<<24) + (ip2<<16) + (ip3<<8) + (ip4);
	printf("ip: %u",ip);
}

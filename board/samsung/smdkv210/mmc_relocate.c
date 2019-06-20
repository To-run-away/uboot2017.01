
typedef int _bool;

typedef _bool (*copy_sd_to_mem)(unsigned int,unsigned int, unsigned short, unsigned int*,_bool);



void mmc_relocate(void)
{
	copy_sd_to_mem uboot_copy = (copy_sd_to_mem)(*(unsigned int*)(0xd0037f98));

	unsigned int ch = *(volatile unsigned int*)(0xd0037488);

	if(ch == 0xeb000000)
	{

	}
	else if(ch == 0xeb200000)
	{

		uboot_copy(2, 49, 800,(unsigned int*) 0x34800000, 0);
	}
}




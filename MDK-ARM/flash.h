#ifndef _FLASH_H_
#define _FLASH_H_

uint32_t GetPage(uint32_t Addr);
void Flash_Read_Data (uint32_t StartPageAddress, uint32_t *RxBuf, uint16_t numberofwords);
uint32_t Flash_Write_Data (uint32_t StartPageAddress, uint32_t *Data, uint16_t numberofwords);
void Flash_Write_NUM (uint32_t StartSectorAddress, float Num);
#endif 
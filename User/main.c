
#include "stm32f10x.h"

int main(void)
{
	
	//1. 初始化PA8
	GPIO_InitTypeDef GPIO_structure;
	//启动时钟APB2
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA , ENABLE);
	//初始化GPIO_InitTypeDef 
	
	GPIO_structure.GPIO_Pin = GPIO_Pin_7;
	GPIO_structure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_structure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init( GPIOA , &GPIO_structure );
	
	//2. 控制PA8点电平
	
	GPIO_SetBits( GPIOA , GPIO_Pin_7 );
		
}

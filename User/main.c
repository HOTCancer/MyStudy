
#include "stm32f10x.h"

int main(void)
{
	
	//1. ��ʼ��PA8
	GPIO_InitTypeDef GPIO_structure;
	//����ʱ��APB2
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA , ENABLE);
	//��ʼ��GPIO_InitTypeDef 
	
	GPIO_structure.GPIO_Pin = GPIO_Pin_7;
	GPIO_structure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_structure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init( GPIOA , &GPIO_structure );
	
	//2. ����PA8���ƽ
	
	GPIO_SetBits( GPIOA , GPIO_Pin_7 );
		
}

#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"



int main(void)
{ 
 
	delay_init(168);		  //初始化延时函数
	LED_Init();		        //初始化LED端口
	
  /**下面是通过直接操作库函数的方式实现IO控制**/	
	while(1)
	{
	GPIO_ResetBits(GPIOB,GPIO_Pin_4);  
	GPIO_SetBits(GPIOA,GPIO_Pin_15);   
	delay_ms(500);  		   //延时300ms
	GPIO_SetBits(GPIOB,GPIO_Pin_4);	   
	GPIO_ResetBits(GPIOA,GPIO_Pin_15); 
	delay_ms(500);                     
	}
}



//*******************下面注释掉的代码是通过 位带 操作实现IO口控制**************************************
	
//int main(void)
//{ 
// 
//	delay_init(168);		  //初始化延时函数
//	LED_Init();		        //初始化LED端口
//  while(1)
//	{
//     LED0=0;			  //LED0亮
//	   LED1=1;				//LED1灭
//		 delay_ms(500);
//		 LED0=1;				//LED0灭
//		 LED1=0;				//LED1亮
//		 delay_ms(500);
//	 }
//}

	

//*******************下面注释掉的代码是通过 直接操作寄存器 方式实现IO口控制**************************************
//int main(void)
//{ 
// 
//	delay_init(168);		  //初始化延时函数
//	LED_Init();		        //初始化LED端口
//	while(1)
//	{
//     GPIOB->BSRRH=GPIO_Pin_4;//LED0亮
//	   GPIOA->BSRRL=GPIO_Pin_15;//LED1灭
//		 delay_ms(500);
//     GPIOB->BSRRL=GPIO_Pin_4;//LED0灭
//	   GPIOA->BSRRH=GPIO_Pin_15;//LED1亮
//		 delay_ms(500);

//	 }
// }	 

 




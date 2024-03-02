#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"



int main(void)
{ 
 
	delay_init(168);		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
	
  /**������ͨ��ֱ�Ӳ����⺯���ķ�ʽʵ��IO����**/	
	while(1)
	{
	GPIO_ResetBits(GPIOB,GPIO_Pin_4);  
	GPIO_SetBits(GPIOA,GPIO_Pin_15);   
	delay_ms(500);  		   //��ʱ300ms
	GPIO_SetBits(GPIOB,GPIO_Pin_4);	   
	GPIO_ResetBits(GPIOA,GPIO_Pin_15); 
	delay_ms(500);                     
	}
}



//*******************����ע�͵��Ĵ�����ͨ�� λ�� ����ʵ��IO�ڿ���**************************************
	
//int main(void)
//{ 
// 
//	delay_init(168);		  //��ʼ����ʱ����
//	LED_Init();		        //��ʼ��LED�˿�
//  while(1)
//	{
//     LED0=0;			  //LED0��
//	   LED1=1;				//LED1��
//		 delay_ms(500);
//		 LED0=1;				//LED0��
//		 LED1=0;				//LED1��
//		 delay_ms(500);
//	 }
//}

	

//*******************����ע�͵��Ĵ�����ͨ�� ֱ�Ӳ����Ĵ��� ��ʽʵ��IO�ڿ���**************************************
//int main(void)
//{ 
// 
//	delay_init(168);		  //��ʼ����ʱ����
//	LED_Init();		        //��ʼ��LED�˿�
//	while(1)
//	{
//     GPIOB->BSRRH=GPIO_Pin_4;//LED0��
//	   GPIOA->BSRRL=GPIO_Pin_15;//LED1��
//		 delay_ms(500);
//     GPIOB->BSRRL=GPIO_Pin_4;//LED0��
//	   GPIOA->BSRRH=GPIO_Pin_15;//LED1��
//		 delay_ms(500);

//	 }
// }	 

 




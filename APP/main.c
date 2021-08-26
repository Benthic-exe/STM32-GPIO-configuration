#include "stm32f10x.h"

 /* LED */
#define RCC_XXX_LED                         RCC_APB2Periph_GPIOC
#define GPIO_XXX_LED_PORT                   GPIOC
#define GPIO_XXX_LED                        GPIO_Pin_13
 
 /* 共阳 */
#define LED_XXX_ON()		GPIO_ResetBits(GPIO_XXX_LED_PORT,GPIO_XXX_LED)//点亮
#define LED_XXX_OFF()		GPIO_SetBits(GPIO_XXX_LED_PORT,GPIO_XXX_LED)//熄灭

 void delay_ms(int len)
 {
	 volatile unsigned int i = 6*1000*len;
	 while(i--);
 }

 void led_init(void)
 {
	 GPIO_InitTypeDef  GPIO_InitStructure;
 
	 RCC_APB2PeriphClockCmd(RCC_XXX_LED, ENABLE);	 //使能PD端口时钟
	 GPIO_InitStructure.GPIO_Pin = GPIO_XXX_LED;			 //端口配置
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;		 //推挽输出
	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; 
	 GPIO_Init(GPIO_XXX_LED_PORT, &GPIO_InitStructure); 
	 LED_XXX_OFF();//初始化结束熄灭LED
 }

 int main(void)
 {	
 	led_init();
	while(1){
		LED_XXX_ON();
		delay_ms(300);
		LED_XXX_OFF();
		delay_ms(300);
	}
 }


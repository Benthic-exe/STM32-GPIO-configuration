# STM32-GPIO-configuration
## IDE: Keil ARM

## 主要固件库

### stm32f10x.h:实现了所有硬件寄存器结构、地址映射、寄存器位操作、基本类型等定义 

#### core_cm3.c:主要针对一些通用寄存器、中断优先级、启动模式相关的内嵌汇编操作接口 

### system_stm32f10x.c:系统启动初始化，尤其是系统时钟配置 

### startup_stm32f10x_xx.s:引导启动文件 

### misc.x:主要是中断初始化、分组管理等相关接口,实现了用户对中断的配置功能 

### stm32f10x_exit.c:中断服务相关


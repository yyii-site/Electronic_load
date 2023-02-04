# Electrolic_load

---

## 自制电子负载

![test_20220626](README.assets/test_20220626.jpg)

项目在VSCode中的PlatformIO扩展中开发，使用Arduino平台。通过串口或[esp-usb-bridge](https://github.com/espressif/esp-usb-bridge)作为下载调试工具。

## 硬件拓扑图

![power mcu](README.assets/power%20mcu.png)

## 原理图及PCB

原理图：documents/Electronic_load_sch.pdf

PCB打样：documents/ElectronicLoad_Gerber.zip

散热器开孔：documents/Heat_Sink_cad.png

## 硬件问题和变更

| 变更                               | 原因                       |
| ---------------------------------- | ------------------------- |
| R81阻值NA                          | 上电要求I02必须为低         |
| U18的1脚由KEY改作1-Wire接口         | IO35仅可作为输入端口        |
| R7/R8/R9/R10取样电阻改为0.1Ω康铜丝  | 封装错误                    |
| ads1110的供电由3V3_A改为3V3_D       | 芯片内自带参考基准          |
| R44阻值NA                          | 风扇使用12V供电             |
| R43阻值0Ω                          | 风扇使用12V供电             |
| R96/R98/R99阻值0Ω                  |                            |
| R7/R8/R9/R10公共端与OUT_GND短接     | 修复采样电阻负端未接地的问题 |

## 项目进度

1. 硬件及驱动部分：

    * 虽然可通过esp-usb-bridge进行jtag在线调试，但是在vscode中调试成功率较低；

    * 串口通讯正常；

    * 编码器正常；

    * 风扇PWM工作正常，但会有刺耳的高频噪声；

    * ds18b20温度数据读取正常；

    * 电子负载可实现恒流功能；

    * ADC芯片电压电流采样正常；

    * DAC输出正常，实现负载电流调节功能；

    * OLED屏驱动显示正常；

2. 软件功能：
   * 实现电子负载的电压电流采样与显示（未校准）
   
   * 温度采样与显示
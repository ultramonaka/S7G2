/*
 * Register_Address.h
 *
 *  Created on: 2018/03/24
 *      Author: K.Naka(mini)
 *      for S7G2
 *      2018.3.25 20:19
 */

#ifndef REGISTER_ADDRESS_H_
#define REGISTER_ADDRESS_H_



/*-----------------------------------------------------
 * IRQCR i コントロールレジスタ (i=0-15)
 * Bit width 8
 * 0x40006000
----------------------------------------------------*/
#define IRQCR_BASE   	0x40006000
#define IRQCR0          (*(volatile uint8_t*)(IRQCR_BASE+0x00000000))
#define IRQCR1          (*(volatile uint8_t*)(IRQCR_BASE+0x00000001))
#define IRQCR2          (*(volatile uint8_t*)(IRQCR_BASE+0x00000002))
#define IRQCR3          (*(volatile uint8_t*)(IRQCR_BASE+0x00000003))
#define IRQCR4          (*(volatile uint8_t*)(IRQCR_BASE+0x00000004))
#define IRQCR5          (*(volatile uint8_t*)(IRQCR_BASE+0x00000005))
#define IRQCR6          (*(volatile uint8_t*)(IRQCR_BASE+0x00000006))
#define IRQCR7          (*(volatile uint8_t*)(IRQCR_BASE+0x00000007))
#define IRQCR8          (*(volatile uint8_t*)(IRQCR_BASE+0x00000008))
#define IRQCR9          (*(volatile uint8_t*)(IRQCR_BASE+0x00000009))
#define IRQCR10         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000A))
#define IRQCR11         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000B))
#define IRQCR12         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000C))
#define IRQCR13         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000D))
#define IRQCR14         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000E))
#define IRQCR15         (*(volatile uint8_t*)(IRQCR_BASE+0x0000000F))

/*-----------------------------------------------------
 * PCNTR1 ポートコントロールレジスタ
 * Bit width 32
 * 0x40040000
----------------------------------------------------*/
#define PCNTR1_BASE     0x40040000
#define PORT0_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000000))
#define PORT1_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000020))
#define PORT2_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000040))
#define PORT3_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000060))
#define PORT4_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000080))
#define PORT5_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x000000A0))
#define PORT6_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x000000C0))
#define PORT7_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x000000E0))
#define PORT8_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000100))
#define PORT9_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000120))
#define PORTA_PCNTR1   	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000140))
#define PORTB_PCNTR1	(*(volatile uint32_t*)(PCNTR1_BASE+0x00000160))


/*-----------------------------------------------------
 * PODR
 * Bit width 16
 * 0x40040000
----------------------------------------------------*/
#define PODR_BASE       0x40040000
#define PORT0_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000000))
#define PORT1_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000020))
#define PORT2_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000040))
#define PORT3_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000060))
#define PORT4_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000080))
#define PORT5_PODR      (*(volatile uint16_t*)(PODR_BASE+0x000000A0))
#define PORT6_PODR      (*(volatile uint16_t*)(PODR_BASE+0x000000C0))
#define PORT7_PODR      (*(volatile uint16_t*)(PODR_BASE+0x000000E0))
#define PORT8_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000100))
#define PORT9_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000120))
#define PORTA_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000140))
#define PORTB_PODR      (*(volatile uint16_t*)(PODR_BASE+0x00000160))


/*-----------------------------------------------------
 * PODR
 * Bit width 16
 * 0x40040002
----------------------------------------------------*/
#define PDR_BASE        0x40040002
#define PORT0_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000000))
#define PORT1_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000022))
#define PORT2_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000042))
#define PORT3_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000062))
#define PORT4_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000082))
#define PORT5_PDR       (*(volatile uint16_t*)(PDR_BASE+0x000000A2))
#define PORT6_PDR       (*(volatile uint16_t*)(PDR_BASE+0x000000C2))
#define PORT7_PDR       (*(volatile uint16_t*)(PDR_BASE+0x000000E2))
#define PORT8_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000102))
#define PORT9_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000122))
#define PORTA_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000142))
#define PORTB_PDR       (*(volatile uint16_t*)(PDR_BASE+0x00000162))

/*-----------------------------------------------------
 * PORTn.PCNTR2　(n=[0:B])
  * Bit width 32
 * 0x40040004
----------------------------------------------------*/
#define PCNTR2_BASE	    0x40040004
#define PORT0_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000000))
#define PORT1_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000020))
#define PORT2_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000040))
#define PORT3_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000060))
#define PORT4_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000080))
#define PORT5_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x000000A0))
#define PORT6_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x000000C0))
#define PORT7_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x000000E0))
#define PORT8_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000100))
#define PORT9_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000120))
#define PORTA_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000140))
#define PORTB_PCNTR2    (*(volatile uint32_t*)(PCNTR2_BASE+0x00000160))


/*-----------------------------------------------------
 * PIDRn　(n=[1:B])
 * Bit width 16
 * 0x40040006
----------------------------------------------------*/
#define PIDR_BASE       0x40040006
#define PORT0_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000000))
#define PORT1_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000020))
#define PORT2_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000040))
#define PORT3_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000060))
#define PORT4_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000080))
#define PORT5_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x000000A0))
#define PORT6_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x000000C0))
#define PORT7_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x000000E0))
#define PORT8_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000100))
#define PORT9_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000120))
#define PORTA_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000140))
#define PORTB_PIDR      (*(volatile uint16_t*)(PIDR_BASE+0x00000160))


/*-----------------------------------------------------
 * PORTn.PORR  (n=[0:B])
 * Bit width 16
 * 0x40040008
----------------------------------------------------*/
#define PORR_BASE       0x40040008
#define PORT0_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000000))
#define PORT1_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000020))
#define PORT2_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000040))
#define PORT3_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000060))
#define PORT4_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000080))
#define PORT5_PORR      (*(volatile uint16_t*)(PORR_BASE+0x000000A0))
#define PORT6_PORR      (*(volatile uint16_t*)(PORR_BASE+0x000000C0))
#define PORT7_PORR      (*(volatile uint16_t*)(PORR_BASE+0x000000E0))
#define PORT8_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000100))
#define PORT9_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000120))
#define PORTA_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000140))
#define PORTB_PORR      (*(volatile uint16_t*)(PORR_BASE+0x00000160))


/*-----------------------------------------------------
 * EIDRn　(n=[1:4])
 * Bit width 16
 * 0x40040024
----------------------------------------------------*/
#define EIDR_BASE       0x40040024
#define PORT1_EIDR1     (*(volatile uint16_t*)(EIDR_BASE+0x00000000))
#define PORT2_EIDR2     (*(volatile uint16_t*)(EIDR_BASE+0x00000020))
#define PORT3_EIDR3     (*(volatile uint16_t*)(EIDR_BASE+0x00000040))
#define PORT4_EIDR4     (*(volatile uint16_t*)(EIDR_BASE+0x00000060))



/*-----------------------------------------------------
 * ELCR イベントリンクコントローラレジスタ
 * Bit width 8
 * 0x40041000
----------------------------------------------------*/
#define ELCR            (*(volatile uint8_t*)(0x40041000))


/*-----------------------------------------------------
 * ELSEGR n イベントリンクソフトウェアイベント発生レジスタn　(n=0,1)
 * Bit width 8
 * 0x40041002
----------------------------------------------------*/
#define ELSEGR_BASE     0x40041002
#define ELSEGR0         (*(volatile uint8_t*)(ELSEGR_BASE+00000000))
#define ELSEGR1         (*(volatile uint8_t*)(ELSEGR_BASE+00000002))


/*-----------------------------------------------------
 * ELSR n イベントリンク設定レジスタ　(n=[0:15])
 * 0x40041010
----------------------------------------------------*/
#define ELSR_BASE       0x40041010
#define ELSR0           (*(volatile uint16_t*)(ELSR_BASE+0x00000000))
#define ELSR1           (*(volatile uint16_t*)(ELSR_BASE+0x00000004))
#define ELSR2           (*(volatile uint16_t*)(ELSR_BASE+0x00000008))
#define ELSR3           (*(volatile uint16_t*)(ELSR_BASE+0x0000000C))
#define ELSR4           (*(volatile uint16_t*)(ELSR_BASE+0x00000010))
#define ELSR5           (*(volatile uint16_t*)(ELSR_BASE+0x00000014))
#define ELSR6           (*(volatile uint16_t*)(ELSR_BASE+0x00000018))
#define ELSR7           (*(volatile uint16_t*)(ELSR_BASE+0x0000001C))
#define ELSR8           (*(volatile uint16_t*)(ELSR_BASE+0x00000020))
#define ELSR9           (*(volatile uint16_t*)(ELSR_BASE+0x00000024))
#define ELSR10          (*(volatile uint16_t*)(ELSR_BASE+0x00000028))
#define ELSR11          (*(volatile uint16_t*)(ELSR_BASE+0x0000002C))
#define ELSR12          (*(volatile uint16_t*)(ELSR_BASE+0x00000030))
#define ELSR13          (*(volatile uint16_t*)(ELSR_BASE+0x00000034))
#define ELSR14          (*(volatile uint16_t*)(ELSR_BASE+0x00000038))
#define ELSR15          (*(volatile uint16_t*)(ELSR_BASE+0x0000003C))
#define ELSR16          (*(volatile uint16_t*)(ELSR_BASE+0x00000040))
#define ELSR17          (*(volatile uint16_t*)(ELSR_BASE+0x00000044))
#define ELSR18          (*(volatile uint16_t*)(ELSR_BASE+0x00000048))

#endif /* REGISTER_ADDRESS_H_ */


/*
テンプレート
#define _BASE			0x00000000
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))
#define   			(*(uint16_t*)(_BASE+0x0000))


*/









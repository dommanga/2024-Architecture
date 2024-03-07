// Title         : vending_machine_def.v
// Author      : Jae-Eon Jo (Jojaeeon@postech.ac.kr) 
//					Dongup Kwon (nankdu7@postech.ac.kr)

// Macro constants (prefix k & CamelCase)
`define kTotalBits 32
  
`define kItemBits 8
`define kNumItems 4

`define kCoinBits 8
`define kNumCoins 3

`define kWaitTime 10

`define S0_init 32'h00
`define S1_wait 32'h01
`define S2_coin 32'h02
`define S3_select 32'h03
`define S4_return 32'h04

#pragma once

#include <cfloat>
#include <cmath>
#define BRK_IMPL 0x00
#define BPL_REL 0x10
#define JSR_ABS 0x20
#define BMI_REL 0x30
#define RTI_IMPL 0x40
#define BVC_REL 0x50
#define RTS_IMPL 0x60
#define BVS_REL 0x70
#define BCC_REL 0x90
#define LDY_IMM 0xA0
#define BCS_REL 0xB0
#define CPY_IMM 0xC0
#define BNE_REL 0xD0
#define CPX_IMM 0xE0
#define BEQ_REL 0xF0

#define ORA_X_IND 0x01
#define ORA_Y_IND 0x11
#define AND_X_IND 0x21
#define AND_Y_IND 0x31
#define EOR_X_IND 0x41
#define EOR_Y_IND 0x51
#define ADC_X_IND 0x61
#define ADC_Y_IND 0x71
#define STA_X_IND 0x81
#define STA_Y_IND 0x91
#define LDA_X_IND 0xA1
#define LDA_Y_IND 0xB1
#define CMP_X_IND 0xC1
#define CMP_Y_IND 0xD1
#define SBC_X_IND 0xE1
#define SBC_Y_IND 0xF1

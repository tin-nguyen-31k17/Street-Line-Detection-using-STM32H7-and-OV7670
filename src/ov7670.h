#ifndef OV7670_H
#define OV7670_H

#include <stdint.h>

// define constants for OV7670 camera registers
#define OV7670_REG_GAIN       0x00  // gain control, blue channel
#define OV7670_REG_BLUE       0x01  // blue channel balance
#define OV7670_REG_RED        0x02  // red channel balance
#define OV7670_REG_VREF       0x03  // frame control
#define OV7670_REG_COM1       0x04  // common control 1
#define OV7670_REG_BAVE       0x05  // B average control
#define OV7670_REG_GEAVE      0x06  // Gb/Gr average control
#define OV7670_REG_RAVE       0x07  // R average control
#define OV7670_REG_COM2       0x09  // common control 2
#define OV7670_REG_PID        0x0A  // product ID
#define OV7670_REG_VER        0x0B  // product version
#define OV7670_REG_COM3       0x0C  // common control 3
#define OV7670_REG_COM4       0x0D  // common control 4
#define OV7670_REG_COM5       0x0E  // common control 5
#define OV7670_REG_COM6       0x0F  // common control 6
#define OV7670_REG_AEC        0x10  // automatic exposure control
#define OV7670_REG_CLKRC      0x11  // clock control
#define OV7670_REG_COM7       0x12  // common control 7
#define OV7670_REG_COM8       0x13  // common control 8
#define OV7670_REG_COM9       0x14  // common control 9
#define OV7670_REG_COM10      0x15  // common control 10
#define OV7670_REG_HSTART     0x17  // horizontal window start
#define OV7670_REG_HSTOP      0x18  // horizontal window stop
#define OV7670_REG_VSTART     0x19  // vertical window start
#define OV7670_REG_VSTOP      0x1A  // vertical window stop
#define OV7670_REG_PSHFT      0x1B  // pixel shift
#define OV7670_REG_MIDH       0x1C  // manufacturer ID high
#define OV7670_REG_MIDL       0x1D  // manufacturer ID low
#define OV7670_REG_MVFP       0x1E  // mirror/vflip control
#define OV7670_REG_LAEC       0x1F  // reserved
#define OV7670_REG_ADCCTR0    0x20  // ADC control
#define OV7670_REG_ADCCTR1    0x21  // ADC control
#define OV7670_REG_ADCCTR2    0x22  // ADC control
#define OV7670_REG_ADCCTR3    0x23  // ADC control
#define OV7670_REG_AEW        0x24  // AGC/AEC upper limit
#define OV7670_REG_AEB        0x25  // AGC/AEC lower limit
#define OV7670_REG_VPT        0x26  // AGC/AEC fast mode op region
#define OV7670_REG_BBIAS      0x27  // B channel signal output bias
#define OV7670_REG_GbBIAS     0x28  // Gb channel signal output bias
#define OV7670_REG_RSVD       0x29  // reserved
#define OV7670_REG_EXHCH      0x2A  // dummy pixel insert MSB
#define OV7670_REG_EXHCL      0x2B  // dummy pixel insert LSB
#define OV7670_REG_RBIAS      0x2C  // R channel signal output bias
#define OV7670_REG_ADVFL      0x2D  // LSB of insert dummy lines in vertical direction
#define OV7670_REG_ADVFH      0x2E  // MSB of insert dummy lines in vertical direction
#define OV7670_REG_YAVE       0x2F  // Y/G channel average value
#define OV7670_REG_HSYST      0x30  // HSYNC rising edge delay
#define OV7670_REG_HSYEN      0x31  // HSYNC falling edge delay
#define OV7670_REG_HREF       0x32  // HREF pieces
#define OV7670_REG_CHLF       0x33  // array current control
#define OV7670_REG_ARBLM      0x34  // array reference control
#define OV7670_REG_RESERVED_0 0x35  // reserved
#define OV7670_REG_ADC        0x36  // ADC control
#define OV7670_REG_ACOM       0x37  // ADC and analog common mode control
#define OV7670_REG_OFON       0x38  // offset control
#define OV7670_REG_TSLB       0x3A  // line buffer test option
#define OV7670_REG_COM11      0x3B  // common control 11
#define OV7670_REG_COM12      0x3C  // common control 12
#define OV7670_REG_COM13      0x3D  // common control 13
#define OV7670_REG_COM14      0x3E  // common control 14
#define OV7670_REG_EDGE       0x3F  // edge enhancement control
#define OV7670_REG_COM15      0x40  // common control 15
#define OV7670_REG_COM16      0x41  // common control 16
#define OV7670_REG_COM17      0x42  // common control 17
#define OV7670_REG_AWBC1      0x43  // AWB control 1
#define OV7670_REG_AWBC2      0x44  // AWB control 2
#define OV7670_REG_AWBC3      0x45  // AWB control 3
#define OV7670_REG_AWBC4      0x46  // AWB control 4
#define OV7670_REG_AWBC5      0x47  // AWB control 5
#define OV7670_REG_AWBC6      0x48  // AWB control 6
#define OV7670_REG_REG4B      0x4B  // reserved
#define OV7670_REG_DNSTH      0x4C  // de-noise threshold
#define OV7670_REG_POIDX      0x4D  // reserved
#define OV7670_REG_PCKDV      0x4E  // reserved
#define OV7670_REG_XINDX      0x4F  // X index control
#define OV7670_REG_YINDX      0x50  // Y index control
#define OV7670_REG_SLOP       0x51  // Y/X slope control
#define OV7670_REG_DECI       0x52  // gamma curve highest segment slope
#define OV7670_REG_GLBAL      0x53  // global gain control
#define OV7670_REG_DBLV       0x54  // PLL control
#define OV7670_REG_AWBCTR3    0x55  // AWB control 3
#define OV7670_REG_AWBCTR2    0x56  // AWB control 2
#define OV7670_REG_AWBCTR1    0x57  // AWB control 1
#define OV7670_REG_AWBCTR0    0x58  // AWB control 0
#define OV7670_REG_SCALING_XSC 0x70  // reserved
#define OV7670_REG_SCALING_YSC 0x71  // reserved
#define OV7670_REG_SCALING_DCWCTR 0x72  // reserved
#define OV7670_REG_SCALING_PCLK_DIV 0x73  // reserved
#define OV7670_REG_REG74      0x74  // reserved
#define OV7670_REG_REG75      0x75  // reserved
#define OV7670_REG_REG76      0x76  // reserved
#define OV7670_REG_REG77      0x77  // reserved
#define OV7670_REG_SLOP       0x7A  // reserved
#define OV7670_REG_GAM1       0x7B  // gamma curve coefficients
#define OV7670_REG_GAM2       0x7C  // gamma curve coefficients
#define OV7670_REG_GAM3       0x7D  // gamma curve coefficients
#define OV7670_REG_GAM4       0x7E  // gamma curve coefficients
#define OV7670_REG_GAM5       0x7F  // gamma curve coefficients
#define OV7670_REG_GAM6       0x80  // gamma curve coefficients
#define OV7670_REG_GAM7       0x81  // gamma curve coefficients
#define OV7670_REG_GAM8       0x82  // gamma curve coefficients
#define OV7670_REG_GAM9       0x83  // gamma curve coefficients
#define OV7670_REG_GAM10      0x84  // gamma curve coefficients
#define OV7670_REG_GAM11      0x85  // gamma curve coefficients
#define OV7670_REG_GAM12      0x86  // gamma curve coefficients
#define OV7670_REG_GAM13      0x87  // gamma curve coefficients
#define OV7670_REG_GAM14      0x88  // gamma curve coefficients
#define OV7670_REG_GAM15      0x89  // gamma curve coefficients
#define OV7670_REG_REG8A      0x8A  // reserved
#define OV7670_REG_REG8B      0x8B  // reserved
#define OV7670_REG_REG8C      0x8C  // reserved
#define OV7670_REG_REG8D      0x8D  // reserved
#define OV7670_REG_REG8E      0x8E  // reserved
#define OV7670_REG_REG8F      0x8F  // reserved
#define OV7670_REG_REG90      0x90  // reserved
#define OV7670_REG_REG91      0x91  // reserved
#define OV7670_REG_REG92      0x92  // reserved
#define OV7670_REG_REG93      0x93  // reserved
#define OV7670_REG_REG94      0x94  // reserved
#define OV7670_REG_REG95      0x95  // reserved
#define OV7670_REG_REG96      0x96  // reserved
#define OV7670_REG_REG97      0x97  // reserved
#define OV7670_REG_REG98      0x98  // reserved
#define OV7670_REG_REG99      0x99  // reserved
#define OV7670_REG_REG9A      0x9A  // reserved
#define OV7670_REG_REG9B      0x9B  // reserved
#define OV7670_REG_REG9C      0x9C  // reserved
#define OV7670_REG_REG9D      0x9D  // reserved
#define OV7670_REG_REG9E      0x9E  // reserved
#define OV7670_REG_REG9F      0x9F  // reserved
#define OV7670_REG_DMLNL      0xA0  // Dummy line low 8 bits in fixed dummy line mode
#define OV7670_REG_DMLNH      0xA1  // Dummy line high 8 bits in fixed dummy line mode
#define OV7670_REG_LCC6       0xA2  // reserved
#define OV7670_REG_LCC7       0xA3  // reserved
#define OV7670_REG_AECH       0xA4  // reserved
#define OV7670_REG_BD50       0xA5  // reserved
#define OV7670_REG_BD60       0xA6  // reserved
#define OV7670_REG_HAECC1     0xA7  // reserved
#define OV7670_REG_HAECC2     0xA8  // reserved
#define OV7670_REG_HAECC3     0xA9  // reserved
#define OV7670_REG_HAECC4     0xAA  // reserved
#define OV7670_REG_HAECC5     0xAB  // reserved
#define OV7670_REG_HAECC6     0xAC  // reserved
#define OV7670_REG_HAECC7     0xAD  // reserved
#define OV7670_REG_BD50MAX    0xAE  // reserved
#define OV7670_REG_HAECC8     0xAF  // reserved
#define OV7670_REG_SCALING_DCWCTR2 0xB0  // reserved
#define OV7670_REG_SCALING_PLK_DIV2 0xB1  // reserved
#define OV7670_REG_REGB2      0xB2  // reserved
#define OV7670_REG_REGB3      0xB3  // reserved
#define OV7670_REG_REGB4      0xB4  // reserved
#define OV7670_REG_REGB5      0xB5  // reserved
#define OV7670_REG_REGB6      0xB6  // reserved
#define OV7670_REG_REGB7      0xB7  // reserved
#define OV7670_REG_REGB8      0xB8  // reserved
#define OV7670_REG_REGB9      0xB9  // reserved
#define OV7670_REG_REGBA      0xBA  // reserved
#define OV7670_REG_REGBB      0xBB  // reserved
#define OV7670_REG_REGBC      0xBC  // reserved
#define OV7670_REG_REGBD      0xBD  // reserved
#define OV7670_REG_REGBE      0xBE  // reserved
#define OV7670_REG_REGBF      0xBF  // reserved
#define OV7670_REG_AWBCTR7    0xC0  // reserved
#define OV7670_REG_AWBCTR8    0xC1  // reserved
#define OV7670_REG_AWBCTR9    0xC2  // reserved
#define OV7670_REG_AWBCTR10   0xC3  // reserved
#define OV7670_REG_AWBCTR11   0xC4  // reserved
#define OV7670_REG_AWBCTR12   0xC5  // reserved
#define OV7670_REG_AWBCTR13   0xC6  // reserved
#define OV7670_REG_AWBCTR14   0xC7  // reserved
#define OV7670_REG_AWBCTR15   0xC8  // reserved
#define OV7670_REG_AWBCTR16   0xC9  // reserved
#define OV7670_REG_AWBCTR17   0xCA  // reserved
#define OV7670_REG_AWBCTR18   0xCB  // reserved
#define OV7670_REG_AWBCTR19   0xCC  // reserved
#define OV7670_REG_AWBCTR20   0xCD  // reserved
#define OV7670_REG_AWBCTR21   0xCE  // reserved
#define OV7670_REG_GAMCTRP    0xD0  // reserved
#define OV7670_REG_GAMCTRN    0xD1  // reserved
#define OV7670_REG_REGD2      0xD2  // reserved
#define OV7670_REG_REGD3      0xD3  // reserved
#define OV7670_REG_REGD4      0xD4  // reserved
#define OV7670_REG_REGD5      0xD5  // reserved
#define OV7670_REG_REGD6      0xD6  // reserved
#define OV7670_REG_REGD7      0xD7  // reserved
#define OV7670_REG_REGD8      0xD8  // reserved
#define OV7670_REG_REGD9      0xD9  // reserved
#define OV7670_REG_REGDA      0xDA  // reserved
#define OV7670_REG_REGDB      0xDB  // reserved
#define OV7670_REG_REGDC      0xDC  // reserved
#define OV7670_REG_REGDD      0xDD  // reserved
#define OV7670_REG_REGDE      0xDE  // reserved
#define OV7670_REG_REGDF      0xDF  // reserved
#define OV7670_REG_REGE0      0xE0  // reserved
#define OV7670_REG_REGE1      0xE1  // reserved
#define OV7670_REG_REGE2      0xE2  // reserved
#define OV7670_REG_REGE3      0xE3  // reserved
#define OV7670_REG_REGE4      0xE4  // reserved
#define OV7670_REG_REGE5      0xE5  // reserved
#define OV7670_REG_REGE6      0xE6  // reserved
#define OV7670_REG_REGE7      0xE7  // reserved
#define OV7670_REG_REGE8      0xE8  // reserved
#define OV7670_REG_REGE9      0xE9  // reserved
#define OV7670_REG_REGEA      0xEA  // reserved
#define OV7670_REG_REGEB      0xEB  // reserved
#define OV7670_REG_REGEC      0xEC  // reserved
#define OV7670_REG_REGED      0xED  // reserved
#define OV7670_REG_REGEF      0xEF  // reserved
#define OV7670_REG_REGF0      0xF0  // reserved
#define OV7670_REG_REGF1      0xF1  // reserved
#define OV7670_REG_REGF2      0xF2  // reserved
#define OV7670_REG_REGF3      0xF3  // reserved
#define OV7670_REG_REGF4      0xF4  // reserved
#define OV7670_REG_REGF5      0xF5  // reserved
#define OV7670_REG_REGF6      0xF6  // reserved
#define OV7670_REG_REGF7      0xF7  // reserved
#define OV7670_REG_REGF8      0xF8  // reserved
#define OV7670_REG_REGF9      0xF9  // reserved
#define OV7670_REG_REGFB      0xFB  // reserved
#define OV7670_REG_REGFC      0xFC  // reserved
#define OV7670_REG_REGFD      0xFD  // reserved
#define OV7670_REG_REGFE      0xFE  // reserved
#define OV7670_REG_REGFF      0xFF  // reserved
#define OV7670_COM_RGB444    0x04  // RGB444 output
#define OV7670_COM_RGB555    0x03  // RGB555 output
#define OV7670_COM_RGB565    0x02  // RGB565 output
#define OV7670_COM_RGB888    0x01  // RGB888 (24-bit) output
#define OV7670_COM_YUV       0x00  // YUV output
#define OV7670_COM_BAYER     0x05  // Bayer raw data output
#define OV7670_COM_JPEG      0x06  // JPEG compression output

#define OV7670_COM_SIZE_QQVGA  0x00  // 160x120
#define OV7670_COM_SIZE_QVGA   0x01  // 320x240
#define OV7670_COM_SIZE_VGA    0x02  // 640x480
#define OV7670_COM_SIZE_SVGA   0x03  // 800x600
#define OV7670_COM_SIZE_XGA    0x04  // 1024x768
#define OV7670_COM_SIZE_SXGA   0x05  // 1280x1024
#define OV7670_COM_SIZE_UXGA   0x06  // 1600x1200

#define OV7670_COM2_SSLEEP   0x10  // Soft sleep mode
#define OV7670_COM2_OUTPUT_DRIVE_2x 0x01  // Output drive capability: 2x
#define OV7670_COM2_OUTPUT_DRIVE_3x 0x02  // Output drive capability: 3x
#define OV7670_COM2_OUTPUT_DRIVE_4x 0x03  // Output drive capability: 4x

#define OV7670_COM3_SWAP_MSB_LSB   0x40  // Swap MSB/LSB on output
#define OV7670_COM3_SCALE_ENABLE   0x08  // Enable scaling
#define OV7670_COM3_DCW_ENABLE     0x04  // Enable downsamp/crop/window
#define OV7670_COM3_RGB_SCALE_2x   0x01  // Enable 2x scale on RGB output

#define OV7670_COM7_RES_UXGA   0x00  // UXGA (1600x1200)
#define OV7670_COM7_RES_SXGA   0x01  // SXGA (1280x1024)
#define OV7670_COM7_RES_XGA    0x02  // XGA (1024x768)
#define OV7670_COM7_RES_SVGA   0x03  // SVGA (800x600)
#define OV7670_COM7_RES_VGA    0x04  // VGA (640x480)
#define OV7670_COM7_RES_QVGA   0x05  // QVGA (320x240)
#define OV7670_COM7_RES_QQVGA  0x06  // QQVGA (160x120)

#define OV7670_COM_FMT_RGB565   0x04  // RGB565 output format
#define OV7670_COM7_FMT_MASK    0x38  // Format mask
#define OV7670_COM7_FMT_RGB565  0x00  // RGB565 output format
#define OV7670_COM7_FMT_RGB555  0x08  // RGB555 output format
#define OV7670_COM7_FMT_RGB444  0x10  // RGB444 output format
#define OV7670_COM7_FMT_RGB888  0x18  // RGB888 (24-bit) output format
#define OV7670_COM7_FMT_YUV     0x20  // YUV output format
#define OV7670_COM7_FMT_BAYER   0x28  // Bayer raw data output format
#define OV7670_COM7_FMT_JPEG    0x30  // JPEG compression output format

#define OV7670_COM7_RES_MASK    0x07  // Resolution mask
#define OV7670_COM7_RES_UXGA    0x00  // UXGA (1600x1200)
#define OV7670_COM7_RES_SXGA    0x01  // SXGA (1280x1024)
#define OV7670_COM7_RES_XGA     0x02  // XGA (1024x768)
#define OV7670_COM7_RES_SVGA    0x03  // SVGA (800x600)
#define OV7670_COM7_RES_VGA     0x04  // VGA (640x480)
#define OV7670_COM7_RES_QVGA    0x05  // QVGA (320x240)
#define OV7670_COM7_RES_QQVGA   0x06  // QQVGA (160x120)


#endif  // OV7670_H_
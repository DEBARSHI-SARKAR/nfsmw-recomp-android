006dfeb0  PUSH EBP
006dfeb1  MOV EBP,ESP
006dfeb3  AND ESP,0xfffffff0
006dfeb6  SUB ESP,0x44
006dfeb9  PUSH EBX
006dfeba  PUSH ESI
006dfebb  MOV ESI,dword ptr [0x00982cdc]
006dfec1  CMP ESI,0x1000
006dfec7  PUSH EDI
006dfec8  JGE 0x006e016b
006dfece  MOV EAX,dword ptr [EBP + 0xc]
006dfed1  IMUL ESI,ESI,0x44
006dfed4  MOV EDX,dword ptr [EBP + 0x18]
006dfed7  MOV ECX,dword ptr [EBP + 0x8]
006dfeda  MOV EDI,dword ptr [EBP + 0x10]
006dfedd  ADD ESI,0x93e878
006dfee3  MOV dword ptr [ESI + 0xc],EAX
006dfee6  MOV EAX,dword ptr [EBP + 0x1c]
006dfee9  MOV dword ptr [ESI + 0x14],EDX
006dfeec  MOV EDX,dword ptr [EBP + 0x14]
006dfeef  MOV dword ptr [ESI + 0x18],EAX
006dfef2  MOV EAX,dword ptr [EBP + 0x20]
006dfef5  MOV dword ptr [ESI],ECX
006dfef7  MOV dword ptr [ESI + 0x4],0x1
006dfefe  MOV dword ptr [ESI + 0x1c],EDX
006dff01  MOV dword ptr [ESI + 0x10],EDI
006dff04  MOV dword ptr [ESI + 0x40],0xbf800000
006dff0b  XOR EBX,EBX
006dff0d  MOV dword ptr [ESI + 0x8],EBX
006dff10  MOV dword ptr [ESI + 0x20],EBX
006dff13  MOV dword ptr [ESI + 0x3c],EBX
006dff16  MOV EDX,dword ptr [EAX]
006dff18  MOV dword ptr [ESI + 0x24],EDX
006dff1b  MOV EDX,dword ptr [EAX + 0x4]
006dff1e  MOV dword ptr [ESI + 0x28],EDX
006dff21  MOV EDX,dword ptr [EAX + 0x8]
006dff24  MOV dword ptr [ESI + 0x2c],EDX
006dff27  MOV EDX,dword ptr [EAX + 0xc]
006dff2a  MOV dword ptr [ESI + 0x30],EDX
006dff2d  MOV EDX,dword ptr [EAX + 0x10]
006dff30  MOV dword ptr [ESI + 0x34],EDX
006dff33  MOV EAX,dword ptr [EAX]
006dff35  CMP byte ptr [EAX + 0x54],0x2
006dff39  JNZ 0x006dff5e
006dff3b  MOV ECX,dword ptr [EBP + 0x14]
006dff3e  MOV EDX,dword ptr [ESI]
006dff40  MOV EAX,dword ptr [ESI + 0x4]
006dff43  PUSH ECX
006dff44  PUSH EDX
006dff45  PUSH EAX
006dff46  CALL 0x006c6f30
006dff4b  MOV ECX,dword ptr [EBP + 0x8]
006dff4e  ADD ESP,0xc
006dff51  OR EAX,0x80000000
006dff56  MOV dword ptr [ESI + 0x38],EAX
006dff59  JMP 0x006e0130
006dff5e  MOV AL,byte ptr [EBP + 0x24]
006dff61  CMP AL,BL
006dff63  JZ 0x006dff73
006dff65  MOVSX EDX,AL
006dff68  OR EDX,0x80000000
006dff6e  JMP 0x006e012d
006dff73  MOV dword ptr [ESI + 0x38],EBX
006dff76  MOV EAX,dword ptr [ESI + 0x24]
006dff79  CMP EAX,EBX
006dff7b  JZ 0x006dff83
006dff7d  MOV EDX,dword ptr [EAX + 0x24]
006dff80  MOV dword ptr [ESI + 0x38],EDX
006dff83  MOV EAX,dword ptr [ESI + 0x28]
006dff86  CMP EAX,EBX
006dff88  JZ 0x006dff95
006dff8a  MOV EDX,dword ptr [ESI + 0x38]
006dff8d  SHL EDX,0x1
006dff8f  XOR EDX,dword ptr [EAX + 0x24]
006dff92  MOV dword ptr [ESI + 0x38],EDX
006dff95  CMP dword ptr [ESI + 0x2c],EBX
006dff98  JZ 0x006dffa8
006dff9a  MOV EAX,dword ptr [ESI + 0x38]
006dff9d  MOV EDX,dword ptr [ESI + 0x2c]
006dffa0  SHL EAX,0x1
006dffa2  XOR EAX,dword ptr [EDX + 0x24]
006dffa5  MOV dword ptr [ESI + 0x38],EAX
006dffa8  CMP dword ptr [ESI + 0x30],EBX
006dffab  JZ 0x006dffbb
006dffad  MOV EAX,dword ptr [ESI + 0x38]
006dffb0  MOV EDX,dword ptr [ESI + 0x30]
006dffb3  SHL EAX,0x1
006dffb5  XOR EAX,dword ptr [EDX + 0x24]
006dffb8  MOV dword ptr [ESI + 0x38],EAX
006dffbb  CMP dword ptr [ESI + 0x34],EBX
006dffbe  JZ 0x006dffce
006dffc0  MOV EAX,dword ptr [ESI + 0x38]
006dffc3  MOV EDX,dword ptr [ESI + 0x34]
006dffc6  SHL EAX,0x1
006dffc8  XOR EAX,dword ptr [EDX + 0x24]
006dffcb  MOV dword ptr [ESI + 0x38],EAX
006dffce  MOV EDX,dword ptr [ESI + 0x38]
006dffd1  MOV EAX,dword ptr [ESI + 0xc]
006dffd4  XOR EDX,EAX
006dffd6  MOV dword ptr [ESI + 0x38],EDX
006dffd9  MOV EDX,dword ptr [0x00982a20]
006dffdf  MOV byte ptr [ESI + 0x3b],BL
006dffe2  CMP dword ptr [EDX + 0x4],0x1
006dffe6  MOV EAX,dword ptr [EDI + 0x4]
006dffe9  MOV dword ptr [ESP + 0xc],EAX
006dffed  JNZ 0x006e0125
006dfff3  CMP EAX,0x12
006dfff6  JA 0x006e0125
006dfffc  MOVZX EDX,byte ptr [EAX + 0x6e01e0]
006e0003  JMP dword ptr [EDX*0x4 + 0x6e01d8]
006e000a  CMP dword ptr [0x00901830],EBX
006e0010  JLE 0x006e01cf
006e0016  MOV EAX,dword ptr [ECX]
006e0018  MOV EDX,dword ptr [ECX + 0x4]
006e001b  MOV dword ptr [ESP + 0x20],EAX
006e001f  MOV EAX,dword ptr [ECX + 0x8]
006e0022  MOV dword ptr [ESP + 0x24],EDX
006e0026  MOV EDX,dword ptr [ECX + 0xc]
006e0029  MOV dword ptr [ESP + 0x28],EAX
006e002d  MOV EAX,dword ptr [ECX + 0x10]
006e0030  MOV ECX,dword ptr [ECX + 0x14]
006e0033  MOV dword ptr [ESP + 0x10],EDX
006e0037  LEA EDX,[ESP + 0x10]
006e003b  MOV dword ptr [ESP + 0x14],EAX
006e003f  PUSH EDX
006e0040  LEA EAX,[ESP + 0x24]
006e0044  MOV dword ptr [ESP + 0x1c],ECX
006e0048  MOV ECX,dword ptr [EBP + 0x14]
006e004b  PUSH EAX
006e004c  PUSH ECX
006e004d  CALL 0x006be800
006e0052  FLD float ptr [ESP + 0x1c]
006e0056  FADD float ptr [ESP + 0x2c]
006e005a  MOV EAX,[0x00919650]
006e005f  LEA EDX,[ESP + 0x4c]
006e0063  PUSH EDX
006e0064  FMUL float ptr [0x008933d4]
006e006a  ADD EAX,0x80
006e006f  PUSH EAX
006e0070  FSTP float ptr [ESP + 0x54]
006e0074  LEA ECX,[ESP + 0x44]
006e0078  FLD float ptr [ESP + 0x28]
006e007c  PUSH ECX
006e007d  FADD float ptr [ESP + 0x3c]
006e0081  FMUL float ptr [0x008933d4]
006e0087  FSTP float ptr [ESP + 0x5c]
006e008b  FLD float ptr [ESP + 0x30]
006e008f  FADD float ptr [ESP + 0x40]
006e0093  FMUL float ptr [0x008933d4]
006e0099  FSTP float ptr [ESP + 0x60]
006e009d  CALL 0x0045ed20
006e00a2  FLD float ptr [0x008fae68]
006e00a8  ADD ESP,0x18
006e00ab  FCOMP float ptr [0x008fae50]
006e00b1  FNSTSW AX
006e00b3  TEST AH,0x41
006e00b6  JNP 0x006e01c7
006e00bc  FLD float ptr [ESP + 0x38]
006e00c0  FCOMP float ptr [0x008fae60]
006e00c6  FNSTSW AX
006e00c8  TEST AH,0x41
006e00cb  JZ 0x006e01c7
006e00d1  FLD float ptr [ESP + 0x38]
006e00d5  FCOMP float ptr [0x008fae58]
006e00db  FLD float ptr [ESP + 0x38]
006e00df  FNSTSW AX
006e00e1  TEST AH,0x41
006e00e4  JNZ 0x006e01a0
006e00ea  FCOMP float ptr [0x008fae5c]
006e00f0  MOV EDI,dword ptr [EDI + 0x38]
006e00f3  FNSTSW AX
006e00f5  TEST AH,0x5
006e00f8  MOV EAX,[0x00982c3c]
006e00fd  JP 0x006e0172
006e00ff  DEC EAX
006e0100  CMP EDI,EAX
006e0102  JGE 0x006e0106
006e0104  MOV EAX,EDI
006e0106  CMP EAX,0x1
006e0109  MOV dword ptr [ESI + 0x3c],EAX
006e010c  JG 0x006e0113
006e010e  MOV EAX,0x1
006e0113  MOV dword ptr [ESI + 0x3c],EAX
006e0116  MOV EAX,dword ptr [ESP + 0xc]
006e011a  MOV ECX,dword ptr [EBP + 0x8]
006e011d  MOV EDX,dword ptr [ESI + 0x3c]
006e0120  IMUL EDX,EDX,0x1f
006e0123  ADD EAX,EDX
006e0125  MOV EDX,dword ptr [ESI + 0x38]
006e0128  SHL EAX,0x18
006e012b  OR EDX,EAX
006e012d  MOV dword ptr [ESI + 0x38],EDX
006e0130  MOV EAX,[0x00982cdc]
006e0135  MOV EDX,dword ptr [0x009877b4]
006e013b  MOV ESI,dword ptr [ESI + 0x38]
006e013e  MOV dword ptr [EDX + EAX*0x8],EAX
006e0141  MOV EAX,[0x00982cdc]
006e0146  MOV EDX,dword ptr [0x009877b4]
006e014c  MOV dword ptr [EDX + EAX*0x8 + 0x4],ESI
006e0150  MOV EAX,dword ptr [ECX]
006e0152  MOV ECX,dword ptr [0x00982cd8]
006e0158  ADD ECX,EAX
006e015a  MOV EAX,[0x00982cdc]
006e015f  INC EAX
006e0160  MOV dword ptr [0x00982cd8],ECX
006e0166  MOV [0x00982cdc],EAX
006e016b  POP EDI
006e016c  POP ESI
006e016d  POP EBX
006e016e  MOV ESP,EBP
006e0170  POP EBP
006e0171  RET
006e0172  ADD EAX,-0x2
006e0175  CMP EDI,EAX
006e0177  JGE 0x006e017b
006e0179  MOV EAX,EDI
006e017b  CMP EAX,0x1
006e017e  MOV dword ptr [ESI + 0x3c],EAX
006e0181  JG 0x006e0188
006e0183  MOV EAX,0x1
006e0188  MOV EDX,dword ptr [ESI + 0x10]
006e018b  MOV dword ptr [ESI + 0x3c],EAX
006e018e  CMP dword ptr [EDX + 0x4],0x4
006e0192  JZ 0x006e0116
006e0194  MOV EAX,dword ptr [ESP + 0x38]
006e0198  MOV dword ptr [ESI + 0x40],EAX
006e019b  JMP 0x006e0116
006e01a0  FCOMP float ptr [0x008fae58]
006e01a6  FNSTSW AX
006e01a8  TEST AH,0x41
006e01ab  JP 0x006e0116
006e01b1  MOV EDI,dword ptr [EDI + 0x38]
006e01b4  MOV EAX,[0x00982c3c]
006e01b9  CMP EAX,EDI
006e01bb  JGE 0x006e01bf
006e01bd  MOV EDI,EAX
006e01bf  MOV dword ptr [ESI + 0x3c],EDI
006e01c2  JMP 0x006e0116
006e01c7  MOV dword ptr [ESI + 0x3c],EBX
006e01ca  JMP 0x006e0116
006e01cf  MOV dword ptr [ESI + 0x3c],EBX
006e01d2  JMP 0x006e011d

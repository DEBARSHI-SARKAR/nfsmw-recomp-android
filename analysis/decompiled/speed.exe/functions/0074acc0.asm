0074acc0  PUSH EBP
0074acc1  MOV EBP,ESP
0074acc3  AND ESP,0xfffffff0
0074acc6  SUB ESP,0xc4
0074accc  MOV EAX,[0x008f86e4]
0074acd1  TEST EAX,EAX
0074acd3  PUSH EBX
0074acd4  PUSH ESI
0074acd5  PUSH EDI
0074acd6  MOV ESI,ECX
0074acd8  JZ 0x0074aff8
0074acde  MOV EAX,[0x00904ad0]
0074ace3  TEST EAX,EAX
0074ace5  JZ 0x0074aff8
0074aceb  CMP dword ptr [0x00925e90],0x6
0074acf2  JNZ 0x0074aff8
0074acf8  MOV EAX,dword ptr [ESI + 0x284]
0074acfe  TEST EAX,EAX
0074ad00  JZ 0x0074aff8
0074ad06  MOV EAX,dword ptr [ESI + 0x288]
0074ad0c  MOV EAX,dword ptr [EAX + 0x40]
0074ad0f  FLD float ptr [EAX + 0x54]
0074ad12  MOV ECX,dword ptr [EAX + 0x50]
0074ad15  FLD float ptr [EAX + 0x58]
0074ad18  ADD EAX,0x50
0074ad1b  LEA EDX,[ESP + 0x60]
0074ad1f  FXCH
0074ad21  PUSH EDX
0074ad22  FSTP float ptr [ESP + 0x68]
0074ad26  LEA EAX,[ESI + 0x3650]
0074ad2c  MOV dword ptr [ESP + 0x64],ECX
0074ad30  FSTP float ptr [ESP + 0x6c]
0074ad34  PUSH EAX
0074ad35  MOV ECX,EDX
0074ad37  PUSH ECX
0074ad38  CALL 0x006bd940
0074ad3d  PUSH 0x1
0074ad3f  CALL 0x00405ed0
0074ad44  MOV EBX,EAX
0074ad46  ADD ESP,0x10
0074ad49  TEST EBX,EBX
0074ad4b  MOV dword ptr [ESP + 0x5c],EBX
0074ad4f  JZ 0x0074aff8
0074ad55  LEA EDX,[ESI + 0x3610]
0074ad5b  PUSH EDX
0074ad5c  MOV ECX,EBX
0074ad5e  CALL 0x00445090
0074ad63  MOV EAX,dword ptr [ESI + 0x33d8]
0074ad69  LEA EDI,[ESI + 0x3404]
0074ad6f  MOV dword ptr [ESP + 0x34],EAX
0074ad73  MOV dword ptr [ESP + 0x1c],0x0
0074ad7b  MOV dword ptr [ESP + 0x38],EDI
0074ad7f  NOP
0074ad80  MOV EAX,dword ptr [EDI + -0x28]
0074ad83  TEST EAX,EAX
0074ad85  JZ 0x0074afdf
0074ad8b  MOV ECX,dword ptr [ESI + 0x284]
0074ad91  MOV EDX,dword ptr [EDI]
0074ad93  MOV EAX,dword ptr [ESI + 0x288]
0074ad99  PUSH ECX
0074ad9a  PUSH EBX
0074ad9b  PUSH EDX
0074ad9c  PUSH EAX
0074ad9d  MOV ECX,0x9877cc
0074ada2  CALL 0x006c1120
0074ada7  TEST AL,AL
0074ada9  JZ 0x0074aff8
0074adaf  MOV EAX,dword ptr [ESP + 0x34]
0074adb3  TEST EAX,EAX
0074adb5  MOV dword ptr [ESP + 0x18],0x0
0074adbd  JBE 0x0074afd5
0074adc3  LEA ECX,[ESI + 0x2e60]
0074adc9  MOV EBX,0x2a
0074adce  MOV dword ptr [ESP + 0x14],ECX
0074add2  LEA ECX,[ESP + 0x70]
0074add6  CALL 0x006c10e0
0074addb  MOV EDX,dword ptr [ESP + 0x14]
0074addf  MOVZX EDI,byte ptr [EDX + 0x1]
0074ade3  CMP EDI,dword ptr [ESP + 0x1c]
0074ade7  JNZ 0x0074afaa
0074aded  MOV EAX,EDX
0074adef  CMP byte ptr [EAX],0x0
0074adf2  JNZ 0x0074afaa
0074adf8  MOV ECX,dword ptr [ESI + 0x298]
0074adfe  ADD ECX,EBX
0074ae00  SHL ECX,0x4
0074ae03  ADD ECX,ESI
0074ae05  PUSH ECX
0074ae06  MOV ECX,dword ptr [ESI + 0x29c]
0074ae0c  ADD ECX,EBX
0074ae0e  LEA EDX,[ESP + 0xc4]
0074ae15  SHL ECX,0x4
0074ae18  PUSH EDX
0074ae19  ADD ECX,ESI
0074ae1b  CALL 0x004102f0
0074ae20  FLD float ptr [EAX + 0x4]
0074ae23  FLD float ptr [EAX + 0x8]
0074ae26  MOV EAX,dword ptr [EAX]
0074ae28  LEA ECX,[ESP + 0x20]
0074ae2c  FXCH
0074ae2e  FSTP float ptr [ESP + 0x24]
0074ae32  PUSH ECX
0074ae33  MOV EDX,ECX
0074ae35  PUSH EDX
0074ae36  FSTP float ptr [ESP + 0x30]
0074ae3a  MOV dword ptr [ESP + 0x28],EAX
0074ae3e  CALL 0x0045f490
0074ae43  LEA EAX,[ESP + 0x28]
0074ae47  PUSH EAX
0074ae48  LEA ECX,[ESP + 0x6c]
0074ae4c  PUSH ECX
0074ae4d  LEA EDX,[ESP + 0x50]
0074ae51  PUSH EDX
0074ae52  CALL 0x0045f7c0
0074ae57  LEA EAX,[EDI + 0x342]
0074ae5d  SHL EAX,0x4
0074ae60  FLD float ptr [EAX + ESI*0x1]
0074ae63  MOV ECX,dword ptr [ESP + 0x28]
0074ae67  FLD float ptr [ESP + 0x54]
0074ae6b  MOV AL,byte ptr [ECX]
0074ae6d  FMUL ST1
0074ae6f  SHL EDI,0x4
0074ae72  ADD ESP,0x14
0074ae75  TEST AL,AL
0074ae77  FSTP float ptr [ESP + 0x40]
0074ae7b  FLD float ptr [ESP + 0x44]
0074ae7f  FMUL ST1
0074ae81  FSTP float ptr [ESP + 0x44]
0074ae85  FLD float ptr [ESP + 0x48]
0074ae89  FMUL ST1
0074ae8b  FSTP float ptr [ESP + 0x48]
0074ae8f  FSTP ST0
0074ae91  FLD float ptr [EDI + ESI*0x1 + 0x3424]
0074ae98  FADD float ptr [ESI + 0x3690]
0074ae9e  FLD float ptr [ESP + 0x20]
0074aea2  FMUL ST1
0074aea4  FSTP float ptr [ESP + 0x20]
0074aea8  FLD float ptr [ESP + 0x24]
0074aeac  FMUL ST1
0074aeae  FSTP float ptr [ESP + 0x24]
0074aeb2  FLD float ptr [ESP + 0x28]
0074aeb6  FMUL ST1
0074aeb8  FSTP float ptr [ESP + 0x28]
0074aebc  FSTP ST0
0074aebe  JNZ 0x0074afaa
0074aec4  MOV EAX,dword ptr [ESI + 0x298]
0074aeca  MOV EDX,dword ptr [ESI + 0x3550]
0074aed0  MOV ECX,dword ptr [ESP + 0x40]
0074aed4  ADD EAX,EBX
0074aed6  SHL EAX,0x4
0074aed9  ADD EAX,ESI
0074aedb  MOV dword ptr [ESP + 0x80],EDX
0074aee2  FLD float ptr [EAX + 0x4]
0074aee5  FLD float ptr [EAX + 0x8]
0074aee8  MOV EAX,dword ptr [EAX]
0074aeea  MOV EDX,dword ptr [ESP + 0x44]
0074aeee  FXCH
0074aef0  MOV dword ptr [ESP + 0x70],EAX
0074aef4  FSTP float ptr [ESP + 0x74]
0074aef8  MOV EAX,dword ptr [ESP + 0x48]
0074aefc  MOV dword ptr [ESP + 0xa4],EDX
0074af03  FSTP float ptr [ESP + 0x78]
0074af07  MOV EDX,dword ptr [ESP + 0x24]
0074af0b  MOV dword ptr [ESP + 0xa8],EAX
0074af12  MOV EAX,dword ptr [ESP + 0x28]
0074af16  MOV dword ptr [ESP + 0xa0],ECX
0074af1d  MOV ECX,dword ptr [ESP + 0x20]
0074af21  MOV dword ptr [ESP + 0xb4],EDX
0074af28  MOV dword ptr [ESP + 0xb8],EAX
0074af2f  MOV EAX,dword ptr [ESP + 0x18]
0074af33  MOV dword ptr [ESP + 0xb0],ECX
0074af3a  XOR EDX,EDX
0074af3c  MOV ECX,0xa
0074af41  DIV ECX
0074af43  TEST EDX,EDX
0074af45  MOV dword ptr [ESP + 0x3c],EDX
0074af49  FILD dword ptr [ESP + 0x3c]
0074af4d  JGE 0x0074af55
0074af4f  FADD float ptr [0x00891214]
0074af55  FMUL float ptr [0x00890cd4]
0074af5b  MOV EAX,dword ptr [ESP + 0x90]
0074af62  FLD float ptr [0x00890cd4]
0074af68  MOV EDX,dword ptr [ESP + 0x88]
0074af6f  MOV dword ptr [ESP + 0x88],EAX
0074af76  FADD ST0,ST1
0074af78  LEA EAX,[ESP + 0x70]
0074af7c  FXCH
0074af7e  PUSH EAX
0074af7f  FSTP float ptr [ESP + 0x40]
0074af83  MOV dword ptr [ESP + 0x5c],EDX
0074af87  MOV ECX,dword ptr [ESP + 0x40]
0074af8b  MOV dword ptr [ESP + 0x90],ECX
0074af92  FSTP float ptr [ESP + 0x88]
0074af99  MOV ECX,0x9877cc
0074af9e  MOV dword ptr [ESP + 0x94],EDX
0074afa5  CALL 0x006d1e30
0074afaa  MOV EAX,dword ptr [ESP + 0x18]
0074afae  MOV EDX,dword ptr [ESP + 0x14]
0074afb2  MOV ECX,dword ptr [ESP + 0x34]
0074afb6  INC EAX
0074afb7  ADD EDX,0x4
0074afba  ADD EBX,0x2
0074afbd  CMP EAX,ECX
0074afbf  MOV dword ptr [ESP + 0x18],EAX
0074afc3  MOV dword ptr [ESP + 0x14],EDX
0074afc7  JC 0x0074add2
0074afcd  MOV EBX,dword ptr [ESP + 0x5c]
0074afd1  MOV EDI,dword ptr [ESP + 0x38]
0074afd5  MOV ECX,0x9877cc
0074afda  CALL 0x006d1f60
0074afdf  MOV EAX,dword ptr [ESP + 0x1c]
0074afe3  INC EAX
0074afe4  ADD EDI,0x4
0074afe7  CMP EAX,0x1
0074afea  MOV dword ptr [ESP + 0x1c],EAX
0074afee  MOV dword ptr [ESP + 0x38],EDI
0074aff2  JL 0x0074ad80
0074aff8  POP EDI
0074aff9  POP ESI
0074affa  POP EBX
0074affb  MOV ESP,EBP
0074affd  POP EBP
0074affe  RET

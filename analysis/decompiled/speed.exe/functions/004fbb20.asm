004fbb20  PUSH EBP
004fbb21  MOV EBP,ESP
004fbb23  AND ESP,0xfffffff0
004fbb26  SUB ESP,0x44
004fbb29  PUSH EBX
004fbb2a  MOV dword ptr [ESP + 0x24],ECX
004fbb2e  MOV ECX,dword ptr [ECX + 0x84]
004fbb34  TEST ECX,ECX
004fbb36  PUSH ESI
004fbb37  PUSH EDI
004fbb38  MOV dword ptr [ESP + 0x24],ECX
004fbb3c  JZ 0x004fbd22
004fbb42  MOV EAX,dword ptr [EBP + 0x8]
004fbb45  TEST EAX,EAX
004fbb47  JZ 0x004fbd22
004fbb4d  MOV EAX,dword ptr [EBP + 0xc]
004fbb50  TEST EAX,EAX
004fbb52  JLE 0x004fbd22
004fbb58  MOVSX EAX,word ptr [ECX + 0xa]
004fbb5c  TEST EAX,EAX
004fbb5e  JLE 0x004fbd22
004fbb64  MOV dword ptr [ESP + 0x18],0x0
004fbb6c  MOV dword ptr [ESP + 0x20],EAX
004fbb70  JMP 0x004fbb80
004fbb72  MOV ECX,dword ptr [ESP + 0x24]
004fbb76  JMP 0x004fbb80
004fbb80  MOV EBX,dword ptr [ECX + 0x4]
004fbb83  MOV ECX,dword ptr [ESP + 0x18]
004fbb87  MOV EAX,dword ptr [EBX + ECX*0x1 + 0x4]
004fbb8b  ADD EBX,ECX
004fbb8d  MOV ECX,dword ptr [EBX]
004fbb8f  MOV dword ptr [ESP + 0x14],ECX
004fbb93  MOV ECX,dword ptr [EBP + 0xc]
004fbb96  OR ESI,0xffffffff
004fbb99  XOR EDI,EDI
004fbb9b  DEC ECX
004fbb9c  TEST ECX,ECX
004fbb9e  MOV dword ptr [ESP + 0x1c],EBX
004fbba2  MOV dword ptr [ESP + 0x28],EAX
004fbba6  MOV dword ptr [ESP + 0x30],0x0
004fbbae  MOV dword ptr [ESP + 0x34],0x0
004fbbb6  MOV dword ptr [ESP + 0x38],0x0
004fbbbe  JL 0x004fbd08
004fbbc4  JMP 0x004fbbd0
004fbbc6  MOV EBX,dword ptr [ESP + 0x1c]
004fbbca  LEA EBX,[EBX]
004fbbd0  CMP ESI,-0x1
004fbbd3  JNZ 0x004fbc0c
004fbbd5  MOV EBX,dword ptr [ESP + 0x14]
004fbbd9  LEA EAX,[ECX + EDI*0x1]
004fbbdc  CDQ
004fbbdd  SUB EAX,EDX
004fbbdf  MOV EDX,dword ptr [EBP + 0x8]
004fbbe2  SAR EAX,0x1
004fbbe4  MOV EDX,dword ptr [EDX + EAX*0x4]
004fbbe7  MOV EDX,dword ptr [EDX]
004fbbe9  CMP EBX,EDX
004fbbeb  JNC 0x004fbbf2
004fbbed  LEA ECX,[EAX + -0x1]
004fbbf0  JMP 0x004fbbfb
004fbbf2  JBE 0x004fbbf9
004fbbf4  LEA EDI,[EAX + 0x1]
004fbbf7  JMP 0x004fbbfb
004fbbf9  MOV ESI,EAX
004fbbfb  CMP EDI,ECX
004fbbfd  JLE 0x004fbbc6
004fbbff  CMP ESI,-0x1
004fbc02  JZ 0x004fbd08
004fbc08  MOV EBX,dword ptr [ESP + 0x1c]
004fbc0c  TEST ESI,ESI
004fbc0e  JLE 0x004fbc29
004fbc10  MOV EAX,dword ptr [EBP + 0x8]
004fbc13  LEA EAX,[EAX + ESI*0x4 + -0x4]
004fbc17  MOV ECX,dword ptr [EAX]
004fbc19  MOV EDX,dword ptr [ESP + 0x14]
004fbc1d  CMP dword ptr [ECX],EDX
004fbc1f  JNZ 0x004fbc29
004fbc21  DEC ESI
004fbc22  SUB EAX,0x4
004fbc25  TEST ESI,ESI
004fbc27  JG 0x004fbc17
004fbc29  CMP ESI,dword ptr [EBP + 0xc]
004fbc2c  JGE 0x004fbcdc
004fbc32  MOV EAX,dword ptr [EBP + 0x8]
004fbc35  MOV EAX,dword ptr [EAX + ESI*0x4]
004fbc38  MOV ECX,dword ptr [ESP + 0x14]
004fbc3c  CMP dword ptr [EAX],ECX
004fbc3e  JNZ 0x004fbcdc
004fbc44  MOV CL,byte ptr [EAX + 0x4]
004fbc47  MOV EDX,0x1
004fbc4c  SHL EDX,CL
004fbc4e  MOV ECX,dword ptr [ESP + 0x28]
004fbc52  TEST ECX,EDX
004fbc54  JZ 0x004fbcd0
004fbc5a  MOVSX EDX,byte ptr [EAX + 0x5]
004fbc5e  MOVSX ECX,byte ptr [EAX + 0x6]
004fbc62  MOV dword ptr [ESP + 0x1c],EDX
004fbc66  MOVSX EDX,byte ptr [EAX + 0x7]
004fbc6a  FILD dword ptr [ESP + 0x1c]
004fbc6e  MOV dword ptr [ESP + 0x1c],ECX
004fbc72  FMUL float ptr [0x00890bf0]
004fbc78  LEA EAX,[ESP + 0x40]
004fbc7c  PUSH EAX
004fbc7d  MOV ECX,EAX
004fbc7f  FSTP float ptr [ESP + 0x44]
004fbc83  PUSH ECX
004fbc84  FILD dword ptr [ESP + 0x24]
004fbc88  MOV dword ptr [ESP + 0x24],EDX
004fbc8c  FMUL float ptr [0x00890bf0]
004fbc92  FSTP float ptr [ESP + 0x4c]
004fbc96  FILD dword ptr [ESP + 0x24]
004fbc9a  FMUL float ptr [0x00890bf0]
004fbca0  FSTP float ptr [ESP + 0x50]
004fbca4  CALL 0x0045f490
004fbca9  FLD float ptr [ESP + 0x38]
004fbcad  ADD ESP,0x8
004fbcb0  FADD float ptr [ESP + 0x40]
004fbcb4  FSTP float ptr [ESP + 0x30]
004fbcb8  FLD float ptr [ESP + 0x34]
004fbcbc  FADD float ptr [ESP + 0x44]
004fbcc0  FSTP float ptr [ESP + 0x34]
004fbcc4  FLD float ptr [ESP + 0x38]
004fbcc8  FADD float ptr [ESP + 0x48]
004fbccc  FSTP float ptr [ESP + 0x38]
004fbcd0  MOV EAX,dword ptr [EBP + 0xc]
004fbcd3  INC ESI
004fbcd4  CMP ESI,EAX
004fbcd6  JL 0x004fbc32
004fbcdc  LEA EDX,[ESP + 0x30]
004fbce0  PUSH EDX
004fbce1  MOV EAX,EDX
004fbce3  PUSH EAX
004fbce4  CALL 0x0045f490
004fbce9  MOV ECX,dword ptr [ESP + 0x40]
004fbced  MOV EDX,dword ptr [ESP + 0x3c]
004fbcf1  MOV EAX,dword ptr [ESP + 0x38]
004fbcf5  ADD ESP,0x8
004fbcf8  PUSH ECX
004fbcf9  MOV ECX,dword ptr [EBX + 0x8]
004fbcfc  PUSH EDX
004fbcfd  PUSH EAX
004fbcfe  PUSH ECX
004fbcff  MOV ECX,dword ptr [ESP + 0x3c]
004fbd03  CALL 0x006be570
004fbd08  MOV ECX,dword ptr [ESP + 0x18]
004fbd0c  MOV EAX,dword ptr [ESP + 0x20]
004fbd10  ADD ECX,0xc
004fbd13  DEC EAX
004fbd14  MOV dword ptr [ESP + 0x18],ECX
004fbd18  MOV dword ptr [ESP + 0x20],EAX
004fbd1c  JNZ 0x004fbb72
004fbd22  POP EDI
004fbd23  POP ESI
004fbd24  POP EBX
004fbd25  MOV ESP,EBP
004fbd27  POP EBP
004fbd28  RET 0x8

004cfe20  PUSH ECX
004cfe21  PUSH EBX
004cfe22  PUSH EBP
004cfe23  MOV EBP,dword ptr [ESP + 0x10]
004cfe27  PUSH ESI
004cfe28  PUSH EDI
004cfe29  MOV EDI,ECX
004cfe2b  LEA ESI,[EDI + 0x8]
004cfe2e  MOV dword ptr [ESP + 0x10],0x2
004cfe36  XOR EBX,EBX
004cfe38  MOV ECX,dword ptr [ESI]
004cfe3a  CMP ECX,EBX
004cfe3c  JZ 0x004cfe57
004cfe3e  PUSH EBP
004cfe3f  CALL 0x004cd570
004cfe44  MOV ECX,dword ptr [ESI]
004cfe46  CMP byte ptr [ECX + 0x20],BL
004cfe49  JNZ 0x004cfe57
004cfe4b  CMP ECX,EBX
004cfe4d  JZ 0x004cfe55
004cfe4f  MOV EAX,dword ptr [ECX]
004cfe51  PUSH 0x1
004cfe53  CALL dword ptr [EAX]
004cfe55  MOV dword ptr [ESI],EBX
004cfe57  MOV EAX,dword ptr [ESP + 0x10]
004cfe5b  ADD ESI,0x4
004cfe5e  DEC EAX
004cfe5f  MOV dword ptr [ESP + 0x10],EAX
004cfe63  JNZ 0x004cfe38
004cfe65  FLD float ptr [ESP + 0x1c]
004cfe69  FMUL float ptr [0x00890de4]
004cfe6f  CALL 0x007c4b80
004cfe74  ADD word ptr [EDI + 0x12],AX
004cfe78  CMP word ptr [EDI + 0x12],BX
004cfe7c  JGE 0x004cff37
004cfe82  MOV CX,word ptr [EDI + 0x10]
004cfe86  MOV word ptr [EDI + 0x12],CX
004cfe8a  MOV EAX,dword ptr [EDI + 0x8]
004cfe8d  OR ESI,0xffffffff
004cfe90  CMP EAX,EBX
004cfe92  JNZ 0x004cfe96
004cfe94  XOR ESI,ESI
004cfe96  CMP dword ptr [EDI + 0xc],EBX
004cfe99  JNZ 0x004cfea2
004cfe9b  MOV ESI,0x1
004cfea0  JMP 0x004cfeab
004cfea2  CMP ESI,-0x1
004cfea5  JZ 0x004cff37
004cfeab  MOV ECX,dword ptr [0x009120c8]
004cfeb1  PUSH EBX
004cfeb2  PUSH 0x1
004cfeb4  CALL 0x00465fd0
004cfeb9  CMP EAX,EBX
004cfebb  JZ 0x004cff1d
004cfebd  MOV ECX,dword ptr [EDI + 0x4]
004cfec0  MOV dword ptr [EAX],0x896ad0
004cfec6  MOV dword ptr [EAX + 0x8],0x7fff
004cfecd  MOV dword ptr [EAX + 0xc],0x1000
004cfed4  MOV dword ptr [EAX + 0x4],EBX
004cfed7  MOV dword ptr [EAX + 0x10],EBX
004cfeda  MOV dword ptr [EAX + 0x14],EBX
004cfedd  MOV dword ptr [EAX + 0x18],EBX
004cfee0  MOV dword ptr [EAX + 0x1c],ECX
004cfee3  XOR EDX,EDX
004cfee5  MOV dword ptr [EAX + 0x24],EDX
004cfee8  MOV dword ptr [EAX + 0x28],EDX
004cfeeb  MOV dword ptr [EAX + 0x2c],EDX
004cfeee  MOV dword ptr [EAX + 0x30],EDX
004cfef1  MOV dword ptr [EAX + 0x34],EDX
004cfef4  MOV dword ptr [EAX + 0x38],EDX
004cfef7  MOV dword ptr [EAX + 0x3c],EDX
004cfefa  MOV dword ptr [EAX + 0x40],EDX
004cfefd  MOV dword ptr [EAX + 0x44],EDX
004cff00  MOV dword ptr [EAX + 0x48],EDX
004cff03  MOV dword ptr [EAX + 0x4c],EDX
004cff06  MOV dword ptr [EAX + 0x50],EDX
004cff09  MOV dword ptr [EAX + 0x54],EDX
004cff0c  MOV dword ptr [EAX + 0x58],EDX
004cff0f  MOV dword ptr [EAX + 0x5c],EDX
004cff12  MOV dword ptr [EAX + 0x60],EDX
004cff15  MOV dword ptr [EAX + 0x64],EDX
004cff18  MOV dword ptr [EAX + 0x68],EDX
004cff1b  JMP 0x004cff1f
004cff1d  XOR EAX,EAX
004cff1f  LEA ECX,[EAX + 0x4]
004cff22  MOV dword ptr [EDI + ESI*0x4 + 0x8],EAX
004cff26  PUSH ECX
004cff27  MOV ECX,EAX
004cff29  MOV dword ptr [EAX + 0x10],EBX
004cff2c  MOV dword ptr [EAX + 0x8],EBX
004cff2f  MOV dword ptr [EAX + 0xc],EBX
004cff32  CALL 0x004cf520
004cff37  POP EDI
004cff38  POP ESI
004cff39  POP EBP
004cff3a  POP EBX
004cff3b  POP ECX
004cff3c  RET 0x8

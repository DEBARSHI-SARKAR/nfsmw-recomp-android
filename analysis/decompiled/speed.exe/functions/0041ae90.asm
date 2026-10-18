0041ae90  PUSH ESI
0041ae91  MOV ESI,ECX
0041ae93  MOV EAX,dword ptr [ESI + 0x8]
0041ae96  PUSH EDI
0041ae97  MOV EDI,dword ptr [ESP + 0xc]
0041ae9b  CMP EDI,EAX
0041ae9d  JBE 0x0041af2a
0041aea3  MOV EAX,dword ptr [ESI]
0041aea5  PUSH EBX
0041aea6  PUSH EBP
0041aea7  PUSH EDI
0041aea8  CALL dword ptr [EAX + 0x14]
0041aeab  MOV ECX,dword ptr [ESI + 0x8]
0041aeae  MOV EDX,dword ptr [ESI]
0041aeb0  MOV EBX,dword ptr [ESI + 0x4]
0041aeb3  MOV EBP,dword ptr [ESI + 0xc]
0041aeb6  PUSH 0x10
0041aeb8  MOV dword ptr [ESP + 0x18],ECX
0041aebc  PUSH EDI
0041aebd  MOV ECX,ESI
0041aebf  CALL dword ptr [EDX + 0x4]
0041aec2  CMP EBX,EAX
0041aec4  MOV dword ptr [ESI + 0x4],EAX
0041aec7  MOV dword ptr [ESI + 0x8],EDI
0041aeca  JZ 0x0041af28
0041aecc  XOR EDI,EDI
0041aece  TEST EBP,EBP
0041aed0  MOV dword ptr [ESI + 0xc],0x0
0041aed7  JLE 0x0041af17
0041aed9  LEA ESP,[ESP]
0041aee0  MOV EAX,dword ptr [ESI + 0xc]
0041aee3  CMP EAX,dword ptr [ESI + 0x8]
0041aee6  JC 0x0041aef9
0041aee8  MOV EDX,dword ptr [ESI]
0041aeea  INC EAX
0041aeeb  PUSH EAX
0041aeec  MOV ECX,ESI
0041aeee  CALL dword ptr [EDX + 0xc]
0041aef1  PUSH EAX
0041aef2  MOV ECX,ESI
0041aef4  CALL 0x0041ae90
0041aef9  MOV EAX,dword ptr [ESI + 0xc]
0041aefc  MOV ECX,dword ptr [ESI + 0x4]
0041aeff  LEA EAX,[ECX + EAX*0x4]
0041af02  TEST EAX,EAX
0041af04  JZ 0x0041af0b
0041af06  MOV EDX,dword ptr [EBX + EDI*0x4]
0041af09  MOV dword ptr [EAX],EDX
0041af0b  MOV EDX,dword ptr [ESI + 0xc]
0041af0e  INC EDX
0041af0f  INC EDI
0041af10  CMP EDI,EBP
0041af12  MOV dword ptr [ESI + 0xc],EDX
0041af15  JL 0x0041aee0
0041af17  TEST EBX,EBX
0041af19  JZ 0x0041af28
0041af1b  MOV ECX,dword ptr [ESP + 0x14]
0041af1f  MOV EAX,dword ptr [ESI]
0041af21  PUSH ECX
0041af22  PUSH EBX
0041af23  MOV ECX,ESI
0041af25  CALL dword ptr [EAX + 0x8]
0041af28  POP EBP
0041af29  POP EBX
0041af2a  POP EDI
0041af2b  POP ESI
0041af2c  RET 0x4

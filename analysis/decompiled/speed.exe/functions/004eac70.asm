004eac70  MOV EAX,dword ptr [ESP + 0x4]
004eac74  PUSH ESI
004eac75  MOV ESI,dword ptr [ESP + 0xc]
004eac79  CMP EAX,ESI
004eac7b  JZ 0x004eacee
004eac7d  PUSH EBP
004eac7e  MOV EBP,dword ptr [ECX + 0x4]
004eac81  SUB ESI,EAX
004eac83  PUSH EDI
004eac84  MOV EDI,dword ptr [ECX + 0xc]
004eac87  MOV EDX,EAX
004eac89  SUB EDX,EBP
004eac8b  SAR ESI,0x2
004eac8e  SAR EDX,0x2
004eac91  SUB EDI,ESI
004eac93  XOR EAX,EAX
004eac95  SUB EDI,EDX
004eac97  JZ 0x004eacce
004eac99  PUSH EBX
004eac9a  LEA EBX,[EDX*0x4 + 0x0]
004eaca1  MOV dword ptr [ESP + 0x14],EBX
004eaca5  MOV EDI,dword ptr [ECX + 0x4]
004eaca8  ADD EBX,EDI
004eacaa  JZ 0x004eacb6
004eacac  LEA EBP,[EAX + ESI*0x1]
004eacaf  ADD EBP,EDX
004eacb1  MOV EDI,dword ptr [EDI + EBP*0x4]
004eacb4  MOV dword ptr [EBX],EDI
004eacb6  MOV EDI,dword ptr [ECX + 0xc]
004eacb9  MOV EBX,dword ptr [ESP + 0x14]
004eacbd  SUB EDI,ESI
004eacbf  INC EAX
004eacc0  ADD EBX,0x4
004eacc3  SUB EDI,EDX
004eacc5  CMP EAX,EDI
004eacc7  MOV dword ptr [ESP + 0x14],EBX
004eaccb  JC 0x004eaca5
004eaccd  POP EBX
004eacce  MOV EDI,dword ptr [ECX + 0xc]
004eacd1  SUB EDI,ESI
004eacd3  MOV EAX,EDI
004eacd5  CMP EDX,EAX
004eacd7  MOV dword ptr [ECX + 0xc],EDI
004eacda  POP EDI
004eacdb  POP EBP
004eacdc  JNC 0x004eace8
004eacde  MOV EAX,dword ptr [ECX + 0x4]
004eace1  LEA EAX,[EAX + EDX*0x4]
004eace4  POP ESI
004eace5  RET 0x8
004eace8  MOV ECX,dword ptr [ECX + 0x4]
004eaceb  LEA EAX,[ECX + EAX*0x4]
004eacee  POP ESI
004eacef  RET 0x8

0072e9e0  PUSH EBX
0072e9e1  PUSH EBP
0072e9e2  PUSH ESI
0072e9e3  MOV ESI,ECX
0072e9e5  MOV dword ptr [ESI],ESI
0072e9e7  MOV dword ptr [ESI + 0x4],ESI
0072e9ea  LEA EAX,[ESI + 0x8]
0072e9ed  MOV dword ptr [EAX],EAX
0072e9ef  MOV dword ptr [EAX + 0x4],EAX
0072e9f2  LEA EAX,[ESI + 0x10]
0072e9f5  MOV dword ptr [EAX],EAX
0072e9f7  MOV dword ptr [EAX + 0x4],EAX
0072e9fa  LEA EAX,[ESI + 0x18]
0072e9fd  MOV dword ptr [EAX],EAX
0072e9ff  MOV dword ptr [EAX + 0x4],EAX
0072ea02  LEA EAX,[ESI + 0x20]
0072ea05  MOV dword ptr [EAX],EAX
0072ea07  MOV dword ptr [EAX + 0x4],EAX
0072ea0a  LEA EAX,[ESI + 0x28]
0072ea0d  MOV dword ptr [EAX],EAX
0072ea0f  MOV dword ptr [EAX + 0x4],EAX
0072ea12  LEA EAX,[ESI + 0x30]
0072ea15  MOV dword ptr [EAX],EAX
0072ea17  MOV dword ptr [EAX + 0x4],EAX
0072ea1a  LEA EAX,[ESI + 0x38]
0072ea1d  MOV dword ptr [EAX],EAX
0072ea1f  MOV dword ptr [EAX + 0x4],EAX
0072ea22  LEA EAX,[ESI + 0x40]
0072ea25  MOV dword ptr [EAX],EAX
0072ea27  MOV dword ptr [EAX + 0x4],EAX
0072ea2a  XOR EBP,EBP
0072ea2c  LEA EAX,[ESI + 0x48]
0072ea2f  MOV dword ptr [EAX],EAX
0072ea31  MOV dword ptr [EAX + 0x4],EAX
0072ea34  LEA EDX,[ESI + 0x6424]
0072ea3a  MOV dword ptr [EDX],EDX
0072ea3c  MOV dword ptr [EDX + 0x4],EDX
0072ea3f  PUSH EDI
0072ea40  XOR EAX,EAX
0072ea42  MOV ECX,0xaf0
0072ea47  LEA EDI,[ESI + 0x60]
0072ea4a  MOV dword ptr [ESI + 0x50],EBP
0072ea4d  MOV dword ptr [ESI + 0x54],EBP
0072ea50  MOV dword ptr [ESI + 0x58],EBP
0072ea53  MOV dword ptr [ESI + 0x5c],EBP
0072ea56  STOSD.REP ES:EDI
0072ea58  MOV dword ptr [ESI + 0x2c20],EBP
0072ea5e  LEA EAX,[ESI + 0x2c44]
0072ea64  MOV EBX,0x80
0072ea69  LEA ESP,[ESP]
0072ea70  MOV EDI,dword ptr [EDX + 0x4]
0072ea73  LEA ECX,[EAX + -0x20]
0072ea76  MOV dword ptr [EDI],ECX
0072ea78  MOV dword ptr [EDX + 0x4],ECX
0072ea7b  MOV dword ptr [ECX],EDX
0072ea7d  MOV dword ptr [EAX + -0x1c],EDI
0072ea80  MOV EDI,dword ptr [EDX + 0x4]
0072ea83  LEA ECX,[EAX + -0x4]
0072ea86  MOV dword ptr [EDI],ECX
0072ea88  MOV dword ptr [EDX + 0x4],ECX
0072ea8b  MOV dword ptr [ECX],EDX
0072ea8d  MOV dword ptr [EAX],EDI
0072ea8f  MOV EDI,dword ptr [EDX + 0x4]
0072ea92  LEA ECX,[EAX + 0x18]
0072ea95  MOV dword ptr [EDI],ECX
0072ea97  MOV dword ptr [EDX + 0x4],ECX
0072ea9a  MOV dword ptr [EAX + 0x1c],EDI
0072ea9d  MOV dword ptr [ECX],EDX
0072ea9f  MOV EDI,dword ptr [EDX + 0x4]
0072eaa2  LEA ECX,[EAX + 0x34]
0072eaa5  MOV dword ptr [EDI],ECX
0072eaa7  MOV dword ptr [EDX + 0x4],ECX
0072eaaa  MOV dword ptr [EAX + 0x38],EDI
0072eaad  ADD EAX,0x70
0072eab0  DEC EBX
0072eab1  MOV dword ptr [ECX],EDX
0072eab3  JNZ 0x0072ea70
0072eab5  MOV dword ptr [ESI + 0x642c],EBP
0072eabb  XOR EAX,EAX
0072eabd  LEA EDI,[ESI + 0x6430]
0072eac3  MOV ECX,0x100
0072eac8  STOSD.REP ES:EDI
0072eaca  POP EDI
0072eacb  MOV EAX,ESI
0072eacd  POP ESI
0072eace  POP EBP
0072eacf  POP EBX
0072ead0  RET

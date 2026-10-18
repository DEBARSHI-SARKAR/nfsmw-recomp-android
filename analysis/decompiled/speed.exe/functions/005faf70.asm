005faf70  MOV EAX,FS:[0x0]
005faf76  PUSH -0x1
005faf78  PUSH 0x875f88
005faf7d  PUSH EAX
005faf7e  MOV dword ptr FS:[0x0],ESP
005faf85  SUB ESP,0x20
005faf88  PUSH ESI
005faf89  MOV ESI,ECX
005faf8b  MOV EAX,dword ptr [ESI + 0xc]
005faf8e  TEST EAX,EAX
005faf90  JZ 0x005fafa3
005faf92  CMP dword ptr [EAX],0x0
005faf95  JNZ 0x005fafa3
005faf97  MOV ECX,dword ptr [0x0091e00c]
005faf9d  PUSH EAX
005faf9e  CALL 0x005fa780
005fafa3  MOV EAX,dword ptr [ESI + 0x10]
005fafa6  TEST EAX,EAX
005fafa8  JZ 0x005fafbb
005fafaa  CMP dword ptr [EAX],0x0
005fafad  JNZ 0x005fafbb
005fafaf  MOV ECX,dword ptr [0x0091e00c]
005fafb5  PUSH EAX
005fafb6  CALL 0x005fa780
005fafbb  MOV ECX,dword ptr [0x008a2fb8]
005fafc1  MOV EAX,[0x008a2fb4]
005fafc6  MOV EDX,dword ptr [0x008a2fbc]
005fafcc  PUSH 0x0
005fafce  MOV dword ptr [ESP + 0xc],ECX
005fafd2  MOV ECX,dword ptr [ESI + 0x8]
005fafd5  PUSH 0xb0a24adc
005fafda  MOV dword ptr [ESP + 0xc],EAX
005fafde  MOV dword ptr [ESP + 0x14],EDX
005fafe2  CALL 0x00454810
005fafe7  TEST EAX,EAX
005fafe9  JNZ 0x005faff5
005fafeb  PUSH 0x4
005fafed  CALL 0x006269b0
005faff2  ADD ESP,0x4
005faff5  MOV EAX,dword ptr [EAX]
005faff7  TEST EAX,EAX
005faff9  JZ 0x005fb033
005faffb  PUSH 0x0
005faffd  PUSH 0x0
005fafff  PUSH EAX
005fb000  LEA ECX,[ESP + 0x1c]
005fb004  CALL 0x005e2580
005fb009  LEA EAX,[ESP + 0x4]
005fb00d  PUSH EAX
005fb00e  LEA ECX,[ESP + 0x14]
005fb012  PUSH ECX
005fb013  MOV ECX,ESI
005fb015  MOV dword ptr [ESP + 0x34],0x0
005fb01d  CALL 0x005dcca0
005fb022  LEA ECX,[ESP + 0x10]
005fb026  MOV dword ptr [ESP + 0x2c],0xffffffff
005fb02e  CALL 0x0045a430
005fb033  MOV EAX,dword ptr [ESP + 0x4]
005fb037  MOV EDX,dword ptr [ESP + 0x34]
005fb03b  MOV ECX,dword ptr [ESP + 0x8]
005fb03f  MOV dword ptr [EDX],EAX
005fb041  MOV EAX,dword ptr [ESP + 0xc]
005fb045  MOV dword ptr [EDX + 0x4],ECX
005fb048  MOV ECX,dword ptr [ESP + 0x24]
005fb04c  MOV dword ptr [EDX + 0x8],EAX
005fb04f  POP ESI
005fb050  MOV dword ptr FS:[0x0],ECX
005fb057  ADD ESP,0x2c
005fb05a  RET 0x4

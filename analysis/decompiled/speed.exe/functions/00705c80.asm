00705c80  PUSH 0x0
00705c82  PUSH 0x18
00705c84  MOV ECX,0x925b30
00705c89  CALL 0x005d29d0
00705c8e  TEST EAX,EAX
00705c90  JZ 0x00705cbe
00705c92  MOV EDX,dword ptr [ESP + 0x8]
00705c96  MOV ECX,dword ptr [ESP + 0x4]
00705c9a  MOV dword ptr [EAX],ECX
00705c9c  MOV dword ptr [EAX + 0x4],EDX
00705c9f  MOV EDX,dword ptr [ESP + 0xc]
00705ca3  PUSH ESI
00705ca4  MOV ESI,dword ptr [EDX]
00705ca6  LEA ECX,[EAX + 0x8]
00705ca9  MOV dword ptr [ECX],ESI
00705cab  MOV ESI,dword ptr [EDX + 0x4]
00705cae  MOV dword ptr [ECX + 0x4],ESI
00705cb1  MOV ESI,dword ptr [EDX + 0x8]
00705cb4  MOV dword ptr [ECX + 0x8],ESI
00705cb7  MOV EDX,dword ptr [EDX + 0xc]
00705cba  MOV dword ptr [ECX + 0xc],EDX
00705cbd  POP ESI
00705cbe  RET 0xc

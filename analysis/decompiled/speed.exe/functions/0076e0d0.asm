0076e0d0  MOV EAX,FS:[0x0]
0076e0d6  MOV CL,byte ptr [0x009b3b08]
0076e0dc  PUSH -0x1
0076e0de  PUSH 0x88199e
0076e0e3  PUSH EAX
0076e0e4  MOV dword ptr FS:[0x0],ESP
0076e0eb  MOV EAX,0x1
0076e0f0  SUB ESP,0x40
0076e0f3  TEST AL,CL
0076e0f5  JNZ 0x0076e124
0076e0f7  OR dword ptr [0x009b3b08],EAX
0076e0fd  MOV ECX,0x9b3a98
0076e102  MOV dword ptr [ESP + 0x48],0x0
0076e10a  CALL 0x005d5ed0
0076e10f  PUSH 0x88eef0
0076e114  CALL 0x007c5df0
0076e119  ADD ESP,0x4
0076e11c  MOV dword ptr [ESP + 0x48],0xffffffff
0076e124  PUSH ESI
0076e125  MOV ESI,dword ptr [ESP + 0x5c]
0076e129  LEA EAX,[ESP + 0x1c]
0076e12d  PUSH EAX
0076e12e  MOV ECX,ESI
0076e130  CALL 0x007647e0
0076e135  LEA ECX,[ESP + 0x28]
0076e139  PUSH ECX
0076e13a  MOV ECX,ESI
0076e13c  CALL 0x00404390
0076e141  MOV EAX,dword ptr [ESP + 0x58]
0076e145  MOV EDX,dword ptr [EAX + 0x4]
0076e148  FLD float ptr [EAX]
0076e14a  FADD float ptr [ESP + 0x1c]
0076e14e  MOV ECX,dword ptr [EAX + 0x8]
0076e151  MOV dword ptr [ESP + 0x14],EDX
0076e155  FLD float ptr [ESP + 0x14]
0076e159  FADD float ptr [ESP + 0x20]
0076e15d  MOV dword ptr [ESP + 0x18],ECX
0076e161  FLD float ptr [ESP + 0x18]
0076e165  MOV ECX,dword ptr [ESP + 0x54]
0076e169  FADD float ptr [ESP + 0x24]
0076e16d  MOV EDX,dword ptr [ECX]
0076e16f  MOV dword ptr [ESP + 0x4],EDX
0076e173  MOV EDX,dword ptr [ECX + 0x4]
0076e176  FSTP float ptr [ESP + 0x18]
0076e17a  MOV dword ptr [ESP + 0x8],EDX
0076e17e  MOV EDX,dword ptr [ECX + 0x8]
0076e181  FXCH
0076e183  FSTP float ptr [ESP + 0x1c]
0076e187  MOV dword ptr [ESP + 0xc],EDX
0076e18b  MOV EDX,dword ptr [ESP + 0x18]
0076e18f  FSTP float ptr [ESP + 0x20]
0076e193  MOV dword ptr [ESP + 0x24],EDX
0076e197  FLD float ptr [ESP + 0x4]
0076e19b  FADD float ptr [ESP + 0x28]
0076e19f  FLD float ptr [ESP + 0x8]
0076e1a3  FADD float ptr [ESP + 0x2c]
0076e1a7  FLD float ptr [ESP + 0xc]
0076e1ab  FADD float ptr [ESP + 0x30]
0076e1af  FSTP float ptr [ESP + 0x18]
0076e1b3  MOV EDX,dword ptr [ESP + 0x18]
0076e1b7  MOV dword ptr [ESP + 0x30],EDX
0076e1bb  FXCH
0076e1bd  LEA EDX,[ESP + 0x1c]
0076e1c1  FSTP float ptr [ESP + 0x28]
0076e1c5  PUSH EDX
0076e1c6  PUSH EAX
0076e1c7  FSTP float ptr [ESP + 0x34]
0076e1cb  LEA EAX,[ESP + 0x30]
0076e1cf  PUSH EAX
0076e1d0  PUSH ECX
0076e1d1  MOV ECX,0x9b3a98
0076e1d6  CALL 0x005d0bf0
0076e1db  MOV EDX,dword ptr [ESP + 0x60]
0076e1df  LEA ECX,[ESP + 0x34]
0076e1e3  PUSH ECX
0076e1e4  PUSH EDX
0076e1e5  MOV ECX,0x9b3a98
0076e1ea  CALL 0x005d0c70
0076e1ef  MOV ECX,dword ptr [ESP + 0x34]
0076e1f3  MOV EAX,dword ptr [ESP + 0x64]
0076e1f7  MOV EDX,dword ptr [ESP + 0x38]
0076e1fb  MOV dword ptr [EAX],ECX
0076e1fd  MOV ECX,dword ptr [ESP + 0x3c]
0076e201  MOV dword ptr [EAX + 0x4],EDX
0076e204  MOV dword ptr [EAX + 0x8],ECX
0076e207  MOV ECX,dword ptr [ESP + 0x44]
0076e20b  POP ESI
0076e20c  MOV dword ptr FS:[0x0],ECX
0076e213  ADD ESP,0x4c
0076e216  RET 0x14

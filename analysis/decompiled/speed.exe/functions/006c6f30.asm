006c6f30  PUSH EBP
006c6f31  MOV EBP,ESP
006c6f33  AND ESP,0xfffffff0
006c6f36  SUB ESP,0x4c
006c6f39  MOV EAX,dword ptr [EBP + 0x8]
006c6f3c  TEST EAX,EAX
006c6f3e  PUSH ESI
006c6f3f  JNZ 0x006c6ffd
006c6f45  MOV EAX,[0x00982a20]
006c6f4a  MOV ESI,dword ptr [EAX + 0x4]
006c6f4d  MOV EAX,dword ptr [EBP + 0xc]
006c6f50  IMUL ESI,ESI,0x70
006c6f53  MOV ECX,dword ptr [EAX]
006c6f55  MOV EDX,dword ptr [EAX + 0x4]
006c6f58  MOV dword ptr [ESP + 0x20],ECX
006c6f5c  MOV ECX,dword ptr [EAX + 0x8]
006c6f5f  MOV dword ptr [ESP + 0x24],EDX
006c6f63  MOV EDX,dword ptr [EAX + 0xc]
006c6f66  MOV dword ptr [ESP + 0x28],ECX
006c6f6a  MOV ECX,dword ptr [EAX + 0x10]
006c6f6d  MOV dword ptr [ESP + 0x10],EDX
006c6f71  MOV EDX,dword ptr [EAX + 0x14]
006c6f74  LEA EAX,[ESP + 0x10]
006c6f78  MOV dword ptr [ESP + 0x14],ECX
006c6f7c  PUSH EAX
006c6f7d  LEA ECX,[ESP + 0x24]
006c6f81  MOV dword ptr [ESP + 0x1c],EDX
006c6f85  MOV EDX,dword ptr [EBP + 0x10]
006c6f88  PUSH ECX
006c6f89  PUSH EDX
006c6f8a  ADD ESI,0x9195e0
006c6f90  CALL 0x006be800
006c6f95  MOV ECX,dword ptr [ESI]
006c6f97  FLD float ptr [ESP + 0x1c]
006c6f9b  LEA EAX,[ESP + 0x3c]
006c6f9f  FADD float ptr [ESP + 0x2c]
006c6fa3  PUSH EAX
006c6fa4  ADD ECX,0x80
006c6faa  FMUL float ptr [0x008933d4]
006c6fb0  PUSH ECX
006c6fb1  LEA EDX,[ESP + 0x54]
006c6fb5  PUSH EDX
006c6fb6  FSTP float ptr [ESP + 0x48]
006c6fba  FLD float ptr [ESP + 0x2c]
006c6fbe  FADD float ptr [ESP + 0x3c]
006c6fc2  FMUL float ptr [0x008933d4]
006c6fc8  FSTP float ptr [ESP + 0x4c]
006c6fcc  FLD float ptr [ESP + 0x30]
006c6fd0  FADD float ptr [ESP + 0x40]
006c6fd4  FMUL float ptr [0x008933d4]
006c6fda  FSTP float ptr [ESP + 0x50]
006c6fde  CALL 0x0045ed20
006c6fe3  MOV EAX,dword ptr [ESI + 0x40]
006c6fe6  FLD float ptr [EAX + 0xc0]
006c6fec  ADD ESP,0x18
006c6fef  FSUB float ptr [ESP + 0x48]
006c6ff3  CALL 0x007c4b80
006c6ff8  POP ESI
006c6ff9  MOV ESP,EBP
006c6ffb  POP EBP
006c6ffc  RET
006c6ffd  XOR EAX,EAX
006c6fff  POP ESI
006c7000  MOV ESP,EBP
006c7002  POP EBP
006c7003  RET

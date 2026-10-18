004e5da0  PUSH EBP
004e5da1  MOV EBP,ESP
004e5da3  AND ESP,0xfffffff0
004e5da6  PUSH -0x1
004e5da8  PUSH 0x86ce9b
004e5dad  MOV EAX,FS:[0x0]
004e5db3  PUSH EAX
004e5db4  MOV dword ptr FS:[0x0],ESP
004e5dbb  SUB ESP,0xcc
004e5dc1  MOV EAX,[0x008f86f8]
004e5dc6  TEST EAX,EAX
004e5dc8  PUSH ESI
004e5dc9  PUSH EDI
004e5dca  JZ 0x004e603b
004e5dd0  MOV ESI,dword ptr [EBP + 0x8]
004e5dd3  MOV EAX,dword ptr [ESI]
004e5dd5  MOV ECX,ESI
004e5dd7  CALL dword ptr [EAX + 0x24]
004e5dda  TEST AL,AL
004e5ddc  JNZ 0x004e603b
004e5de2  MOV EDX,dword ptr [ESI]
004e5de4  MOV ECX,ESI
004e5de6  CALL dword ptr [EDX + 0x44]
004e5de9  MOV ECX,EAX
004e5deb  CALL 0x00452410
004e5df0  CMP EAX,0xce70d7db
004e5df5  JNZ 0x004e603b
004e5dfb  MOV EAX,dword ptr [ESI]
004e5dfd  MOV ECX,ESI
004e5dff  CALL dword ptr [EAX + 0x44]
004e5e02  PUSH EAX
004e5e03  LEA ECX,[ESP + 0x40]
004e5e07  CALL 0x00407cc0
004e5e0c  MOV ECX,dword ptr [ESP + 0x44]
004e5e10  MOV AL,byte ptr [ECX + 0x1d]
004e5e13  TEST AL,AL
004e5e15  MOV dword ptr [ESP + 0xdc],0x0
004e5e20  JZ 0x004e6027
004e5e26  MOV EDX,dword ptr [ESI]
004e5e28  LEA EAX,[ESP + 0x90]
004e5e2f  PUSH EAX
004e5e30  MOV ECX,ESI
004e5e32  CALL dword ptr [EDX + 0x3c]
004e5e35  FLD float ptr [ESP + 0xa4]
004e5e3c  FCOMP float ptr [0x0089119c]
004e5e42  MOV EDI,dword ptr [EBP + 0xc]
004e5e45  FNSTSW AX
004e5e47  TEST AH,0x41
004e5e4a  JNZ 0x004e5efc
004e5e50  MOV ECX,EDI
004e5e52  SHL ECX,0x4
004e5e55  ADD ECX,0x914520
004e5e5b  PUSH ECX
004e5e5c  CALL 0x00402240
004e5e61  FCOMP float ptr [0x008959e4]
004e5e67  ADD ESP,0x4
004e5e6a  FNSTSW AX
004e5e6c  TEST AH,0x5
004e5e6f  JNP 0x004e6027
004e5e75  MOV EAX,dword ptr [ESP + 0xc4]
004e5e7c  FLD float ptr [EDI*0x8 + 0x9144b4]
004e5e83  MOV ECX,dword ptr [ESP + 0xc8]
004e5e8a  FLD float ptr [EDI*0x8 + 0x9144b0]
004e5e91  MOV EDX,dword ptr [ESP + 0xc0]
004e5e98  FSTP float ptr [ESP + 0x28]
004e5e9c  MOV dword ptr [ESP + 0x14],EAX
004e5ea0  LEA EAX,[ESP + 0x20]
004e5ea4  FCHS
004e5ea6  MOV dword ptr [ESP + 0x18],ECX
004e5eaa  FSTP float ptr [ESP + 0x20]
004e5eae  MOV dword ptr [ESP + 0x10],EDX
004e5eb2  MOV EDX,dword ptr [ESP + 0xcc]
004e5eb9  PUSH EAX
004e5eba  LEA ECX,[ESP + 0x14]
004e5ebe  PUSH ECX
004e5ebf  MOV dword ptr [ESP + 0x24],EDX
004e5ec3  MOV dword ptr [ESP + 0x1c],0x0
004e5ecb  MOV dword ptr [ESP + 0x2c],0x0
004e5ed3  CALL 0x00401960
004e5ed8  FCOMP float ptr [0x00891060]
004e5ede  ADD ESP,0x8
004e5ee1  LEA ECX,[ESP + 0x3c]
004e5ee5  FNSTSW AX
004e5ee7  TEST AH,0x41
004e5eea  JZ 0x004e602b
004e5ef0  CALL 0x004d9be0
004e5ef5  MOV EAX,dword ptr [EAX]
004e5ef7  JMP 0x004e5f9a
004e5efc  MOV EAX,dword ptr [ESP + 0xc4]
004e5f03  MOV EDX,dword ptr [ESP + 0xc0]
004e5f0a  MOV ECX,dword ptr [ESP + 0xc8]
004e5f11  MOV dword ptr [ESP + 0x14],EAX
004e5f15  MOV dword ptr [ESP + 0x10],EDX
004e5f19  MOV EDX,dword ptr [ESP + 0xcc]
004e5f20  MOV dword ptr [ESP + 0x18],ECX
004e5f24  MOV ECX,dword ptr [0x008efa24]
004e5f2a  MOV EAX,EDI
004e5f2c  SHL EAX,0x4
004e5f2f  PUSH ECX
004e5f30  MOV dword ptr [ESP + 0x20],EDX
004e5f34  LEA EDX,[EAX + 0x914450]
004e5f3a  PUSH EDX
004e5f3b  LEA EAX,[EAX + 0x914430]
004e5f41  PUSH EAX
004e5f42  LEA ECX,[ESP + 0x2c]
004e5f46  PUSH ECX
004e5f47  CALL 0x0045f640
004e5f4c  FLD float ptr [ESP + 0x34]
004e5f50  MOV EDX,dword ptr [ESP + 0x30]
004e5f54  FCHS
004e5f56  MOV EAX,dword ptr [ESP + 0x38]
004e5f5a  FSTP float ptr [ESP + 0x90]
004e5f61  LEA ECX,[ESP + 0x90]
004e5f68  MOV dword ptr [ESP + 0x98],EDX
004e5f6f  PUSH ECX
004e5f70  LEA EDX,[ESP + 0x24]
004e5f74  PUSH EDX
004e5f75  MOV dword ptr [ESP + 0x9c],EAX
004e5f7c  CALL 0x00401960
004e5f81  FCOMP float ptr [0x008910f8]
004e5f87  ADD ESP,0x18
004e5f8a  FNSTSW AX
004e5f8c  TEST AH,0x41
004e5f8f  JZ 0x004e6027
004e5f95  MOV EAX,0xc
004e5f9a  MOV dword ptr [ESP + 0x50],EAX
004e5f9e  MOV EAX,dword ptr [EDI*0x4 + 0x9142d0]
004e5fa5  MOV dword ptr [ESP + 0x58],0x0
004e5fad  MOV dword ptr [ESP + 0x60],0x0
004e5fb5  MOV dword ptr [ESP + 0x64],0x0
004e5fbd  MOV dword ptr [ESP + 0x68],0x0
004e5fc5  MOV dword ptr [ESP + 0x70],0x0
004e5fcd  MOV dword ptr [ESP + 0x54],EAX
004e5fd1  MOV ECX,dword ptr [EAX + 0x34]
004e5fd4  CALL 0x004ab890
004e5fd9  FSTP float ptr [ESP + 0x58]
004e5fdd  MOV ECX,dword ptr [ESP + 0xc8]
004e5fe4  FLD float ptr [ESP + 0xc0]
004e5feb  MOV EDX,dword ptr [ESP + 0xc4]
004e5ff2  FCHS
004e5ff4  MOV EAX,dword ptr [ESI + 0x8]
004e5ff7  FSTP float ptr [ESP + 0x64]
004e5ffb  MOV dword ptr [ESP + 0x60],ECX
004e5fff  MOV ECX,dword ptr [0x00911f80]
004e6005  MOV dword ptr [ESP + 0x68],EDX
004e6009  LEA EDX,[ESP + 0x50]
004e600d  MOV dword ptr [ESP + 0x70],EAX
004e6011  MOV EAX,dword ptr [ECX]
004e6013  PUSH EDX
004e6014  CALL dword ptr [EAX + 0xc]
004e6017  TEST EAX,EAX
004e6019  JZ 0x004e6027
004e601b  MOV EDX,dword ptr [EAX]
004e601d  LEA ECX,[ESP + 0x50]
004e6021  PUSH ECX
004e6022  MOV ECX,EAX
004e6024  CALL dword ptr [EDX + 0xc]
004e6027  LEA ECX,[ESP + 0x3c]
004e602b  MOV dword ptr [ESP + 0xdc],0xffffffff
004e6036  CALL 0x0045a430
004e603b  MOV ECX,dword ptr [ESP + 0xd4]
004e6042  POP EDI
004e6043  MOV dword ptr FS:[0x0],ECX
004e604a  POP ESI
004e604b  MOV ESP,EBP
004e604d  POP EBP
004e604e  RET

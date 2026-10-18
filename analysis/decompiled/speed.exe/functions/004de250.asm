004de250  SUB ESP,0x18
004de253  PUSH ESI
004de254  MOV ESI,ECX
004de256  MOV EAX,dword ptr [ESI + 0x14]
004de259  MOV EAX,dword ptr [EAX + 0x34]
004de25c  ADD EAX,0x40
004de25f  PUSH EAX
004de260  CALL 0x004ba5c0
004de265  ADD ESP,0x4
004de268  TEST EAX,EAX
004de26a  JNZ 0x004de277
004de26c  FLD float ptr [0x00890968]
004de272  POP ESI
004de273  ADD ESP,0x18
004de276  RET
004de277  MOV ECX,dword ptr [EAX + 0x50]
004de27a  MOV EDX,dword ptr [EAX + 0x54]
004de27d  MOV EAX,dword ptr [ESI + 0x14]
004de280  MOV EAX,dword ptr [EAX + 0x34]
004de283  MOV dword ptr [ESP + 0x4],ECX
004de287  FLD float ptr [ESP + 0x4]
004de28b  MOV ECX,dword ptr [EAX + 0x50]
004de28e  MOV dword ptr [ESP + 0xc],ECX
004de292  FSUB float ptr [ESP + 0xc]
004de296  MOV dword ptr [ESP + 0x8],EDX
004de29a  MOV EDX,dword ptr [EAX + 0x54]
004de29d  FSTP float ptr [ESP + 0x14]
004de2a1  MOV EAX,dword ptr [ESP + 0x14]
004de2a5  FLD float ptr [ESP + 0x8]
004de2a9  MOV dword ptr [ESP + 0x10],EDX
004de2ad  FSUB float ptr [ESP + 0x10]
004de2b1  MOV dword ptr [ESP + 0x4],EAX
004de2b5  POP ESI
004de2b6  FSTP float ptr [ESP + 0x14]
004de2ba  MOV ECX,dword ptr [ESP + 0x14]
004de2be  MOV dword ptr [ESP + 0x4],ECX
004de2c2  FLD float ptr [ESP + 0x4]
004de2c6  FMUL float ptr [ESP + 0x4]
004de2ca  FLD float ptr [ESP]
004de2cd  FMUL float ptr [ESP]
004de2d0  FADDP
004de2d2  FSQRT
004de2d4  ADD ESP,0x18
004de2d7  RET

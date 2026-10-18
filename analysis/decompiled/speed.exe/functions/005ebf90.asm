005ebf90  PUSH ECX
005ebf91  PUSH ESI
005ebf92  MOV ESI,ECX
005ebf94  MOV ECX,dword ptr [ESI + 0x90]
005ebf9a  MOV EAX,dword ptr [ECX]
005ebf9c  CMP EAX,ECX
005ebf9e  MOV dword ptr [ESP + 0x4],EAX
005ebfa2  JZ 0x005ebfc1
005ebfa4  MOV ECX,dword ptr [EAX + 0x10]
005ebfa7  MOV EAX,dword ptr [ECX]
005ebfa9  CALL dword ptr [EAX + 0x8]
005ebfac  LEA ECX,[ESP + 0x4]
005ebfb0  CALL 0x005dfad0
005ebfb5  MOV EAX,dword ptr [ESP + 0x4]
005ebfb9  CMP EAX,dword ptr [ESI + 0x90]
005ebfbf  JNZ 0x005ebfa4
005ebfc1  MOV ECX,dword ptr [ESI + 0x90]
005ebfc7  MOV EDX,dword ptr [ECX + 0x4]
005ebfca  ADD ESI,0x8c
005ebfd0  PUSH EDX
005ebfd1  MOV ECX,ESI
005ebfd3  CALL 0x005e5ed0
005ebfd8  MOV EAX,dword ptr [ESI + 0x4]
005ebfdb  MOV dword ptr [EAX + 0x4],EAX
005ebfde  MOV EAX,dword ptr [ESI + 0x4]
005ebfe1  MOV dword ptr [ESI + 0x8],0x0
005ebfe8  MOV dword ptr [EAX],EAX
005ebfea  MOV ESI,dword ptr [ESI + 0x4]
005ebfed  MOV dword ptr [ESI + 0x8],ESI
005ebff0  POP ESI
005ebff1  POP ECX
005ebff2  RET

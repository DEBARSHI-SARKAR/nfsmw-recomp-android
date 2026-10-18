005edcb0  PUSH ECX
005edcb1  PUSH EDI
005edcb2  MOV EDI,ECX
005edcb4  MOV ECX,dword ptr [EDI + 0x9c]
005edcba  MOV EAX,dword ptr [ECX]
005edcbc  CMP EAX,ECX
005edcbe  MOV dword ptr [ESP + 0x4],EAX
005edcc2  JZ 0x005edd05
005edcc4  PUSH ESI
005edcc5  MOV ESI,dword ptr [ESP + 0x10]
005edcc9  LEA ESP,[ESP]
005edcd0  MOV EDX,dword ptr [EAX + 0x10]
005edcd3  ADD EAX,0x10
005edcd6  MOV ECX,ESI
005edcd8  MOV dword ptr [ECX],EDX
005edcda  MOV EDX,dword ptr [EAX + 0x4]
005edcdd  MOV dword ptr [ECX + 0x4],EDX
005edce0  MOV EDX,dword ptr [EAX + 0x8]
005edce3  MOV dword ptr [ECX + 0x8],EDX
005edce6  MOV EAX,dword ptr [EAX + 0xc]
005edce9  MOV dword ptr [ECX + 0xc],EAX
005edcec  LEA ECX,[ESP + 0x8]
005edcf0  ADD ESI,0x10
005edcf3  CALL 0x005e6920
005edcf8  MOV EAX,dword ptr [ESP + 0x8]
005edcfc  CMP EAX,dword ptr [EDI + 0x9c]
005edd02  JNZ 0x005edcd0
005edd04  POP ESI
005edd05  MOV EAX,dword ptr [EDI + 0xa0]
005edd0b  POP EDI
005edd0c  POP ECX
005edd0d  RET 0x4

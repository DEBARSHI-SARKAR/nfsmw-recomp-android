005fae00  MOV EAX,FS:[0x0]
005fae06  PUSH -0x1
005fae08  PUSH 0x875f68
005fae0d  PUSH EAX
005fae0e  MOV dword ptr FS:[0x0],ESP
005fae15  SUB ESP,0x20
005fae18  PUSH ESI
005fae19  MOV ESI,ECX
005fae1b  MOV EAX,dword ptr [ESI + 0xc]
005fae1e  TEST EAX,EAX
005fae20  JZ 0x005fae33
005fae22  CMP dword ptr [EAX],0x0
005fae25  JNZ 0x005fae33
005fae27  MOV ECX,dword ptr [0x0091e00c]
005fae2d  PUSH EAX
005fae2e  CALL 0x005fa780
005fae33  MOV EAX,dword ptr [ESI + 0x10]
005fae36  TEST EAX,EAX
005fae38  JZ 0x005fae4b
005fae3a  CMP dword ptr [EAX],0x0
005fae3d  JNZ 0x005fae4b
005fae3f  MOV ECX,dword ptr [0x0091e00c]
005fae45  PUSH EAX
005fae46  CALL 0x005fa780
005fae4b  MOV ECX,dword ptr [0x008a2fb8]
005fae51  MOV EAX,[0x008a2fb4]
005fae56  MOV EDX,dword ptr [0x008a2fbc]
005fae5c  PUSH 0x0
005fae5e  MOV dword ptr [ESP + 0xc],ECX
005fae62  MOV ECX,dword ptr [ESI + 0x8]
005fae65  PUSH 0xe43b2ccc
005fae6a  MOV dword ptr [ESP + 0xc],EAX
005fae6e  MOV dword ptr [ESP + 0x14],EDX
005fae72  CALL 0x00454810
005fae77  TEST EAX,EAX
005fae79  JNZ 0x005fae85
005fae7b  PUSH 0x4
005fae7d  CALL 0x006269b0
005fae82  ADD ESP,0x4
005fae85  MOV EAX,dword ptr [EAX]
005fae87  TEST EAX,EAX
005fae89  JZ 0x005faec5
005fae8b  PUSH 0x0
005fae8d  PUSH 0x0
005fae8f  PUSH EAX
005fae90  LEA ECX,[ESP + 0x1c]
005fae94  CALL 0x005e2580
005fae99  PUSH 0x0
005fae9b  LEA EAX,[ESP + 0x8]
005fae9f  PUSH EAX
005faea0  LEA ECX,[ESP + 0x18]
005faea4  PUSH ECX
005faea5  MOV ECX,ESI
005faea7  MOV dword ptr [ESP + 0x38],0x0
005faeaf  CALL 0x005dcd00
005faeb4  LEA ECX,[ESP + 0x10]
005faeb8  MOV dword ptr [ESP + 0x2c],0xffffffff
005faec0  CALL 0x0045a430
005faec5  MOV EAX,dword ptr [ESP + 0x4]
005faec9  MOV EDX,dword ptr [ESP + 0x34]
005faecd  MOV ECX,dword ptr [ESP + 0x8]
005faed1  MOV dword ptr [EDX],EAX
005faed3  MOV EAX,dword ptr [ESP + 0xc]
005faed7  MOV dword ptr [EDX + 0x4],ECX
005faeda  MOV ECX,dword ptr [ESP + 0x24]
005faede  MOV dword ptr [EDX + 0x8],EAX
005faee1  POP ESI
005faee2  MOV dword ptr FS:[0x0],ECX
005faee9  ADD ESP,0x2c
005faeec  RET 0x4

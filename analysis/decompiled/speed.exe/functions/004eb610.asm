004eb610  PUSH -0x1
004eb612  PUSH 0x86d0ad
004eb617  MOV EAX,FS:[0x0]
004eb61d  PUSH EAX
004eb61e  MOV dword ptr FS:[0x0],ESP
004eb625  PUSH ECX
004eb626  PUSH EBX
004eb627  XOR EBX,EBX
004eb629  PUSH ESI
004eb62a  MOV ESI,ECX
004eb62c  MOV dword ptr [ESP + 0x8],ESI
004eb630  MOV dword ptr [ESI + 0x4],EBX
004eb633  MOV dword ptr [ESI + 0x8],EBX
004eb636  MOV dword ptr [ESI + 0xc],EBX
004eb639  MOV dword ptr [ESI + 0x10],EBX
004eb63c  MOV dword ptr [ESI + 0x14],EBX
004eb63f  MOV dword ptr [ESI + 0x20],EBX
004eb642  MOV dword ptr [ESI + 0x24],EBX
004eb645  MOV dword ptr [ESI + 0x2c],EBX
004eb648  MOV dword ptr [ESI + 0x30],EBX
004eb64b  MOV dword ptr [ESI + 0x34],EBX
004eb64e  MOV dword ptr [ESI + 0x3c],EBX
004eb651  MOV dword ptr [ESI + 0x40],EBX
004eb654  PUSH EBX
004eb655  PUSH EBX
004eb656  PUSH EBX
004eb657  LEA ECX,[ESI + 0x48]
004eb65a  MOV dword ptr [ESP + 0x20],EBX
004eb65e  MOV dword ptr [ESI],0x899090
004eb664  MOV dword ptr [ESI + 0x44],EBX
004eb667  CALL 0x004ab370
004eb66c  PUSH EBX
004eb66d  PUSH EBX
004eb66e  PUSH EBX
004eb66f  LEA ECX,[ESI + 0xd0]
004eb675  MOV byte ptr [ESP + 0x20],0x1
004eb67a  MOV dword ptr [ESI + 0x5c],EBX
004eb67d  MOV dword ptr [ESI + 0x78],EBX
004eb680  MOV dword ptr [ESI + 0x7c],EBX
004eb683  MOV byte ptr [ESI + 0x80],BL
004eb689  MOV dword ptr [ESI + 0xc8],EBX
004eb68f  CALL 0x004ab370
004eb694  PUSH EBX
004eb695  PUSH EBX
004eb696  PUSH EBX
004eb697  LEA ECX,[ESI + 0xe4]
004eb69d  MOV byte ptr [ESP + 0x20],0x2
004eb6a2  CALL 0x004d5730
004eb6a7  PUSH EBX
004eb6a8  PUSH EBX
004eb6a9  PUSH EBX
004eb6aa  LEA ECX,[ESI + 0xf8]
004eb6b0  MOV byte ptr [ESP + 0x20],0x3
004eb6b5  CALL 0x004d57f0
004eb6ba  PUSH EBX
004eb6bb  PUSH EBX
004eb6bc  PUSH EBX
004eb6bd  LEA ECX,[ESI + 0x10c]
004eb6c3  MOV byte ptr [ESP + 0x20],0x4
004eb6c8  CALL 0x004d5910
004eb6cd  MOV ECX,dword ptr [ESP + 0xc]
004eb6d1  MOV EAX,0x2
004eb6d6  MOV dword ptr [ESI + 0xb0],EAX
004eb6dc  MOV dword ptr [ESI + 0xac],EAX
004eb6e2  MOV dword ptr [ESI + 0x44],EBX
004eb6e5  MOV dword ptr [ESI + 0x78],EBX
004eb6e8  MOV dword ptr [ESI + 0x7c],EBX
004eb6eb  MOV dword ptr [ESI + 0xc8],EBX
004eb6f1  MOV dword ptr [ESI + 0x5c],EBX
004eb6f4  MOV dword ptr [ESI + 0x74],EBX
004eb6f7  MOV dword ptr [ESI + 0xb4],EBX
004eb6fd  MOV dword ptr [ESI + 0xb8],EBX
004eb703  MOV dword ptr [ESI + 0xbc],EBX
004eb709  MOV dword ptr [ESI + 0xc0],EBX
004eb70f  MOV EAX,ESI
004eb711  POP ESI
004eb712  POP EBX
004eb713  MOV dword ptr FS:[0x0],ECX
004eb71a  ADD ESP,0x10
004eb71d  RET

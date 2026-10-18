007bee20  PUSH ECX
007bee21  PUSH ESI
007bee22  MOV dword ptr [ESP + 0x4],0x0
007bee2a  RDTSC
007bee2c  MOV dword ptr [ESP + 0x4],EAX
007bee30  MOV EDX,dword ptr [ESP + 0x4]
007bee34  AND EDX,0x3
007bee37  MOV EAX,dword ptr [EDX*0x4 + 0x8f85c8]
007bee3e  MOV EDX,dword ptr [EDX*0x4 + 0x8f85d8]
007bee45  MOV dword ptr [ECX],EDX
007bee47  MOV EDX,dword ptr [ESP + 0xc]
007bee4b  MOV dword ptr [ECX + 0x4],0x10804201
007bee52  MOV dword ptr [ECX + 0x8],0x1c841202
007bee59  MOV dword ptr [ECX + 0xc],0x10804201
007bee60  MOV EDX,dword ptr [EDX]
007bee62  MOV dword ptr [ECX + 0x10],EDX
007bee65  MOV EDX,dword ptr [ESP + 0x10]
007bee69  MOV EDX,dword ptr [EDX]
007bee6b  MOV dword ptr [ECX + 0x14],EDX
007bee6e  MOV EDX,EAX
007bee70  IMUL EDX,EAX
007bee73  XOR EDX,0x10804201
007bee79  MOV dword ptr [ECX + 0x4],EDX
007bee7c  IMUL EDX,EAX
007bee7f  XOR EDX,0x1c841202
007bee85  MOV ESI,dword ptr [ECX + 0x10]
007bee88  MOV dword ptr [ECX + 0x8],EDX
007bee8b  IMUL EDX,EAX
007bee8e  XOR EDX,0x10804201
007bee94  MOV dword ptr [ECX + 0xc],EDX
007bee97  IMUL EDX,EAX
007bee9a  XOR ESI,EDX
007bee9c  MOV EDX,ESI
007bee9e  IMUL EDX,EAX
007beea1  MOV dword ptr [ECX + 0x10],ESI
007beea4  MOV ESI,dword ptr [ECX + 0x14]
007beea7  XOR ESI,EDX
007beea9  MOV EDX,ESI
007beeab  IMUL EDX,EAX
007beeae  MOV dword ptr [ECX + 0x14],ESI
007beeb1  MOV ESI,dword ptr [ECX + 0x18]
007beeb4  XOR ESI,EDX
007beeb6  MOV EDX,ESI
007beeb8  IMUL EDX,EAX
007beebb  MOV EAX,dword ptr [ECX + 0x1c]
007beebe  XOR EAX,EDX
007beec0  MOV dword ptr [ECX + 0x18],ESI
007beec3  MOV dword ptr [ECX + 0x1c],EAX
007beec6  MOV EAX,ECX
007beec8  POP ESI
007beec9  POP ECX
007beeca  RET 0x8

007bed70  PUSH ECX
007bed71  PUSH ESI
007bed72  MOV EAX,ECX
007bed74  MOV dword ptr [ESP + 0x4],0x0
007bed7c  MOV dword ptr [ESP + 0x4],ESP
007bed80  MOV EDX,dword ptr [ESP + 0x4]
007bed84  AND EDX,0x3
007bed87  MOV ECX,dword ptr [EDX*0x4 + 0x90620c]
007bed8e  MOV EDX,dword ptr [EDX*0x4 + 0x90621c]
007bed95  MOV dword ptr [EAX],EDX
007bed97  MOV EDX,dword ptr [ESP + 0xc]
007bed9b  MOV dword ptr [EAX + 0x4],0x10804201
007beda2  MOV dword ptr [EAX + 0x8],0x10804205
007beda9  MOV dword ptr [EAX + 0xc],0x14205052
007bedb0  MOV EDX,dword ptr [EDX]
007bedb2  MOV dword ptr [EAX + 0x10],EDX
007bedb5  MOV EDX,dword ptr [ESP + 0x10]
007bedb9  MOV EDX,dword ptr [EDX]
007bedbb  MOV dword ptr [EAX + 0x14],EDX
007bedbe  MOV EDX,ECX
007bedc0  IMUL EDX,ECX
007bedc3  XOR EDX,0x10804201
007bedc9  MOV dword ptr [EAX + 0x4],EDX
007bedcc  IMUL EDX,ECX
007bedcf  XOR EDX,0x10804205
007bedd5  MOV ESI,dword ptr [EAX + 0x10]
007bedd8  MOV dword ptr [EAX + 0x8],EDX
007beddb  IMUL EDX,ECX
007bedde  XOR EDX,0x14205052
007bede4  MOV dword ptr [EAX + 0xc],EDX
007bede7  IMUL EDX,ECX
007bedea  XOR ESI,EDX
007bedec  MOV EDX,ESI
007bedee  IMUL EDX,ECX
007bedf1  MOV dword ptr [EAX + 0x10],ESI
007bedf4  MOV ESI,dword ptr [EAX + 0x14]
007bedf7  XOR ESI,EDX
007bedf9  MOV EDX,ESI
007bedfb  IMUL EDX,ECX
007bedfe  MOV dword ptr [EAX + 0x14],ESI
007bee01  MOV ESI,dword ptr [EAX + 0x18]
007bee04  XOR ESI,EDX
007bee06  MOV EDX,ESI
007bee08  IMUL EDX,ECX
007bee0b  MOV ECX,dword ptr [EAX + 0x1c]
007bee0e  XOR ECX,EDX
007bee10  MOV dword ptr [EAX + 0x18],ESI
007bee13  MOV dword ptr [EAX + 0x1c],ECX
007bee16  POP ESI
007bee17  POP ECX
007bee18  RET 0x8

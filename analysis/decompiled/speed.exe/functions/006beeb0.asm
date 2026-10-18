006beeb0  PUSH ECX
006beeb1  MOVSX EAX,word ptr [ECX + 0x2e]
006beeb5  MOVSX EDX,word ptr [ECX + 0x30]
006beeb9  MOV dword ptr [ESP],EAX
006beebc  MOVSX EAX,word ptr [ECX + 0x2c]
006beec0  FILD dword ptr [ESP]
006beec3  MOV dword ptr [ESP],EDX
006beec6  PUSH ESI
006beec7  FMUL float ptr [0x008ae864]
006beecd  XOR EDX,EDX
006beecf  FILD dword ptr [ESP + 0x4]
006beed3  MOV dword ptr [ESP + 0x4],EAX
006beed7  MOV EAX,dword ptr [ESP + 0xc]
006beedb  FMUL float ptr [0x008ae864]
006beee1  MOV dword ptr [EAX + 0xc],EDX
006beee4  FILD dword ptr [ESP + 0x4]
006beee8  FMUL float ptr [0x008ae864]
006beeee  FSTP float ptr [EAX]
006beef0  FXCH
006beef2  FSTP float ptr [EAX + 0x4]
006beef5  FSTP float ptr [EAX + 0x8]
006beef8  MOVSX ESI,word ptr [ECX + 0x34]
006beefc  MOV dword ptr [ESP + 0xc],ESI
006bef00  MOVSX ESI,word ptr [ECX + 0x36]
006bef04  FILD dword ptr [ESP + 0xc]
006bef08  MOV dword ptr [ESP + 0xc],ESI
006bef0c  MOVSX ESI,word ptr [ECX + 0x32]
006bef10  MOV dword ptr [EAX + 0x1c],EDX
006bef13  FMUL float ptr [0x008ae864]
006bef19  FILD dword ptr [ESP + 0xc]
006bef1d  MOV dword ptr [ESP + 0xc],ESI
006bef21  FMUL float ptr [0x008ae864]
006bef27  FILD dword ptr [ESP + 0xc]
006bef2b  FMUL float ptr [0x008ae864]
006bef31  FSTP float ptr [EAX + 0x10]
006bef34  FXCH
006bef36  FSTP float ptr [EAX + 0x14]
006bef39  FSTP float ptr [EAX + 0x18]
006bef3c  MOVSX ESI,word ptr [ECX + 0x3a]
006bef40  MOV dword ptr [ESP + 0xc],ESI
006bef44  MOVSX ESI,word ptr [ECX + 0x3c]
006bef48  FILD dword ptr [ESP + 0xc]
006bef4c  MOVSX ECX,word ptr [ECX + 0x38]
006bef50  MOV dword ptr [ESP + 0xc],ESI
006bef54  MOV dword ptr [EAX + 0x2c],EDX
006bef57  FMUL float ptr [0x008ae864]
006bef5d  POP ESI
006bef5e  FILD dword ptr [ESP + 0x8]
006bef62  MOV dword ptr [ESP + 0x8],ECX
006bef66  FMUL float ptr [0x008ae864]
006bef6c  FILD dword ptr [ESP + 0x8]
006bef70  FMUL float ptr [0x008ae864]
006bef76  FSTP float ptr [EAX + 0x20]
006bef79  FXCH
006bef7b  FSTP float ptr [EAX + 0x24]
006bef7e  FSTP float ptr [EAX + 0x28]
006bef81  POP ECX
006bef82  RET 0x4

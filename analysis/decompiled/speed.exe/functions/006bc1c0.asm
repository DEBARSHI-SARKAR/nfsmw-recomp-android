006bc1c0  PUSH -0x1
006bc1c2  PUSH 0x87e1c8
006bc1c7  MOV EAX,FS:[0x0]
006bc1cd  PUSH EAX
006bc1ce  MOV dword ptr FS:[0x0],ESP
006bc1d5  PUSH ECX
006bc1d6  MOV EAX,dword ptr [ESP + 0x18]
006bc1da  PUSH ESI
006bc1db  MOV ESI,ECX
006bc1dd  MOV ECX,dword ptr [ESP + 0x18]
006bc1e1  PUSH EAX
006bc1e2  PUSH ECX
006bc1e3  MOV ECX,ESI
006bc1e5  MOV dword ptr [ESP + 0xc],ESI
006bc1e9  CALL 0x006bbf30
006bc1ee  MOV EAX,dword ptr [ESI + 0x34]
006bc1f1  MOV dword ptr [ESI],0x8adcec
006bc1f7  MOV dword ptr [ESI + 0x8],0x8adce4
006bc1fe  MOV dword ptr [ESI + 0x4c],0x8adcc8
006bc205  MOV dword ptr [ESI + 0x54],0x8adc48
006bc20c  MOV dword ptr [ESI + 0x60],0x8adc2c
006bc213  MOV ECX,dword ptr [EAX + 0x4]
006bc216  PUSH 0x604250
006bc21b  MOV dword ptr [ESP + 0x14],0x0
006bc223  CALL 0x005d59f0
006bc228  MOV ECX,dword ptr [ESP + 0x8]
006bc22c  MOV dword ptr [ESI + 0xc4],EAX
006bc232  MOV EAX,ESI
006bc234  POP ESI
006bc235  MOV dword ptr FS:[0x0],ECX
006bc23c  ADD ESP,0x10
006bc23f  RET 0x8

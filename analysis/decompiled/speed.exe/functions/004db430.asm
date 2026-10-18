004db430  PUSH -0x1
004db432  PUSH 0x86cadb
004db437  MOV EAX,FS:[0x0]
004db43d  PUSH EAX
004db43e  MOV dword ptr FS:[0x0],ESP
004db445  PUSH ECX
004db446  MOV EAX,[0x008f86f8]
004db44b  PUSH EBX
004db44c  XOR EBX,EBX
004db44e  CMP EAX,EBX
004db450  PUSH EDI
004db451  MOV EDI,ECX
004db453  JZ 0x004db561
004db459  MOV EAX,dword ptr [EDI + 0x10]
004db45c  CMP EAX,EBX
004db45e  JZ 0x004db467
004db460  MOV dword ptr [EAX + 0x3c],0x1
004db467  PUSH ESI
004db468  MOV byte ptr [EDI + 0x28],0x1
004db46c  CALL 0x0045ce40
004db471  MOV dword ptr [EDI + 0xf0],EAX
004db477  MOV byte ptr [EDI + 0x29],BL
004db47a  MOV ECX,dword ptr [0x00911fa8]
004db480  PUSH EDI
004db481  CALL 0x004b8db0
004db486  PUSH 0x3c
004db488  CALL 0x00831667
004db48d  MOV ESI,EAX
004db48f  ADD ESP,0x4
004db492  MOV dword ptr [ESP + 0xc],ESI
004db496  CMP ESI,EBX
004db498  MOV dword ptr [ESP + 0x18],EBX
004db49c  JZ 0x004db510
004db49e  PUSH EBP
004db49f  LEA EBP,[ESI + 0x4]
004db4a2  PUSH ESI
004db4a3  PUSH EBP
004db4a4  PUSH 0x9147fc
004db4a9  MOV dword ptr [EBP],0x1000
004db4b0  MOV dword ptr [ESI + 0x8],EBX
004db4b3  MOV dword ptr [ESI + 0xc],EBX
004db4b6  MOV dword ptr [ESI + 0x10],EBX
004db4b9  MOV dword ptr [ESI + 0x14],EBX
004db4bc  MOV dword ptr [ESI + 0x18],EBX
004db4bf  MOV dword ptr [ESI + 0x1c],EBX
004db4c2  MOV dword ptr [ESI + 0x20],EBX
004db4c5  MOV dword ptr [ESI + 0x24],EBX
004db4c8  MOV dword ptr [ESI + 0x28],0x61a8
004db4cf  MOV dword ptr [ESI + 0x2c],EBX
004db4d2  MOV dword ptr [ESI + 0x30],0x7fff
004db4d9  MOV dword ptr [ESI + 0x34],EBX
004db4dc  MOV dword ptr [ESI + 0x38],0xf
004db4e3  CALL 0x00831a8a
004db4e8  ADD ESP,0xc
004db4eb  CMP EAX,EBX
004db4ed  JGE 0x004db50d
004db4ef  PUSH 0x8f0298
004db4f4  MOV ECX,0x9147fc
004db4f9  CALL 0x0083198b
004db4fe  PUSH ESI
004db4ff  PUSH EBP
004db500  PUSH 0x9147fc
004db505  CALL 0x00831a8a
004db50a  ADD ESP,0xc
004db50d  POP EBP
004db50e  JMP 0x004db512
004db510  XOR ESI,ESI
004db512  MOV ECX,dword ptr [EDI + 0x118]
004db518  LEA EDX,[EDI + 0x90]
004db51e  MOV dword ptr [EDI + 0x104],ESI
004db524  MOV EAX,dword ptr [ECX]
004db526  PUSH EDX
004db527  MOV dword ptr [ESP + 0x1c],0xffffffff
004db52f  CALL dword ptr [EAX + 0x38]
004db532  MOV ECX,dword ptr [EDI + 0x118]
004db538  MOV EAX,dword ptr [ECX]
004db53a  PUSH EBX
004db53b  CALL dword ptr [EAX + 0x3c]
004db53e  MOV ECX,dword ptr [EDI + 0x11c]
004db544  MOV EDX,dword ptr [ECX]
004db546  LEA EAX,[EDI + 0xa0]
004db54c  PUSH EAX
004db54d  CALL dword ptr [EDX + 0x38]
004db550  MOV ECX,dword ptr [EDI + 0x11c]
004db556  MOV EDX,dword ptr [ECX]
004db558  PUSH EBX
004db559  CALL dword ptr [EDX + 0x3c]
004db55c  MOV byte ptr [EDI + 0x8],0x1
004db560  POP ESI
004db561  MOV ECX,dword ptr [ESP + 0xc]
004db565  POP EDI
004db566  POP EBX
004db567  MOV dword ptr FS:[0x0],ECX
004db56e  ADD ESP,0x10
004db571  RET

005db990  MOV EAX,FS:[0x0]
005db996  MOV CL,byte ptr [0x0091e054]
005db99c  PUSH -0x1
005db99e  PUSH 0x874dfe
005db9a3  PUSH EAX
005db9a4  MOV EAX,0x1
005db9a9  TEST AL,CL
005db9ab  MOV dword ptr FS:[0x0],ESP
005db9b2  JNZ 0x005db9ea
005db9b4  OR dword ptr [0x0091e054],EAX
005db9ba  PUSH 0x8a38a8
005db9bf  MOV dword ptr [ESP + 0xc],0x0
005db9c7  CALL 0x005cc240
005db9cc  MOV ECX,dword ptr [ESP + 0x14]
005db9d0  MOV [0x0091e050],EAX
005db9d5  MOV dword ptr [ECX],EAX
005db9d7  ADD ESP,0x4
005db9da  MOV EAX,ECX
005db9dc  MOV ECX,dword ptr [ESP]
005db9df  MOV dword ptr FS:[0x0],ECX
005db9e6  ADD ESP,0xc
005db9e9  RET
005db9ea  MOV ECX,dword ptr [0x0091e050]
005db9f0  MOV EAX,dword ptr [ESP + 0x10]
005db9f4  MOV dword ptr [EAX],ECX
005db9f6  MOV ECX,dword ptr [ESP]
005db9f9  MOV dword ptr FS:[0x0],ECX
005dba00  ADD ESP,0xc
005dba03  RET

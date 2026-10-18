004ae2c0  MOV EAX,FS:[0x0]
004ae2c6  MOV CL,byte ptr [0x00913bf0]
004ae2cc  PUSH -0x1
004ae2ce  PUSH 0x86b1be
004ae2d3  PUSH EAX
004ae2d4  MOV EAX,0x1
004ae2d9  TEST AL,CL
004ae2db  MOV dword ptr FS:[0x0],ESP
004ae2e2  JNZ 0x004ae31a
004ae2e4  OR dword ptr [0x00913bf0],EAX
004ae2ea  PUSH 0x896814
004ae2ef  MOV dword ptr [ESP + 0xc],0x0
004ae2f7  CALL 0x005cc240
004ae2fc  MOV ECX,dword ptr [ESP + 0x14]
004ae300  MOV [0x00913bec],EAX
004ae305  MOV dword ptr [ECX],EAX
004ae307  ADD ESP,0x4
004ae30a  MOV EAX,ECX
004ae30c  MOV ECX,dword ptr [ESP]
004ae30f  MOV dword ptr FS:[0x0],ECX
004ae316  ADD ESP,0xc
004ae319  RET
004ae31a  MOV ECX,dword ptr [0x00913bec]
004ae320  MOV EAX,dword ptr [ESP + 0x10]
004ae324  MOV dword ptr [EAX],ECX
004ae326  MOV ECX,dword ptr [ESP]
004ae329  MOV dword ptr FS:[0x0],ECX
004ae330  ADD ESP,0xc
004ae333  RET

007cb550  PUSH EBP
007cb551  MOV EBP,ESP
007cb553  PUSH -0x1
007cb555  PUSH 0x8b8cb0
007cb55a  PUSH 0x7cd5e4
007cb55f  MOV EAX,FS:[0x0]
007cb565  PUSH EAX
007cb566  MOV dword ptr FS:[0x0],ESP
007cb56d  ADD ESP,-0x10
007cb570  PUSH EBX
007cb571  PUSH ESI
007cb572  PUSH EDI
007cb573  CMP dword ptr [EBP + 0x8],0x0
007cb577  JNZ 0x007cb597
007cb579  PUSH 0x8b8b00
007cb57e  PUSH 0x0
007cb580  PUSH 0x29
007cb582  PUSH 0x8b8ca4
007cb587  PUSH 0x2
007cb589  CALL 0x007d2670
007cb58e  ADD ESP,0x14
007cb591  CMP EAX,0x1
007cb594  JNZ 0x007cb597
007cb596  INT3
007cb597  MOV ECX,dword ptr [EBP + 0x8]
007cb59a  PUSH ECX
007cb59b  CALL 0x007c9390
007cb5a0  ADD ESP,0x4
007cb5a3  MOV dword ptr [EBP + -0x4],0x0
007cb5aa  MOV EDX,dword ptr [EBP + 0x8]
007cb5ad  MOV EAX,dword ptr [EDX + 0x4]
007cb5b0  SUB EAX,0x1
007cb5b3  MOV ECX,dword ptr [EBP + 0x8]
007cb5b6  MOV dword ptr [ECX + 0x4],EAX
007cb5b9  MOV EDX,dword ptr [EBP + 0x8]
007cb5bc  CMP dword ptr [EDX + 0x4],0x0
007cb5c0  JL 0x007cb5e2
007cb5c2  MOV EAX,dword ptr [EBP + 0x8]
007cb5c5  MOV ECX,dword ptr [EAX]
007cb5c7  MOVSX EDX,byte ptr [ECX]
007cb5ca  AND EDX,0xff
007cb5d0  MOV dword ptr [EBP + -0x20],EDX
007cb5d3  MOV EAX,dword ptr [EBP + 0x8]
007cb5d6  MOV ECX,dword ptr [EAX]
007cb5d8  ADD ECX,0x1
007cb5db  MOV EDX,dword ptr [EBP + 0x8]
007cb5de  MOV dword ptr [EDX],ECX
007cb5e0  JMP 0x007cb5f1
007cb5e2  MOV EAX,dword ptr [EBP + 0x8]
007cb5e5  PUSH EAX
007cb5e6  CALL 0x007db3e0
007cb5eb  ADD ESP,0x4
007cb5ee  MOV dword ptr [EBP + -0x20],EAX
007cb5f1  MOV ECX,dword ptr [EBP + -0x20]
007cb5f4  MOV dword ptr [EBP + -0x1c],ECX
007cb5f7  MOV dword ptr [EBP + -0x4],0xffffffff
007cb5fe  CALL 0x007cb605
007cb603  JMP 0x007cb612

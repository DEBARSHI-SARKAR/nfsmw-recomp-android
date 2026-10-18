007c4c70  PUSH EBP
007c4c71  MOV EBP,ESP
007c4c73  SUB ESP,0x8
007c4c76  PUSH EBX
007c4c77  PUSH ESI
007c4c78  PUSH EDI
007c4c79  MOV ESI,dword ptr FS:[0x0]
007c4c80  MOV dword ptr [EBP + -0x4],ESI
007c4c83  MOV dword ptr [EBP + -0x8],0x7c4c9d
007c4c8a  PUSH 0x0
007c4c8c  MOV EAX,dword ptr [EBP + 0xc]
007c4c8f  PUSH EAX
007c4c90  MOV ECX,dword ptr [EBP + -0x8]
007c4c93  PUSH ECX
007c4c94  MOV EDX,dword ptr [EBP + 0x8]
007c4c97  PUSH EDX
007c4c98  CALL 0x0085d380
007c4c9d  MOV EAX,dword ptr [EBP + 0xc]
007c4ca0  MOV ECX,dword ptr [EAX + 0x4]
007c4ca3  AND ECX,0xfffffffd
007c4ca6  MOV EDX,dword ptr [EBP + 0xc]
007c4ca9  MOV dword ptr [EDX + 0x4],ECX
007c4cac  MOV EDI,dword ptr FS:[0x0]
007c4cb3  MOV EBX,dword ptr [EBP + -0x4]
007c4cb6  MOV dword ptr [EBX],EDI
007c4cb8  MOV dword ptr FS:[0x0],EBX
007c4cbf  POP EDI
007c4cc0  POP ESI
007c4cc1  POP EBX
007c4cc2  MOV ESP,EBP
007c4cc4  POP EBP
007c4cc5  RET 0x8

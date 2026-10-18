005e67e0  PUSH 0x0
005e67e2  PUSH 0x10
005e67e4  MOV ECX,0x925b30
005e67e9  CALL 0x005d29d0
005e67ee  TEST EAX,EAX
005e67f0  JZ 0x005e681c
005e67f2  MOV ECX,dword ptr [ESP + 0x4]
005e67f6  MOV EDX,dword ptr [ESP + 0x8]
005e67fa  MOV dword ptr [EAX],ECX
005e67fc  MOV ECX,dword ptr [ESP + 0xc]
005e6800  MOV dword ptr [EAX + 0x4],EDX
005e6803  MOV EDX,dword ptr [ESP + 0x10]
005e6807  MOV dword ptr [EAX + 0x8],ECX
005e680a  MOV CX,word ptr [EDX]
005e680d  MOV DL,byte ptr [ESP + 0x14]
005e6811  MOV word ptr [EAX + 0xc],CX
005e6815  MOV byte ptr [EAX + 0xe],DL
005e6818  MOV byte ptr [EAX + 0xf],0x0
005e681c  RET 0x14

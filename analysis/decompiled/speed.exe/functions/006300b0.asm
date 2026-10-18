006300b0  PUSH ESI
006300b1  MOV ESI,ECX
006300b3  PUSH ESI
006300b4  CALL 0x006244c0
006300b9  MOV EAX,dword ptr [ESP + 0x18]
006300bd  MOV ECX,dword ptr [ESP + 0xc]
006300c1  MOV EDX,dword ptr [ESP + 0x14]
006300c5  MOV dword ptr [ESI + 0x4],0xa6b47fac
006300cc  MOV dword ptr [ESI + 0x10],EAX
006300cf  MOV EAX,dword ptr [ESP + 0x10]
006300d3  MOV dword ptr [ESI + 0x14],ECX
006300d6  MOV ECX,dword ptr [ESP + 0x1c]
006300da  MOV dword ptr [ESI + 0x1c],EAX
006300dd  MOV AL,byte ptr [ESP + 0x24]
006300e1  MOV dword ptr [ESI + 0x18],EDX
006300e4  MOV DL,byte ptr [ESP + 0x20]
006300e8  MOV dword ptr [ESI + 0x20],ECX
006300eb  MOV ECX,dword ptr [ESP + 0x28]
006300ef  MOV byte ptr [ESI + 0x25],AL
006300f2  ADD ESP,0x4
006300f5  MOV dword ptr [ESI + 0x8],ESI
006300f8  MOV byte ptr [ESI + 0x24],DL
006300fb  MOV dword ptr [ESI + 0x28],ECX
006300fe  MOV EAX,ESI
00630100  POP ESI
00630101  RET 0x20

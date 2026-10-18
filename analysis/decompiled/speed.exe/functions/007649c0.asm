007649c0  SUB ESP,0xc
007649c3  MOVSX EAX,byte ptr [ECX + 0x13]
007649c7  MOVSX ECX,byte ptr [ECX + 0x15]
007649cb  MOV dword ptr [ESP],EAX
007649ce  MOV EAX,dword ptr [ESP + 0x10]
007649d2  FILD dword ptr [ESP]
007649d5  MOV dword ptr [ESP],ECX
007649d8  FMUL float ptr [0x00890bf0]
007649de  FSTP float ptr [ESP + 0x4]
007649e2  MOV EDX,dword ptr [ESP + 0x4]
007649e6  FILD dword ptr [ESP]
007649e9  MOV dword ptr [EAX],EDX
007649eb  FMUL float ptr [0x00890bf0]
007649f1  FSTP float ptr [ESP + 0x8]
007649f5  MOV ECX,dword ptr [ESP + 0x8]
007649f9  MOV dword ptr [EAX + 0x4],ECX
007649fc  ADD ESP,0xc
007649ff  RET 0x4

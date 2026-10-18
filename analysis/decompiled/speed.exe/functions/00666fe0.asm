00666fe0  MOV EDX,dword ptr [ECX]
00666fe2  XOR EAX,EAX
00666fe4  CMP EDX,EAX
00666fe6  JZ 0x00666fea
00666fe8  MOV dword ptr [ECX],EAX
00666fea  CMP byte ptr [ECX + 0x14],AL
00666fed  JZ 0x00666ff2
00666fef  MOV byte ptr [ECX + 0x14],AL
00666ff2  MOV dword ptr [ECX],0x666f90
00666ff8  MOV dword ptr [ECX + 0x8],0x8a922c
00666fff  MOV dword ptr [ECX + 0x4],EAX
00667002  RET

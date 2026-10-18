00721ac0  SUB ESP,0x8
00721ac3  MOV EAX,dword ptr [ESP + 0x10]
00721ac7  MOVSX EDX,word ptr [ECX + EAX*0x2 + 0x10]
00721acc  SHL EDX,0xd
00721acf  PUSH ESI
00721ad0  MOVSX ESI,word ptr [ECX + 0x4]
00721ad4  MOV dword ptr [ESP + 0x4],EDX
00721ad8  MOVSX EDX,word ptr [ECX + EAX*0x2 + 0x18]
00721add  MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x8]
00721ae2  SHL ESI,0x8
00721ae5  ADD EDX,ESI
00721ae7  SHL EDX,0x8
00721aea  SHL EAX,0xd
00721aed  MOV dword ptr [ESP + 0x14],EAX
00721af1  MOV EAX,dword ptr [ESP + 0x10]
00721af5  MOV dword ptr [ESP + 0x8],EDX
00721af9  FILD dword ptr [ESP + 0x14]
00721afd  POP ESI
00721afe  FMUL float ptr [0x00890980]
00721b04  FSTP float ptr [EAX]
00721b06  FILD dword ptr [ESP]
00721b09  FMUL float ptr [0x00890980]
00721b0f  FSTP float ptr [EAX + 0x4]
00721b12  FILD dword ptr [ESP + 0x4]
00721b16  FMUL float ptr [0x00890980]
00721b1c  FSTP float ptr [EAX + 0x8]
00721b1f  ADD ESP,0x8
00721b22  RET 0x8

006684d0  PUSH ECX
006684d1  MOVSX EAX,word ptr [ECX + 0x18]
006684d5  MOV dword ptr [ESP],EAX
006684d8  MOV EAX,dword ptr [ESP + 0x8]
006684dc  FILD dword ptr [ESP]
006684df  FMUL float ptr [0x00890d60]
006684e5  FSTP float ptr [EAX]
006684e7  MOVSX EDX,word ptr [ECX + 0x1a]
006684eb  MOV dword ptr [ESP + 0x8],EDX
006684ef  FILD dword ptr [ESP + 0x8]
006684f3  FMUL float ptr [0x00890d60]
006684f9  FSTP float ptr [EAX + 0x4]
006684fc  MOVSX ECX,word ptr [ECX + 0x1c]
00668500  MOV dword ptr [ESP + 0x8],ECX
00668504  FILD dword ptr [ESP + 0x8]
00668508  FMUL float ptr [0x00890d60]
0066850e  FSTP float ptr [EAX + 0x8]
00668511  POP ECX
00668512  RET 0x4

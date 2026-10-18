00620b40  PUSH ECX
00620b41  MOVSX EAX,word ptr [ECX + 0x8]
00620b45  MOV dword ptr [ESP],EAX
00620b48  MOV EAX,dword ptr [ESP + 0x8]
00620b4c  FILD dword ptr [ESP]
00620b4f  FMUL float ptr [0x00890d60]
00620b55  FSTP float ptr [EAX]
00620b57  MOVSX EDX,word ptr [ECX + 0xa]
00620b5b  MOV dword ptr [ESP + 0x8],EDX
00620b5f  FILD dword ptr [ESP + 0x8]
00620b63  FMUL float ptr [0x00890d60]
00620b69  FSTP float ptr [EAX + 0x4]
00620b6c  MOVSX ECX,word ptr [ECX + 0xc]
00620b70  MOV dword ptr [ESP + 0x8],ECX
00620b74  FILD dword ptr [ESP + 0x8]
00620b78  FMUL float ptr [0x00890d60]
00620b7e  FSTP float ptr [EAX + 0x8]
00620b81  POP ECX
00620b82  RET 0x4

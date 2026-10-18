00824bef  MOV EAX,dword ptr [ESP + 0x4]
00824bf3  FLDZ
00824bf5  FSTP float ptr [EAX + 0x34]
00824bf8  XOR ECX,ECX
00824bfa  FLDZ
00824bfc  MOV dword ptr [EAX + 0x8],ECX
00824bff  FSTP float ptr [EAX + 0x38]
00824c02  MOV dword ptr [EAX + 0xc],ECX
00824c05  FLDZ
00824c07  MOV dword ptr [EAX + 0x10],ECX
00824c0a  MOV dword ptr [EAX + 0x14],ECX
00824c0d  FSTP float ptr [EAX + 0x3c]
00824c10  MOV byte ptr [EAX + 0x1b],CL
00824c13  MOV dword ptr [EAX + 0x4],ECX
00824c16  MOV dword ptr [EAX],0x824ba9
00824c1c  XOR EAX,EAX
00824c1e  RET

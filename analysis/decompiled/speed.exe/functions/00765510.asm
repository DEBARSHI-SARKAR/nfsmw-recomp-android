00765510  SUB ESP,0xc
00765513  MOV EAX,dword ptr [ESP + 0x10]
00765517  MOVSX ECX,byte ptr [EAX + 0x12]
0076551b  MOVSX EDX,byte ptr [EAX + 0x10]
0076551f  MOV dword ptr [ESP + 0x10],ECX
00765523  MOV ECX,dword ptr [ESP + 0x18]
00765527  MOV dword ptr [ESP + 0x4],0x0
0076552f  FILD dword ptr [ESP + 0x10]
00765533  MOV dword ptr [ESP + 0x10],EDX
00765537  FMUL float ptr [0x008b5b30]
0076553d  FSTP float ptr [ESP]
00765540  MOV EDX,dword ptr [ESP]
00765543  FILD dword ptr [ESP + 0x10]
00765547  MOV dword ptr [ECX],EDX
00765549  MOV EDX,dword ptr [ESP + 0x4]
0076554d  MOV dword ptr [ECX + 0x4],EDX
00765550  FMUL float ptr [0x00890bf0]
00765556  MOV dword ptr [ESP + 0x4],0x0
0076555e  FSTP float ptr [ESP + 0x8]
00765562  MOV EDX,dword ptr [ESP + 0x8]
00765566  MOV dword ptr [ECX + 0x8],EDX
00765569  MOVSX ECX,byte ptr [EAX + 0x15]
0076556d  MOVSX EDX,byte ptr [EAX + 0x13]
00765571  MOV EAX,dword ptr [ESP + 0x14]
00765575  MOV dword ptr [ESP + 0x10],ECX
00765579  FILD dword ptr [ESP + 0x10]
0076557d  MOV dword ptr [ESP + 0x10],EDX
00765581  MOV EDX,dword ptr [ESP + 0x4]
00765585  FMUL float ptr [0x00890bf0]
0076558b  FSTP float ptr [ESP]
0076558e  MOV ECX,dword ptr [ESP]
00765591  FILD dword ptr [ESP + 0x10]
00765595  MOV dword ptr [EAX],ECX
00765597  MOV dword ptr [EAX + 0x4],EDX
0076559a  FMUL float ptr [0x008b5b30]
007655a0  FSTP float ptr [ESP + 0x8]
007655a4  MOV ECX,dword ptr [ESP + 0x8]
007655a8  MOV dword ptr [EAX + 0x8],ECX
007655ab  ADD ESP,0xc
007655ae  RET 0xc

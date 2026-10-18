00667770  SUB ESP,0x10
00667773  MOV EAX,dword ptr [ESP + 0x18]
00667777  MOV ECX,dword ptr [ESP + 0x1c]
0066777b  MOV EDX,dword ptr [ESP + 0x20]
0066777f  MOV dword ptr [ESP],EAX
00667782  MOV EAX,dword ptr [ESP + 0x24]
00667786  MOV dword ptr [ESP + 0x4],ECX
0066778a  MOV dword ptr [ESP + 0x8],EDX
0066778e  MOV EDX,dword ptr [ESP]
00667791  MOV dword ptr [ESP + 0xc],EAX
00667795  MOV EAX,dword ptr [ESP + 0x14]
00667799  MOV ECX,EAX
0066779b  MOV dword ptr [ECX],EDX
0066779d  MOV EDX,dword ptr [ESP + 0x4]
006677a1  MOV dword ptr [ECX + 0x4],EDX
006677a4  MOV EDX,dword ptr [ESP + 0x8]
006677a8  MOV dword ptr [ECX + 0x8],EDX
006677ab  MOV EDX,dword ptr [ESP + 0xc]
006677af  MOV dword ptr [ECX + 0xc],EDX
006677b2  ADD ESP,0x10
006677b5  RET

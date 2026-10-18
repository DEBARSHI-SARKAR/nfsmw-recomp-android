004791d0  SUB ESP,0xc
004791d3  MOV EAX,dword ptr [ESP + 0x10]
004791d7  FLD float ptr [EAX + 0x4]
004791da  MOV ECX,dword ptr [EAX + 0x8]
004791dd  MOV EDX,dword ptr [EAX]
004791df  FCHS
004791e1  MOV EAX,dword ptr [ESP + 0x14]
004791e5  FSTP float ptr [ESP]
004791e8  MOV dword ptr [ESP + 0x4],ECX
004791ec  MOV ECX,dword ptr [ESP]
004791ef  MOV dword ptr [ESP + 0x8],EDX
004791f3  MOV EDX,dword ptr [ESP + 0x4]
004791f7  MOV dword ptr [EAX],ECX
004791f9  MOV ECX,dword ptr [ESP + 0x8]
004791fd  MOV dword ptr [EAX + 0x4],EDX
00479200  MOV dword ptr [EAX + 0x8],ECX
00479203  ADD ESP,0xc
00479206  RET

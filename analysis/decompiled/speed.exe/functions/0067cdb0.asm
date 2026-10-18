0067cdb0  PUSH -0x1
0067cdb2  PUSH 0x87afa8
0067cdb7  MOV EAX,FS:[0x0]
0067cdbd  PUSH EAX
0067cdbe  MOV dword ptr FS:[0x0],ESP
0067cdc5  PUSH ECX
0067cdc6  PUSH ESI
0067cdc7  MOV ESI,ECX
0067cdc9  PUSH EDI
0067cdca  MOV dword ptr [ESP + 0x8],ESI
0067cdce  MOV dword ptr [ESI],0x8a9b98
0067cdd4  MOV EAX,dword ptr [ESI + 0xc]
0067cdd7  XOR EDI,EDI
0067cdd9  CMP EAX,EDI
0067cddb  MOV dword ptr [ESP + 0x14],EDI
0067cddf  JLE 0x0067cdea
0067cde1  MOV ECX,EAX
0067cde3  DEC ECX
0067cde4  DEC EAX
0067cde5  JNZ 0x0067cde3
0067cde7  MOV dword ptr [ESI + 0xc],ECX
0067cdea  MOV EAX,dword ptr [ESI + 0x4]
0067cded  CMP EAX,EDI
0067cdef  JZ 0x0067ce07
0067cdf1  MOV ECX,dword ptr [ESI + 0x8]
0067cdf4  PUSH ECX
0067cdf5  PUSH EAX
0067cdf6  MOV ECX,ESI
0067cdf8  CALL dword ptr [0x008a9ba0]
0067cdfe  MOV dword ptr [ESI + 0x4],EDI
0067ce01  MOV dword ptr [ESI + 0x8],EDI
0067ce04  MOV dword ptr [ESI + 0xc],EDI
0067ce07  MOV ECX,dword ptr [ESP + 0xc]
0067ce0b  MOV dword ptr [ESI],0x8a7a6c
0067ce11  POP EDI
0067ce12  POP ESI
0067ce13  MOV dword ptr FS:[0x0],ECX
0067ce1a  ADD ESP,0x10
0067ce1d  RET

0041cda0  SUB ESP,0x24
0041cda3  MOV ECX,dword ptr [ESP + 0x28]
0041cda7  MOV EDX,dword ptr [ESP + 0x2c]
0041cdab  XOR EAX,EAX
0041cdad  MOV dword ptr [ESP],EAX
0041cdb0  MOV dword ptr [ESP + 0x4],EAX
0041cdb4  MOV dword ptr [ESP + 0x8],EAX
0041cdb8  MOV dword ptr [ESP + 0xc],EAX
0041cdbc  MOV dword ptr [ESP + 0x10],EAX
0041cdc0  MOV dword ptr [ESP + 0x14],0x0
0041cdc8  MOV dword ptr [ESP + 0x14],EAX
0041cdcc  MOV dword ptr [ESP + 0x18],EAX
0041cdd0  MOV dword ptr [ESP + 0x1c],EAX
0041cdd4  MOV dword ptr [ESP + 0x8],ECX
0041cdd8  MOV dword ptr [ESP + 0x20],EAX
0041cddc  MOV EAX,dword ptr [ESP + 0x30]
0041cde0  LEA ECX,[ESP + 0x28]
0041cde4  PUSH ECX
0041cde5  MOV dword ptr [ESP + 0x4],EDX
0041cde9  MOV dword ptr [ESP + 0x8],EAX
0041cded  MOV dword ptr [ESP + 0x14],0x40ec40
0041cdf5  CALL 0x004057f0
0041cdfa  MOV EDX,dword ptr [EAX]
0041cdfc  MOV EAX,[0x008f831c]
0041ce01  MOV ECX,dword ptr [ESP + 0x38]
0041ce05  MOV dword ptr [ESP + 0x1c],EAX
0041ce09  INC EAX
0041ce0a  MOV [0x008f831c],EAX
0041ce0f  MOV EAX,dword ptr [ESP + 0x3c]
0041ce13  MOV dword ptr [ESP + 0x20],EAX
0041ce17  MOV EAX,ESP
0041ce19  MOV dword ptr [ESP + 0x18],EDX
0041ce1d  MOV dword ptr [EAX],ECX
0041ce1f  LEA ECX,[ESP + 0x4]
0041ce23  CALL 0x00665390
0041ce28  ADD ESP,0x24
0041ce2b  RET

0061fdc0  SUB ESP,0xc
0061fdc3  PUSH ESI
0061fdc4  MOV ESI,ECX
0061fdc6  MOV ECX,dword ptr [ESP + 0x14]
0061fdca  LEA EAX,[ESP + 0x4]
0061fdce  PUSH EAX
0061fdcf  PUSH ECX
0061fdd0  PUSH ESI
0061fdd1  CALL 0x00401670
0061fdd6  MOV EDX,dword ptr [ESP + 0x10]
0061fdda  MOV EAX,dword ptr [ESP + 0x14]
0061fdde  MOV ECX,dword ptr [ESP + 0x18]
0061fde2  ADD ESP,0xc
0061fde5  MOV dword ptr [ESI],EDX
0061fde7  MOV dword ptr [ESI + 0x4],EAX
0061fdea  MOV dword ptr [ESI + 0x8],ECX
0061fded  POP ESI
0061fdee  ADD ESP,0xc
0061fdf1  RET 0x4

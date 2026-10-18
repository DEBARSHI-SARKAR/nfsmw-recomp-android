0076dda0  SUB ESP,0x18
0076dda3  MOV ECX,dword ptr [ESP + 0x1c]
0076dda7  MOVZX EAX,word ptr [ECX]
0076ddaa  MOVZX ECX,word ptr [ECX + 0x2]
0076ddae  MOV EDX,dword ptr [0x009b38bc]
0076ddb4  SHL ECX,0x5
0076ddb7  ADD ECX,EDX
0076ddb9  SHL EAX,0x5
0076ddbc  ADD EAX,EDX
0076ddbe  MOV EDX,dword ptr [ECX + 0x4]
0076ddc1  FLD float ptr [ECX]
0076ddc3  MOV ECX,dword ptr [ECX + 0x8]
0076ddc6  FSUB float ptr [EAX]
0076ddc8  MOV dword ptr [ESP + 0x4],EDX
0076ddcc  MOV dword ptr [ESP + 0x8],ECX
0076ddd0  FLD float ptr [ESP + 0x4]
0076ddd4  FSUB float ptr [EAX + 0x4]
0076ddd7  FLD float ptr [ESP + 0x8]
0076dddb  FSUB float ptr [EAX + 0x8]
0076ddde  FSTP float ptr [ESP + 0x14]
0076dde2  MOV EDX,dword ptr [ESP + 0x14]
0076dde6  FXCH
0076dde8  MOV dword ptr [ESP + 0x8],EDX
0076ddec  FSTP float ptr [ESP]
0076ddef  MOV EAX,dword ptr [ESP]
0076ddf2  MOV dword ptr [ESP + 0xc],EAX
0076ddf6  MOV EAX,dword ptr [ESP + 0x20]
0076ddfa  FSTP float ptr [ESP + 0x4]
0076ddfe  MOV ECX,dword ptr [ESP + 0x4]
0076de02  MOV dword ptr [ESP + 0x10],ECX
0076de06  PUSH EAX
0076de07  LEA ECX,[ESP + 0x10]
0076de0b  PUSH ECX
0076de0c  MOV dword ptr [ESP + 0x1c],EDX
0076de10  CALL 0x0040fe20
0076de15  ADD ESP,0x20
0076de18  RET 0x8

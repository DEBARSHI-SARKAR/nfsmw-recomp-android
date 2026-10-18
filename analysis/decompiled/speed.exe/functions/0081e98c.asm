0081e98c  MOV ECX,dword ptr [ESP + 0x4]
0081e990  MOV EAX,dword ptr [ESP + 0x8]
0081e994  MOV dword ptr [0x009c21fc],ECX
0081e99a  MOV dword ptr [ECX + 0x8],EAX
0081e99d  LEA EDX,[ECX + EAX*0x1 + -0x8]
0081e9a1  PUSH ESI
0081e9a2  MOV ESI,dword ptr [0x009c21fc]
0081e9a8  MOV dword ptr [ESI + 0x4],EDX
0081e9ab  MOV EDX,dword ptr [0x009c21fc]
0081e9b1  ADD ECX,0x18
0081e9b4  MOV dword ptr [EDX],ECX
0081e9b6  MOV ECX,dword ptr [0x009c21fc]
0081e9bc  ADD dword ptr [ECX],0xf
0081e9bf  MOV ECX,dword ptr [0x009c21fc]
0081e9c5  AND dword ptr [ECX],0xfffffff0
0081e9c8  MOV EDX,dword ptr [0x009c21fc]
0081e9ce  SUB EAX,0xf
0081e9d1  LEA ECX,[EAX + -0x20]
0081e9d4  MOV dword ptr [EDX + 0xc],ECX
0081e9d7  MOV ECX,dword ptr [0x009c21fc]
0081e9dd  MOV dword ptr [ECX + 0x10],EAX
0081e9e0  POP ESI
0081e9e1  RET

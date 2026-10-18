0064ad40  MOV ECX,dword ptr [0x0092585c]
0064ad46  MOV EDX,dword ptr [ESP + 0x8]
0064ad4a  LEA EAX,[ECX*0x8 + 0x925688]
0064ad51  INC ECX
0064ad52  MOV dword ptr [0x0092585c],ECX
0064ad58  MOV ECX,dword ptr [ESP + 0x4]
0064ad5c  MOV dword ptr [EAX],ECX
0064ad5e  MOV dword ptr [EAX + 0x4],EDX
0064ad61  RET

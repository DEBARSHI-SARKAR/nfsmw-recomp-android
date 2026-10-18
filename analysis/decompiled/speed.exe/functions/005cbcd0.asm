005cbcd0  SUB ESP,0xc
005cbcd3  PUSH ESI
005cbcd4  MOV ESI,ECX
005cbcd6  TEST dword ptr [ESI + 0x10],0x100000
005cbcdd  JZ 0x005cbcfb
005cbcdf  LEA EAX,[ESP + 0x4]
005cbce3  PUSH EAX
005cbce4  LEA ECX,[ESI + 0x20]
005cbce7  PUSH ESI
005cbce8  PUSH ECX
005cbce9  CALL 0x004012f0
005cbcee  FLD float ptr [ESP + 0x10]
005cbcf2  FLD float ptr [ESP + 0x14]
005cbcf6  ADD ESP,0xc
005cbcf9  JMP 0x005cbd0f
005cbcfb  FLD float ptr [0x00890968]
005cbd01  MOV dword ptr [ESP + 0xc],0x0
005cbd09  FLD float ptr [0x0089096c]
005cbd0f  MOV EDX,dword ptr [ESI]
005cbd11  FXCH
005cbd13  MOV EAX,dword ptr [ESP + 0x14]
005cbd17  MOV dword ptr [EAX],EDX
005cbd19  MOV ECX,dword ptr [ESI + 0x4]
005cbd1c  MOV dword ptr [EAX + 0x4],ECX
005cbd1f  MOV EDX,dword ptr [ESI + 0x8]
005cbd22  MOV dword ptr [EAX + 0x8],EDX
005cbd25  MOV EDX,dword ptr [ESP + 0xc]
005cbd29  XOR ECX,ECX
005cbd2b  MOV dword ptr [EAX + 0xc],ECX
005cbd2e  FSTP float ptr [EAX + 0x10]
005cbd31  FSTP float ptr [EAX + 0x14]
005cbd34  MOV dword ptr [EAX + 0x18],EDX
005cbd37  MOV dword ptr [EAX + 0x1c],ECX
005cbd3a  MOV EDX,dword ptr [ESI + 0x20]
005cbd3d  MOV dword ptr [EAX + 0x20],EDX
005cbd40  MOV EDX,dword ptr [ESI + 0x24]
005cbd43  MOV dword ptr [EAX + 0x24],EDX
005cbd46  MOV EDX,dword ptr [ESI + 0x28]
005cbd49  MOV dword ptr [EAX + 0x28],EDX
005cbd4c  CMP byte ptr [ESP + 0x18],CL
005cbd50  MOV dword ptr [EAX + 0x2c],ECX
005cbd53  JZ 0x005cbd75
005cbd55  MOV ECX,dword ptr [ESI + 0x30]
005cbd58  MOV dword ptr [EAX + 0x30],ECX
005cbd5b  MOV EDX,dword ptr [ESI + 0x34]
005cbd5e  MOV dword ptr [EAX + 0x34],EDX
005cbd61  MOV ECX,dword ptr [ESI + 0x38]
005cbd64  MOV dword ptr [EAX + 0x38],ECX
005cbd67  MOV dword ptr [EAX + 0x3c],0x3f800000
005cbd6e  POP ESI
005cbd6f  ADD ESP,0xc
005cbd72  RET 0x8
005cbd75  MOV dword ptr [EAX + 0x30],ECX
005cbd78  MOV dword ptr [EAX + 0x34],ECX
005cbd7b  MOV dword ptr [EAX + 0x38],ECX
005cbd7e  MOV dword ptr [EAX + 0x3c],0x3f800000
005cbd85  POP ESI
005cbd86  ADD ESP,0xc
005cbd89  RET 0x8

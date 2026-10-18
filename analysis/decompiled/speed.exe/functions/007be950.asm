007be950  PUSH -0x1
007be952  PUSH 0x88387f
007be957  MOV EAX,FS:[0x0]
007be95d  PUSH EAX
007be95e  MOV dword ptr FS:[0x0],ESP
007be965  PUSH ECX
007be966  PUSH ESI
007be967  PUSH EDI
007be968  MOV EDI,ECX
007be96a  MOV dword ptr [ESP + 0x8],EDI
007be96e  MOV dword ptr [EDI],0x8b7f50
007be974  MOV EAX,dword ptr [EDI + 0x74]
007be977  LEA ESI,[EDI + 0x68]
007be97a  MOV byte ptr [EAX + 0x194],0xff
007be981  MOV EAX,dword ptr [ESI]
007be983  CMP EAX,ESI
007be985  MOV dword ptr [ESP + 0x14],0x5
007be98d  JZ 0x007be9a9
007be98f  NOP
007be990  MOV ECX,dword ptr [EAX]
007be992  MOV EDX,dword ptr [EAX + 0x4]
007be995  MOV dword ptr [EDX],ECX
007be997  PUSH EAX
007be998  MOV dword ptr [ECX + 0x4],EDX
007be99b  CALL 0x00466440
007be9a0  MOV EAX,dword ptr [ESI]
007be9a2  ADD ESP,0x4
007be9a5  CMP EAX,ESI
007be9a7  JNZ 0x007be990
007be9a9  MOV EAX,dword ptr [EDI + 0x5c]
007be9ac  LEA ESI,[EDI + 0x5c]
007be9af  CMP EAX,ESI
007be9b1  JZ 0x007be9cc
007be9b3  MOV ECX,dword ptr [EAX]
007be9b5  MOV EDX,dword ptr [EAX + 0x4]
007be9b8  MOV dword ptr [EDX],ECX
007be9ba  PUSH EAX
007be9bb  MOV dword ptr [ECX + 0x4],EDX
007be9be  CALL 0x00652b00
007be9c3  MOV EAX,dword ptr [ESI]
007be9c5  ADD ESP,0x4
007be9c8  CMP EAX,ESI
007be9ca  JNZ 0x007be9b3
007be9cc  MOV EAX,dword ptr [EDI + 0x50]
007be9cf  LEA ESI,[EDI + 0x50]
007be9d2  CMP EAX,ESI
007be9d4  JZ 0x007be9ef
007be9d6  MOV ECX,dword ptr [EAX]
007be9d8  MOV EDX,dword ptr [EAX + 0x4]
007be9db  MOV dword ptr [EDX],ECX
007be9dd  PUSH EAX
007be9de  MOV dword ptr [ECX + 0x4],EDX
007be9e1  CALL 0x00652b00
007be9e6  MOV EAX,dword ptr [ESI]
007be9e8  ADD ESP,0x4
007be9eb  CMP EAX,ESI
007be9ed  JNZ 0x007be9d6
007be9ef  MOV EAX,dword ptr [EDI + 0x44]
007be9f2  LEA ESI,[EDI + 0x44]
007be9f5  CMP EAX,ESI
007be9f7  JZ 0x007bea19
007be9f9  LEA ESP,[ESP]
007bea00  MOV ECX,dword ptr [EAX]
007bea02  MOV EDX,dword ptr [EAX + 0x4]
007bea05  MOV dword ptr [EDX],ECX
007bea07  PUSH EAX
007bea08  MOV dword ptr [ECX + 0x4],EDX
007bea0b  CALL 0x00652b00
007bea10  MOV EAX,dword ptr [ESI]
007bea12  ADD ESP,0x4
007bea15  CMP EAX,ESI
007bea17  JNZ 0x007bea00
007bea19  MOV EAX,dword ptr [EDI + 0x38]
007bea1c  LEA ESI,[EDI + 0x38]
007bea1f  CMP EAX,ESI
007bea21  JZ 0x007bea3c
007bea23  MOV ECX,dword ptr [EAX]
007bea25  MOV EDX,dword ptr [EAX + 0x4]
007bea28  MOV dword ptr [EDX],ECX
007bea2a  PUSH EAX
007bea2b  MOV dword ptr [ECX + 0x4],EDX
007bea2e  CALL 0x00652b00
007bea33  MOV EAX,dword ptr [ESI]
007bea35  ADD ESP,0x4
007bea38  CMP EAX,ESI
007bea3a  JNZ 0x007bea23
007bea3c  MOV EAX,dword ptr [EDI + 0x2c]
007bea3f  LEA ESI,[EDI + 0x2c]
007bea42  CMP EAX,ESI
007bea44  JZ 0x007bea5f
007bea46  MOV ECX,dword ptr [EAX]
007bea48  MOV EDX,dword ptr [EAX + 0x4]
007bea4b  MOV dword ptr [EDX],ECX
007bea4d  PUSH EAX
007bea4e  MOV dword ptr [ECX + 0x4],EDX
007bea51  CALL 0x00652b00
007bea56  MOV EAX,dword ptr [ESI]
007bea58  ADD ESP,0x4
007bea5b  CMP EAX,ESI
007bea5d  JNZ 0x007bea46
007bea5f  MOV ECX,EDI
007bea61  MOV dword ptr [ESP + 0x14],0xffffffff
007bea69  CALL 0x00572360
007bea6e  MOV ECX,dword ptr [ESP + 0xc]
007bea72  POP EDI
007bea73  POP ESI
007bea74  MOV dword ptr FS:[0x0],ECX
007bea7b  ADD ESP,0x10
007bea7e  RET

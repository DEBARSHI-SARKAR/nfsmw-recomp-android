006e5ca0  PUSH EBP
006e5ca1  MOV EBP,ESP
006e5ca3  SUB ESP,0xc8
006e5ca9  PUSH EAX
006e5caa  MOV EAX,0xcfcecdcc
006e5caf  MOV EAX,0x6e5caf
006e5cb4  MOV EAX,0x1
006e5cb9  MOV EAX,0x0
006e5cbe  MOV EAX,0xcfcecdcc
006e5cc3  POP EAX
006e5cc4  MOV dword ptr [EBP + -0xc],0x0
006e5ccb  CALL 0x006cc7b0
006e5cd0  MOV dword ptr [EBP + -0x4],EAX
006e5cd3  MOV EAX,dword ptr [EBP + 0x8]
006e5cd6  PUSH EAX
006e5cd7  MOV ECX,dword ptr [EBP + -0x4]
006e5cda  PUSH ECX
006e5cdb  CALL 0x006cdca0
006e5ce0  ADD ESP,0x8
006e5ce3  MOV dword ptr [EBP + -0x8],EAX
006e5ce6  MOV EDX,dword ptr [EBP + 0xc]
006e5ce9  PUSH EDX
006e5cea  MOV EAX,dword ptr [EBP + -0x4]
006e5ced  PUSH EAX
006e5cee  CALL 0x006cdca0
006e5cf3  ADD ESP,0x8
006e5cf6  MOV dword ptr [EBP + -0x14],EAX
006e5cf9  XOR ECX,ECX
006e5cfb  MOV byte ptr [EBP + -0x15],CL
006e5cfe  MOV EDX,dword ptr [EBP + -0x14]
006e5d01  PUSH EDX
006e5d02  MOV EAX,dword ptr [EBP + -0x8]
006e5d05  PUSH EAX
006e5d06  LEA ECX,[EBP + -0x15]
006e5d09  CALL 0x006cdb10
006e5d0e  MOV dword ptr [EBP + -0x10],EAX
006e5d11  MOV ECX,dword ptr [EBP + -0x10]
006e5d14  PUSH ECX
006e5d15  MOV EDX,dword ptr [EBP + -0x14]
006e5d18  PUSH EDX
006e5d19  MOV EAX,dword ptr [EBP + -0x8]
006e5d1c  PUSH EAX
006e5d1d  PUSH 0x1
006e5d1f  PUSH 0x6
006e5d21  CALL 0x005ac310
006e5d26  ADD ESP,0x14
006e5d29  MOV dword ptr [EBP + -0x10],EAX
006e5d2c  XOR ECX,ECX
006e5d2e  JZ 0x006e5d40
006e5d30  CMP dword ptr [EBP + -0x8],0x1
006e5d34  JNZ 0x006e5d40
006e5d36  MOV EDX,dword ptr [EBP + -0x4]
006e5d39  MOV dword ptr [EDX + 0x18],0x0
006e5d40  MOV EAX,0x1
006e5d45  TEST EAX,EAX
006e5d47  JZ 0x006e5d4f
006e5d49  MOV ECX,dword ptr [EBP + 0xc]
006e5d4c  MOV dword ptr [EBP + -0x10],ECX
006e5d4f  XOR EDX,EDX
006e5d51  JZ 0x006e5d5b
006e5d53  MOV EAX,dword ptr [EBP + -0x8]
006e5d56  MOV dword ptr [EBP + -0xc],EAX
006e5d59  JMP 0x006e5d6e
006e5d5b  MOV ECX,dword ptr [EBP + -0x10]
006e5d5e  PUSH ECX
006e5d5f  MOV EDX,dword ptr [EBP + -0x4]
006e5d62  PUSH EDX
006e5d63  CALL 0x006cdb20
006e5d68  ADD ESP,0x8
006e5d6b  MOV dword ptr [EBP + -0xc],EAX
006e5d6e  PUSH EAX
006e5d6f  MOV EAX,0xcfcecdcc
006e5d74  MOV EAX,0x6e5caf
006e5d79  MOV EAX,0x0
006e5d7e  MOV EAX,0x0
006e5d83  MOV EAX,0xcecdcccb
006e5d88  POP EAX
006e5d89  MOV EAX,dword ptr [EBP + -0xc]
006e5d8c  MOV ESP,EBP
006e5d8e  POP EBP
006e5d8f  RET

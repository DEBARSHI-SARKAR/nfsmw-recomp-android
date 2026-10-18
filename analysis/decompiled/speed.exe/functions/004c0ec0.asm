004c0ec0  SUB ESP,0xc
004c0ec3  PUSH EBX
004c0ec4  MOV EBX,dword ptr [ESP + 0x14]
004c0ec8  PUSH EBP
004c0ec9  PUSH ESI
004c0eca  MOV ESI,ECX
004c0ecc  MOV EDX,dword ptr [ESI + 0x4]
004c0ecf  MOV ECX,dword ptr [ESP + 0x20]
004c0ed3  MOV EAX,dword ptr [ESI + 0x8]
004c0ed6  PUSH EDI
004c0ed7  MOV EDI,dword ptr [ESI + 0xc]
004c0eda  MOV EBP,EBX
004c0edc  SUB EBP,EDX
004c0ede  MOV dword ptr [ESP + 0x14],EDI
004c0ee2  ADD EDI,ECX
004c0ee4  SAR EBP,0x3
004c0ee7  CMP EDI,EAX
004c0ee9  MOV dword ptr [ESP + 0x10],EDX
004c0eed  MOV dword ptr [ESP + 0x18],EAX
004c0ef1  JBE 0x004c0f32
004c0ef3  MOV EDX,dword ptr [ESI]
004c0ef5  PUSH EDI
004c0ef6  MOV ECX,ESI
004c0ef8  CALL dword ptr [EDX + 0x14]
004c0efb  MOV EDI,dword ptr [ESI + 0x4]
004c0efe  MOV EAX,dword ptr [ESI + 0xc]
004c0f01  MOV EDX,dword ptr [ESP + 0x24]
004c0f05  MOV ECX,dword ptr [ESI + 0x8]
004c0f08  SUB EBX,EDI
004c0f0a  SAR EBX,0x3
004c0f0d  LEA EDI,[EAX + EDX*0x1]
004c0f10  CMP EDI,ECX
004c0f12  MOV dword ptr [ESP + 0x14],EAX
004c0f16  MOV dword ptr [ESP + 0x18],ECX
004c0f1a  MOV EBP,EBX
004c0f1c  JBE 0x004c0f2e
004c0f1e  MOV EAX,dword ptr [ESI]
004c0f20  PUSH 0x10
004c0f22  PUSH EDI
004c0f23  MOV ECX,ESI
004c0f25  CALL dword ptr [EAX + 0x4]
004c0f28  MOV dword ptr [ESI + 0x4],EAX
004c0f2b  MOV dword ptr [ESI + 0x8],EDI
004c0f2e  MOV EDX,dword ptr [ESP + 0x10]
004c0f32  CMP EDX,dword ptr [ESI + 0x4]
004c0f35  MOV dword ptr [ESI + 0xc],EDI
004c0f38  JZ 0x004c0f63
004c0f3a  XOR EBX,EBX
004c0f3c  TEST EBP,EBP
004c0f3e  JBE 0x004c0f63
004c0f40  MOV EAX,dword ptr [ESI + 0x4]
004c0f43  LEA ECX,[EBX*0x8 + 0x0]
004c0f4a  ADD EAX,ECX
004c0f4c  JZ 0x004c0f5e
004c0f4e  MOV EDX,dword ptr [ECX + EDX*0x1]
004c0f51  MOV dword ptr [EAX],EDX
004c0f53  MOV EDX,dword ptr [ESP + 0x10]
004c0f57  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
004c0f5b  MOV dword ptr [EAX + 0x4],ECX
004c0f5e  INC EBX
004c0f5f  CMP EBX,EBP
004c0f61  JC 0x004c0f40
004c0f63  MOV ECX,dword ptr [ESP + 0x14]
004c0f67  MOV EAX,ECX
004c0f69  SUB EAX,EBP
004c0f6b  JZ 0x004c0fa6
004c0f6d  SHL EDI,0x3
004c0f70  LEA ECX,[EDX + ECX*0x8 + -0x8]
004c0f74  MOV dword ptr [ESP + 0x20],EAX
004c0f78  JMP 0x004c0f80
004c0f80  MOV EAX,dword ptr [ESI + 0x4]
004c0f83  LEA EAX,[EDI + EAX*0x1 + -0x8]
004c0f87  TEST EAX,EAX
004c0f89  JZ 0x004c0f95
004c0f8b  MOV EBX,dword ptr [ECX]
004c0f8d  MOV dword ptr [EAX],EBX
004c0f8f  MOV EBX,dword ptr [ECX + 0x4]
004c0f92  MOV dword ptr [EAX + 0x4],EBX
004c0f95  MOV EAX,dword ptr [ESP + 0x20]
004c0f99  SUB EDI,0x8
004c0f9c  SUB ECX,0x8
004c0f9f  DEC EAX
004c0fa0  MOV dword ptr [ESP + 0x20],EAX
004c0fa4  JNZ 0x004c0f80
004c0fa6  MOV ECX,dword ptr [ESP + 0x24]
004c0faa  TEST ECX,ECX
004c0fac  JBE 0x004c0fce
004c0fae  SHL EBP,0x3
004c0fb1  MOV EAX,dword ptr [ESI + 0x4]
004c0fb4  ADD EAX,EBP
004c0fb6  JZ 0x004c0fc8
004c0fb8  MOV EDI,dword ptr [ESP + 0x28]
004c0fbc  MOV EDI,dword ptr [EDI]
004c0fbe  MOV EBX,dword ptr [EDI]
004c0fc0  MOV dword ptr [EAX],EBX
004c0fc2  MOV EDI,dword ptr [EDI + 0x4]
004c0fc5  MOV dword ptr [EAX + 0x4],EDI
004c0fc8  ADD EBP,0x8
004c0fcb  DEC ECX
004c0fcc  JNZ 0x004c0fb1
004c0fce  TEST EDX,EDX
004c0fd0  JZ 0x004c0fe4
004c0fd2  CMP EDX,dword ptr [ESI + 0x4]
004c0fd5  JZ 0x004c0fe4
004c0fd7  MOV ECX,dword ptr [ESP + 0x18]
004c0fdb  MOV EAX,dword ptr [ESI]
004c0fdd  PUSH ECX
004c0fde  PUSH EDX
004c0fdf  MOV ECX,ESI
004c0fe1  CALL dword ptr [EAX + 0x8]
004c0fe4  POP EDI
004c0fe5  POP ESI
004c0fe6  POP EBP
004c0fe7  POP EBX
004c0fe8  ADD ESP,0xc
004c0feb  RET 0xc

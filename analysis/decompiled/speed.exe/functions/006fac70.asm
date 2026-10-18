006fac70  PUSH -0x1
006fac72  PUSH 0x87f4be
006fac77  MOV EAX,FS:[0x0]
006fac7d  PUSH EAX
006fac7e  MOV dword ptr FS:[0x0],ESP
006fac85  SUB ESP,0x8
006fac88  PUSH ESI
006fac89  MOV ESI,ECX
006fac8b  PUSH EDI
006fac8c  MOV dword ptr [ESP + 0xc],ESI
006fac90  CALL 0x006f9610
006fac95  TEST ESI,ESI
006fac97  MOV dword ptr [ESP + 0x18],0x0
006fac9f  JZ 0x006faca6
006faca1  LEA ECX,[ESI + 0x10]
006faca4  JMP 0x006faca8
006faca6  XOR ECX,ECX
006faca8  PUSH EBX
006faca9  LEA EBX,[ESI + 0x4c]
006facac  PUSH EBX
006facad  PUSH 0x402840
006facb2  MOV dword ptr [EBX],0x890970
006facb8  MOV dword ptr [EBX + 0x4],ECX
006facbb  CALL 0x005d7930
006facc0  MOV dword ptr [EBX],0x8b03cc
006facc6  TEST ESI,ESI
006facc8  MOV byte ptr [ESP + 0x1c],0x1
006faccd  JZ 0x006facd4
006faccf  LEA ECX,[ESI + 0x10]
006facd2  JMP 0x006facd6
006facd4  XOR ECX,ECX
006facd6  PUSH EBP
006facd7  LEA EDI,[ESI + 0x54]
006facda  PUSH EDI
006facdb  PUSH 0x6200d0
006face0  MOV dword ptr [EDI],0x890970
006face6  MOV dword ptr [EDI + 0x4],ECX
006face9  CALL 0x005d7930
006facee  MOV dword ptr [EDI],0x8b0798
006facf4  MOV dword ptr [EBX],0x8b0cd4
006facfa  LEA EBP,[ESI + 0x8]
006facfd  XOR EBX,EBX
006facff  PUSH 0x8911a8
006fad04  MOV byte ptr [ESP + 0x24],0x2
006fad09  MOV dword ptr [ESI],0x8b0d30
006fad0f  MOV dword ptr [EBP],0x8b0d28
006fad16  MOV dword ptr [ESI + 0x2c],0x8b0d00
006fad1d  MOV dword ptr [ESI + 0x38],0x8b0ce4
006fad24  MOV dword ptr [EDI],0x8b0c80
006fad2a  MOV dword ptr [ESI + 0x60],EBX
006fad2d  CALL 0x005cc240
006fad32  MOV ECX,dword ptr [0x009885e0]
006fad38  ADD ESP,0x4
006fad3b  PUSH EBX
006fad3c  PUSH EBX
006fad3d  PUSH EBP
006fad3e  MOV dword ptr [ESP + 0x1c],EAX
006fad42  PUSH 0x3f800000
006fad47  LEA EAX,[ESP + 0x20]
006fad4b  PUSH EAX
006fad4c  CALL 0x006ed0f0
006fad51  CMP EAX,EBX
006fad53  POP EBP
006fad54  JZ 0x006fad59
006fad56  INC dword ptr [ESI + 0x24]
006fad59  MOV dword ptr [ESI + 0x64],EAX
006fad5c  LEA EAX,[ESI + 0x34]
006fad5f  CMP EAX,EBX
006fad61  JZ 0x006fad68
006fad63  LEA EDI,[EAX + -0x8]
006fad66  JMP 0x006fad6a
006fad68  XOR EDI,EDI
006fad6a  MOV EAX,[0x0092d7c4]
006fad6f  CMP EAX,dword ptr [0x0092d7c0]
006fad75  JC 0x006fad92
006fad77  MOV EDX,dword ptr [0x0092d7b8]
006fad7d  INC EAX
006fad7e  PUSH EAX
006fad7f  MOV ECX,0x92d7b8
006fad84  CALL dword ptr [EDX + 0xc]
006fad87  PUSH EAX
006fad88  MOV ECX,0x92d7b8
006fad8d  CALL 0x00674580
006fad92  MOV EAX,[0x0092d7bc]
006fad97  MOV ECX,dword ptr [0x0092d7c4]
006fad9d  LEA EAX,[EAX + ECX*0x4]
006fada0  CMP EAX,EBX
006fada2  JZ 0x006fada6
006fada4  MOV dword ptr [EAX],EDI
006fada6  MOV ECX,dword ptr [0x0092d7c4]
006fadac  INC ECX
006fadad  LEA EDI,[ESI + 0x5c]
006fadb0  CMP EDI,EBX
006fadb2  MOV dword ptr [0x0092d7c4],ECX
006fadb8  JZ 0x006fadbd
006fadba  LEA EBX,[EDI + -0x8]
006fadbd  MOV EAX,[0x0092d8b4]
006fadc2  CMP EAX,dword ptr [0x0092d8b0]
006fadc8  JC 0x006fade5
006fadca  MOV EDX,dword ptr [0x0092d8a8]
006fadd0  INC EAX
006fadd1  PUSH EAX
006fadd2  MOV ECX,0x92d8a8
006fadd7  CALL dword ptr [EDX + 0xc]
006fadda  PUSH EAX
006faddb  MOV ECX,0x92d8a8
006fade0  CALL 0x00674510
006fade5  MOV EAX,[0x0092d8ac]
006fadea  MOV ECX,dword ptr [0x0092d8b4]
006fadf0  LEA EAX,[EAX + ECX*0x4]
006fadf3  TEST EAX,EAX
006fadf5  JZ 0x006fadf9
006fadf7  MOV dword ptr [EAX],EBX
006fadf9  MOV ECX,dword ptr [0x0092d8b4]
006fadff  INC ECX
006fae00  TEST EDI,EDI
006fae02  MOV dword ptr [0x0092d8b4],ECX
006fae08  POP EBX
006fae09  JZ 0x006fae10
006fae0b  ADD EDI,-0x8
006fae0e  JMP 0x006fae12
006fae10  XOR EDI,EDI
006fae12  MOV ECX,dword ptr [0x0092d854]
006fae18  CMP ECX,dword ptr [0x0092d850]
006fae1e  JC 0x006fae41
006fae20  MOV EDX,dword ptr [0x0092d848]
006fae26  INC ECX
006fae27  PUSH ECX
006fae28  MOV ECX,0x92d848
006fae2d  CALL dword ptr [EDX + 0xc]
006fae30  PUSH EAX
006fae31  MOV ECX,0x92d848
006fae36  CALL 0x00674510
006fae3b  MOV ECX,dword ptr [0x0092d854]
006fae41  MOV EAX,[0x0092d84c]
006fae46  LEA EAX,[EAX + ECX*0x4]
006fae49  TEST EAX,EAX
006fae4b  JZ 0x006fae6a
006fae4d  MOV dword ptr [EAX],EDI
006fae4f  INC dword ptr [0x0092d854]
006fae55  POP EDI
006fae56  MOV EAX,ESI
006fae58  POP ESI
006fae59  MOV ECX,dword ptr [ESP + 0x8]
006fae5d  MOV dword ptr FS:[0x0],ECX
006fae64  ADD ESP,0x14
006fae67  RET 0x10
006fae6a  INC ECX
006fae6b  MOV dword ptr [0x0092d854],ECX
006fae71  MOV ECX,dword ptr [ESP + 0x10]
006fae75  POP EDI
006fae76  MOV EAX,ESI
006fae78  POP ESI
006fae79  MOV dword ptr FS:[0x0],ECX
006fae80  ADD ESP,0x14
006fae83  RET 0x10

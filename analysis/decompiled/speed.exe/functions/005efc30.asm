005efc30  MOV EAX,FS:[0x0]
005efc36  PUSH -0x1
005efc38  PUSH 0x875768
005efc3d  PUSH EAX
005efc3e  MOV dword ptr FS:[0x0],ESP
005efc45  SUB ESP,0x44
005efc48  PUSH ESI
005efc49  PUSH EDI
005efc4a  MOV EDI,ECX
005efc4c  CMP dword ptr [EDI + 0x8],0xccccccb
005efc53  JC 0x005efca1
005efc55  PUSH 0x13
005efc57  XOR ESI,ESI
005efc59  PUSH 0x892b50
005efc5e  LEA ECX,[ESP + 0x10]
005efc62  MOV dword ptr [ESP + 0x28],0xf
005efc6a  MOV dword ptr [ESP + 0x24],ESI
005efc6e  MOV byte ptr [ESP + 0x14],0x0
005efc73  CALL 0x004303b0
005efc78  LEA EAX,[ESP + 0x8]
005efc7c  PUSH EAX
005efc7d  LEA ECX,[ESP + 0x28]
005efc81  MOV dword ptr [ESP + 0x58],ESI
005efc85  CALL 0x00432d50
005efc8a  PUSH 0x8c9ca8
005efc8f  LEA ECX,[ESP + 0x28]
005efc93  PUSH ECX
005efc94  MOV dword ptr [ESP + 0x2c],0x8bf290
005efc9c  CALL 0x007c56b0
005efca1  MOV EDX,dword ptr [ESP + 0x68]
005efca5  MOV EAX,dword ptr [EDI + 0x4]
005efca8  MOV ESI,dword ptr [ESP + 0x64]
005efcac  PUSH EBX
005efcad  PUSH 0x0
005efcaf  PUSH EDX
005efcb0  PUSH EAX
005efcb1  PUSH ESI
005efcb2  PUSH EAX
005efcb3  MOV ECX,EDI
005efcb5  CALL 0x005e6bd0
005efcba  MOV EBX,dword ptr [EDI + 0x8]
005efcbd  MOV ECX,EAX
005efcbf  MOV EAX,dword ptr [EDI + 0x4]
005efcc2  INC EBX
005efcc3  CMP ESI,EAX
005efcc5  MOV dword ptr [ESP + 0x6c],ECX
005efcc9  MOV dword ptr [EDI + 0x8],EBX
005efccc  JNZ 0x005efcde
005efcce  MOV dword ptr [EAX + 0x4],ECX
005efcd1  MOV EAX,dword ptr [EDI + 0x4]
005efcd4  MOV dword ptr [EAX],ECX
005efcd6  MOV EDX,dword ptr [EDI + 0x4]
005efcd9  MOV dword ptr [EDX + 0x8],ECX
005efcdc  JMP 0x005efd01
005efcde  MOV AL,byte ptr [ESP + 0x64]
005efce2  TEST AL,AL
005efce4  JZ 0x005efcf3
005efce6  MOV dword ptr [ESI],ECX
005efce8  MOV EAX,dword ptr [EDI + 0x4]
005efceb  CMP ESI,dword ptr [EAX]
005efced  JNZ 0x005efd01
005efcef  MOV dword ptr [EAX],ECX
005efcf1  JMP 0x005efd01
005efcf3  MOV dword ptr [ESI + 0x8],ECX
005efcf6  MOV EAX,dword ptr [EDI + 0x4]
005efcf9  CMP ESI,dword ptr [EAX + 0x8]
005efcfc  JNZ 0x005efd01
005efcfe  MOV dword ptr [EAX + 0x8],ECX
005efd01  MOV EDX,dword ptr [ECX + 0x4]
005efd04  CMP byte ptr [EDX + 0x20],0x0
005efd08  LEA EAX,[ECX + 0x4]
005efd0b  MOV ESI,ECX
005efd0d  MOV BL,0x1
005efd0f  JNZ 0x005efdba
005efd15  PUSH EBP
005efd16  MOV ECX,dword ptr [EAX]
005efd18  MOV EBP,dword ptr [ECX + 0x4]
005efd1b  MOV EDX,dword ptr [EBP]
005efd1e  CMP ECX,EDX
005efd20  JNZ 0x005efd72
005efd22  MOV EDX,dword ptr [EBP + 0x8]
005efd25  CMP byte ptr [EDX + 0x20],0x0
005efd29  JNZ 0x005efd43
005efd2b  MOV ECX,dword ptr [EAX]
005efd2d  MOV byte ptr [ECX + 0x20],BL
005efd30  MOV byte ptr [EDX + 0x20],BL
005efd33  MOV EDX,dword ptr [EAX]
005efd35  MOV ECX,dword ptr [EDX + 0x4]
005efd38  MOV byte ptr [ECX + 0x20],0x0
005efd3c  MOV EDX,dword ptr [EAX]
005efd3e  MOV ESI,dword ptr [EDX + 0x4]
005efd41  JMP 0x005efda4
005efd43  CMP ESI,dword ptr [ECX + 0x8]
005efd46  JNZ 0x005efd52
005efd48  MOV ESI,ECX
005efd4a  PUSH ESI
005efd4b  MOV ECX,EDI
005efd4d  CALL 0x005e6ad0
005efd52  MOV EAX,dword ptr [ESI + 0x4]
005efd55  MOV byte ptr [EAX + 0x20],BL
005efd58  MOV ECX,dword ptr [ESI + 0x4]
005efd5b  MOV EDX,dword ptr [ECX + 0x4]
005efd5e  MOV byte ptr [EDX + 0x20],0x0
005efd62  MOV EAX,dword ptr [ESI + 0x4]
005efd65  MOV ECX,dword ptr [EAX + 0x4]
005efd68  PUSH ECX
005efd69  MOV ECX,EDI
005efd6b  CALL 0x005e6b30
005efd70  JMP 0x005efda4
005efd72  CMP byte ptr [EDX + 0x20],0x0
005efd76  JZ 0x005efd2b
005efd78  CMP ESI,dword ptr [ECX]
005efd7a  JNZ 0x005efd86
005efd7c  MOV ESI,ECX
005efd7e  PUSH ESI
005efd7f  MOV ECX,EDI
005efd81  CALL 0x005e6b30
005efd86  MOV EAX,dword ptr [ESI + 0x4]
005efd89  MOV byte ptr [EAX + 0x20],BL
005efd8c  MOV ECX,dword ptr [ESI + 0x4]
005efd8f  MOV EDX,dword ptr [ECX + 0x4]
005efd92  MOV byte ptr [EDX + 0x20],0x0
005efd96  MOV EAX,dword ptr [ESI + 0x4]
005efd99  MOV ECX,dword ptr [EAX + 0x4]
005efd9c  PUSH ECX
005efd9d  MOV ECX,EDI
005efd9f  CALL 0x005e6ad0
005efda4  MOV EDX,dword ptr [ESI + 0x4]
005efda7  MOV CL,byte ptr [EDX + 0x20]
005efdaa  TEST CL,CL
005efdac  LEA EAX,[ESI + 0x4]
005efdaf  JZ 0x005efd16
005efdb5  MOV ECX,dword ptr [ESP + 0x70]
005efdb9  POP EBP
005efdba  MOV EAX,dword ptr [EDI + 0x4]
005efdbd  MOV EDX,dword ptr [EAX + 0x4]
005efdc0  MOV EAX,dword ptr [ESP + 0x60]
005efdc4  MOV byte ptr [EDX + 0x20],BL
005efdc7  POP EBX
005efdc8  MOV dword ptr [EAX],ECX
005efdca  MOV ECX,dword ptr [ESP + 0x4c]
005efdce  POP EDI
005efdcf  POP ESI
005efdd0  MOV dword ptr FS:[0x0],ECX
005efdd7  ADD ESP,0x50
005efdda  RET 0x10

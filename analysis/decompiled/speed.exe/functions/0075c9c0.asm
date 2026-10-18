0075c9c0  MOV EAX,FS:[0x0]
0075c9c6  PUSH -0x1
0075c9c8  PUSH 0x881368
0075c9cd  PUSH EAX
0075c9ce  MOV dword ptr FS:[0x0],ESP
0075c9d5  SUB ESP,0x44
0075c9d8  PUSH ESI
0075c9d9  PUSH EDI
0075c9da  MOV EDI,ECX
0075c9dc  CMP dword ptr [EDI + 0x8],0x1ffffffe
0075c9e3  JC 0x0075ca31
0075c9e5  PUSH 0x13
0075c9e7  XOR ESI,ESI
0075c9e9  PUSH 0x892b50
0075c9ee  LEA ECX,[ESP + 0x10]
0075c9f2  MOV dword ptr [ESP + 0x28],0xf
0075c9fa  MOV dword ptr [ESP + 0x24],ESI
0075c9fe  MOV byte ptr [ESP + 0x14],0x0
0075ca03  CALL 0x004303b0
0075ca08  LEA EAX,[ESP + 0x8]
0075ca0c  PUSH EAX
0075ca0d  LEA ECX,[ESP + 0x28]
0075ca11  MOV dword ptr [ESP + 0x58],ESI
0075ca15  CALL 0x00432d50
0075ca1a  PUSH 0x8c9ca8
0075ca1f  LEA ECX,[ESP + 0x28]
0075ca23  PUSH ECX
0075ca24  MOV dword ptr [ESP + 0x2c],0x8bf290
0075ca2c  CALL 0x007c56b0
0075ca31  MOV EDX,dword ptr [ESP + 0x68]
0075ca35  MOV EAX,dword ptr [EDI + 0x4]
0075ca38  MOV ESI,dword ptr [ESP + 0x64]
0075ca3c  PUSH EBX
0075ca3d  PUSH 0x0
0075ca3f  PUSH EDX
0075ca40  PUSH EAX
0075ca41  PUSH ESI
0075ca42  PUSH EAX
0075ca43  MOV ECX,EDI
0075ca45  CALL 0x0074cc20
0075ca4a  MOV EBX,dword ptr [EDI + 0x8]
0075ca4d  MOV ECX,EAX
0075ca4f  MOV EAX,dword ptr [EDI + 0x4]
0075ca52  INC EBX
0075ca53  CMP ESI,EAX
0075ca55  MOV dword ptr [ESP + 0x6c],ECX
0075ca59  MOV dword ptr [EDI + 0x8],EBX
0075ca5c  JNZ 0x0075ca6e
0075ca5e  MOV dword ptr [EAX + 0x4],ECX
0075ca61  MOV EAX,dword ptr [EDI + 0x4]
0075ca64  MOV dword ptr [EAX],ECX
0075ca66  MOV EDX,dword ptr [EDI + 0x4]
0075ca69  MOV dword ptr [EDX + 0x8],ECX
0075ca6c  JMP 0x0075ca91
0075ca6e  MOV AL,byte ptr [ESP + 0x64]
0075ca72  TEST AL,AL
0075ca74  JZ 0x0075ca83
0075ca76  MOV dword ptr [ESI],ECX
0075ca78  MOV EAX,dword ptr [EDI + 0x4]
0075ca7b  CMP ESI,dword ptr [EAX]
0075ca7d  JNZ 0x0075ca91
0075ca7f  MOV dword ptr [EAX],ECX
0075ca81  JMP 0x0075ca91
0075ca83  MOV dword ptr [ESI + 0x8],ECX
0075ca86  MOV EAX,dword ptr [EDI + 0x4]
0075ca89  CMP ESI,dword ptr [EAX + 0x8]
0075ca8c  JNZ 0x0075ca91
0075ca8e  MOV dword ptr [EAX + 0x8],ECX
0075ca91  MOV EDX,dword ptr [ECX + 0x4]
0075ca94  CMP byte ptr [EDX + 0x14],0x0
0075ca98  LEA EAX,[ECX + 0x4]
0075ca9b  MOV ESI,ECX
0075ca9d  MOV BL,0x1
0075ca9f  JNZ 0x0075cb4a
0075caa5  PUSH EBP
0075caa6  MOV ECX,dword ptr [EAX]
0075caa8  MOV EBP,dword ptr [ECX + 0x4]
0075caab  MOV EDX,dword ptr [EBP]
0075caae  CMP ECX,EDX
0075cab0  JNZ 0x0075cb02
0075cab2  MOV EDX,dword ptr [EBP + 0x8]
0075cab5  CMP byte ptr [EDX + 0x14],0x0
0075cab9  JNZ 0x0075cad3
0075cabb  MOV ECX,dword ptr [EAX]
0075cabd  MOV byte ptr [ECX + 0x14],BL
0075cac0  MOV byte ptr [EDX + 0x14],BL
0075cac3  MOV EDX,dword ptr [EAX]
0075cac5  MOV ECX,dword ptr [EDX + 0x4]
0075cac8  MOV byte ptr [ECX + 0x14],0x0
0075cacc  MOV EDX,dword ptr [EAX]
0075cace  MOV ESI,dword ptr [EDX + 0x4]
0075cad1  JMP 0x0075cb34
0075cad3  CMP ESI,dword ptr [ECX + 0x8]
0075cad6  JNZ 0x0075cae2
0075cad8  MOV ESI,ECX
0075cada  PUSH ESI
0075cadb  MOV ECX,EDI
0075cadd  CALL 0x0074ca70
0075cae2  MOV EAX,dword ptr [ESI + 0x4]
0075cae5  MOV byte ptr [EAX + 0x14],BL
0075cae8  MOV ECX,dword ptr [ESI + 0x4]
0075caeb  MOV EDX,dword ptr [ECX + 0x4]
0075caee  MOV byte ptr [EDX + 0x14],0x0
0075caf2  MOV EAX,dword ptr [ESI + 0x4]
0075caf5  MOV ECX,dword ptr [EAX + 0x4]
0075caf8  PUSH ECX
0075caf9  MOV ECX,EDI
0075cafb  CALL 0x0073f730
0075cb00  JMP 0x0075cb34
0075cb02  CMP byte ptr [EDX + 0x14],0x0
0075cb06  JZ 0x0075cabb
0075cb08  CMP ESI,dword ptr [ECX]
0075cb0a  JNZ 0x0075cb16
0075cb0c  MOV ESI,ECX
0075cb0e  PUSH ESI
0075cb0f  MOV ECX,EDI
0075cb11  CALL 0x0073f730
0075cb16  MOV EAX,dword ptr [ESI + 0x4]
0075cb19  MOV byte ptr [EAX + 0x14],BL
0075cb1c  MOV ECX,dword ptr [ESI + 0x4]
0075cb1f  MOV EDX,dword ptr [ECX + 0x4]
0075cb22  MOV byte ptr [EDX + 0x14],0x0
0075cb26  MOV EAX,dword ptr [ESI + 0x4]
0075cb29  MOV ECX,dword ptr [EAX + 0x4]
0075cb2c  PUSH ECX
0075cb2d  MOV ECX,EDI
0075cb2f  CALL 0x0074ca70
0075cb34  MOV EDX,dword ptr [ESI + 0x4]
0075cb37  MOV CL,byte ptr [EDX + 0x14]
0075cb3a  TEST CL,CL
0075cb3c  LEA EAX,[ESI + 0x4]
0075cb3f  JZ 0x0075caa6
0075cb45  MOV ECX,dword ptr [ESP + 0x70]
0075cb49  POP EBP
0075cb4a  MOV EAX,dword ptr [EDI + 0x4]
0075cb4d  MOV EDX,dword ptr [EAX + 0x4]
0075cb50  MOV EAX,dword ptr [ESP + 0x60]
0075cb54  MOV byte ptr [EDX + 0x14],BL
0075cb57  POP EBX
0075cb58  MOV dword ptr [EAX],ECX
0075cb5a  MOV ECX,dword ptr [ESP + 0x4c]
0075cb5e  POP EDI
0075cb5f  POP ESI
0075cb60  MOV dword ptr FS:[0x0],ECX
0075cb67  ADD ESP,0x50
0075cb6a  RET 0x10

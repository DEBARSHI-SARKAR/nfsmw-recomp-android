0079ae70  MOV EAX,FS:[0x0]
0079ae76  PUSH -0x1
0079ae78  PUSH 0x882818
0079ae7d  PUSH EAX
0079ae7e  MOV dword ptr FS:[0x0],ESP
0079ae85  SUB ESP,0x44
0079ae88  PUSH ESI
0079ae89  PUSH EDI
0079ae8a  MOV EDI,ECX
0079ae8c  CMP dword ptr [EDI + 0x8],0x1ffffffe
0079ae93  JC 0x0079aee1
0079ae95  PUSH 0x13
0079ae97  XOR ESI,ESI
0079ae99  PUSH 0x892b50
0079ae9e  LEA ECX,[ESP + 0x10]
0079aea2  MOV dword ptr [ESP + 0x28],0xf
0079aeaa  MOV dword ptr [ESP + 0x24],ESI
0079aeae  MOV byte ptr [ESP + 0x14],0x0
0079aeb3  CALL 0x004303b0
0079aeb8  LEA EAX,[ESP + 0x8]
0079aebc  PUSH EAX
0079aebd  LEA ECX,[ESP + 0x28]
0079aec1  MOV dword ptr [ESP + 0x58],ESI
0079aec5  CALL 0x00432d50
0079aeca  PUSH 0x8c9ca8
0079aecf  LEA ECX,[ESP + 0x28]
0079aed3  PUSH ECX
0079aed4  MOV dword ptr [ESP + 0x2c],0x8bf290
0079aedc  CALL 0x007c56b0
0079aee1  MOV EDX,dword ptr [ESP + 0x68]
0079aee5  MOV EAX,dword ptr [EDI + 0x4]
0079aee8  MOV ESI,dword ptr [ESP + 0x64]
0079aeec  PUSH EBX
0079aeed  PUSH 0x0
0079aeef  PUSH EDX
0079aef0  PUSH EAX
0079aef1  PUSH ESI
0079aef2  PUSH EAX
0079aef3  MOV ECX,EDI
0079aef5  CALL 0x007927f0
0079aefa  MOV EBX,dword ptr [EDI + 0x8]
0079aefd  MOV ECX,EAX
0079aeff  MOV EAX,dword ptr [EDI + 0x4]
0079af02  INC EBX
0079af03  CMP ESI,EAX
0079af05  MOV dword ptr [ESP + 0x6c],ECX
0079af09  MOV dword ptr [EDI + 0x8],EBX
0079af0c  JNZ 0x0079af1e
0079af0e  MOV dword ptr [EAX + 0x4],ECX
0079af11  MOV EAX,dword ptr [EDI + 0x4]
0079af14  MOV dword ptr [EAX],ECX
0079af16  MOV EDX,dword ptr [EDI + 0x4]
0079af19  MOV dword ptr [EDX + 0x8],ECX
0079af1c  JMP 0x0079af41
0079af1e  MOV AL,byte ptr [ESP + 0x64]
0079af22  TEST AL,AL
0079af24  JZ 0x0079af33
0079af26  MOV dword ptr [ESI],ECX
0079af28  MOV EAX,dword ptr [EDI + 0x4]
0079af2b  CMP ESI,dword ptr [EAX]
0079af2d  JNZ 0x0079af41
0079af2f  MOV dword ptr [EAX],ECX
0079af31  JMP 0x0079af41
0079af33  MOV dword ptr [ESI + 0x8],ECX
0079af36  MOV EAX,dword ptr [EDI + 0x4]
0079af39  CMP ESI,dword ptr [EAX + 0x8]
0079af3c  JNZ 0x0079af41
0079af3e  MOV dword ptr [EAX + 0x8],ECX
0079af41  MOV EDX,dword ptr [ECX + 0x4]
0079af44  CMP byte ptr [EDX + 0x14],0x0
0079af48  LEA EAX,[ECX + 0x4]
0079af4b  MOV ESI,ECX
0079af4d  MOV BL,0x1
0079af4f  JNZ 0x0079affa
0079af55  PUSH EBP
0079af56  MOV ECX,dword ptr [EAX]
0079af58  MOV EBP,dword ptr [ECX + 0x4]
0079af5b  MOV EDX,dword ptr [EBP]
0079af5e  CMP ECX,EDX
0079af60  JNZ 0x0079afb2
0079af62  MOV EDX,dword ptr [EBP + 0x8]
0079af65  CMP byte ptr [EDX + 0x14],0x0
0079af69  JNZ 0x0079af83
0079af6b  MOV ECX,dword ptr [EAX]
0079af6d  MOV byte ptr [ECX + 0x14],BL
0079af70  MOV byte ptr [EDX + 0x14],BL
0079af73  MOV EDX,dword ptr [EAX]
0079af75  MOV ECX,dword ptr [EDX + 0x4]
0079af78  MOV byte ptr [ECX + 0x14],0x0
0079af7c  MOV EDX,dword ptr [EAX]
0079af7e  MOV ESI,dword ptr [EDX + 0x4]
0079af81  JMP 0x0079afe4
0079af83  CMP ESI,dword ptr [ECX + 0x8]
0079af86  JNZ 0x0079af92
0079af88  MOV ESI,ECX
0079af8a  PUSH ESI
0079af8b  MOV ECX,EDI
0079af8d  CALL 0x00792730
0079af92  MOV EAX,dword ptr [ESI + 0x4]
0079af95  MOV byte ptr [EAX + 0x14],BL
0079af98  MOV ECX,dword ptr [ESI + 0x4]
0079af9b  MOV EDX,dword ptr [ECX + 0x4]
0079af9e  MOV byte ptr [EDX + 0x14],0x0
0079afa2  MOV EAX,dword ptr [ESI + 0x4]
0079afa5  MOV ECX,dword ptr [EAX + 0x4]
0079afa8  PUSH ECX
0079afa9  MOV ECX,EDI
0079afab  CALL 0x00792790
0079afb0  JMP 0x0079afe4
0079afb2  CMP byte ptr [EDX + 0x14],0x0
0079afb6  JZ 0x0079af6b
0079afb8  CMP ESI,dword ptr [ECX]
0079afba  JNZ 0x0079afc6
0079afbc  MOV ESI,ECX
0079afbe  PUSH ESI
0079afbf  MOV ECX,EDI
0079afc1  CALL 0x00792790
0079afc6  MOV EAX,dword ptr [ESI + 0x4]
0079afc9  MOV byte ptr [EAX + 0x14],BL
0079afcc  MOV ECX,dword ptr [ESI + 0x4]
0079afcf  MOV EDX,dword ptr [ECX + 0x4]
0079afd2  MOV byte ptr [EDX + 0x14],0x0
0079afd6  MOV EAX,dword ptr [ESI + 0x4]
0079afd9  MOV ECX,dword ptr [EAX + 0x4]
0079afdc  PUSH ECX
0079afdd  MOV ECX,EDI
0079afdf  CALL 0x00792730
0079afe4  MOV EDX,dword ptr [ESI + 0x4]
0079afe7  MOV CL,byte ptr [EDX + 0x14]
0079afea  TEST CL,CL
0079afec  LEA EAX,[ESI + 0x4]
0079afef  JZ 0x0079af56
0079aff5  MOV ECX,dword ptr [ESP + 0x70]
0079aff9  POP EBP
0079affa  MOV EAX,dword ptr [EDI + 0x4]
0079affd  MOV EDX,dword ptr [EAX + 0x4]
0079b000  MOV EAX,dword ptr [ESP + 0x60]
0079b004  MOV byte ptr [EDX + 0x14],BL
0079b007  POP EBX
0079b008  MOV dword ptr [EAX],ECX
0079b00a  MOV ECX,dword ptr [ESP + 0x4c]
0079b00e  POP EDI
0079b00f  POP ESI
0079b010  MOV dword ptr FS:[0x0],ECX
0079b017  ADD ESP,0x50
0079b01a  RET 0x10

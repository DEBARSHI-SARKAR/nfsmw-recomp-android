006bbc70  PUSH -0x1
006bbc72  PUSH 0x87e18e
006bbc77  MOV EAX,FS:[0x0]
006bbc7d  PUSH EAX
006bbc7e  MOV dword ptr FS:[0x0],ESP
006bbc85  SUB ESP,0x20
006bbc88  MOV EAX,dword ptr [ESP + 0x30]
006bbc8c  PUSH EBX
006bbc8d  PUSH EBP
006bbc8e  PUSH ESI
006bbc8f  PUSH EDI
006bbc90  MOV ESI,ECX
006bbc92  PUSH EAX
006bbc93  MOV dword ptr [ESP + 0x14],ESI
006bbc97  CALL 0x006b9e70
006bbc9c  XOR EBX,EBX
006bbc9e  LEA EDI,[ESI + 0xa4]
006bbca4  MOV ECX,EDI
006bbca6  MOV dword ptr [ESP + 0x38],EBX
006bbcaa  MOV dword ptr [ESI],0x8ad83c
006bbcb0  MOV dword ptr [ESI + 0x8],0x8ad834
006bbcb7  MOV dword ptr [ESI + 0x4c],0x8ad818
006bbcbe  MOV dword ptr [ESI + 0x54],0x8ad798
006bbcc5  MOV dword ptr [ESI + 0x60],0x8ad778
006bbccc  MOV dword ptr [ESI + 0x84],EBX
006bbcd2  CALL 0x006a63a0
006bbcd7  MOV dword ptr [EDI + 0x4],EAX
006bbcda  MOV CL,0x1
006bbcdc  MOV byte ptr [EAX + 0x15],CL
006bbcdf  MOV EAX,dword ptr [EDI + 0x4]
006bbce2  MOV dword ptr [EAX + 0x4],EAX
006bbce5  MOV EAX,dword ptr [EDI + 0x4]
006bbce8  MOV dword ptr [EAX],EAX
006bbcea  MOV EAX,dword ptr [EDI + 0x4]
006bbced  MOV dword ptr [EAX + 0x8],EAX
006bbcf0  MOV dword ptr [EDI + 0x8],EBX
006bbcf3  MOV EAX,dword ptr [ESI + 0x34]
006bbcf6  MOV byte ptr [ESP + 0x38],CL
006bbcfa  MOV byte ptr [ESI + 0xb0],BL
006bbd00  MOV dword ptr [ESI + 0xb4],EBX
006bbd06  MOV byte ptr [ESI + 0xb8],BL
006bbd0c  MOV ECX,dword ptr [EAX + 0x4]
006bbd0f  PUSH 0x4040e0
006bbd14  CALL 0x005d59f0
006bbd19  MOV dword ptr [ESI + 0x90],EAX
006bbd1f  MOV EAX,dword ptr [ESI + 0x34]
006bbd22  MOV ECX,dword ptr [EAX + 0x4]
006bbd25  PUSH 0x404040
006bbd2a  CALL 0x005d59f0
006bbd2f  MOV dword ptr [ESI + 0x88],EAX
006bbd35  MOV EAX,dword ptr [ESI + 0x34]
006bbd38  MOV ECX,dword ptr [EAX + 0x4]
006bbd3b  PUSH 0x405000
006bbd40  CALL 0x005d59f0
006bbd45  MOV dword ptr [ESI + 0x8c],EAX
006bbd4b  MOV EAX,dword ptr [ESI + 0x34]
006bbd4e  MOV ECX,dword ptr [EAX + 0x4]
006bbd51  PUSH 0x68cc70
006bbd56  CALL 0x005d59f0
006bbd5b  MOV dword ptr [ESI + 0xa0],EAX
006bbd61  MOV EAX,dword ptr [ESI + 0x34]
006bbd64  MOV ECX,dword ptr [EAX + 0x4]
006bbd67  PUSH 0x620fd0
006bbd6c  CALL 0x005d59f0
006bbd71  MOV dword ptr [ESI + 0x94],EAX
006bbd77  MOV EAX,dword ptr [ESI + 0x34]
006bbd7a  MOV ECX,dword ptr [EAX + 0x4]
006bbd7d  PUSH 0x4039e0
006bbd82  CALL 0x005d59f0
006bbd87  MOV dword ptr [ESI + 0x98],EAX
006bbd8d  MOV EAX,dword ptr [ESI + 0x34]
006bbd90  MOV ECX,dword ptr [EAX + 0x4]
006bbd93  PUSH 0x445650
006bbd98  CALL 0x005d59f0
006bbd9d  MOV dword ptr [ESI + 0x9c],EAX
006bbda3  CMP dword ptr [ESI + 0x88],EBX
006bbda9  JZ 0x006bbe27
006bbdab  MOV ECX,dword ptr [ESI + 0x48]
006bbdae  MOV EDX,dword ptr [ECX]
006bbdb0  CALL dword ptr [EDX + 0x48]
006bbdb3  MOV EAX,dword ptr [EAX + 0x8]
006bbdb6  MOV EAX,dword ptr [EAX + 0x1c]
006bbdb9  CMP EAX,EBX
006bbdbb  MOV EBP,EAX
006bbdbd  JNZ 0x006bbdc4
006bbdbf  MOV EBP,0x890978
006bbdc4  MOV EDI,dword ptr [ESI + 0x48]
006bbdc7  MOV EAX,dword ptr [EDI]
006bbdc9  MOV EBX,dword ptr [ESI + 0x34]
006bbdcc  MOV ECX,EDI
006bbdce  CALL dword ptr [EAX + 0x40]
006bbdd1  MOV EDX,dword ptr [EBX]
006bbdd3  MOV ECX,EBX
006bbdd5  PUSH EAX
006bbdd6  CALL dword ptr [EDX + 0x44]
006bbdd9  MOV ECX,EAX
006bbddb  CALL 0x00452430
006bbde0  PUSH EAX
006bbde1  MOV EAX,dword ptr [EDI]
006bbde3  MOV ECX,EDI
006bbde5  CALL dword ptr [EAX + 0xc8]
006bbdeb  MOV ECX,dword ptr [ESP + 0x4c]
006bbdef  MOV EDX,dword ptr [EBX]
006bbdf1  PUSH EAX
006bbdf2  PUSH ECX
006bbdf3  MOV ECX,EBX
006bbdf5  CALL dword ptr [EDX + 0x70]
006bbdf8  PUSH EAX
006bbdf9  PUSH EBP
006bbdfa  LEA ECX,[ESP + 0x2c]
006bbdfe  CALL 0x0068c2e0
006bbe03  LEA EAX,[ESP + 0x14]
006bbe07  PUSH EAX
006bbe08  PUSH ECX
006bbe09  MOV EAX,ESP
006bbe0b  MOV ECX,ESI
006bbe0d  MOV byte ptr [ESP + 0x40],0x2
006bbe12  MOV dword ptr [ESP + 0x48],ESP
006bbe16  MOV dword ptr [EAX],0x804c146e
006bbe1c  CALL 0x006f4400
006bbe21  MOV dword ptr [ESI + 0x84],EAX
006bbe27  MOV ECX,dword ptr [ESP + 0x30]
006bbe2b  POP EDI
006bbe2c  MOV EAX,ESI
006bbe2e  POP ESI
006bbe2f  POP EBP
006bbe30  MOV dword ptr FS:[0x0],ECX
006bbe37  POP EBX
006bbe38  ADD ESP,0x2c
006bbe3b  RET 0x8

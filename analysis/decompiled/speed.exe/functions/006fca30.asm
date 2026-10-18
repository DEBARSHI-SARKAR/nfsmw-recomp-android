006fca30  PUSH -0x1
006fca32  PUSH 0x87f6a3
006fca37  MOV EAX,FS:[0x0]
006fca3d  PUSH EAX
006fca3e  MOV dword ptr FS:[0x0],ESP
006fca45  SUB ESP,0x8
006fca48  PUSH EBX
006fca49  PUSH EBP
006fca4a  PUSH ESI
006fca4b  MOV ESI,ECX
006fca4d  PUSH EDI
006fca4e  MOV dword ptr [ESP + 0x14],ESI
006fca52  CALL 0x006f9610
006fca57  XOR EBX,EBX
006fca59  CMP ESI,EBX
006fca5b  MOV dword ptr [ESP + 0x20],EBX
006fca5f  JZ 0x006fca66
006fca61  LEA ECX,[ESI + 0x10]
006fca64  JMP 0x006fca68
006fca66  XOR ECX,ECX
006fca68  LEA EDI,[ESI + 0x4c]
006fca6b  PUSH EDI
006fca6c  PUSH 0x6200d0
006fca71  MOV dword ptr [EDI],0x890970
006fca77  MOV dword ptr [EDI + 0x4],ECX
006fca7a  CALL 0x005d7930
006fca7f  MOV dword ptr [EDI],0x8b0798
006fca85  MOV dword ptr [ESI + 0x54],0x890d38
006fca8c  OR EAX,0xffffffff
006fca8f  LEA EBP,[ESI + 0x54]
006fca92  MOV dword ptr [ESI + 0x60],EAX
006fca95  MOV dword ptr [ESI + 0x64],EAX
006fca98  MOV dword ptr [ESI + 0x68],EAX
006fca9b  LEA EAX,[ESI + 0x34]
006fca9e  CMP EAX,EBX
006fcaa0  MOV byte ptr [ESP + 0x20],0x1
006fcaa5  MOV dword ptr [ESI],0x8b0bb0
006fcaab  MOV dword ptr [ESI + 0x8],0x8b0ba8
006fcab2  MOV dword ptr [ESI + 0x2c],0x8b0b80
006fcab9  MOV dword ptr [ESI + 0x38],0x8b0b64
006fcac0  MOV dword ptr [EDI],0x8b0b10
006fcac6  MOV dword ptr [EBP],0x8b0b08
006fcacd  MOV dword ptr [ESI + 0x58],EBX
006fcad0  MOV dword ptr [ESI + 0x5c],EBX
006fcad3  MOV dword ptr [ESI + 0x6c],0x890978
006fcada  MOV dword ptr [ESI + 0x70],EBX
006fcadd  MOV dword ptr [ESI + 0x74],EBX
006fcae0  MOV dword ptr [ESI + 0x78],EBX
006fcae3  MOV dword ptr [ESI + 0x7c],EBX
006fcae6  MOV byte ptr [ESI + 0x80],BL
006fcaec  MOV dword ptr [ESI + 0x84],0x3f800000
006fcaf6  MOV dword ptr [ESI + 0x88],EBX
006fcafc  JZ 0x006fcb03
006fcafe  LEA EDI,[EAX + -0x8]
006fcb01  JMP 0x006fcb05
006fcb03  XOR EDI,EDI
006fcb05  MOV EAX,[0x0092d7c4]
006fcb0a  CMP EAX,dword ptr [0x0092d7c0]
006fcb10  JC 0x006fcb2c
006fcb12  INC EAX
006fcb13  PUSH EAX
006fcb14  MOV EAX,[0x0092d7b8]
006fcb19  MOV ECX,0x92d7b8
006fcb1e  CALL dword ptr [EAX + 0xc]
006fcb21  PUSH EAX
006fcb22  MOV ECX,0x92d7b8
006fcb27  CALL 0x00674580
006fcb2c  MOV ECX,dword ptr [0x0092d7bc]
006fcb32  MOV EDX,dword ptr [0x0092d7c4]
006fcb38  LEA EAX,[ECX + EDX*0x4]
006fcb3b  CMP EAX,EBX
006fcb3d  JZ 0x006fcb41
006fcb3f  MOV dword ptr [EAX],EDI
006fcb41  MOV ECX,dword ptr [0x0092d7c4]
006fcb47  INC ECX
006fcb48  CMP EBP,EBX
006fcb4a  MOV dword ptr [0x0092d7c4],ECX
006fcb50  JZ 0x006fcb57
006fcb52  LEA EDI,[EBP + -0x8]
006fcb55  JMP 0x006fcb59
006fcb57  XOR EDI,EDI
006fcb59  MOV EAX,[0x0092d884]
006fcb5e  CMP EAX,dword ptr [0x0092d880]
006fcb64  JC 0x006fcb80
006fcb66  INC EAX
006fcb67  PUSH EAX
006fcb68  MOV EAX,[0x0092d878]
006fcb6d  MOV ECX,0x92d878
006fcb72  CALL dword ptr [EAX + 0xc]
006fcb75  PUSH EAX
006fcb76  MOV ECX,0x92d878
006fcb7b  CALL 0x00674510
006fcb80  MOV ECX,dword ptr [0x0092d87c]
006fcb86  MOV EDX,dword ptr [0x0092d884]
006fcb8c  LEA EAX,[ECX + EDX*0x4]
006fcb8f  CMP EAX,EBX
006fcb91  JZ 0x006fcb95
006fcb93  MOV dword ptr [EAX],EDI
006fcb95  MOV ECX,dword ptr [0x0092d884]
006fcb9b  INC ECX
006fcb9c  CMP EBP,EBX
006fcb9e  MOV dword ptr [0x0092d884],ECX
006fcba4  JZ 0x006fcbab
006fcba6  LEA EDI,[EBP + -0x8]
006fcba9  JMP 0x006fcbad
006fcbab  XOR EDI,EDI
006fcbad  MOV EAX,[0x0092d854]
006fcbb2  CMP EAX,dword ptr [0x0092d850]
006fcbb8  JC 0x006fcbd4
006fcbba  INC EAX
006fcbbb  PUSH EAX
006fcbbc  MOV EAX,[0x0092d848]
006fcbc1  MOV ECX,0x92d848
006fcbc6  CALL dword ptr [EAX + 0xc]
006fcbc9  PUSH EAX
006fcbca  MOV ECX,0x92d848
006fcbcf  CALL 0x00674510
006fcbd4  MOV ECX,dword ptr [0x0092d84c]
006fcbda  MOV EDX,dword ptr [0x0092d854]
006fcbe0  LEA EAX,[ECX + EDX*0x4]
006fcbe3  CMP EAX,EBX
006fcbe5  JZ 0x006fcbe9
006fcbe7  MOV dword ptr [EAX],EDI
006fcbe9  MOV EAX,[0x0092d854]
006fcbee  INC EAX
006fcbef  PUSH 0x890fc0
006fcbf4  MOV [0x0092d854],EAX
006fcbf9  CALL 0x005cc240
006fcbfe  MOV ECX,dword ptr [0x0092c668]
006fcc04  ADD ESP,0x4
006fcc07  CMP ECX,EBX
006fcc09  JZ 0x006fcc1b
006fcc0b  JMP 0x006fcc10
006fcc10  CMP dword ptr [ECX],EAX
006fcc12  JZ 0x006fcc7b
006fcc14  MOV ECX,dword ptr [ECX + 0x8]
006fcc17  CMP ECX,EBX
006fcc19  JNZ 0x006fcc10
006fcc1b  XOR EAX,EAX
006fcc1d  CMP EAX,EBX
006fcc1f  MOV dword ptr [ESI + 0x7c],EAX
006fcc22  JZ 0x006fcc2d
006fcc24  PUSH EAX
006fcc25  LEA ECX,[ESI + 0x2c]
006fcc28  CALL 0x006fc4b0
006fcc2d  PUSH 0x8911a8
006fcc32  CALL 0x005cc240
006fcc37  MOV ECX,dword ptr [0x009885e0]
006fcc3d  ADD ESP,0x4
006fcc40  PUSH 0x1
006fcc42  MOV dword ptr [ESP + 0x14],EAX
006fcc46  PUSH EBX
006fcc47  LEA EAX,[ESI + 0x8]
006fcc4a  PUSH EAX
006fcc4b  PUSH 0x3f800000
006fcc50  LEA EAX,[ESP + 0x20]
006fcc54  PUSH EAX
006fcc55  CALL 0x006ed0f0
006fcc5a  MOV dword ptr [ESI + 0x78],EAX
006fcc5d  CMP EAX,EBX
006fcc5f  MOV EAX,ESI
006fcc61  JZ 0x006fcc66
006fcc63  INC dword ptr [ESI + 0x24]
006fcc66  MOV ECX,dword ptr [ESP + 0x18]
006fcc6a  POP EDI
006fcc6b  POP ESI
006fcc6c  POP EBP
006fcc6d  MOV dword ptr FS:[0x0],ECX
006fcc74  POP EBX
006fcc75  ADD ESP,0x14
006fcc78  RET 0x10

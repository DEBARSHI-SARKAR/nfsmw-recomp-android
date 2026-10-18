004ebd90  PUSH -0x1
004ebd92  PUSH 0x86d14c
004ebd97  MOV EAX,FS:[0x0]
004ebd9d  PUSH EAX
004ebd9e  MOV dword ptr FS:[0x0],ESP
004ebda5  PUSH ECX
004ebda6  MOV EAX,dword ptr [ESP + 0x14]
004ebdaa  PUSH EBP
004ebdab  MOV EBP,ECX
004ebdad  MOV ECX,dword ptr [EAX + 0x10]
004ebdb0  MOV EDX,dword ptr [EBP + 0xc]
004ebdb3  MOV dword ptr [EDX + ECX*0x4],0x7fff
004ebdba  MOV EAX,dword ptr [EAX + 0x10]
004ebdbd  DEC EAX
004ebdbe  CMP EAX,0x3
004ebdc1  JA 0x004ec08e
004ebdc7  PUSH EBX
004ebdc8  PUSH ESI
004ebdc9  PUSH EDI
004ebdca  JMP dword ptr [EAX*0x4 + 0x4ec0a0]
004ebdd1  MOV EAX,dword ptr [EBP + 0x28]
004ebdd4  XOR EDI,EDI
004ebdd6  CMP EAX,EDI
004ebdd8  JNZ 0x004ec08b
004ebdde  PUSH 0x1c
004ebde0  CALL 0x00831667
004ebde5  MOV ESI,EAX
004ebde7  ADD ESP,0x4
004ebdea  MOV dword ptr [ESP + 0x24],ESI
004ebdee  CMP ESI,EDI
004ebdf0  MOV dword ptr [ESP + 0x1c],EDI
004ebdf4  JZ 0x004ebe53
004ebdf6  LEA EBX,[ESI + 0x4]
004ebdf9  PUSH ESI
004ebdfa  PUSH EBX
004ebdfb  PUSH 0x91481c
004ebe00  MOV dword ptr [EBX],EDI
004ebe02  MOV dword ptr [ESI + 0x8],EDI
004ebe05  MOV dword ptr [ESI + 0xc],EDI
004ebe08  MOV dword ptr [ESI + 0x10],EDI
004ebe0b  MOV dword ptr [ESI + 0x14],EDI
004ebe0e  MOV dword ptr [ESI + 0x18],EDI
004ebe11  CALL 0x00831a8a
004ebe16  ADD ESP,0xc
004ebe19  TEST EAX,EAX
004ebe1b  JGE 0x004ebe55
004ebe1d  PUSH 0x8f0328
004ebe22  MOV ECX,0x91481c
004ebe27  CALL 0x0083198b
004ebe2c  PUSH ESI
004ebe2d  PUSH EBX
004ebe2e  PUSH 0x91481c
004ebe33  CALL 0x00831a8a
004ebe38  ADD ESP,0xc
004ebe3b  POP EDI
004ebe3c  MOV dword ptr [EBP + 0x28],ESI
004ebe3f  POP ESI
004ebe40  POP EBX
004ebe41  POP EBP
004ebe42  MOV ECX,dword ptr [ESP + 0x4]
004ebe46  MOV dword ptr FS:[0x0],ECX
004ebe4d  ADD ESP,0x10
004ebe50  RET 0x4
004ebe53  XOR ESI,ESI
004ebe55  POP EDI
004ebe56  MOV dword ptr [EBP + 0x28],ESI
004ebe59  POP ESI
004ebe5a  POP EBX
004ebe5b  POP EBP
004ebe5c  MOV ECX,dword ptr [ESP + 0x4]
004ebe60  MOV dword ptr FS:[0x0],ECX
004ebe67  ADD ESP,0x10
004ebe6a  RET 0x4
004ebe6d  MOV EAX,dword ptr [EBP + 0x24]
004ebe70  XOR EDI,EDI
004ebe72  CMP EAX,EDI
004ebe74  JNZ 0x004ec08b
004ebe7a  PUSH 0x24
004ebe7c  CALL 0x00831667
004ebe81  MOV ESI,EAX
004ebe83  ADD ESP,0x4
004ebe86  MOV dword ptr [ESP + 0x24],ESI
004ebe8a  CMP ESI,EDI
004ebe8c  MOV dword ptr [ESP + 0x1c],0x1
004ebe94  JZ 0x004ebf23
004ebe9a  MOV EAX,dword ptr [EBP + 0x10]
004ebe9d  CMP EAX,EDI
004ebe9f  JZ 0x004ebeaa
004ebea1  MOV EAX,dword ptr [EAX]
004ebea3  AND EAX,0x7fff
004ebea8  JMP 0x004ebeac
004ebeaa  XOR EAX,EAX
004ebeac  CMP EAX,EDI
004ebeae  LEA EBX,[ESI + 0x4]
004ebeb1  MOV dword ptr [EBX],EDI
004ebeb3  JGE 0x004ebeb9
004ebeb5  XOR EAX,EAX
004ebeb7  JMP 0x004ebec5
004ebeb9  CMP EAX,0x7fff
004ebebe  JLE 0x004ebec5
004ebec0  MOV EAX,0x7fff
004ebec5  PUSH ESI
004ebec6  PUSH EBX
004ebec7  PUSH 0x914a7c
004ebecc  MOV dword ptr [ESI + 0x8],EAX
004ebecf  MOV dword ptr [ESI + 0xc],EDI
004ebed2  MOV dword ptr [ESI + 0x10],EDI
004ebed5  MOV dword ptr [ESI + 0x14],EDI
004ebed8  MOV dword ptr [ESI + 0x18],EDI
004ebedb  MOV dword ptr [ESI + 0x1c],EDI
004ebede  MOV dword ptr [ESI + 0x20],EDI
004ebee1  CALL 0x00831a8a
004ebee6  ADD ESP,0xc
004ebee9  TEST EAX,EAX
004ebeeb  JGE 0x004ebf25
004ebeed  PUSH 0x8f0320
004ebef2  MOV ECX,0x914a7c
004ebef7  CALL 0x0083198b
004ebefc  PUSH ESI
004ebefd  PUSH EBX
004ebefe  PUSH 0x914a7c
004ebf03  CALL 0x00831a8a
004ebf08  ADD ESP,0xc
004ebf0b  POP EDI
004ebf0c  MOV dword ptr [EBP + 0x24],ESI
004ebf0f  POP ESI
004ebf10  POP EBX
004ebf11  POP EBP
004ebf12  MOV ECX,dword ptr [ESP + 0x4]
004ebf16  MOV dword ptr FS:[0x0],ECX
004ebf1d  ADD ESP,0x10
004ebf20  RET 0x4
004ebf23  XOR ESI,ESI
004ebf25  POP EDI
004ebf26  MOV dword ptr [EBP + 0x24],ESI
004ebf29  POP ESI
004ebf2a  POP EBX
004ebf2b  POP EBP
004ebf2c  MOV ECX,dword ptr [ESP + 0x4]
004ebf30  MOV dword ptr FS:[0x0],ECX
004ebf37  ADD ESP,0x10
004ebf3a  RET 0x4
004ebf3d  MOV ESI,dword ptr [EBP + 0x2c]
004ebf40  XOR EDI,EDI
004ebf42  CMP ESI,EDI
004ebf44  JZ 0x004ebf5a
004ebf46  MOV ECX,dword ptr [ESI]
004ebf48  CMP ECX,EDI
004ebf4a  JZ 0x004ebf51
004ebf4c  CALL 0x00831782
004ebf51  PUSH ESI
004ebf52  CALL 0x00831682
004ebf57  ADD ESP,0x4
004ebf5a  PUSH 0x1c
004ebf5c  CALL 0x00831667
004ebf61  MOV ESI,EAX
004ebf63  ADD ESP,0x4
004ebf66  MOV dword ptr [ESP + 0x24],ESI
004ebf6a  CMP ESI,EDI
004ebf6c  MOV dword ptr [ESP + 0x1c],0x2
004ebf74  JZ 0x004ebfc1
004ebf76  LEA EBX,[ESI + 0x4]
004ebf79  PUSH ESI
004ebf7a  PUSH EBX
004ebf7b  PUSH 0x91481c
004ebf80  MOV dword ptr [EBX],0x2
004ebf86  MOV dword ptr [ESI + 0x8],EDI
004ebf89  MOV dword ptr [ESI + 0xc],EDI
004ebf8c  MOV dword ptr [ESI + 0x10],EDI
004ebf8f  MOV dword ptr [ESI + 0x14],EDI
004ebf92  MOV dword ptr [ESI + 0x18],EDI
004ebf95  CALL 0x00831a8a
004ebf9a  ADD ESP,0xc
004ebf9d  CMP EAX,EDI
004ebf9f  JGE 0x004ebfc3
004ebfa1  PUSH 0x8f0328
004ebfa6  MOV ECX,0x91481c
004ebfab  CALL 0x0083198b
004ebfb0  PUSH ESI
004ebfb1  PUSH EBX
004ebfb2  PUSH 0x91481c
004ebfb7  CALL 0x00831a8a
004ebfbc  ADD ESP,0xc
004ebfbf  JMP 0x004ebfc3
004ebfc1  XOR ESI,ESI
004ebfc3  MOV dword ptr [EBP + 0x2c],ESI
004ebfc6  MOV ECX,dword ptr [ESI]
004ebfc8  CMP ECX,EDI
004ebfca  MOV dword ptr [ESP + 0x1c],0xffffffff
004ebfd2  MOV dword ptr [ESP + 0x24],EDI
004ebfd6  JZ 0x004ec08b
004ebfdc  LEA EAX,[ESP + 0x24]
004ebfe0  PUSH EAX
004ebfe1  JMP 0x004ec086
004ebfe6  MOV ESI,dword ptr [EBP + 0x30]
004ebfe9  XOR EDI,EDI
004ebfeb  CMP ESI,EDI
004ebfed  JZ 0x004ec003
004ebfef  MOV ECX,dword ptr [ESI]
004ebff1  CMP ECX,EDI
004ebff3  JZ 0x004ebffa
004ebff5  CALL 0x00831782
004ebffa  PUSH ESI
004ebffb  CALL 0x00831682
004ec000  ADD ESP,0x4
004ec003  PUSH 0x1c
004ec005  CALL 0x00831667
004ec00a  MOV ESI,EAX
004ec00c  ADD ESP,0x4
004ec00f  MOV dword ptr [ESP + 0x24],ESI
004ec013  CMP ESI,EDI
004ec015  MOV dword ptr [ESP + 0x1c],0x3
004ec01d  JZ 0x004ec06a
004ec01f  LEA EBX,[ESI + 0x4]
004ec022  PUSH ESI
004ec023  PUSH EBX
004ec024  PUSH 0x91481c
004ec029  MOV dword ptr [EBX],0x1
004ec02f  MOV dword ptr [ESI + 0x8],EDI
004ec032  MOV dword ptr [ESI + 0xc],EDI
004ec035  MOV dword ptr [ESI + 0x10],EDI
004ec038  MOV dword ptr [ESI + 0x14],EDI
004ec03b  MOV dword ptr [ESI + 0x18],EDI
004ec03e  CALL 0x00831a8a
004ec043  ADD ESP,0xc
004ec046  CMP EAX,EDI
004ec048  JGE 0x004ec06c
004ec04a  PUSH 0x8f0328
004ec04f  MOV ECX,0x91481c
004ec054  CALL 0x0083198b
004ec059  PUSH ESI
004ec05a  PUSH EBX
004ec05b  PUSH 0x91481c
004ec060  CALL 0x00831a8a
004ec065  ADD ESP,0xc
004ec068  JMP 0x004ec06c
004ec06a  XOR ESI,ESI
004ec06c  MOV dword ptr [EBP + 0x30],ESI
004ec06f  MOV ECX,dword ptr [ESI]
004ec071  CMP ECX,EDI
004ec073  MOV dword ptr [ESP + 0x1c],0xffffffff
004ec07b  MOV dword ptr [ESP + 0x10],EDI
004ec07f  JZ 0x004ec08b
004ec081  LEA EDX,[ESP + 0x10]
004ec085  PUSH EDX
004ec086  CALL 0x008311aa
004ec08b  POP EDI
004ec08c  POP ESI
004ec08d  POP EBX
004ec08e  MOV ECX,dword ptr [ESP + 0x8]
004ec092  POP EBP
004ec093  MOV dword ptr FS:[0x0],ECX
004ec09a  ADD ESP,0x10
004ec09d  RET 0x4

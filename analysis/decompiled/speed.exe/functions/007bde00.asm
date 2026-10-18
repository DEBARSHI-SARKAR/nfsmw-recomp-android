007bde00  SUB ESP,0x34
007bde03  PUSH EBX
007bde04  PUSH EBP
007bde05  PUSH ESI
007bde06  MOV ESI,ECX
007bde08  MOV ECX,dword ptr [0x00905e38]
007bde0e  XOR EBX,EBX
007bde10  CMP ECX,-0x1
007bde13  PUSH EDI
007bde14  MOV EAX,0x4f
007bde19  JZ 0x007bde42
007bde1b  SUB ECX,EBX
007bde1d  JZ 0x007bde33
007bde1f  DEC ECX
007bde20  JZ 0x007bde2c
007bde22  DEC ECX
007bde23  JNZ 0x007bde38
007bde25  MOV EAX,0x51
007bde2a  JMP 0x007bde38
007bde2c  MOV EAX,0x50
007bde31  JMP 0x007bde38
007bde33  MOV EAX,0x4f
007bde38  MOV dword ptr [0x00905e38],0xffffffff
007bde42  PUSH EAX
007bde43  MOV ECX,ESI
007bde45  CALL 0x007b8040
007bde4a  MOV EAX,[0x009ba080]
007bde4f  MOV ECX,dword ptr [EAX + 0xc]
007bde52  PUSH EBX
007bde53  PUSH 0x6212682b
007bde58  CALL 0x00747ae0
007bde5d  CMP EAX,0x1
007bde60  MOV dword ptr [ESI + 0x2e0],EAX
007bde66  JG 0x007bde95
007bde68  MOV EAX,dword ptr [ESI + 0x10]
007bde6b  PUSH 0x2c3cc2d3
007bde70  PUSH EAX
007bde71  CALL 0x00524850
007bde76  PUSH EAX
007bde77  CALL 0x00514c70
007bde7c  MOV EAX,dword ptr [ESI + 0x10]
007bde7f  PUSH 0x53639a10
007bde84  PUSH EAX
007bde85  CALL 0x00524850
007bde8a  PUSH EAX
007bde8b  CALL 0x00514c70
007bde90  ADD ESP,0x18
007bde93  JMP 0x007bdeaa
007bde95  MOV ECX,dword ptr [ESI + 0x10]
007bde98  PUSH EBX
007bde99  PUSH ECX
007bde9a  MOV ECX,dword ptr [0x0091cadc]
007bdea0  PUSH 0x1a7240f3
007bdea5  CALL 0x00516c90
007bdeaa  MOV ECX,0x9b9e3c
007bdeaf  MOV EDI,0x4f
007bdeb4  MOV dword ptr [ESP + 0x10],ECX
007bdeb8  LEA EBP,[ESI + 0x2d4]
007bdebe  MOV dword ptr [ESP + 0x14],0x3
007bdec6  MOV EAX,dword ptr [ECX]
007bdec8  CMP EAX,EBX
007bdeca  JZ 0x007bded6
007bdecc  MOV dword ptr [EBP],EAX
007bdecf  MOV dword ptr [ECX],EBX
007bded1  JMP 0x007bdfae
007bded6  LEA EDX,[ESP + 0x18]
007bdeda  MOV ESI,0x8b7518
007bdedf  PUSH EDX
007bdee0  MOV ECX,0x9b9ec0
007bdee5  MOV dword ptr [ESP + 0x1c],ESI
007bdee9  MOV dword ptr [ESP + 0x28],EBX
007bdeed  MOV dword ptr [ESP + 0x2c],EDI
007bdef1  MOV dword ptr [ESP + 0x30],EBX
007bdef5  MOV dword ptr [ESP + 0x34],0x7
007bdefd  MOV byte ptr [ESP + 0x38],BL
007bdf01  MOV dword ptr [ESP + 0x3c],0x1
007bdf09  MOV dword ptr [ESP + 0x40],EBX
007bdf0d  MOV byte ptr [ESP + 0x44],BL
007bdf11  CALL 0x007aeb90
007bdf16  CMP EAX,EBX
007bdf18  MOV dword ptr [ESP + 0x18],ESI
007bdf1c  JZ 0x007bdf26
007bdf1e  MOV EAX,dword ptr [EAX + 0xc]
007bdf21  MOV ESI,dword ptr [EAX + 0xc]
007bdf24  JMP 0x007bdf5e
007bdf26  MOV EDX,dword ptr [0x009b9ec4]
007bdf2c  MOV ECX,dword ptr [0x0091cf90]
007bdf32  MOV ECX,dword ptr [ECX + 0x10]
007bdf35  XOR EAX,EAX
007bdf37  MOV AL,byte ptr [EDX + 0x10]
007bdf3a  ADD ECX,0x414
007bdf40  PUSH EAX
007bdf41  CALL 0x0056f100
007bdf46  MOV ECX,dword ptr [0x009b9ec4]
007bdf4c  PUSH EDI
007bdf4d  MOV ESI,EAX
007bdf4f  CALL 0x005816b0
007bdf54  PUSH EAX
007bdf55  MOV ECX,ESI
007bdf57  CALL 0x0056f250
007bdf5c  MOV ESI,EAX
007bdf5e  CMP ESI,EBX
007bdf60  JZ 0x007bdfab
007bdf62  PUSH 0x2c
007bdf64  CALL 0x00652ad0
007bdf69  ADD ESP,0x4
007bdf6c  CMP EAX,EBX
007bdf6e  JZ 0x007bdfa4
007bdf70  MOV CL,byte ptr [ESI + 0x5]
007bdf73  SHR CL,0x5
007bdf76  MOVSX ECX,CL
007bdf79  MOV dword ptr [EAX],0x8b7518
007bdf7f  MOV dword ptr [EAX + 0xc],ESI
007bdf82  MOV dword ptr [EAX + 0x10],EDI
007bdf85  MOV dword ptr [EAX + 0x14],ECX
007bdf88  MOV dword ptr [EAX + 0x18],0x7
007bdf8f  MOV byte ptr [EAX + 0x1c],BL
007bdf92  MOV dword ptr [EAX + 0x20],0x1
007bdf99  MOV dword ptr [EAX + 0x24],EBX
007bdf9c  MOV byte ptr [EAX + 0x28],BL
007bdf9f  MOV dword ptr [EBP],EAX
007bdfa2  JMP 0x007bdfae
007bdfa4  XOR EAX,EAX
007bdfa6  MOV dword ptr [EBP],EAX
007bdfa9  JMP 0x007bdfae
007bdfab  MOV dword ptr [EBP],EBX
007bdfae  MOV ECX,dword ptr [ESP + 0x10]
007bdfb2  MOV EAX,dword ptr [ESP + 0x14]
007bdfb6  ADD ECX,0x4
007bdfb9  INC EDI
007bdfba  ADD EBP,0x4
007bdfbd  DEC EAX
007bdfbe  MOV dword ptr [ESP + 0x10],ECX
007bdfc2  MOV dword ptr [ESP + 0x14],EAX
007bdfc6  JNZ 0x007bdec6
007bdfcc  POP EDI
007bdfcd  POP ESI
007bdfce  POP EBP
007bdfcf  POP EBX
007bdfd0  ADD ESP,0x34
007bdfd3  RET

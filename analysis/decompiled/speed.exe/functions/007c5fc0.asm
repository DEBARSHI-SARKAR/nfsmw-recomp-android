007c5fc0  PUSH EBP
007c5fc1  MOV EBP,ESP
007c5fc3  SUB ESP,0x14
007c5fc6  MOV EAX,dword ptr [EBP + 0x8]
007c5fc9  CMP dword ptr [EAX + 0x14],0x0
007c5fcd  JZ 0x007c5fde
007c5fcf  MOV ECX,dword ptr [EBP + 0x8]
007c5fd2  CMP dword ptr [ECX + 0x24],0x0
007c5fd6  JZ 0x007c6003
007c5fd8  CMP dword ptr [EBP + 0xc],0x7f
007c5fdc  JA 0x007c6003
007c5fde  CMP dword ptr [EBP + 0xc],0x41
007c5fe2  JL 0x007c5ff5
007c5fe4  CMP dword ptr [EBP + 0xc],0x5a
007c5fe8  JG 0x007c5ff5
007c5fea  MOV EDX,dword ptr [EBP + 0xc]
007c5fed  ADD EDX,0x20
007c5ff0  MOV dword ptr [EBP + -0x10],EDX
007c5ff3  JMP 0x007c5ffb
007c5ff5  MOV EAX,dword ptr [EBP + 0xc]
007c5ff8  MOV dword ptr [EBP + -0x10],EAX
007c5ffb  MOV EAX,dword ptr [EBP + -0x10]
007c5ffe  JMP 0x007c60f4
007c6003  CMP dword ptr [EBP + 0xc],0x100
007c600a  JNC 0x007c604f
007c600c  MOV ECX,dword ptr [EBP + 0x8]
007c600f  CMP dword ptr [ECX + 0x28],0x1
007c6013  JLE 0x007c602c
007c6015  PUSH 0x1
007c6017  MOV EDX,dword ptr [EBP + 0xc]
007c601a  PUSH EDX
007c601b  MOV EAX,dword ptr [EBP + 0x8]
007c601e  PUSH EAX
007c601f  CALL 0x007d4710
007c6024  ADD ESP,0xc
007c6027  MOV dword ptr [EBP + -0x14],EAX
007c602a  JMP 0x007c6041
007c602c  PUSH 0x1
007c602e  MOV ECX,dword ptr [EBP + 0xc]
007c6031  PUSH ECX
007c6032  MOV EDX,dword ptr [EBP + 0x8]
007c6035  PUSH EDX
007c6036  CALL 0x007d4690
007c603b  ADD ESP,0xc
007c603e  MOV dword ptr [EBP + -0x14],EAX
007c6041  CMP dword ptr [EBP + -0x14],0x0
007c6045  JNZ 0x007c604f
007c6047  MOV EAX,dword ptr [EBP + 0xc]
007c604a  JMP 0x007c60f4
007c604f  MOV EAX,dword ptr [EBP + 0xc]
007c6052  SAR EAX,0x8
007c6055  AND EAX,0xff
007c605a  MOVZX ECX,AL
007c605d  MOV EDX,dword ptr [EBP + 0x8]
007c6060  MOV EAX,dword ptr [EDX + 0x48]
007c6063  MOVZX ECX,word ptr [EAX + ECX*0x2]
007c6067  AND ECX,0x8000
007c606d  JZ 0x007c6091
007c606f  MOV EDX,dword ptr [EBP + 0xc]
007c6072  SAR EDX,0x8
007c6075  AND EDX,0xff
007c607b  MOV byte ptr [EBP + -0x8],DL
007c607e  MOV AL,byte ptr [EBP + 0xc]
007c6081  MOV byte ptr [EBP + -0x7],AL
007c6084  MOV byte ptr [EBP + -0x6],0x0
007c6088  MOV dword ptr [EBP + -0xc],0x2
007c608f  JMP 0x007c60a2
007c6091  MOV CL,byte ptr [EBP + 0xc]
007c6094  MOV byte ptr [EBP + -0x8],CL
007c6097  MOV byte ptr [EBP + -0x7],0x0
007c609b  MOV dword ptr [EBP + -0xc],0x1
007c60a2  PUSH 0x1
007c60a4  MOV EDX,dword ptr [EBP + 0x8]
007c60a7  MOV EAX,dword ptr [EDX + 0x4]
007c60aa  PUSH EAX
007c60ab  PUSH 0x3
007c60ad  LEA ECX,[EBP + -0x4]
007c60b0  PUSH ECX
007c60b1  MOV EDX,dword ptr [EBP + -0xc]
007c60b4  PUSH EDX
007c60b5  LEA EAX,[EBP + -0x8]
007c60b8  PUSH EAX
007c60b9  PUSH 0x100
007c60be  MOV ECX,dword ptr [EBP + 0x8]
007c60c1  MOV EDX,dword ptr [ECX + 0x14]
007c60c4  PUSH EDX
007c60c5  CALL 0x007d4090
007c60ca  ADD ESP,0x20
007c60cd  MOV dword ptr [EBP + -0xc],EAX
007c60d0  CMP dword ptr [EBP + -0xc],0x0
007c60d4  JNZ 0x007c60db
007c60d6  MOV EAX,dword ptr [EBP + 0xc]
007c60d9  JMP 0x007c60f4
007c60db  CMP dword ptr [EBP + -0xc],0x1
007c60df  JNZ 0x007c60e7
007c60e1  MOVZX EAX,byte ptr [EBP + -0x4]
007c60e5  JMP 0x007c60f4
007c60e7  MOVZX EAX,byte ptr [EBP + -0x3]
007c60eb  MOVZX ECX,byte ptr [EBP + -0x4]
007c60ef  SHL ECX,0x8
007c60f2  OR EAX,ECX
007c60f4  MOV ESP,EBP
007c60f6  POP EBP
007c60f7  RET

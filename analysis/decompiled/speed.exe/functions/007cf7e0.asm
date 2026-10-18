007cf7e0  PUSH EBP
007cf7e1  MOV EBP,ESP
007cf7e3  SUB ESP,0x28
007cf7e6  MOV byte ptr [EBP + -0x5],0x0
007cf7ea  MOV EAX,dword ptr [EBP + 0xc]
007cf7ed  MOV ECX,dword ptr [EAX + 0x8]
007cf7f0  MOV dword ptr [EBP + -0x4],ECX
007cf7f3  CMP dword ptr [EBP + -0x4],-0x1
007cf7f7  JL 0x007cf806
007cf7f9  MOV EDX,dword ptr [EBP + 0x18]
007cf7fc  MOV EAX,dword ptr [EBP + -0x4]
007cf7ff  CMP EAX,dword ptr [EDX + 0x4]
007cf802  JGE 0x007cf806
007cf804  JMP 0x007cf80b
007cf806  CALL 0x007d0ab0
007cf80b  MOV ECX,dword ptr [EBP + 0x8]
007cf80e  CMP dword ptr [ECX],0xe06d7363
007cf814  JNZ 0x007cf8d0
007cf81a  MOV EDX,dword ptr [EBP + 0x8]
007cf81d  CMP dword ptr [EDX + 0x10],0x3
007cf821  JNZ 0x007cf8d0
007cf827  MOV EAX,dword ptr [EBP + 0x8]
007cf82a  CMP dword ptr [EAX + 0x14],0x19930520
007cf831  JZ 0x007cf843
007cf833  MOV ECX,dword ptr [EBP + 0x8]
007cf836  CMP dword ptr [ECX + 0x14],0x19930521
007cf83d  JNZ 0x007cf8d0
007cf843  MOV EDX,dword ptr [EBP + 0x8]
007cf846  CMP dword ptr [EDX + 0x1c],0x0
007cf84a  JNZ 0x007cf8d0
007cf850  CALL 0x007cd100
007cf855  CMP dword ptr [EAX + 0x7c],0x0
007cf859  JNZ 0x007cf860
007cf85b  JMP 0x007cfa79
007cf860  CALL 0x007cd100
007cf865  MOV EAX,dword ptr [EAX + 0x7c]
007cf868  MOV dword ptr [EBP + 0x8],EAX
007cf86b  CALL 0x007cd100
007cf870  MOV ECX,dword ptr [EAX + 0x80]
007cf876  MOV dword ptr [EBP + 0x10],ECX
007cf879  MOV byte ptr [EBP + -0x5],0x1
007cf87d  PUSH 0x1
007cf87f  MOV EDX,dword ptr [EBP + 0x8]
007cf882  PUSH EDX
007cf883  CALL 0x007def60
007cf888  ADD ESP,0x8
007cf88b  TEST EAX,EAX
007cf88d  JZ 0x007cf891
007cf88f  JMP 0x007cf896
007cf891  CALL 0x007d0ab0
007cf896  MOV EAX,dword ptr [EBP + 0x8]
007cf899  CMP dword ptr [EAX],0xe06d7363
007cf89f  JNZ 0x007cf8d0
007cf8a1  MOV ECX,dword ptr [EBP + 0x8]
007cf8a4  CMP dword ptr [ECX + 0x10],0x3
007cf8a8  JNZ 0x007cf8d0
007cf8aa  MOV EDX,dword ptr [EBP + 0x8]
007cf8ad  CMP dword ptr [EDX + 0x14],0x19930520
007cf8b4  JZ 0x007cf8c2
007cf8b6  MOV EAX,dword ptr [EBP + 0x8]
007cf8b9  CMP dword ptr [EAX + 0x14],0x19930521
007cf8c0  JNZ 0x007cf8d0
007cf8c2  MOV ECX,dword ptr [EBP + 0x8]
007cf8c5  CMP dword ptr [ECX + 0x1c],0x0
007cf8c9  JNZ 0x007cf8d0
007cf8cb  CALL 0x007d0ab0
007cf8d0  MOV EDX,dword ptr [EBP + 0x8]
007cf8d3  CMP dword ptr [EDX],0xe06d7363
007cf8d9  JNZ 0x007cfa42
007cf8df  MOV EAX,dword ptr [EBP + 0x8]
007cf8e2  CMP dword ptr [EAX + 0x10],0x3
007cf8e6  JNZ 0x007cfa42
007cf8ec  MOV ECX,dword ptr [EBP + 0x8]
007cf8ef  CMP dword ptr [ECX + 0x14],0x19930520
007cf8f6  JZ 0x007cf908
007cf8f8  MOV EDX,dword ptr [EBP + 0x8]
007cf8fb  CMP dword ptr [EDX + 0x14],0x19930521
007cf902  JNZ 0x007cfa42
007cf908  LEA EAX,[EBP + -0x14]
007cf90b  PUSH EAX
007cf90c  LEA ECX,[EBP + -0x10]
007cf90f  PUSH ECX
007cf910  MOV EDX,dword ptr [EBP + -0x4]
007cf913  PUSH EDX
007cf914  MOV EAX,dword ptr [EBP + 0x20]
007cf917  PUSH EAX
007cf918  MOV ECX,dword ptr [EBP + 0x18]
007cf91b  PUSH ECX
007cf91c  CALL 0x007c4fc0
007cf921  ADD ESP,0x14
007cf924  MOV dword ptr [EBP + -0xc],EAX
007cf927  JMP 0x007cf93b
007cf929  MOV EDX,dword ptr [EBP + -0x10]
007cf92c  ADD EDX,0x1
007cf92f  MOV dword ptr [EBP + -0x10],EDX
007cf932  MOV EAX,dword ptr [EBP + -0xc]
007cf935  ADD EAX,0x14
007cf938  MOV dword ptr [EBP + -0xc],EAX
007cf93b  MOV ECX,dword ptr [EBP + -0x10]
007cf93e  CMP ECX,dword ptr [EBP + -0x14]
007cf941  JNC 0x007cfa2a
007cf947  MOV EDX,dword ptr [EBP + -0xc]
007cf94a  MOV EAX,dword ptr [EDX]
007cf94c  CMP EAX,dword ptr [EBP + -0x4]
007cf94f  JG 0x007cf95c
007cf951  MOV ECX,dword ptr [EBP + -0xc]
007cf954  MOV EDX,dword ptr [EBP + -0x4]
007cf957  CMP EDX,dword ptr [ECX + 0x4]
007cf95a  JLE 0x007cf95e
007cf95c  JMP 0x007cf929
007cf95e  MOV EAX,dword ptr [EBP + -0xc]
007cf961  MOV ECX,dword ptr [EAX + 0x10]
007cf964  MOV dword ptr [EBP + -0x1c],ECX
007cf967  MOV EDX,dword ptr [EBP + -0xc]
007cf96a  MOV EAX,dword ptr [EDX + 0xc]
007cf96d  MOV dword ptr [EBP + -0x18],EAX
007cf970  JMP 0x007cf984
007cf972  MOV ECX,dword ptr [EBP + -0x18]
007cf975  SUB ECX,0x1
007cf978  MOV dword ptr [EBP + -0x18],ECX
007cf97b  MOV EDX,dword ptr [EBP + -0x1c]
007cf97e  ADD EDX,0x10
007cf981  MOV dword ptr [EBP + -0x1c],EDX
007cf984  CMP dword ptr [EBP + -0x18],0x0
007cf988  JLE 0x007cfa25
007cf98e  MOV EAX,dword ptr [EBP + 0x8]
007cf991  MOV ECX,dword ptr [EAX + 0x1c]
007cf994  MOV EDX,dword ptr [ECX + 0xc]
007cf997  ADD EDX,0x4
007cf99a  MOV dword ptr [EBP + -0x24],EDX
007cf99d  MOV EAX,dword ptr [EBP + 0x8]
007cf9a0  MOV ECX,dword ptr [EAX + 0x1c]
007cf9a3  MOV EDX,dword ptr [ECX + 0xc]
007cf9a6  MOV EAX,dword ptr [EDX]
007cf9a8  MOV dword ptr [EBP + -0x20],EAX
007cf9ab  JMP 0x007cf9bf
007cf9ad  MOV ECX,dword ptr [EBP + -0x20]
007cf9b0  SUB ECX,0x1
007cf9b3  MOV dword ptr [EBP + -0x20],ECX
007cf9b6  MOV EDX,dword ptr [EBP + -0x24]
007cf9b9  ADD EDX,0x4
007cf9bc  MOV dword ptr [EBP + -0x24],EDX
007cf9bf  CMP dword ptr [EBP + -0x20],0x0
007cf9c3  JLE 0x007cfa20
007cf9c5  MOV EAX,dword ptr [EBP + -0x24]
007cf9c8  MOV ECX,dword ptr [EAX]
007cf9ca  MOV dword ptr [EBP + -0x28],ECX
007cf9cd  MOV EDX,dword ptr [EBP + 0x8]
007cf9d0  MOV EAX,dword ptr [EDX + 0x1c]
007cf9d3  PUSH EAX
007cf9d4  MOV ECX,dword ptr [EBP + -0x28]
007cf9d7  PUSH ECX
007cf9d8  MOV EDX,dword ptr [EBP + -0x1c]
007cf9db  PUSH EDX
007cf9dc  CALL 0x007cfbb0
007cf9e1  ADD ESP,0xc
007cf9e4  TEST EAX,EAX
007cf9e6  JNZ 0x007cf9ea
007cf9e8  JMP 0x007cf9ad
007cf9ea  MOV AL,byte ptr [EBP + -0x5]
007cf9ed  PUSH EAX
007cf9ee  MOV ECX,dword ptr [EBP + 0x24]
007cf9f1  PUSH ECX
007cf9f2  MOV EDX,dword ptr [EBP + 0x20]
007cf9f5  PUSH EDX
007cf9f6  MOV EAX,dword ptr [EBP + -0xc]
007cf9f9  PUSH EAX
007cf9fa  MOV ECX,dword ptr [EBP + -0x28]
007cf9fd  PUSH ECX
007cf9fe  MOV EDX,dword ptr [EBP + -0x1c]
007cfa01  PUSH EDX
007cfa02  MOV EAX,dword ptr [EBP + 0x18]
007cfa05  PUSH EAX
007cfa06  MOV ECX,dword ptr [EBP + 0x14]
007cfa09  PUSH ECX
007cfa0a  MOV EDX,dword ptr [EBP + 0x10]
007cfa0d  PUSH EDX
007cfa0e  MOV EAX,dword ptr [EBP + 0xc]
007cfa11  PUSH EAX
007cfa12  MOV ECX,dword ptr [EBP + 0x8]
007cfa15  PUSH ECX
007cfa16  CALL 0x007cfdf0
007cfa1b  ADD ESP,0x2c
007cfa1e  JMP 0x007cfa25
007cfa20  JMP 0x007cf972
007cfa25  JMP 0x007cf929
007cfa2a  MOVZX EDX,byte ptr [EBP + 0x1c]
007cfa2e  TEST EDX,EDX
007cfa30  JZ 0x007cfa40
007cfa32  PUSH 0x1
007cfa34  MOV EAX,dword ptr [EBP + 0x8]
007cfa37  PUSH EAX
007cfa38  CALL 0x007d03d0
007cfa3d  ADD ESP,0x8
007cfa40  JMP 0x007cfa79
007cfa42  MOVZX ECX,byte ptr [EBP + 0x1c]
007cfa46  TEST ECX,ECX
007cfa48  JNZ 0x007cfa74
007cfa4a  MOV EDX,dword ptr [EBP + 0x24]
007cfa4d  PUSH EDX
007cfa4e  MOV EAX,dword ptr [EBP + 0x20]
007cfa51  PUSH EAX
007cfa52  MOV ECX,dword ptr [EBP + -0x4]
007cfa55  PUSH ECX
007cfa56  MOV EDX,dword ptr [EBP + 0x18]
007cfa59  PUSH EDX
007cfa5a  MOV EAX,dword ptr [EBP + 0x14]
007cfa5d  PUSH EAX
007cfa5e  MOV ECX,dword ptr [EBP + 0x10]
007cfa61  PUSH ECX
007cfa62  MOV EDX,dword ptr [EBP + 0xc]
007cfa65  PUSH EDX
007cfa66  MOV EAX,dword ptr [EBP + 0x8]
007cfa69  PUSH EAX
007cfa6a  CALL 0x007cfa80
007cfa6f  ADD ESP,0x20
007cfa72  JMP 0x007cfa79
007cfa74  CALL 0x007d0a20
007cfa79  MOV ESP,EBP
007cfa7b  POP EBP
007cfa7c  RET

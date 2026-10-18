007ec948  PUSH EBP
007ec949  MOV EBP,ESP
007ec94b  SUB ESP,0x40
007ec94e  PUSH EBX
007ec94f  PUSH ESI
007ec950  PUSH EDI
007ec951  PUSH 0x38
007ec953  PUSH 0x9bb0c8
007ec958  CALL 0x007f0df9
007ec95d  POP ECX
007ec95e  POP ECX
007ec95f  CALL 0x007ec8ef
007ec964  TEST EAX,EAX
007ec966  JZ 0x007ecb19
007ec96c  LEA EAX,[EBP + -0x40]
007ec96f  PUSH EAX
007ec970  CALL dword ptr [0x00890298]
007ec976  MOV EAX,dword ptr [EBP + -0x2c]
007ec979  AND dword ptr [EBP + -0xc],0x0
007ec97d  MOV [0x009bb0d4],EAX
007ec982  LEA EAX,[EBP + -0x1c]
007ec985  MOV dword ptr [EBP + -0x4],EAX
007ec988  MOV EAX,0x0
007ec98d  CPUID
007ec98f  MOV ESI,dword ptr [EBP + -0x4]
007ec992  MOV dword ptr [ESI],EAX
007ec994  MOV dword ptr [ESI + 0x4],EBX
007ec997  MOV dword ptr [ESI + 0x8],EDX
007ec99a  MOV dword ptr [ESI + 0xc],ECX
007ec99d  MOV EAX,dword ptr [EBP + -0x1c]
007ec9a0  TEST EAX,EAX
007ec9a2  LEA ESI,[EBP + -0x18]
007ec9a5  MOV EDI,0x9bb0dc
007ec9aa  MOVSD ES:EDI,ESI
007ec9ab  MOVSD ES:EDI,ESI
007ec9ac  MOVSD ES:EDI,ESI
007ec9ad  MOV dword ptr [EBP + -0x8],EAX
007ec9b0  MOV byte ptr [0x009bb0e8],0x0
007ec9b7  JLE 0x007ecb32
007ec9bd  PUSH 0xd
007ec9bf  MOV EAX,0x9bb0dc
007ec9c4  POP EDX
007ec9c5  MOV EDI,0x8c1f40
007ec9ca  MOV ESI,EAX
007ec9cc  MOV ECX,EDX
007ec9ce  XOR EBX,EBX
007ec9d0  CMPSB.REPE ES:EDI,ESI
007ec9d2  JNZ 0x007ec9dd
007ec9d4  OR byte ptr [0x009bb0db],0x1
007ec9db  JMP 0x007eca23
007ec9dd  MOV EDI,0x8b9214
007ec9e2  MOV ESI,EAX
007ec9e4  MOV ECX,EDX
007ec9e6  XOR EBX,EBX
007ec9e8  CMPSB.REPE ES:EDI,ESI
007ec9ea  JNZ 0x007ec9f5
007ec9ec  OR byte ptr [0x009bb0db],0x2
007ec9f3  JMP 0x007eca23
007ec9f5  MOV EDI,0x8c1f30
007ec9fa  MOV ESI,EAX
007ec9fc  MOV ECX,EDX
007ec9fe  XOR EBX,EBX
007eca00  CMPSB.REPE ES:EDI,ESI
007eca02  JNZ 0x007eca0d
007eca04  OR byte ptr [0x009bb0db],0x4
007eca0b  JMP 0x007eca23
007eca0d  MOV ESI,EAX
007eca0f  MOV EDI,0x8c1f20
007eca14  MOV ECX,EDX
007eca16  XOR EAX,EAX
007eca18  CMPSB.REPE ES:EDI,ESI
007eca1a  JNZ 0x007eca23
007eca1c  OR byte ptr [0x009bb0db],0x8
007eca23  LEA EAX,[EBP + -0x1c]
007eca26  MOV dword ptr [EBP + -0x4],EAX
007eca29  MOV EAX,0x1
007eca2e  CPUID
007eca30  MOV ESI,dword ptr [EBP + -0x4]
007eca33  MOV dword ptr [ESI],EAX
007eca35  MOV dword ptr [ESI + 0x4],EBX
007eca38  MOV dword ptr [ESI + 0x8],EDX
007eca3b  MOV dword ptr [ESI + 0xc],ECX
007eca3e  MOV EAX,dword ptr [EBP + -0x1c]
007eca41  MOV ECX,EAX
007eca43  SAR ECX,0x8
007eca46  AND CL,0xf
007eca49  MOV byte ptr [0x009bb0d8],CL
007eca4f  MOV ECX,EAX
007eca51  AND AL,0xf
007eca53  SAR ECX,0x4
007eca56  MOV [0x009bb0da],AL
007eca5b  AND CL,0xf
007eca5e  LEA EAX,[EBP + -0x1c]
007eca61  MOV byte ptr [0x009bb0d9],CL
007eca67  MOV dword ptr [EBP + -0x4],EAX
007eca6a  MOV EAX,0x80000000
007eca6f  CPUID
007eca71  MOV ESI,dword ptr [EBP + -0x4]
007eca74  MOV dword ptr [ESI],EAX
007eca76  MOV dword ptr [ESI + 0x4],EBX
007eca79  MOV dword ptr [ESI + 0x8],EDX
007eca7c  MOV dword ptr [ESI + 0xc],ECX
007eca7f  MOV EDI,0x2000000
007eca84  TEST dword ptr [0x009bb0d8],EDI
007eca8a  JZ 0x007ecabe
007eca8c  CMP dword ptr [EBP + -0x1c],0x80000000
007eca93  JBE 0x007ecabe
007eca95  LEA EAX,[EBP + -0x1c]
007eca98  MOV dword ptr [EBP + -0x4],EAX
007eca9b  MOV EAX,0x80000001
007ecaa0  CPUID
007ecaa2  MOV ESI,dword ptr [EBP + -0x4]
007ecaa5  MOV dword ptr [ESI],EAX
007ecaa7  MOV dword ptr [ESI + 0x4],EBX
007ecaaa  MOV dword ptr [ESI + 0x8],EDX
007ecaad  MOV dword ptr [ESI + 0xc],ECX
007ecab0  MOV EAX,dword ptr [EBP + -0x14]
007ecab3  AND EAX,0x80400000
007ecab8  OR dword ptr [0x009bb0d0],EAX
007ecabe  LEA EAX,[EBP + -0x1c]
007ecac1  MOV dword ptr [EBP + -0x4],EAX
007ecac4  MOV EAX,0x1
007ecac9  CPUID
007ecacb  MOV ESI,dword ptr [EBP + -0x4]
007ecace  MOV dword ptr [ESI],EAX
007ecad0  MOV dword ptr [ESI + 0x4],EBX
007ecad3  MOV dword ptr [ESI + 0x8],EDX
007ecad6  MOV dword ptr [ESI + 0xc],ECX
007ecad9  MOV EAX,dword ptr [EBP + -0x14]
007ecadc  AND EAX,0x6000000
007ecae1  OR dword ptr [0x009bb0d0],EAX
007ecae7  TEST dword ptr [0x009bb0d0],EDI
007ecaed  JZ 0x007ecaf6
007ecaef  OR byte ptr [0x009bb0d2],0x40
007ecaf6  CMP dword ptr [EBP + -0x8],0x2
007ecafa  JL 0x007ecb32
007ecafc  LEA EAX,[EBP + -0x1c]
007ecaff  MOV dword ptr [EBP + -0x8],EAX
007ecb02  MOV EAX,0x2
007ecb07  CPUID
007ecb09  MOV ESI,dword ptr [EBP + -0x8]
007ecb0c  MOV dword ptr [ESI],EAX
007ecb0e  MOV dword ptr [ESI + 0x4],EBX
007ecb11  MOV dword ptr [ESI + 0x8],EDX
007ecb14  MOV dword ptr [ESI + 0xc],ECX
007ecb17  JMP 0x007ecb32
007ecb19  CALL 0x007ec926
007ecb1e  SHL EAX,0x1a
007ecb21  XOR EAX,dword ptr [0x009bb0d8]
007ecb27  AND EAX,0x4000000
007ecb2c  XOR dword ptr [0x009bb0d8],EAX
007ecb32  AND dword ptr [EBP + -0x4],0x0
007ecb36  FNSTCW word ptr [EBP + -0x4]
007ecb39  MOVZX EAX,word ptr [EBP + -0x4]
007ecb3d  POP EDI
007ecb3e  POP ESI
007ecb3f  POP EBX
007ecb40  LEAVE
007ecb41  RET

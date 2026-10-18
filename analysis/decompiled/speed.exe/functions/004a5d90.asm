004a5d90  PUSH EBP
004a5d91  MOV EBP,ESP
004a5d93  AND ESP,0xfffffff0
004a5d96  SUB ESP,0x84
004a5d9c  FLD float ptr [EBP + 0x20]
004a5d9f  PUSH EBX
004a5da0  FSUB float ptr [EBP + 0xc]
004a5da3  MOV EBX,dword ptr [EBP + 0x8]
004a5da6  MOV EAX,dword ptr [EBX]
004a5da8  PUSH ESI
004a5da9  MOV ESI,ECX
004a5dab  MOV ECX,dword ptr [ESI + 0x10]
004a5dae  PUSH EDI
004a5daf  PUSH ECX
004a5db0  SUB ESP,0x8
004a5db3  FSTP float ptr [ESP + 0x4]
004a5db7  MOV ECX,EBX
004a5db9  FLD float ptr [EBP + 0x1c]
004a5dbc  FSUB float ptr [EBP + 0xc]
004a5dbf  FSTP float ptr [ESP]
004a5dc2  CALL dword ptr [EAX + 0xc]
004a5dc5  MOV EAX,dword ptr [ESI + 0x14]
004a5dc8  FLD float ptr [EBP + 0x20]
004a5dcb  FSUB float ptr [EBP + 0x14]
004a5dce  MOV ECX,dword ptr [EBP + 0x10]
004a5dd1  MOV EDX,dword ptr [ECX]
004a5dd3  PUSH EAX
004a5dd4  SUB ESP,0x8
004a5dd7  FSTP float ptr [ESP + 0x4]
004a5ddb  FLD float ptr [EBP + 0x1c]
004a5dde  FSUB float ptr [EBP + 0x14]
004a5de1  FSTP float ptr [ESP]
004a5de4  CALL dword ptr [EDX + 0xc]
004a5de7  MOV EAX,dword ptr [EBP + 0x18]
004a5dea  MOV EDI,dword ptr [ESI + 0x14]
004a5ded  LEA EAX,[EAX + EAX*0x2]
004a5df0  SHL EAX,0x2
004a5df3  LEA ECX,[EAX*0x4 + 0x0]
004a5dfa  MOV EAX,dword ptr [ESI + 0x10]
004a5dfd  MOV EDX,dword ptr [EAX + ECX*0x1 + 0x24]
004a5e01  ADD EAX,ECX
004a5e03  ADD EDI,ECX
004a5e05  MOV ECX,dword ptr [EAX + 0x28]
004a5e08  PUSH ECX
004a5e09  MOV ECX,dword ptr [EAX + 0x20]
004a5e0c  PUSH EDX
004a5e0d  MOV EDX,dword ptr [EAX + 0x1c]
004a5e10  PUSH ECX
004a5e11  MOV ECX,dword ptr [EAX + 0x18]
004a5e14  PUSH EDX
004a5e15  MOV EDX,dword ptr [EAX + 0x14]
004a5e18  PUSH ECX
004a5e19  MOV ECX,dword ptr [EAX + 0x10]
004a5e1c  PUSH EDX
004a5e1d  MOV EDX,dword ptr [EAX + 0x8]
004a5e20  PUSH ECX
004a5e21  MOV ECX,dword ptr [EAX + 0x4]
004a5e24  PUSH EDX
004a5e25  MOV EDX,dword ptr [EAX]
004a5e27  PUSH ECX
004a5e28  PUSH EDX
004a5e29  LEA ECX,[ESP + 0x78]
004a5e2d  CALL 0x00493ff0
004a5e32  MOV EAX,dword ptr [EDI + 0x28]
004a5e35  MOV ECX,dword ptr [EDI + 0x24]
004a5e38  MOV EDX,dword ptr [EDI + 0x20]
004a5e3b  PUSH EAX
004a5e3c  MOV EAX,dword ptr [EDI + 0x1c]
004a5e3f  PUSH ECX
004a5e40  MOV ECX,dword ptr [EDI + 0x18]
004a5e43  PUSH EDX
004a5e44  MOV EDX,dword ptr [EDI + 0x14]
004a5e47  PUSH EAX
004a5e48  MOV EAX,dword ptr [EDI + 0x10]
004a5e4b  PUSH ECX
004a5e4c  MOV ECX,dword ptr [EDI + 0x8]
004a5e4f  PUSH EDX
004a5e50  MOV EDX,dword ptr [EDI + 0x4]
004a5e53  PUSH EAX
004a5e54  MOV EAX,dword ptr [EDI]
004a5e56  PUSH ECX
004a5e57  PUSH EDX
004a5e58  PUSH EAX
004a5e59  LEA ECX,[ESP + 0x38]
004a5e5d  CALL 0x00493ff0
004a5e62  LEA ECX,[ESI + 0x30]
004a5e65  PUSH ECX
004a5e66  LEA EDX,[ESP + 0x14]
004a5e6a  PUSH EDX
004a5e6b  LEA EAX,[ESP + 0x58]
004a5e6f  PUSH EAX
004a5e70  CALL 0x0049a1a0
004a5e75  FLD float ptr [EBP + 0x20]
004a5e78  MOV ECX,dword ptr [EBP + 0x18]
004a5e7b  FADD float ptr [EBP + 0x24]
004a5e7e  MOV EDX,dword ptr [EBP + 0x10]
004a5e81  MOV EAX,dword ptr [EBP + 0xc]
004a5e84  ADD ESP,0xc
004a5e87  FSTP float ptr [ESI + 0x78]
004a5e8a  MOV dword ptr [ESI + 0x28],ECX
004a5e8d  MOV ECX,dword ptr [EBP + 0x14]
004a5e90  MOV dword ptr [ESI + 0x1c],EDX
004a5e93  MOV EDX,dword ptr [EBP + 0x20]
004a5e96  MOV dword ptr [ESI + 0x20],EAX
004a5e99  MOV EAX,dword ptr [EBP + 0x24]
004a5e9c  POP EDI
004a5e9d  MOV dword ptr [ESI + 0x18],EBX
004a5ea0  MOV dword ptr [ESI + 0x24],ECX
004a5ea3  MOV dword ptr [ESI + 0x70],EDX
004a5ea6  MOV dword ptr [ESI + 0x74],EAX
004a5ea9  POP ESI
004a5eaa  POP EBX
004a5eab  MOV ESP,EBP
004a5ead  POP EBP
004a5eae  RET 0x20

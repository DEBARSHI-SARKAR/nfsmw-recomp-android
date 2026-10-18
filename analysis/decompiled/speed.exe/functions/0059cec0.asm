0059cec0  PUSH -0x1
0059cec2  PUSH 0x872f33
0059cec7  MOV EAX,FS:[0x0]
0059cecd  PUSH EAX
0059cece  MOV dword ptr FS:[0x0],ESP
0059ced5  PUSH ECX
0059ced6  MOV EAX,dword ptr [ESP + 0x18]
0059ceda  PUSH EBX
0059cedb  PUSH EBP
0059cedc  PUSH ESI
0059cedd  MOV ESI,ECX
0059cedf  XOR EBX,EBX
0059cee1  PUSH EDI
0059cee2  LEA EDI,[ESI + 0x8]
0059cee5  MOV dword ptr [ESI],0x8a1e80
0059ceeb  MOV dword ptr [EDI],EDI
0059ceed  MOV dword ptr [EDI + 0x4],EDI
0059cef0  MOV dword ptr [ESP + 0x10],ESI
0059cef4  MOV dword ptr [ESI + 0x10],EAX
0059cef7  MOV dword ptr [ESI + 0x18],0x40004000
0059cefe  MOV dword ptr [ESI + 0x1c],EBX
0059cf01  MOV dword ptr [ESI + 0x20],EBX
0059cf04  MOV dword ptr [ESI + 0x24],EBX
0059cf07  MOV byte ptr [ESI + 0x28],BL
0059cf0a  MOV ECX,dword ptr [ESP + 0x24]
0059cf0e  LEA EBP,[ESI + 0x30]
0059cf11  PUSH EBP
0059cf12  PUSH 0x5658f0
0059cf17  MOV dword ptr [ESP + 0x24],EBX
0059cf1b  MOV dword ptr [EBP],0x890970
0059cf22  MOV dword ptr [EBP + 0x4],ECX
0059cf25  CALL 0x005d7930
0059cf2a  MOV dword ptr [EBP],0x8a0420
0059cf31  MOV AL,0x1
0059cf33  PUSH 0xc46a80a9
0059cf38  MOV ECX,ESI
0059cf3a  MOV byte ptr [ESP + 0x20],AL
0059cf3e  MOV dword ptr [ESI],0x8a1f50
0059cf44  MOV dword ptr [EBP],0x8a1f44
0059cf4b  MOV byte ptr [ESI + 0x38],AL
0059cf4e  MOV dword ptr [ESI + 0x3c],EBX
0059cf51  MOV dword ptr [ESI + 0x40],EBX
0059cf54  CALL 0x0058bbd0
0059cf59  MOV EAX,dword ptr [ESI + 0x10]
0059cf5c  PUSH 0x7f91da62
0059cf61  PUSH EAX
0059cf62  CALL 0x00524850
0059cf67  MOV dword ptr [ESI + 0x44],EAX
0059cf6a  MOV EAX,dword ptr [ESI + 0x10]
0059cf6d  PUSH 0x6f85ed55
0059cf72  PUSH EAX
0059cf73  CALL 0x00524850
0059cf78  MOV ECX,dword ptr [ESI + 0x10]
0059cf7b  PUSH 0x862824c9
0059cf80  PUSH ECX
0059cf81  MOV dword ptr [ESI + 0x48],EAX
0059cf84  CALL 0x00524850
0059cf89  MOV EBP,EAX
0059cf8b  ADD ESP,0x18
0059cf8e  CMP EBP,EBX
0059cf90  JZ 0x0059cfaf
0059cf92  CALL 0x00466410
0059cf97  CMP EAX,EBX
0059cf99  JZ 0x0059cfa0
0059cf9b  MOV dword ptr [EAX + 0x8],EBP
0059cf9e  JMP 0x0059cfa2
0059cfa0  XOR EAX,EAX
0059cfa2  MOV ECX,dword ptr [EDI + 0x4]
0059cfa5  MOV dword ptr [ECX],EAX
0059cfa7  MOV dword ptr [EDI + 0x4],EAX
0059cfaa  MOV dword ptr [EAX + 0x4],ECX
0059cfad  MOV dword ptr [EAX],EDI
0059cfaf  MOV EDX,dword ptr [ESI + 0x10]
0059cfb2  PUSH 0x4b2cbe1b
0059cfb7  PUSH EDX
0059cfb8  MOV dword ptr [ESI + 0x50],EBP
0059cfbb  CALL 0x00524850
0059cfc0  MOV EBP,EAX
0059cfc2  ADD ESP,0x8
0059cfc5  CMP EBP,EBX
0059cfc7  JZ 0x0059cfe4
0059cfc9  CALL 0x00466410
0059cfce  CMP EAX,EBX
0059cfd0  JZ 0x0059cfd7
0059cfd2  MOV dword ptr [EAX + 0x8],EBP
0059cfd5  MOV EBX,EAX
0059cfd7  MOV EAX,dword ptr [EDI + 0x4]
0059cfda  MOV dword ptr [EAX],EBX
0059cfdc  MOV dword ptr [EDI + 0x4],EBX
0059cfdf  MOV dword ptr [EBX + 0x4],EAX
0059cfe2  MOV dword ptr [EBX],EDI
0059cfe4  MOV ECX,dword ptr [ESP + 0x14]
0059cfe8  POP EDI
0059cfe9  MOV dword ptr [ESI + 0x54],EBP
0059cfec  MOV EAX,ESI
0059cfee  POP ESI
0059cfef  POP EBP
0059cff0  POP EBX
0059cff1  MOV dword ptr FS:[0x0],ECX
0059cff8  ADD ESP,0x10
0059cffb  RET 0xc

00801d44  PUSH EBP
00801d45  MOV EBP,ESP
00801d47  SUB ESP,0x54
00801d4a  MOV EAX,dword ptr [EBP + 0x1c]
00801d4d  MOV ECX,dword ptr [EBP + 0x18]
00801d50  LEA ECX,[ECX + EAX*0x1 + -0x1]
00801d54  CMP EAX,ECX
00801d56  MOV dword ptr [EBP + -0x8],EAX
00801d59  MOV dword ptr [EBP + -0x2c],ECX
00801d5c  JNC 0x00802009
00801d62  MOV EAX,dword ptr [EBP + 0xc]
00801d65  MOV ECX,dword ptr [EBP + 0x10]
00801d68  MOV dword ptr [EBP + -0x10],EAX
00801d6b  SUB dword ptr [EBP + -0x10],ECX
00801d6e  PUSH EBX
00801d6f  ADD EAX,0x8
00801d72  ADD ECX,0x5
00801d75  PUSH ESI
00801d76  MOV dword ptr [EBP + -0x1c],EAX
00801d79  MOV dword ptr [EBP + -0x20],ECX
00801d7c  PUSH EDI
00801d7d  MOV EAX,dword ptr [EBP + 0x8]
00801d80  MOV EAX,dword ptr [EAX + 0x24]
00801d83  MOV EDX,dword ptr [EBP + -0x8]
00801d86  MOV EAX,dword ptr [EAX + EDX*0x4 + 0x4]
00801d8a  MOV EDX,dword ptr [EBP + 0x20]
00801d8d  MOV EAX,dword ptr [EDX + EAX*0x4]
00801d90  MOV ECX,dword ptr [EBP + -0x1c]
00801d93  MOV ESI,dword ptr [EBP + -0x20]
00801d96  MOV dword ptr [EBP + -0xc],EAX
00801d99  IMUL EAX,EAX
00801d9c  LEA EAX,[EAX + EAX*0x2]
00801d9f  SAR EAX,0x5
00801da2  MOV dword ptr [EBP + -0x28],EAX
00801da5  MOV dword ptr [EBP + -0x24],0x8
00801dac  MOV EAX,dword ptr [EBP + -0x10]
00801daf  MOVZX EAX,byte ptr [EAX + ESI*0x1]
00801db3  MOVZX EDX,byte ptr [ECX + -0x4]
00801db7  MOVZX EDI,byte ptr [ECX + -0x1]
00801dbb  MOV dword ptr [EBP + -0x4c],EAX
00801dbe  MOVZX EAX,byte ptr [ECX + -0x2]
00801dc2  MOV dword ptr [EBP + -0x48],EAX
00801dc5  MOVZX EAX,byte ptr [ECX]
00801dc8  MOV dword ptr [EBP + -0x40],EAX
00801dcb  MOVZX EAX,byte ptr [ECX + 0x1]
00801dcf  MOV dword ptr [EBP + -0x3c],EAX
00801dd2  MOVZX EAX,byte ptr [ECX + 0x2]
00801dd6  MOV dword ptr [EBP + -0x38],EAX
00801dd9  MOVZX EAX,byte ptr [ECX + 0x3]
00801ddd  MOV dword ptr [EBP + -0x34],EAX
00801de0  XOR EAX,EAX
00801de2  MOV dword ptr [EBP + -0x50],EDX
00801de5  MOV dword ptr [EBP + -0x44],EDI
00801de8  MOV dword ptr [EBP + -0x4],EAX
00801deb  MOV dword ptr [EBP + 0x18],EAX
00801dee  MOV dword ptr [EBP + -0x18],EAX
00801df1  MOV dword ptr [EBP + -0x14],EAX
00801df4  MOV dword ptr [EBP + 0x1c],0x1
00801dfb  MOV EAX,dword ptr [EBP + 0x1c]
00801dfe  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x54]
00801e02  ADD dword ptr [EBP + -0x14],EAX
00801e05  MOV EBX,EAX
00801e07  IMUL EBX,EAX
00801e0a  ADD dword ptr [EBP + 0x18],EBX
00801e0d  INC dword ptr [EBP + 0x1c]
00801e10  CMP dword ptr [EBP + 0x1c],0x4
00801e14  JBE 0x00801dfb
00801e16  MOV dword ptr [EBP + 0x1c],0x5
00801e1d  MOV EAX,dword ptr [EBP + 0x1c]
00801e20  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x54]
00801e24  ADD dword ptr [EBP + -0x18],EAX
00801e27  MOV EBX,EAX
00801e29  IMUL EBX,EAX
00801e2c  ADD dword ptr [EBP + -0x4],EBX
00801e2f  INC dword ptr [EBP + 0x1c]
00801e32  CMP dword ptr [EBP + 0x1c],0x8
00801e36  JBE 0x00801e1d
00801e38  MOV EAX,dword ptr [EBP + -0x14]
00801e3b  LEA EBX,[EAX + 0x1]
00801e3e  SAR EAX,0x1
00801e40  SAR EBX,0x1
00801e42  IMUL EBX,EAX
00801e45  SUB dword ptr [EBP + 0x18],EBX
00801e48  MOV EAX,dword ptr [EBP + -0x18]
00801e4b  LEA EBX,[EAX + 0x1]
00801e4e  SAR EAX,0x1
00801e50  SAR EBX,0x1
00801e52  IMUL EBX,EAX
00801e55  SUB dword ptr [EBP + -0x4],EBX
00801e58  MOV EAX,dword ptr [EBP + 0x8]
00801e5b  MOV EAX,dword ptr [EAX + 0x28]
00801e5e  MOV EBX,dword ptr [EBP + -0x8]
00801e61  LEA EAX,[EAX + EBX*0x4]
00801e64  MOV EBX,dword ptr [EBP + 0x18]
00801e67  ADD dword ptr [EAX],EBX
00801e69  MOV EAX,dword ptr [EBP + 0x8]
00801e6c  MOV EAX,dword ptr [EAX + 0x28]
00801e6f  MOV EBX,dword ptr [EBP + -0x8]
00801e72  LEA EAX,[EAX + EBX*0x4 + 0x4]
00801e76  MOV EBX,dword ptr [EBP + -0x4]
00801e79  ADD dword ptr [EAX],EBX
00801e7b  MOV EAX,dword ptr [EBP + -0x28]
00801e7e  CMP dword ptr [EBP + 0x18],EAX
00801e81  JGE 0x00801fe0
00801e87  CMP EBX,EAX
00801e89  JGE 0x00801fe0
00801e8f  MOV EAX,dword ptr [EBP + -0x40]
00801e92  SUB EAX,EDI
00801e94  CMP EAX,dword ptr [EBP + -0xc]
00801e97  JGE 0x00801fe0
00801e9d  MOV EAX,EDI
00801e9f  SUB EAX,dword ptr [EBP + -0x40]
00801ea2  CMP EAX,dword ptr [EBP + -0xc]
00801ea5  JGE 0x00801fe0
00801eab  MOVZX EAX,byte ptr [ECX + -0x5]
00801eaf  MOVZX EBX,byte ptr [ECX + -0x4]
00801eb3  SUB EBX,EAX
00801eb5  TEST EBX,EBX
00801eb7  JLE 0x00801ebd
00801eb9  MOV EAX,EBX
00801ebb  JMP 0x00801ec3
00801ebd  MOVZX EBX,byte ptr [ECX + -0x4]
00801ec1  SUB EAX,EBX
00801ec3  CMP EAX,dword ptr [EBP + -0xc]
00801ec6  JGE 0x00801ece
00801ec8  MOVZX EAX,byte ptr [ECX + -0x5]
00801ecc  JMP 0x00801ed2
00801ece  MOVZX EAX,byte ptr [ECX + -0x4]
00801ed2  MOVZX EBX,byte ptr [ECX + 0x3]
00801ed6  MOV dword ptr [EBP + 0x1c],EAX
00801ed9  MOVZX EAX,byte ptr [ECX + 0x4]
00801edd  SUB EBX,EAX
00801edf  TEST EBX,EBX
00801ee1  JLE 0x00801ee7
00801ee3  MOV EAX,EBX
00801ee5  JMP 0x00801eed
00801ee7  MOVZX EBX,byte ptr [ECX + 0x3]
00801eeb  SUB EAX,EBX
00801eed  CMP EAX,dword ptr [EBP + -0xc]
00801ef0  JGE 0x00801ef8
00801ef2  MOVZX EAX,byte ptr [ECX + 0x4]
00801ef6  JMP 0x00801efc
00801ef8  MOVZX EAX,byte ptr [ECX + 0x3]
00801efc  MOV dword ptr [EBP + 0x18],EAX
00801eff  MOV EAX,dword ptr [EBP + 0x1c]
00801f02  LEA EAX,[EDI + EAX*0x2]
00801f05  ADD EAX,dword ptr [EBP + 0x1c]
00801f08  ADD EAX,dword ptr [EBP + -0x48]
00801f0b  ADD EAX,dword ptr [EBP + -0x4c]
00801f0e  LEA EAX,[EAX + EDX*0x1 + 0x4]
00801f12  ADD EDX,EAX
00801f14  SHL EDX,0x1
00801f16  SUB EDX,EDI
00801f18  ADD EDX,dword ptr [EBP + -0x40]
00801f1b  SAR EDX,0x4
00801f1e  MOV byte ptr [ESI + -0x1],DL
00801f21  MOV EDX,dword ptr [EBP + -0x40]
00801f24  SUB EDX,dword ptr [EBP + 0x1c]
00801f27  ADD EAX,EDX
00801f29  MOV EDX,dword ptr [EBP + -0x4c]
00801f2c  ADD EDX,EAX
00801f2e  SHL EDX,0x1
00801f30  SUB EDX,dword ptr [EBP + -0x40]
00801f33  ADD EDX,dword ptr [EBP + -0x3c]
00801f36  SAR EDX,0x4
00801f39  MOV byte ptr [ESI],DL
00801f3b  MOV EDX,dword ptr [EBP + -0x3c]
00801f3e  SUB EDX,dword ptr [EBP + 0x1c]
00801f41  ADD EAX,EDX
00801f43  MOV EDX,dword ptr [EBP + -0x48]
00801f46  ADD EDX,EAX
00801f48  SHL EDX,0x1
00801f4a  SUB EDX,dword ptr [EBP + -0x3c]
00801f4d  ADD EDX,dword ptr [EBP + -0x38]
00801f50  SAR EDX,0x4
00801f53  MOV byte ptr [ESI + 0x1],DL
00801f56  MOV EDX,dword ptr [EBP + -0x38]
00801f59  SUB EDX,dword ptr [EBP + 0x1c]
00801f5c  ADD EAX,EDX
00801f5e  LEA EDX,[EAX + EDI*0x1]
00801f61  SHL EDX,0x1
00801f63  SUB EDX,dword ptr [EBP + -0x38]
00801f66  SUB EDX,dword ptr [EBP + -0x50]
00801f69  ADD EDX,dword ptr [EBP + 0x1c]
00801f6c  ADD EDX,dword ptr [EBP + -0x34]
00801f6f  SAR EDX,0x4
00801f72  MOV byte ptr [ESI + 0x2],DL
00801f75  MOV EDX,dword ptr [EBP + -0x34]
00801f78  SUB EDX,dword ptr [EBP + -0x50]
00801f7b  ADD EAX,EDX
00801f7d  MOV EDX,dword ptr [EBP + -0x40]
00801f80  ADD EDX,EAX
00801f82  SHL EDX,0x1
00801f84  SUB EDX,dword ptr [EBP + -0x34]
00801f87  SUB EDX,dword ptr [EBP + -0x4c]
00801f8a  ADD EDX,dword ptr [EBP + 0x18]
00801f8d  ADD EDX,dword ptr [EBP + -0x50]
00801f90  SAR EDX,0x4
00801f93  MOV byte ptr [ESI + 0x3],DL
00801f96  MOV EDX,dword ptr [EBP + 0x18]
00801f99  SUB EDX,dword ptr [EBP + -0x4c]
00801f9c  ADD EAX,EDX
00801f9e  MOV EDX,dword ptr [EBP + -0x3c]
00801fa1  ADD EDX,EAX
00801fa3  SHL EDX,0x1
00801fa5  SUB EDX,dword ptr [EBP + -0x48]
00801fa8  ADD EDX,dword ptr [EBP + -0x4c]
00801fab  SAR EDX,0x4
00801fae  MOV byte ptr [ESI + 0x4],DL
00801fb1  MOV EDX,dword ptr [EBP + 0x18]
00801fb4  SUB EDX,dword ptr [EBP + -0x48]
00801fb7  ADD EAX,EDX
00801fb9  MOV EDX,dword ptr [EBP + -0x38]
00801fbc  ADD EDX,EAX
00801fbe  SHL EDX,0x1
00801fc0  SUB EDX,EDI
00801fc2  ADD EDX,dword ptr [EBP + -0x48]
00801fc5  SAR EDX,0x4
00801fc8  MOV byte ptr [ESI + 0x5],DL
00801fcb  MOV EDX,dword ptr [EBP + 0x18]
00801fce  ADD EAX,EDX
00801fd0  ADD EAX,dword ptr [EBP + -0x34]
00801fd3  SHL EAX,0x1
00801fd5  SUB EAX,dword ptr [EBP + -0x40]
00801fd8  SUB EAX,EDI
00801fda  SAR EAX,0x4
00801fdd  MOV byte ptr [ESI + 0x6],AL
00801fe0  ADD ECX,dword ptr [EBP + 0x14]
00801fe3  ADD ESI,dword ptr [EBP + 0x14]
00801fe6  DEC dword ptr [EBP + -0x24]
00801fe9  JNZ 0x00801dac
00801fef  INC dword ptr [EBP + -0x8]
00801ff2  MOV EAX,dword ptr [EBP + -0x8]
00801ff5  ADD dword ptr [EBP + -0x1c],0x8
00801ff9  ADD dword ptr [EBP + -0x20],0x8
00801ffd  CMP EAX,dword ptr [EBP + -0x2c]
00802000  JC 0x00801d7d
00802006  POP EDI
00802007  POP ESI
00802008  POP EBX
00802009  LEAVE
0080200a  RET

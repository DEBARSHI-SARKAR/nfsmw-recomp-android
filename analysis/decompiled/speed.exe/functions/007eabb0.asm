007eabb0  PUSH EBP
007eabb1  MOV EBP,ESP
007eabb3  PUSH EBX
007eabb4  MOV EBX,dword ptr [EBP + 0xc]
007eabb7  MOV AL,byte ptr [EBX + 0x4]
007eabba  PUSH ESI
007eabbb  MOV ESI,dword ptr [EBP + 0x8]
007eabbe  PUSH EDI
007eabbf  XOR EDI,EDI
007eabc1  TEST AL,0x2
007eabc3  JZ 0x007eabed
007eabc5  MOV EAX,dword ptr [EBX + 0x50]
007eabc8  TEST EAX,EAX
007eabca  JNZ 0x007eabd8
007eabcc  ADD ESI,0x9f
007eabd2  AND ESI,0xffffff80
007eabd5  SUB ESI,0x20
007eabd8  PUSH EBX
007eabd9  MOV ECX,ESI
007eabdb  CALL 0x007ea9a0
007eabe0  PUSH EBX
007eabe1  MOV EDI,ESI
007eabe3  CALL 0x007e9bf0
007eabe8  ADD ESP,0x4
007eabeb  ADD ESI,EAX
007eabed  TEST byte ptr [EBX + 0x4],0x4
007eabf1  JZ 0x007eac2c
007eabf3  MOV EAX,dword ptr [EBX + 0x60]
007eabf6  TEST EAX,EAX
007eabf8  JNZ 0x007eac17
007eabfa  ADD ESI,0x2f
007eabfd  AND ESI,0xfffffff0
007eac00  SUB ESI,0x20
007eac03  TEST EDI,EDI
007eac05  JZ 0x007eac17
007eac07  TEST ESI,ESI
007eac09  JNZ 0x007eac10
007eac0b  MOV dword ptr [EDI + 0x4],ESI
007eac0e  JMP 0x007eac17
007eac10  MOV EAX,ESI
007eac12  SUB EAX,EDI
007eac14  MOV dword ptr [EDI + 0x4],EAX
007eac17  PUSH EBX
007eac18  MOV ECX,ESI
007eac1a  CALL 0x007e9f70
007eac1f  PUSH EBX
007eac20  MOV EDI,ESI
007eac22  CALL 0x007e9d50
007eac27  ADD ESP,0x4
007eac2a  ADD ESI,EAX
007eac2c  MOV EAX,dword ptr [EBX + 0x4]
007eac2f  TEST AH,0x1
007eac32  JZ 0x007eac5e
007eac34  ADD ESI,0x2f
007eac37  AND ESI,0xfffffff0
007eac3a  SUB ESI,0x20
007eac3d  TEST EDI,EDI
007eac3f  JZ 0x007eac51
007eac41  TEST ESI,ESI
007eac43  JNZ 0x007eac4a
007eac45  MOV dword ptr [EDI + 0x4],ESI
007eac48  JMP 0x007eac51
007eac4a  MOV ECX,ESI
007eac4c  SUB ECX,EDI
007eac4e  MOV dword ptr [EDI + 0x4],ECX
007eac51  PUSH EBX
007eac52  MOV ECX,ESI
007eac54  CALL 0x007ea050
007eac59  MOV EDI,ESI
007eac5b  ADD ESI,0x20
007eac5e  TEST byte ptr [EBX + 0x4],0x10
007eac62  JZ 0x007eac97
007eac64  LEA ECX,[ESI + 0x2f]
007eac67  AND ECX,0xfffffff0
007eac6a  SUB ECX,0x20
007eac6d  TEST EDI,EDI
007eac6f  JZ 0x007eac81
007eac71  TEST ECX,ECX
007eac73  JNZ 0x007eac7a
007eac75  MOV dword ptr [EDI + 0x4],ECX
007eac78  JMP 0x007eac81
007eac7a  MOV EDX,ECX
007eac7c  SUB EDX,EDI
007eac7e  MOV dword ptr [EDI + 0x4],EDX
007eac81  PUSH EBX
007eac82  CALL 0x007ea130
007eac87  MOV EAX,dword ptr [EBX + 0x80]
007eac8d  IMUL EAX,dword ptr [EBX + 0x7c]
007eac91  MOV EDI,ECX
007eac93  LEA ESI,[ECX + EAX*0x4 + 0x20]
007eac97  MOV AL,byte ptr [EBX + 0x4]
007eac9a  TEST AL,AL
007eac9c  JNS 0x007eaccf
007eac9e  ADD ESI,0x1f
007eaca1  AND ESI,0xfffffff0
007eaca4  SUB ESI,0x10
007eaca7  TEST EDI,EDI
007eaca9  JZ 0x007eacbb
007eacab  TEST ESI,ESI
007eacad  JNZ 0x007eacb4
007eacaf  MOV dword ptr [EDI + 0x4],ESI
007eacb2  JMP 0x007eacbb
007eacb4  MOV ECX,ESI
007eacb6  SUB ECX,EDI
007eacb8  MOV dword ptr [EDI + 0x4],ECX
007eacbb  PUSH EBX
007eacbc  MOV ECX,ESI
007eacbe  CALL 0x007ea1f0
007eacc3  MOV EDX,dword ptr [EBX + 0x84]
007eacc9  MOV EDI,ESI
007eaccb  LEA ESI,[ESI + EDX*0x1 + 0x10]
007eaccf  TEST byte ptr [EBX + 0x4],0x20
007eacd3  JZ 0x007ead22
007eacd5  LEA ECX,[ESI + 0x1f]
007eacd8  AND ECX,0xfffffff0
007eacdb  SUB ECX,0x10
007eacde  TEST EDI,EDI
007eace0  JZ 0x007eacf2
007eace2  TEST ECX,ECX
007eace4  JNZ 0x007eaceb
007eace6  MOV dword ptr [EDI + 0x4],ECX
007eace9  JMP 0x007eacf2
007eaceb  MOV EAX,ECX
007eaced  SUB EAX,EDI
007eacef  MOV dword ptr [EDI + 0x4],EAX
007eacf2  PUSH EBX
007eacf3  CALL 0x007e9ef0
007eacf8  MOV byte ptr [ECX],0x6f
007eacfb  MOV EBX,dword ptr [EBX + 0x90]
007ead01  LEA EAX,[ECX + 0x10]
007ead04  XOR EDX,EDX
007ead06  ADD EBX,0x11
007ead09  CMP EAX,EDX
007ead0b  JNZ 0x007ead15
007ead0d  MOV dword ptr [ECX + 0x8],EDX
007ead10  MOV dword ptr [ECX + 0xc],EDX
007ead13  JMP 0x007ead20
007ead15  SUB EAX,ECX
007ead17  ADD EBX,-0x10
007ead1a  MOV dword ptr [ECX + 0x8],EAX
007ead1d  MOV dword ptr [ECX + 0xc],EBX
007ead20  MOV EDI,ECX
007ead22  TEST EDI,EDI
007ead24  JZ 0x007ead2d
007ead26  MOV dword ptr [EDI + 0x4],0x0
007ead2d  POP EDI
007ead2e  POP ESI
007ead2f  POP EBX
007ead30  POP EBP
007ead31  RET

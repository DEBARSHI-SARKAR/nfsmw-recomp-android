007de140  PUSH EBP
007de141  MOV EBP,ESP
007de143  SUB ESP,0x20
007de146  MOV dword ptr [EBP + -0x14],0x0
007de14d  MOV dword ptr [EBP + -0x1c],0x0
007de154  CMP dword ptr [0x009baedc],0x0
007de15b  JNZ 0x007de1fb
007de161  PUSH 0x8bcdb0
007de166  CALL dword ptr [0x00890098]
007de16c  MOV dword ptr [EBP + -0x20],EAX
007de16f  CMP dword ptr [EBP + -0x20],0x0
007de173  JZ 0x007de192
007de175  PUSH 0x8bd8d4
007de17a  MOV EAX,dword ptr [EBP + -0x20]
007de17d  PUSH EAX
007de17e  CALL dword ptr [0x00890094]
007de184  MOV [0x009baedc],EAX
007de189  CMP dword ptr [0x009baedc],0x0
007de190  JNZ 0x007de199
007de192  XOR EAX,EAX
007de194  JMP 0x007de2aa
007de199  PUSH 0x8bd8c4
007de19e  MOV ECX,dword ptr [EBP + -0x20]
007de1a1  PUSH ECX
007de1a2  CALL dword ptr [0x00890094]
007de1a8  MOV [0x009baee0],EAX
007de1ad  PUSH 0x8bd8b0
007de1b2  MOV EDX,dword ptr [EBP + -0x20]
007de1b5  PUSH EDX
007de1b6  CALL dword ptr [0x00890094]
007de1bc  MOV [0x009baee4],EAX
007de1c1  CMP dword ptr [0x009baa20],0x2
007de1c8  JNZ 0x007de1fb
007de1ca  PUSH 0x8bd894
007de1cf  MOV EAX,dword ptr [EBP + -0x20]
007de1d2  PUSH EAX
007de1d3  CALL dword ptr [0x00890094]
007de1d9  MOV [0x009baeec],EAX
007de1de  CMP dword ptr [0x009baeec],0x0
007de1e5  JZ 0x007de1fb
007de1e7  PUSH 0x8bd87c
007de1ec  MOV ECX,dword ptr [EBP + -0x20]
007de1ef  PUSH ECX
007de1f0  CALL dword ptr [0x00890094]
007de1f6  MOV [0x009baee8],EAX
007de1fb  CMP dword ptr [0x009baee8],0x0
007de202  JZ 0x007de23c
007de204  CALL dword ptr [0x009baee8]
007de20a  MOV dword ptr [EBP + -0x10],EAX
007de20d  CMP dword ptr [EBP + -0x10],0x0
007de211  JZ 0x007de235
007de213  LEA EDX,[EBP + -0x18]
007de216  PUSH EDX
007de217  PUSH 0xc
007de219  LEA EAX,[EBP + -0xc]
007de21c  PUSH EAX
007de21d  PUSH 0x1
007de21f  MOV ECX,dword ptr [EBP + -0x10]
007de222  PUSH ECX
007de223  CALL dword ptr [0x009baeec]
007de229  TEST EAX,EAX
007de22b  JZ 0x007de235
007de22d  MOV EDX,dword ptr [EBP + -0x4]
007de230  AND EDX,0x1
007de233  JNZ 0x007de23c
007de235  MOV dword ptr [EBP + -0x1c],0x1
007de23c  CMP dword ptr [EBP + -0x1c],0x0
007de240  JZ 0x007de266
007de242  CMP dword ptr [0x009baa2c],0x4
007de249  JC 0x007de258
007de24b  MOV EAX,dword ptr [EBP + 0x10]
007de24e  OR EAX,0x200000
007de253  MOV dword ptr [EBP + 0x10],EAX
007de256  JMP 0x007de264
007de258  MOV ECX,dword ptr [EBP + 0x10]
007de25b  OR ECX,0x40000
007de261  MOV dword ptr [EBP + 0x10],ECX
007de264  JMP 0x007de294
007de266  CMP dword ptr [0x009baee0],0x0
007de26d  JZ 0x007de278
007de26f  CALL dword ptr [0x009baee0]
007de275  MOV dword ptr [EBP + -0x14],EAX
007de278  CMP dword ptr [EBP + -0x14],0x0
007de27c  JZ 0x007de294
007de27e  CMP dword ptr [0x009baee4],0x0
007de285  JZ 0x007de294
007de287  MOV EDX,dword ptr [EBP + -0x14]
007de28a  PUSH EDX
007de28b  CALL dword ptr [0x009baee4]
007de291  MOV dword ptr [EBP + -0x14],EAX
007de294  MOV EAX,dword ptr [EBP + 0x10]
007de297  PUSH EAX
007de298  MOV ECX,dword ptr [EBP + 0xc]
007de29b  PUSH ECX
007de29c  MOV EDX,dword ptr [EBP + 0x8]
007de29f  PUSH EDX
007de2a0  MOV EAX,dword ptr [EBP + -0x14]
007de2a3  PUSH EAX
007de2a4  CALL dword ptr [0x009baedc]
007de2aa  MOV ESP,EBP
007de2ac  POP EBP
007de2ad  RET

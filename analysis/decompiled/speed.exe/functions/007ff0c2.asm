007ff0c2  PUSH EBP
007ff0c3  MOV EBP,ESP
007ff0c5  SUB ESP,0x3c
007ff0c8  CMP dword ptr [EBP + 0x30],0x2
007ff0cc  MOV EAX,0x7fef9c
007ff0d1  MOV dword ptr [EBP + -0x1c],EAX
007ff0d4  MOV dword ptr [EBP + -0x4],EAX
007ff0d7  MOV EAX,0x7ff091
007ff0dc  JNZ 0x007ff0e7
007ff0de  CMP dword ptr [EBP + 0x34],0x1
007ff0e2  JNZ 0x007ff0e7
007ff0e4  MOV dword ptr [EBP + -0x4],EAX
007ff0e7  CMP dword ptr [EBP + 0x38],0x2
007ff0eb  JNZ 0x007ff103
007ff0ed  CMP dword ptr [EBP + 0x3c],0x1
007ff0f1  JNZ 0x007ff103
007ff0f3  CMP dword ptr [EBP + 0x40],0x0
007ff0f7  MOV dword ptr [EBP + -0x1c],EAX
007ff0fa  JNZ 0x007ff103
007ff0fc  MOV dword ptr [EBP + -0x1c],0x7ff02b
007ff103  PUSH EBX
007ff104  MOV EBX,dword ptr [EBP + 0x24]
007ff107  CMP EBX,dword ptr [EBP + 0x14]
007ff10a  PUSH ESI
007ff10b  PUSH EDI
007ff10c  JNZ 0x007ff149
007ff10e  TEST EBX,EBX
007ff110  JBE 0x007ff2c7
007ff116  MOV EDI,dword ptr [EBP + 0x10]
007ff119  MOV ESI,dword ptr [EBP + 0x8]
007ff11c  MOV dword ptr [EBP + 0x14],EBX
007ff11f  MOV EBX,dword ptr [EBP + 0x18]
007ff122  INC EDI
007ff123  PUSH dword ptr [EBP + 0x20]
007ff126  PUSH dword ptr [EBP + 0x34]
007ff129  PUSH 0x1
007ff12b  PUSH EBX
007ff12c  PUSH EDI
007ff12d  PUSH dword ptr [EBP + 0x30]
007ff130  PUSH 0x1
007ff132  PUSH ESI
007ff133  CALL dword ptr [EBP + -0x4]
007ff136  ADD ESI,dword ptr [EBP + 0xc]
007ff139  ADD EBX,dword ptr [EBP + 0x1c]
007ff13c  ADD ESP,0x20
007ff13f  DEC dword ptr [EBP + 0x14]
007ff142  JNZ 0x007ff123
007ff144  JMP 0x007ff2c7
007ff149  JBE 0x007ff162
007ff14b  MOVZX ESI,byte ptr [EBP + 0x2c]
007ff14f  DEC ESI
007ff150  MOV EAX,ESI
007ff152  IMUL EAX,dword ptr [EBP + 0x14]
007ff156  XOR EDX,EDX
007ff158  DIV EBX
007ff15a  MOV dword ptr [EBP + -0x8],ESI
007ff15d  MOV dword ptr [EBP + 0x24],EAX
007ff160  JMP 0x007ff178
007ff162  MOVZX EAX,byte ptr [EBP + 0x2c]
007ff166  DEC EAX
007ff167  MOV dword ptr [EBP + 0x24],EAX
007ff16a  IMUL EAX,dword ptr [EBP + 0x3c]
007ff16e  XOR EDX,EDX
007ff170  DIV dword ptr [EBP + 0x38]
007ff173  MOV dword ptr [EBP + -0x8],EAX
007ff176  MOV ESI,EAX
007ff178  PUSH dword ptr [EBP + 0x20]
007ff17b  MOV EAX,dword ptr [EBP + 0x10]
007ff17e  PUSH dword ptr [EBP + 0x34]
007ff181  MOV EDI,dword ptr [EBP + 0x28]
007ff184  PUSH 0x1
007ff186  PUSH EDI
007ff187  INC EAX
007ff188  PUSH EAX
007ff189  PUSH dword ptr [EBP + 0x30]
007ff18c  MOV dword ptr [EBP + -0x30],EAX
007ff18f  PUSH 0x1
007ff191  PUSH dword ptr [EBP + 0x8]
007ff194  CALL dword ptr [EBP + -0x4]
007ff197  XOR EDX,EDX
007ff199  LEA EAX,[ESI + EBX*0x1 + -0x1]
007ff19d  DIV ESI
007ff19f  ADD ESP,0x20
007ff1a2  TEST EAX,EAX
007ff1a4  JBE 0x007ff2c7
007ff1aa  MOV ECX,dword ptr [EBP + 0x24]
007ff1ad  MOV EDX,ECX
007ff1af  IMUL EDX,dword ptr [EBP + 0x1c]
007ff1b3  ADD EDX,EDI
007ff1b5  MOV dword ptr [EBP + -0x34],EDX
007ff1b8  MOV EDX,dword ptr [EBP + 0xc]
007ff1bb  IMUL ECX,EDX
007ff1be  MOV EBX,dword ptr [EBP + 0x18]
007ff1c1  MOV dword ptr [EBP + -0x38],ECX
007ff1c4  MOV ECX,ESI
007ff1c6  IMUL ECX,dword ptr [EBP + 0x1c]
007ff1ca  MOV dword ptr [EBP + -0x3c],ECX
007ff1cd  MOV ECX,dword ptr [EBP + 0x8]
007ff1d0  ADD ECX,EDX
007ff1d2  XOR EDX,EDX
007ff1d4  SUB EBX,EDI
007ff1d6  INC EDX
007ff1d7  MOV dword ptr [EBP + -0x24],ECX
007ff1da  MOV dword ptr [EBP + -0x28],EDX
007ff1dd  MOV dword ptr [EBP + -0x2c],EAX
007ff1e0  JMP 0x007ff1e8
007ff1e2  MOV EDI,dword ptr [EBP + 0x28]
007ff1e5  MOV ESI,dword ptr [EBP + -0x8]
007ff1e8  MOV EAX,dword ptr [EBP + 0x24]
007ff1eb  INC EAX
007ff1ec  CMP EAX,0x1
007ff1ef  JBE 0x007ff260
007ff1f1  MOV dword ptr [EBP + -0x10],EDX
007ff1f4  MOV EDX,dword ptr [EBP + 0x1c]
007ff1f7  ADD EDX,EDI
007ff1f9  DEC EAX
007ff1fa  MOV dword ptr [EBP + -0xc],EDX
007ff1fd  MOV dword ptr [EBP + -0x14],ECX
007ff200  MOV dword ptr [EBP + -0x18],EDI
007ff203  MOV dword ptr [EBP + -0x20],EAX
007ff206  MOV EAX,dword ptr [EBP + -0x10]
007ff209  CMP EAX,dword ptr [EBP + 0x14]
007ff20c  JNC 0x007ff22c
007ff20e  PUSH dword ptr [EBP + 0x20]
007ff211  PUSH dword ptr [EBP + 0x34]
007ff214  PUSH 0x1
007ff216  PUSH dword ptr [EBP + -0xc]
007ff219  PUSH dword ptr [EBP + -0x30]
007ff21c  PUSH dword ptr [EBP + 0x30]
007ff21f  PUSH 0x1
007ff221  PUSH dword ptr [EBP + -0x14]
007ff224  CALL dword ptr [EBP + -0x4]
007ff227  ADD ESP,0x20
007ff22a  JMP 0x007ff249
007ff22c  MOV ECX,dword ptr [EBP + 0x1c]
007ff22f  MOV ESI,dword ptr [EBP + -0x18]
007ff232  MOV EDI,dword ptr [EBP + -0xc]
007ff235  MOV EAX,ECX
007ff237  SHR ECX,0x2
007ff23a  MOVSD.REP ES:EDI,ESI
007ff23c  MOV ECX,EAX
007ff23e  AND ECX,0x3
007ff241  MOVSB.REP ES:EDI,ESI
007ff243  MOV EDI,dword ptr [EBP + 0x28]
007ff246  MOV ESI,dword ptr [EBP + -0x8]
007ff249  MOV EAX,dword ptr [EBP + 0xc]
007ff24c  ADD dword ptr [EBP + -0x14],EAX
007ff24f  MOV EAX,dword ptr [EBP + 0x1c]
007ff252  INC dword ptr [EBP + -0x10]
007ff255  ADD dword ptr [EBP + -0x18],EAX
007ff258  ADD dword ptr [EBP + -0xc],EAX
007ff25b  DEC dword ptr [EBP + -0x20]
007ff25e  JNZ 0x007ff206
007ff260  MOV EAX,dword ptr [EBP + 0x20]
007ff263  TEST EAX,EAX
007ff265  JBE 0x007ff295
007ff267  MOV dword ptr [EBP + -0x18],EDI
007ff26a  MOV dword ptr [EBP + -0x20],EAX
007ff26d  MOV ECX,dword ptr [EBP + -0x18]
007ff270  PUSH ESI
007ff271  PUSH dword ptr [EBP + 0x3c]
007ff274  LEA EAX,[EBX + ECX*0x1]
007ff277  PUSH dword ptr [EBP + 0x1c]
007ff27a  PUSH EAX
007ff27b  MOV EAX,dword ptr [EBP + 0x24]
007ff27e  INC EAX
007ff27f  PUSH EAX
007ff280  PUSH dword ptr [EBP + 0x38]
007ff283  PUSH dword ptr [EBP + 0x1c]
007ff286  PUSH ECX
007ff287  CALL dword ptr [EBP + -0x1c]
007ff28a  ADD ESP,0x20
007ff28d  INC dword ptr [EBP + -0x18]
007ff290  DEC dword ptr [EBP + -0x20]
007ff293  JNZ 0x007ff26d
007ff295  MOV ECX,dword ptr [EBP + 0x1c]
007ff298  MOV ESI,dword ptr [EBP + -0x34]
007ff29b  MOV EDX,dword ptr [EBP + -0x28]
007ff29e  ADD EDX,dword ptr [EBP + 0x24]
007ff2a1  ADD EBX,dword ptr [EBP + -0x3c]
007ff2a4  MOV EAX,ECX
007ff2a6  SHR ECX,0x2
007ff2a9  MOVSD.REP ES:EDI,ESI
007ff2ab  MOV ECX,EAX
007ff2ad  AND ECX,0x3
007ff2b0  MOVSB.REP ES:EDI,ESI
007ff2b2  MOV ECX,dword ptr [EBP + -0x24]
007ff2b5  ADD ECX,dword ptr [EBP + -0x38]
007ff2b8  DEC dword ptr [EBP + -0x2c]
007ff2bb  MOV dword ptr [EBP + -0x24],ECX
007ff2be  MOV dword ptr [EBP + -0x28],EDX
007ff2c1  JNZ 0x007ff1e2
007ff2c7  POP EDI
007ff2c8  POP ESI
007ff2c9  POP EBX
007ff2ca  LEAVE
007ff2cb  RET

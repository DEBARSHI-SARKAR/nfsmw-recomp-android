007ff8cc  PUSH EBP
007ff8cd  MOV EBP,ESP
007ff8cf  SUB ESP,0x1c
007ff8d2  PUSH EBX
007ff8d3  PUSH ESI
007ff8d4  MOV ESI,dword ptr [EBP + 0x8]
007ff8d7  MOV EAX,dword ptr [ESI + 0x70]
007ff8da  MOV ECX,dword ptr [ESI + 0x58]
007ff8dd  MOV dword ptr [EBP + -0x10],EAX
007ff8e0  PUSH EDI
007ff8e1  MOV EDI,dword ptr [ESI + 0x5c]
007ff8e4  IMUL EAX,EDI
007ff8e7  LEA EAX,[EAX + ECX*0x1 + -0x1]
007ff8eb  XOR EDX,EDX
007ff8ed  DIV ECX
007ff8ef  MOV EBX,dword ptr [ESI + 0x60]
007ff8f2  XOR EDX,EDX
007ff8f4  MOV dword ptr [EBP + -0xc],EAX
007ff8f7  MOV EAX,dword ptr [ESI + 0x74]
007ff8fa  MOV dword ptr [EBP + -0x18],EAX
007ff8fd  IMUL EAX,dword ptr [ESI + 0x64]
007ff901  LEA EAX,[EAX + EBX*0x1 + -0x1]
007ff905  DIV EBX
007ff907  CMP EDI,0x3
007ff90a  MOV dword ptr [EBP + -0x8],EAX
007ff90d  MOV EAX,dword ptr [EBP + -0xc]
007ff910  JNZ 0x007ff925
007ff912  ADD EAX,0x2
007ff915  CDQ
007ff916  IDIV EDI
007ff918  PUSH EDI
007ff919  IMUL EAX,ECX
007ff91c  LEA EAX,[EAX + EAX*0x2]
007ff91f  CDQ
007ff920  POP ECX
007ff921  IDIV ECX
007ff923  JMP 0x007ff938
007ff925  ADD EAX,0x7
007ff928  CDQ
007ff929  PUSH 0x8
007ff92b  POP EDI
007ff92c  IDIV EDI
007ff92e  IMUL EAX,ECX
007ff931  SHL EAX,0x3
007ff934  CDQ
007ff935  IDIV dword ptr [ESI + 0x5c]
007ff938  CMP dword ptr [ESI + 0x64],0x3
007ff93c  MOV ECX,dword ptr [EBP + -0x8]
007ff93f  MOV dword ptr [EBP + -0x14],EAX
007ff942  JNZ 0x007ff958
007ff944  LEA EAX,[ECX + 0x2]
007ff947  CDQ
007ff948  PUSH 0x3
007ff94a  POP EDI
007ff94b  IDIV EDI
007ff94d  IMUL EAX,EBX
007ff950  LEA EAX,[EAX + EAX*0x2]
007ff953  CDQ
007ff954  IDIV EDI
007ff956  JMP 0x007ff96b
007ff958  LEA EAX,[ECX + 0x7]
007ff95b  CDQ
007ff95c  PUSH 0x8
007ff95e  POP EDI
007ff95f  IDIV EDI
007ff961  IMUL EAX,EBX
007ff964  SHL EAX,0x3
007ff967  CDQ
007ff968  IDIV dword ptr [ESI + 0x64]
007ff96b  PUSH dword ptr [EBP + -0x18]
007ff96e  MOV EBX,dword ptr [EBP + 0x10]
007ff971  PUSH dword ptr [EBP + -0x10]
007ff974  MOV dword ptr [EBP + -0x4],EAX
007ff977  PUSH dword ptr [EBX + 0x8]
007ff97a  MOV EAX,dword ptr [EBX + 0x18]
007ff97d  ADD EAX,dword ptr [EBP + 0x14]
007ff980  PUSH EAX
007ff981  MOV EAX,dword ptr [ESI + 0xb4]
007ff987  PUSH ECX
007ff988  PUSH dword ptr [EBP + -0xc]
007ff98b  MOV ECX,dword ptr [ESI + 0x40]
007ff98e  LEA EAX,[ECX + EAX*0x2]
007ff991  PUSH EAX
007ff992  MOV EAX,dword ptr [ESI + 0x78]
007ff995  ADD EAX,dword ptr [EBP + 0xc]
007ff998  PUSH EAX
007ff999  PUSH ESI
007ff99a  CALL 0x007ff6f0
007ff99f  AND dword ptr [EBP + 0x8],0x0
007ff9a3  ADD ESP,0x24
007ff9a6  CMP dword ptr [EBP + -0x4],0x0
007ff9aa  MOV dword ptr [EBP + 0x10],EAX
007ff9ad  JLE 0x007ff9e6
007ff9af  MOV EAX,dword ptr [EBP + -0x14]
007ff9b2  SUB EAX,dword ptr [EBP + -0x10]
007ff9b5  MOV dword ptr [EBP + -0x1c],EAX
007ff9b8  MOV EDI,dword ptr [EBX + 0x8]
007ff9bb  IMUL EDI,dword ptr [EBP + 0x8]
007ff9bf  ADD EDI,dword ptr [EBX + 0x18]
007ff9c2  MOV ECX,dword ptr [EBP + -0x1c]
007ff9c5  ADD EDI,dword ptr [EBP + -0x10]
007ff9c8  MOV EDX,ECX
007ff9ca  ADD EDI,dword ptr [EBP + 0x14]
007ff9cd  SHR ECX,0x2
007ff9d0  XOR EAX,EAX
007ff9d2  STOSD.REP ES:EDI
007ff9d4  MOV ECX,EDX
007ff9d6  AND ECX,0x3
007ff9d9  INC dword ptr [EBP + 0x8]
007ff9dc  STOSB.REP ES:EDI
007ff9de  MOV EAX,dword ptr [EBP + 0x8]
007ff9e1  CMP EAX,dword ptr [EBP + -0x4]
007ff9e4  JL 0x007ff9b8
007ff9e6  MOV EAX,dword ptr [EBP + -0x18]
007ff9e9  MOV dword ptr [EBP + 0x8],EAX
007ff9ec  JMP 0x007ffa14
007ff9ee  MOV EDI,dword ptr [EBX + 0x8]
007ff9f1  IMUL EDI,dword ptr [EBP + 0x8]
007ff9f5  ADD EDI,dword ptr [EBX + 0x18]
007ff9f8  MOV ECX,dword ptr [EBP + -0x14]
007ff9fb  ADD EDI,dword ptr [EBP + 0x14]
007ff9fe  MOV EDX,ECX
007ffa00  SHR ECX,0x2
007ffa03  XOR EAX,EAX
007ffa05  STOSD.REP ES:EDI
007ffa07  MOV ECX,EDX
007ffa09  AND ECX,0x3
007ffa0c  INC dword ptr [EBP + 0x8]
007ffa0f  STOSB.REP ES:EDI
007ffa11  MOV EAX,dword ptr [EBP + 0x8]
007ffa14  CMP EAX,dword ptr [EBP + -0x4]
007ffa17  JL 0x007ff9ee
007ffa19  CMP dword ptr [EBP + 0x10],0x0
007ffa1d  JNZ 0x007ffa23
007ffa1f  XOR EAX,EAX
007ffa21  JMP 0x007ffaa1
007ffa23  MOV EDI,dword ptr [EBP + -0xc]
007ffa26  MOV EAX,dword ptr [EBP + -0x8]
007ffa29  MOV ECX,dword ptr [EBP + -0x10]
007ffa2c  MOV EDX,dword ptr [EBP + -0x18]
007ffa2f  INC EDI
007ffa30  SAR EDI,0x1
007ffa32  INC EAX
007ffa33  SAR EAX,0x1
007ffa35  INC ECX
007ffa36  SAR ECX,0x1
007ffa38  INC EDX
007ffa39  SAR EDX,0x1
007ffa3b  PUSH EDX
007ffa3c  PUSH ECX
007ffa3d  PUSH dword ptr [EBX + 0x14]
007ffa40  MOV dword ptr [EBP + 0x8],ECX
007ffa43  MOV ECX,dword ptr [EBX + 0x1c]
007ffa46  ADD ECX,dword ptr [EBP + 0x18]
007ffa49  MOV dword ptr [EBP + -0x8],EAX
007ffa4c  PUSH ECX
007ffa4d  PUSH EAX
007ffa4e  MOV EAX,dword ptr [ESI + 0x40]
007ffa51  SHR EAX,0x1
007ffa53  ADD EAX,dword ptr [ESI + 0xb4]
007ffa59  PUSH EDI
007ffa5a  PUSH EAX
007ffa5b  MOV EAX,dword ptr [ESI + 0x7c]
007ffa5e  ADD EAX,dword ptr [EBP + 0xc]
007ffa61  MOV dword ptr [EBP + 0x14],EDX
007ffa64  PUSH EAX
007ffa65  PUSH ESI
007ffa66  CALL 0x007ff6f0
007ffa6b  PUSH dword ptr [EBP + 0x14]
007ffa6e  MOV EAX,dword ptr [EBX + 0x20]
007ffa71  PUSH dword ptr [EBP + 0x8]
007ffa74  ADD EAX,dword ptr [EBP + 0x18]
007ffa77  PUSH dword ptr [EBX + 0x14]
007ffa7a  PUSH EAX
007ffa7b  PUSH dword ptr [EBP + -0x8]
007ffa7e  MOV EAX,dword ptr [ESI + 0x40]
007ffa81  SHR EAX,0x1
007ffa83  ADD EAX,dword ptr [ESI + 0xb4]
007ffa89  PUSH EDI
007ffa8a  PUSH EAX
007ffa8b  MOV EAX,dword ptr [ESI + 0x80]
007ffa91  ADD EAX,dword ptr [EBP + 0xc]
007ffa94  PUSH EAX
007ffa95  PUSH ESI
007ffa96  CALL 0x007ff6f0
007ffa9b  MOV EAX,dword ptr [EBP + 0x10]
007ffa9e  ADD ESP,0x48
007ffaa1  POP EDI
007ffaa2  POP ESI
007ffaa3  POP EBX
007ffaa4  LEAVE
007ffaa5  RET

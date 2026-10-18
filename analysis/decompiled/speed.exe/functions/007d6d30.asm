007d6d30  PUSH EBP
007d6d31  MOV EBP,ESP
007d6d33  PUSH EDI
007d6d34  PUSH ESI
007d6d35  MOV ESI,dword ptr [EBP + 0xc]
007d6d38  MOV ECX,dword ptr [EBP + 0x10]
007d6d3b  MOV EDI,dword ptr [EBP + 0x8]
007d6d3e  MOV EAX,ECX
007d6d40  MOV EDX,ECX
007d6d42  ADD EAX,ESI
007d6d44  CMP EDI,ESI
007d6d46  JBE 0x007d6d50
007d6d48  CMP EDI,EAX
007d6d4a  JC 0x007d6ecc
007d6d50  TEST EDI,0x3
007d6d56  JNZ 0x007d6d6c
007d6d58  SHR ECX,0x2
007d6d5b  AND EDX,0x3
007d6d5e  CMP ECX,0x8
007d6d61  JC 0x007d6d8c
007d6d63  MOVSD.REP ES:EDI,ESI
007d6d65  JMP dword ptr [EDX*0x4 + 0x7d6e7c]
007d6d6c  MOV EAX,EDI
007d6d6e  MOV EDX,0x3
007d6d73  SUB ECX,0x4
007d6d76  JC 0x007d6d84
007d6d78  AND EAX,0x3
007d6d7b  ADD ECX,EAX
007d6d7d  JMP dword ptr [EAX*0x4 + 0x7d6d90]
007d6d84  JMP dword ptr [ECX*0x4 + 0x7d6e8c]
007d6d8c  JMP dword ptr [ECX*0x4 + 0x7d6e10]
007d6da0  AND EDX,ECX
007d6da2  MOV AL,byte ptr [ESI]
007d6da4  MOV byte ptr [EDI],AL
007d6da6  MOV AL,byte ptr [ESI + 0x1]
007d6da9  MOV byte ptr [EDI + 0x1],AL
007d6dac  MOV AL,byte ptr [ESI + 0x2]
007d6daf  SHR ECX,0x2
007d6db2  MOV byte ptr [EDI + 0x2],AL
007d6db5  ADD ESI,0x3
007d6db8  ADD EDI,0x3
007d6dbb  CMP ECX,0x8
007d6dbe  JC 0x007d6d8c
007d6dc0  MOVSD.REP ES:EDI,ESI
007d6dc2  JMP dword ptr [EDX*0x4 + 0x7d6e7c]
007d6dcc  AND EDX,ECX
007d6dce  MOV AL,byte ptr [ESI]
007d6dd0  MOV byte ptr [EDI],AL
007d6dd2  MOV AL,byte ptr [ESI + 0x1]
007d6dd5  SHR ECX,0x2
007d6dd8  MOV byte ptr [EDI + 0x1],AL
007d6ddb  ADD ESI,0x2
007d6dde  ADD EDI,0x2
007d6de1  CMP ECX,0x8
007d6de4  JC 0x007d6d8c
007d6de6  MOVSD.REP ES:EDI,ESI
007d6de8  JMP dword ptr [EDX*0x4 + 0x7d6e7c]
007d6df0  AND EDX,ECX
007d6df2  MOV AL,byte ptr [ESI]
007d6df4  MOV byte ptr [EDI],AL
007d6df6  ADD ESI,0x1
007d6df9  SHR ECX,0x2
007d6dfc  ADD EDI,0x1
007d6dff  CMP ECX,0x8
007d6e02  JC 0x007d6d8c
007d6e04  MOVSD.REP ES:EDI,ESI
007d6e06  JMP dword ptr [EDX*0x4 + 0x7d6e7c]
007d6e30  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
007d6e34  MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
007d6e38  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
007d6e3c  MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
007d6e40  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
007d6e44  MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
007d6e48  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
007d6e4c  MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
007d6e50  MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
007d6e54  MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
007d6e58  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
007d6e5c  MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
007d6e60  MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
007d6e64  MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
007d6e68  LEA EAX,[ECX*0x4 + 0x0]
007d6e6f  ADD ESI,EAX
007d6e71  ADD EDI,EAX
007d6e73  JMP dword ptr [EDX*0x4 + 0x7d6e7c]
007d6e8c  MOV EAX,dword ptr [EBP + 0x8]
007d6e8f  POP ESI
007d6e90  POP EDI
007d6e91  LEAVE
007d6e92  RET
007d6e94  MOV AL,byte ptr [ESI]
007d6e96  MOV byte ptr [EDI],AL
007d6e98  MOV EAX,dword ptr [EBP + 0x8]
007d6e9b  POP ESI
007d6e9c  POP EDI
007d6e9d  LEAVE
007d6e9e  RET
007d6ea0  MOV AL,byte ptr [ESI]
007d6ea2  MOV byte ptr [EDI],AL
007d6ea4  MOV AL,byte ptr [ESI + 0x1]
007d6ea7  MOV byte ptr [EDI + 0x1],AL
007d6eaa  MOV EAX,dword ptr [EBP + 0x8]
007d6ead  POP ESI
007d6eae  POP EDI
007d6eaf  LEAVE
007d6eb0  RET
007d6eb4  MOV AL,byte ptr [ESI]
007d6eb6  MOV byte ptr [EDI],AL
007d6eb8  MOV AL,byte ptr [ESI + 0x1]
007d6ebb  MOV byte ptr [EDI + 0x1],AL
007d6ebe  MOV AL,byte ptr [ESI + 0x2]
007d6ec1  MOV byte ptr [EDI + 0x2],AL
007d6ec4  MOV EAX,dword ptr [EBP + 0x8]
007d6ec7  POP ESI
007d6ec8  POP EDI
007d6ec9  LEAVE
007d6eca  RET
007d6ecc  LEA ESI,[ECX + ESI*0x1 + -0x4]
007d6ed0  LEA EDI,[ECX + EDI*0x1 + -0x4]
007d6ed4  TEST EDI,0x3
007d6eda  JNZ 0x007d6f00
007d6edc  SHR ECX,0x2
007d6edf  AND EDX,0x3
007d6ee2  CMP ECX,0x8
007d6ee5  JC 0x007d6ef4
007d6ee7  STD
007d6ee8  MOVSD.REP ES:EDI,ESI
007d6eea  CLD
007d6eeb  JMP dword ptr [EDX*0x4 + 0x7d7018]
007d6ef4  NEG ECX
007d6ef6  JMP dword ptr [ECX*0x4 + 0x7d6fc8]
007d6f00  MOV EAX,EDI
007d6f02  MOV EDX,0x3
007d6f07  CMP ECX,0x4
007d6f0a  JC 0x007d6f18
007d6f0c  AND EAX,0x3
007d6f0f  SUB ECX,EAX
007d6f11  JMP dword ptr [EAX*0x4 + 0x7d6f1c]
007d6f18  JMP dword ptr [ECX*0x4 + 0x7d7018]
007d6f2c  MOV AL,byte ptr [ESI + 0x3]
007d6f2f  AND EDX,ECX
007d6f31  MOV byte ptr [EDI + 0x3],AL
007d6f34  SUB ESI,0x1
007d6f37  SHR ECX,0x2
007d6f3a  SUB EDI,0x1
007d6f3d  CMP ECX,0x8
007d6f40  JC 0x007d6ef4
007d6f42  STD
007d6f43  MOVSD.REP ES:EDI,ESI
007d6f45  CLD
007d6f46  JMP dword ptr [EDX*0x4 + 0x7d7018]
007d6f50  MOV AL,byte ptr [ESI + 0x3]
007d6f53  AND EDX,ECX
007d6f55  MOV byte ptr [EDI + 0x3],AL
007d6f58  MOV AL,byte ptr [ESI + 0x2]
007d6f5b  SHR ECX,0x2
007d6f5e  MOV byte ptr [EDI + 0x2],AL
007d6f61  SUB ESI,0x2
007d6f64  SUB EDI,0x2
007d6f67  CMP ECX,0x8
007d6f6a  JC 0x007d6ef4
007d6f6c  STD
007d6f6d  MOVSD.REP ES:EDI,ESI
007d6f6f  CLD
007d6f70  JMP dword ptr [EDX*0x4 + 0x7d7018]
007d6f78  MOV AL,byte ptr [ESI + 0x3]
007d6f7b  AND EDX,ECX
007d6f7d  MOV byte ptr [EDI + 0x3],AL
007d6f80  MOV AL,byte ptr [ESI + 0x2]
007d6f83  MOV byte ptr [EDI + 0x2],AL
007d6f86  MOV AL,byte ptr [ESI + 0x1]
007d6f89  SHR ECX,0x2
007d6f8c  MOV byte ptr [EDI + 0x1],AL
007d6f8f  SUB ESI,0x3
007d6f92  SUB EDI,0x3
007d6f95  CMP ECX,0x8
007d6f98  JC 0x007d6ef4
007d6f9e  STD
007d6f9f  MOVSD.REP ES:EDI,ESI
007d6fa1  CLD
007d6fa2  JMP dword ptr [EDX*0x4 + 0x7d7018]
007d6fcc  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
007d6fd0  MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
007d6fd4  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
007d6fd8  MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
007d6fdc  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
007d6fe0  MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
007d6fe4  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
007d6fe8  MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
007d6fec  MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
007d6ff0  MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
007d6ff4  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
007d6ff8  MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
007d6ffc  MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
007d7000  MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
007d7004  LEA EAX,[ECX*0x4 + 0x0]
007d700b  ADD ESI,EAX
007d700d  ADD EDI,EAX
007d700f  JMP dword ptr [EDX*0x4 + 0x7d7018]
007d7028  MOV EAX,dword ptr [EBP + 0x8]
007d702b  POP ESI
007d702c  POP EDI
007d702d  LEAVE
007d702e  RET
007d7030  MOV AL,byte ptr [ESI + 0x3]
007d7033  MOV byte ptr [EDI + 0x3],AL
007d7036  MOV EAX,dword ptr [EBP + 0x8]
007d7039  POP ESI
007d703a  POP EDI
007d703b  LEAVE
007d703c  RET
007d7040  MOV AL,byte ptr [ESI + 0x3]
007d7043  MOV byte ptr [EDI + 0x3],AL
007d7046  MOV AL,byte ptr [ESI + 0x2]
007d7049  MOV byte ptr [EDI + 0x2],AL
007d704c  MOV EAX,dword ptr [EBP + 0x8]
007d704f  POP ESI
007d7050  POP EDI
007d7051  LEAVE
007d7052  RET
007d7054  MOV AL,byte ptr [ESI + 0x3]
007d7057  MOV byte ptr [EDI + 0x3],AL
007d705a  MOV AL,byte ptr [ESI + 0x2]
007d705d  MOV byte ptr [EDI + 0x2],AL
007d7060  MOV AL,byte ptr [ESI + 0x1]
007d7063  MOV byte ptr [EDI + 0x1],AL
007d7066  MOV EAX,dword ptr [EBP + 0x8]
007d7069  POP ESI
007d706a  POP EDI
007d706b  LEAVE
007d706c  RET

007fba80  PUSH EBP
007fba81  MOV EBP,ESP
007fba83  SUB ESP,0x38
007fba86  PUSH EBX
007fba87  PUSH ESI
007fba88  XOR ESI,ESI
007fba8a  PUSH 0x8
007fba8c  POP EAX
007fba8d  PUSH ESI
007fba8e  PUSH 0x4958
007fba93  MOV dword ptr [EBP + -0x38],ESI
007fba96  MOV dword ptr [EBP + -0x34],ESI
007fba99  MOV dword ptr [EBP + -0x30],ESI
007fba9c  MOV dword ptr [EBP + -0x2c],ESI
007fba9f  MOV dword ptr [EBP + -0x28],EAX
007fbaa2  MOV dword ptr [EBP + -0x24],EAX
007fbaa5  MOV dword ptr [EBP + -0x20],ESI
007fbaa8  MOV dword ptr [EBP + -0x1c],ESI
007fbaab  MOV dword ptr [EBP + -0x18],ESI
007fbaae  MOV dword ptr [EBP + -0x14],ESI
007fbab1  MOV dword ptr [EBP + -0x10],ESI
007fbab4  MOV dword ptr [EBP + -0xc],ESI
007fbab7  MOV dword ptr [EBP + -0x8],ESI
007fbaba  MOV dword ptr [EBP + -0x4],ESI
007fbabd  CALL 0x007fc5f5
007fbac2  MOV EBX,EAX
007fbac4  POP ECX
007fbac5  XOR EAX,EAX
007fbac7  CMP EBX,ESI
007fbac9  POP ECX
007fbaca  JZ 0x007fbb2d
007fbacc  PUSH EDI
007fbacd  MOV ECX,0x1256
007fbad2  MOV EDI,EBX
007fbad4  STOSD.REP ES:EDI
007fbad6  PUSH 0xe
007fbad8  POP ECX
007fbad9  LEA EDI,[EBX + 0x1b0]
007fbadf  LEA ESI,[EBP + -0x38]
007fbae2  PUSH EBX
007fbae3  MOVSD.REP ES:EDI,ESI
007fbae5  CALL 0x007fb998
007fbaea  TEST EAX,EAX
007fbaec  POP ECX
007fbaed  JNZ 0x007fbafa
007fbaef  PUSH EBX
007fbaf0  CALL 0x007fc603
007fbaf5  POP ECX
007fbaf6  XOR EAX,EAX
007fbaf8  JMP 0x007fbb2c
007fbafa  XOR EAX,EAX
007fbafc  MOV dword ptr [EBX + 0x1a8],0x46
007fbb06  MOV dword ptr [EBX + 0x298],0x9c6840
007fbb10  LEA EDI,[EBX + 0x3a4]
007fbb16  STOSD ES:EDI
007fbb17  STOSD ES:EDI
007fbb18  STOSD ES:EDI
007fbb19  STOSD ES:EDI
007fbb1a  STOSD ES:EDI
007fbb1b  STOSW ES:EDI
007fbb1d  PUSH 0x63
007fbb1f  XOR EAX,EAX
007fbb21  POP ECX
007fbb22  LEA EDI,[EBX + 0x3ba]
007fbb28  STOSD.REP ES:EDI
007fbb2a  MOV EAX,EBX
007fbb2c  POP EDI
007fbb2d  POP ESI
007fbb2e  POP EBX
007fbb2f  LEAVE
007fbb30  RET

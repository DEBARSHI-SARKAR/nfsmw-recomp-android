007fde8f  PUSH EBP
007fde90  MOV EBP,ESP
007fde92  SUB ESP,0xc
007fde95  LEA EAX,[EBP + -0x4]
007fde98  PUSH EAX
007fde99  LEA EAX,[EBP + -0xc]
007fde9c  PUSH EAX
007fde9d  LEA EAX,[EBP + -0x8]
007fdea0  PUSH EAX
007fdea1  CALL 0x008066bb
007fdea6  ADD ESP,0xc
007fdea9  CMP dword ptr [EBP + -0x4],0x0
007fdead  JZ 0x007fdebb
007fdeaf  MOV dword ptr [0x009c6a74],0x806a31
007fdeb9  LEAVE
007fdeba  RET
007fdebb  CMP dword ptr [EBP + -0x8],0x0
007fdebf  MOV dword ptr [0x009c6a74],0x806a02
007fdec9  JNZ 0x007fded5
007fdecb  MOV dword ptr [0x009c6a74],0x7fd03b
007fded5  LEAVE
007fded6  RET

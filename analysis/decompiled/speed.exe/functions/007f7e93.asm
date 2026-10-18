007f7e93  PUSH EBP
007f7e94  MOV EBP,ESP
007f7e96  PUSH ESI
007f7e97  PUSH 0x7f9b4d
007f7e9c  MOV ESI,ECX
007f7e9e  AND dword ptr [ESI + 0x60],0x0
007f7ea2  PUSH 0x2
007f7ea4  PUSH 0xc
007f7ea6  LEA EAX,[ESI + 0x78]
007f7ea9  PUSH EAX
007f7eaa  CALL 0x00404db0
007f7eaf  PUSH dword ptr [EBP + 0x24]
007f7eb2  MOV ECX,ESI
007f7eb4  PUSH dword ptr [EBP + 0x20]
007f7eb7  PUSH 0x0
007f7eb9  PUSH dword ptr [EBP + 0x1c]
007f7ebc  PUSH dword ptr [EBP + 0x18]
007f7ebf  PUSH dword ptr [EBP + 0x14]
007f7ec2  PUSH 0x0
007f7ec4  PUSH dword ptr [EBP + 0x10]
007f7ec7  PUSH dword ptr [EBP + 0xc]
007f7eca  PUSH dword ptr [EBP + 0x8]
007f7ecd  CALL 0x007f78e6
007f7ed2  MOV EAX,ESI
007f7ed4  POP ESI
007f7ed5  POP EBP
007f7ed6  RET 0x20

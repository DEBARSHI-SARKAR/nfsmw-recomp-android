007e9430  PUSH EBP
007e9431  MOV EBP,ESP
007e9433  SUB ESP,0x48
007e9436  MOV EAX,dword ptr [EBP + 0x20]
007e9439  MOV ECX,dword ptr [EBP + 0x1c]
007e943c  MOV EDX,dword ptr [EBP + 0x18]
007e943f  MOV dword ptr [EBP + -0x44],EAX
007e9442  MOV EAX,dword ptr [EBP + 0x14]
007e9445  MOV dword ptr [EBP + -0x38],ECX
007e9448  MOV ECX,dword ptr [EBP + 0x10]
007e944b  MOV dword ptr [EBP + -0x20],EAX
007e944e  MOV dword ptr [EBP + -0x14],ECX
007e9451  LEA EAX,[EBP + -0xc]
007e9454  MOV dword ptr [EBP + -0x10],EAX
007e9457  MOV dword ptr [EBP + -0x2c],EDX
007e945a  MOV EDX,dword ptr [EBP + 0x8]
007e945d  LEA ECX,[EBP + -0x18]
007e9460  MOV dword ptr [EBP + -0x1c],ECX
007e9463  LEA EAX,[EBP + -0x30]
007e9466  MOV dword ptr [EBP + -0x34],EAX
007e9469  MOV dword ptr [EBP + -0x8],EDX
007e946c  LEA ECX,[EBP + -0x3c]
007e946f  LEA EAX,[EBP + -0x48]
007e9472  MOV dword ptr [EBP + -0x40],ECX
007e9475  MOV ECX,dword ptr [0x009baf68]
007e947b  PUSH EAX
007e947c  MOV EAX,dword ptr [EBP + 0xc]
007e947f  LEA EDX,[EBP + -0x24]
007e9482  MOV dword ptr [EBP + -0x48],0x6
007e9489  MOV dword ptr [EBP + -0x3c],0x5
007e9490  MOV dword ptr [EBP + -0x30],0x4
007e9497  MOV dword ptr [EBP + -0x24],0x3
007e949e  MOV dword ptr [EBP + -0x18],0x2
007e94a5  MOV dword ptr [EBP + -0xc],0x1
007e94ac  MOV dword ptr [EBP + -0x4],0x0
007e94b3  MOV dword ptr [EBP + -0x28],EDX
007e94b6  MOV EDX,dword ptr [ECX]
007e94b8  PUSH EAX
007e94b9  CALL dword ptr [EDX]
007e94bb  MOV ESP,EBP
007e94bd  POP EBP
007e94be  RET

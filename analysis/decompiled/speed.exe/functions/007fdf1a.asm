007fdf1a  PUSH EBP
007fdf1b  MOV EBP,ESP
007fdf1d  PUSH EBX
007fdf1e  PUSH ESI
007fdf1f  MOV ESI,dword ptr [EBP + 0x8]
007fdf22  MOV EAX,dword ptr [ESI]
007fdf24  PUSH EDI
007fdf25  XOR EDI,EDI
007fdf27  CMP EAX,EDI
007fdf29  JZ 0x007fdf32
007fdf2b  PUSH EAX
007fdf2c  CALL 0x007fc603
007fdf31  POP ECX
007fdf32  LEA EBX,[ESI + 0x14c]
007fdf38  MOV EAX,dword ptr [EBX]
007fdf3a  CMP EAX,EDI
007fdf3c  MOV dword ptr [ESI],EDI
007fdf3e  MOV dword ptr [ESI + 0x4],EDI
007fdf41  JZ 0x007fdf4a
007fdf43  PUSH EAX
007fdf44  CALL 0x007fc603
007fdf49  POP ECX
007fdf4a  MOV dword ptr [EBX],EDI
007fdf4c  LEA EBX,[ESI + 0x118]
007fdf52  MOV EAX,dword ptr [EBX]
007fdf54  CMP EAX,EDI
007fdf56  MOV dword ptr [ESI + 0x148],EDI
007fdf5c  JZ 0x007fdf65
007fdf5e  PUSH EAX
007fdf5f  CALL 0x007fc603
007fdf64  POP ECX
007fdf65  MOV dword ptr [EBX],EDI
007fdf67  LEA EBX,[ESI + 0x11c]
007fdf6d  MOV EAX,dword ptr [EBX]
007fdf6f  CMP EAX,EDI
007fdf71  MOV dword ptr [ESI + 0x10c],EDI
007fdf77  JZ 0x007fdf80
007fdf79  PUSH EAX
007fdf7a  CALL 0x007fc603
007fdf7f  POP ECX
007fdf80  MOV dword ptr [EBX],EDI
007fdf82  LEA EBX,[ESI + 0x120]
007fdf88  MOV EAX,dword ptr [EBX]
007fdf8a  CMP EAX,EDI
007fdf8c  MOV dword ptr [ESI + 0x110],EDI
007fdf92  JZ 0x007fdf9b
007fdf94  PUSH EAX
007fdf95  CALL 0x007fc603
007fdf9a  POP ECX
007fdf9b  MOV dword ptr [EBX],EDI
007fdf9d  LEA EBX,[ESI + 0x6fc]
007fdfa3  MOV EAX,dword ptr [EBX]
007fdfa5  CMP EAX,EDI
007fdfa7  MOV dword ptr [ESI + 0x114],EDI
007fdfad  JZ 0x007fdfb6
007fdfaf  PUSH EAX
007fdfb0  CALL 0x007fc603
007fdfb5  POP ECX
007fdfb6  MOV dword ptr [EBX],EDI
007fdfb8  LEA EBX,[ESI + 0x704]
007fdfbe  MOV EAX,dword ptr [EBX]
007fdfc0  CMP EAX,EDI
007fdfc2  MOV dword ptr [ESI + 0x6f0],EDI
007fdfc8  JZ 0x007fdfd1
007fdfca  PUSH EAX
007fdfcb  CALL 0x007fc603
007fdfd0  POP ECX
007fdfd1  MOV dword ptr [EBX],EDI
007fdfd3  LEA EBX,[ESI + 0x700]
007fdfd9  MOV EAX,dword ptr [EBX]
007fdfdb  CMP EAX,EDI
007fdfdd  MOV dword ptr [ESI + 0x6f8],EDI
007fdfe3  JZ 0x007fdfec
007fdfe5  PUSH EAX
007fdfe6  CALL 0x007fc603
007fdfeb  POP ECX
007fdfec  MOV dword ptr [EBX],EDI
007fdfee  MOV dword ptr [ESI + 0x6f4],EDI
007fdff4  POP EDI
007fdff5  POP ESI
007fdff6  POP EBX
007fdff7  POP EBP
007fdff8  RET

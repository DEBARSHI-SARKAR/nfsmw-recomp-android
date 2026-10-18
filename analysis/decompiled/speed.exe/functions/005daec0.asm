005daec0  PUSH -0x1
005daec2  PUSH 0x874d1f
005daec7  MOV EAX,FS:[0x0]
005daecd  PUSH EAX
005daece  MOV dword ptr FS:[0x0],ESP
005daed5  SUB ESP,0x8
005daed8  PUSH ESI
005daed9  MOV ESI,ECX
005daedb  MOV dword ptr [ESP + 0x8],ESI
005daedf  MOV dword ptr [ESI],0x8a3830
005daee5  MOV AL,byte ptr [ESI + 0x24]
005daee8  TEST AL,AL
005daeea  MOV dword ptr [ESP + 0x14],0x1
005daef2  JZ 0x005daf02
005daef4  MOV EAX,dword ptr [ESI + 0x28]
005daef7  PUSH -0x2
005daef9  PUSH EAX
005daefa  CALL 0x00605a60
005daeff  ADD ESP,0x8
005daf02  MOV ECX,dword ptr [0x0091e0c8]
005daf08  CALL 0x00613710
005daf0d  MOV ECX,dword ptr [ESI + 0x4]
005daf10  PUSH ESI
005daf11  MOV byte ptr [ESP + 0x18],0x0
005daf16  MOV dword ptr [ESI],0x890970
005daf1c  CALL 0x005d5a50
005daf21  LEA ECX,[ESI + 0x8]
005daf24  MOV dword ptr [ESP + 0x14],0xffffffff
005daf2c  CALL 0x005d59e0
005daf31  MOV ECX,dword ptr [ESP + 0xc]
005daf35  POP ESI
005daf36  MOV dword ptr FS:[0x0],ECX
005daf3d  ADD ESP,0x14
005daf40  RET

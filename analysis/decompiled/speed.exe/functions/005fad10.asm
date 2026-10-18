005fad10  MOV EAX,FS:[0x0]
005fad16  PUSH -0x1
005fad18  PUSH 0x875f48
005fad1d  PUSH EAX
005fad1e  MOV dword ptr FS:[0x0],ESP
005fad25  SUB ESP,0x20
005fad28  PUSH ESI
005fad29  MOV ESI,ECX
005fad2b  MOV EAX,dword ptr [ESI + 0xc]
005fad2e  TEST EAX,EAX
005fad30  JZ 0x005fad43
005fad32  CMP dword ptr [EAX],0x0
005fad35  JNZ 0x005fad43
005fad37  MOV ECX,dword ptr [0x0091e00c]
005fad3d  PUSH EAX
005fad3e  CALL 0x005fa780
005fad43  MOV EAX,dword ptr [ESI + 0x10]
005fad46  TEST EAX,EAX
005fad48  JZ 0x005fad5b
005fad4a  CMP dword ptr [EAX],0x0
005fad4d  JNZ 0x005fad5b
005fad4f  MOV ECX,dword ptr [0x0091e00c]
005fad55  PUSH EAX
005fad56  CALL 0x005fa780
005fad5b  MOV ECX,dword ptr [0x008a2fb8]
005fad61  MOV EAX,[0x008a2fb4]
005fad66  MOV EDX,dword ptr [0x008a2fbc]
005fad6c  PUSH 0x0
005fad6e  MOV dword ptr [ESP + 0xc],ECX
005fad72  MOV ECX,dword ptr [ESI + 0x8]
005fad75  PUSH 0xe43b2ccc
005fad7a  MOV dword ptr [ESP + 0xc],EAX
005fad7e  MOV dword ptr [ESP + 0x14],EDX
005fad82  CALL 0x00454810
005fad87  TEST EAX,EAX
005fad89  JNZ 0x005fad95
005fad8b  PUSH 0x4
005fad8d  CALL 0x006269b0
005fad92  ADD ESP,0x4
005fad95  MOV EAX,dword ptr [EAX]
005fad97  TEST EAX,EAX
005fad99  JZ 0x005fadd3
005fad9b  PUSH 0x0
005fad9d  PUSH 0x0
005fad9f  PUSH EAX
005fada0  LEA ECX,[ESP + 0x1c]
005fada4  CALL 0x005e2580
005fada9  LEA EAX,[ESP + 0x4]
005fadad  PUSH EAX
005fadae  LEA ECX,[ESP + 0x14]
005fadb2  PUSH ECX
005fadb3  MOV ECX,ESI
005fadb5  MOV dword ptr [ESP + 0x34],0x0
005fadbd  CALL 0x005dcca0
005fadc2  LEA ECX,[ESP + 0x10]
005fadc6  MOV dword ptr [ESP + 0x2c],0xffffffff
005fadce  CALL 0x0045a430
005fadd3  MOV EAX,dword ptr [ESP + 0x4]
005fadd7  MOV EDX,dword ptr [ESP + 0x34]
005faddb  MOV ECX,dword ptr [ESP + 0x8]
005faddf  MOV dword ptr [EDX],EAX
005fade1  MOV EAX,dword ptr [ESP + 0xc]
005fade5  MOV dword ptr [EDX + 0x4],ECX
005fade8  MOV ECX,dword ptr [ESP + 0x24]
005fadec  MOV dword ptr [EDX + 0x8],EAX
005fadef  POP ESI
005fadf0  MOV dword ptr FS:[0x0],ECX
005fadf7  ADD ESP,0x2c
005fadfa  RET 0x4

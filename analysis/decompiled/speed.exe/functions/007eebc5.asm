007eebc5  PUSH EBP
007eebc6  MOV EBP,ESP
007eebc8  PUSH ESI
007eebc9  MOV ESI,ECX
007eebcb  MOV EAX,dword ptr [ESI + 0x14]
007eebce  MOV EDX,dword ptr [ESI + 0x20]
007eebd1  MOV ECX,dword ptr [EAX + 0x4]
007eebd4  CMP EDX,dword ptr [ECX + 0x18]
007eebd7  PUSH EDI
007eebd8  MOV EDI,dword ptr [ESI + 0x24]
007eebdb  JNZ 0x007eebe2
007eebdd  CMP EDI,dword ptr [ECX + 0x1c]
007eebe0  JZ 0x007eec09
007eebe2  MOV ECX,dword ptr [EBP + 0x8]
007eebe5  MOV ECX,dword ptr [ECX + 0x80]
007eebeb  PUSH EBX
007eebec  MOV EBX,dword ptr [ECX]
007eebee  PUSH 0x0
007eebf0  PUSH 0x0
007eebf2  PUSH 0x0
007eebf4  PUSH EDI
007eebf5  PUSH EDX
007eebf6  PUSH dword ptr [EAX + 0x8]
007eebf9  CALL dword ptr [EBX + 0x1c]
007eebfc  MOV ECX,dword ptr [ESI + 0x14]
007eebff  MOV ECX,dword ptr [ECX + 0x4]
007eec02  MOV dword ptr [ECX + 0x18],EAX
007eec05  MOV dword ptr [ECX + 0x1c],EDX
007eec08  POP EBX
007eec09  MOV EAX,dword ptr [EBP + 0x8]
007eec0c  MOV EDX,dword ptr [ESI + 0x14]
007eec0f  MOV ECX,dword ptr [EAX + 0x80]
007eec15  MOV EAX,dword ptr [ECX]
007eec17  XOR EDI,EDI
007eec19  PUSH EDI
007eec1a  PUSH EDI
007eec1b  PUSH dword ptr [ESI + 0x28]
007eec1e  PUSH dword ptr [ESI + 0x30]
007eec21  PUSH dword ptr [EDX + 0x8]
007eec24  CALL dword ptr [EAX + 0x18]
007eec27  MOV dword ptr [ESI + 0x28],EAX
007eec2a  MOV EAX,dword ptr [ESI + 0x14]
007eec2d  MOV ECX,dword ptr [ESI + 0x28]
007eec30  MOV dword ptr [ESI + 0x2c],EDI
007eec33  MOV EAX,dword ptr [EAX + 0x4]
007eec36  ADD dword ptr [EAX + 0x18],ECX
007eec39  MOV ECX,dword ptr [ESI + 0x2c]
007eec3c  POP EDI
007eec3d  ADC dword ptr [EAX + 0x1c],ECX
007eec40  MOV byte ptr [ESI + 0x11],0x1
007eec44  POP ESI
007eec45  POP EBP
007eec46  RET 0x4

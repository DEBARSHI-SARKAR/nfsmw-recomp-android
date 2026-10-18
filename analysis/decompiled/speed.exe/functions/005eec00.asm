005eec00  PUSH ESI
005eec01  MOV ESI,ECX
005eec03  MOVZX EAX,byte ptr [ESI + 0x4c]
005eec07  ADD EAX,-0x2
005eec0a  CMP EAX,0x3
005eec0d  JA 0x005eec3e
005eec0f  JMP dword ptr [EAX*0x4 + 0x5eec40]
005eec16  MOV ECX,ESI
005eec18  POP ESI
005eec19  JMP 0x005eeb90
005eec1e  MOV ECX,dword ptr [ESI + 0x6c]
005eec21  MOV EAX,dword ptr [ECX]
005eec23  CALL dword ptr [EAX + 0x60]
005eec26  FCOMP float ptr [0x00890968]
005eec2c  FNSTSW AX
005eec2e  TEST AH,0x41
005eec31  JNZ 0x005eec3a
005eec33  MOV ECX,ESI
005eec35  CALL 0x005eeb90
005eec3a  MOV byte ptr [ESI + 0x4c],0x5
005eec3e  POP ESI
005eec3f  RET

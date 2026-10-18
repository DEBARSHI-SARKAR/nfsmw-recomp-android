005ee570  PUSH ESI
005ee571  MOV ESI,ECX
005ee573  CALL 0x005e6b90
005ee578  MOV dword ptr [ESI + 0x4],EAX
005ee57b  MOV byte ptr [EAX + 0x21],0x1
005ee57f  MOV EAX,dword ptr [ESI + 0x4]
005ee582  MOV dword ptr [EAX + 0x4],EAX
005ee585  MOV EAX,dword ptr [ESI + 0x4]
005ee588  MOV dword ptr [EAX],EAX
005ee58a  MOV EAX,dword ptr [ESI + 0x4]
005ee58d  MOV dword ptr [EAX + 0x8],EAX
005ee590  MOV dword ptr [ESI + 0x8],0x0
005ee597  MOV EAX,ESI
005ee599  POP ESI
005ee59a  RET 0x8

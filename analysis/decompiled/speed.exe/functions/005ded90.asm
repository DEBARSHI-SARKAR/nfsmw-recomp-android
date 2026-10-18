005ded90  MOV EDX,dword ptr [ESP + 0x4]
005ded94  MOV EAX,dword ptr [EDX]
005ded96  PUSH EBX
005ded97  PUSH ESI
005ded98  MOV ESI,dword ptr [EAX + 0x8]
005ded9b  MOV dword ptr [EDX],ESI
005ded9d  MOV ESI,dword ptr [EAX + 0x8]
005deda0  MOV BL,byte ptr [ESI + 0x15]
005deda3  TEST BL,BL
005deda5  JNZ 0x005dedaa
005deda7  MOV dword ptr [ESI + 0x4],EDX
005dedaa  MOV ESI,dword ptr [EDX + 0x4]
005dedad  MOV dword ptr [EAX + 0x4],ESI
005dedb0  MOV ECX,dword ptr [ECX + 0x4]
005dedb3  CMP EDX,dword ptr [ECX + 0x4]
005dedb6  JNZ 0x005dedc6
005dedb8  MOV dword ptr [ECX + 0x4],EAX
005dedbb  POP ESI
005dedbc  MOV dword ptr [EAX + 0x8],EDX
005dedbf  MOV dword ptr [EDX + 0x4],EAX
005dedc2  POP EBX
005dedc3  RET 0x4
005dedc6  MOV ECX,dword ptr [EDX + 0x4]
005dedc9  CMP EDX,dword ptr [ECX + 0x8]
005dedcc  JNZ 0x005deddc
005dedce  MOV dword ptr [ECX + 0x8],EAX
005dedd1  POP ESI
005dedd2  MOV dword ptr [EAX + 0x8],EDX
005dedd5  MOV dword ptr [EDX + 0x4],EAX
005dedd8  POP EBX
005dedd9  RET 0x4
005deddc  MOV dword ptr [ECX],EAX
005dedde  POP ESI
005deddf  MOV dword ptr [EAX + 0x8],EDX
005dede2  MOV dword ptr [EDX + 0x4],EAX
005dede5  POP EBX
005dede6  RET 0x4

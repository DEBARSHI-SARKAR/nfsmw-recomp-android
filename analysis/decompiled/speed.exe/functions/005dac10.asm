005dac10  MOV EAX,dword ptr [ECX + 0x24]
005dac13  MOV EDX,dword ptr [ECX + 0x20]
005dac16  MOV dword ptr [EAX + 0x20],EDX
005dac19  MOV EAX,dword ptr [ECX + 0x20]
005dac1c  MOV EDX,dword ptr [ECX + 0x24]
005dac1f  MOV dword ptr [EAX + 0x24],EDX
005dac22  CMP dword ptr [0x0091dfe4],ECX
005dac28  JNZ 0x005dac3c
005dac2a  MOV EAX,dword ptr [ECX + 0x24]
005dac2d  XOR EDX,EDX
005dac2f  CMP EAX,ECX
005dac31  SETZ DL
005dac34  DEC EDX
005dac35  AND EAX,EDX
005dac37  MOV [0x0091dfe4],EAX
005dac3c  CMP dword ptr [0x0091dfe8],ECX
005dac42  JNZ 0x005dac56
005dac44  MOV EAX,dword ptr [ECX + 0x24]
005dac47  XOR EDX,EDX
005dac49  CMP EAX,ECX
005dac4b  SETZ DL
005dac4e  DEC EDX
005dac4f  AND EAX,EDX
005dac51  MOV [0x0091dfe8],EAX
005dac56  CMP dword ptr [0x0091dfec],ECX
005dac5c  JNZ 0x005dac70
005dac5e  MOV EAX,dword ptr [ECX + 0x24]
005dac61  XOR EDX,EDX
005dac63  CMP EAX,ECX
005dac65  SETZ DL
005dac68  DEC EDX
005dac69  AND EAX,EDX
005dac6b  MOV [0x0091dfec],EAX
005dac70  CMP dword ptr [0x0091dff0],ECX
005dac76  JNZ 0x005dac8a
005dac78  MOV EAX,dword ptr [ECX + 0x24]
005dac7b  XOR EDX,EDX
005dac7d  CMP EAX,ECX
005dac7f  SETZ DL
005dac82  DEC EDX
005dac83  AND EAX,EDX
005dac85  MOV [0x0091dff0],EAX
005dac8a  CMP dword ptr [0x0091dff4],ECX
005dac90  JNZ 0x005daca4
005dac92  MOV EAX,dword ptr [ECX + 0x24]
005dac95  XOR EDX,EDX
005dac97  CMP EAX,ECX
005dac99  SETZ DL
005dac9c  DEC EDX
005dac9d  AND EAX,EDX
005dac9f  MOV [0x0091dff4],EAX
005daca4  CMP dword ptr [0x0091dff8],ECX
005dacaa  JNZ 0x005dacbe
005dacac  MOV EAX,dword ptr [ECX + 0x24]
005dacaf  XOR EDX,EDX
005dacb1  CMP EAX,ECX
005dacb3  SETZ DL
005dacb6  DEC EDX
005dacb7  AND EAX,EDX
005dacb9  MOV [0x0091dff8],EAX
005dacbe  XOR EAX,EAX
005dacc0  MOV dword ptr [ECX + 0x24],EAX
005dacc3  MOV dword ptr [ECX + 0x20],EAX
005dacc6  RET

007ee44b  MOV EAX,dword ptr [ECX]
007ee44d  TEST EAX,EAX
007ee44f  JZ 0x007ee476
007ee451  CMP EAX,dword ptr [ECX + 0x4]
007ee454  JNZ 0x007ee45f
007ee456  AND dword ptr [ECX + 0x4],0x0
007ee45a  AND dword ptr [ECX],0x0
007ee45d  JMP 0x007ee46f
007ee45f  MOV EDX,dword ptr [EAX + 0x8]
007ee462  TEST EDX,EDX
007ee464  JZ 0x007ee46b
007ee466  ADD EDX,-0x8
007ee469  JMP 0x007ee46d
007ee46b  XOR EDX,EDX
007ee46d  MOV dword ptr [ECX],EDX
007ee46f  DEC dword ptr [ECX + 0x8]
007ee472  AND dword ptr [EAX + 0x8],0x0
007ee476  RET

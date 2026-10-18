007efe53  MOV EAX,dword ptr [ECX]
007efe55  TEST EAX,EAX
007efe57  JZ 0x007efe68
007efe59  MOV EDX,dword ptr [EAX]
007efe5b  TEST EDX,EDX
007efe5d  JZ 0x007efe68
007efe5f  AND dword ptr [EAX],0x0
007efe62  TEST EDX,EDX
007efe64  MOV EAX,EDX
007efe66  JNZ 0x007efe59
007efe68  AND dword ptr [ECX + 0x4],0x0
007efe6c  AND dword ptr [ECX],0x0
007efe6f  AND dword ptr [ECX + 0x8],0x0
007efe73  RET

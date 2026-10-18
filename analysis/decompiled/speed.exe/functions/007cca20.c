/* speed.exe 007cca20 __ioinit; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000065 GetFileType
 * calls EXTERNAL:00000064 GetStdHandle
 * calls EXTERNAL:00000063 SetHandleCount
 * calls EXTERNAL:00000066 GetStartupInfoA
 * calls 007c6700 __malloc_dbg
 * calls 007ddc30 ___crtInitCritSecAndSpinCount
 */

/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2003 Debug */

int __cdecl __ioinit(void)

{
  int iVar1;
  DWORD DVar2;
  HANDLE hFile;
  undefined4 *puVar3;
  int *piVar4;
  DWORD local_74;
  UINT local_70;
  byte *local_6c;
  undefined4 *local_68;
  UINT *local_60;
  UINT local_5c;
  uint local_58;
  int local_50;
  _STARTUPINFOA local_4c;
  
  local_68 = (undefined4 *)__malloc_dbg(0x480,2,"ioinit.c",0x82);
  if (local_68 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    DAT_009c5320 = 0x20;
    DAT_009c5340 = local_68;
    for (; local_68 < DAT_009c5340 + 0x120; local_68 = local_68 + 9) {
      *(undefined1 *)(local_68 + 1) = 0;
      *local_68 = 0xffffffff;
      *(undefined1 *)((int)local_68 + 5) = 10;
      local_68[2] = 0;
    }
    GetStartupInfoA(&local_4c);
    if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
      local_70 = *(UINT *)local_4c.lpReserved2;
      local_60 = (UINT *)((int)local_4c.lpReserved2 + 4);
      local_6c = (byte *)((int)local_60 + local_70);
      if (0x7ff < (int)local_70) {
        local_70 = 0x800;
      }
      local_5c = local_70;
      local_50 = 1;
      while ((int)DAT_009c5320 < (int)local_70) {
        local_68 = (undefined4 *)__malloc_dbg(0x480,2,"ioinit.c",0xb7);
        if (local_68 == (undefined4 *)0x0) {
          local_5c = DAT_009c5320;
          break;
        }
        (&DAT_009c5340)[local_50] = local_68;
        DAT_009c5320 = DAT_009c5320 + 0x20;
        for (; local_68 < (undefined4 *)((int)(&DAT_009c5340)[local_50] + 0x480);
            local_68 = local_68 + 9) {
          *(undefined1 *)(local_68 + 1) = 0;
          *local_68 = 0xffffffff;
          *(undefined1 *)((int)local_68 + 5) = 10;
          local_68[2] = 0;
        }
        local_50 = local_50 + 1;
      }
      for (local_58 = 0; (int)local_58 < (int)local_5c; local_58 = local_58 + 1) {
        if (((*(int *)local_6c != -1) && ((*local_60 & 1) != 0)) &&
           (((*local_60 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)local_6c), DVar2 != 0)))) {
          puVar3 = (undefined4 *)
                   ((local_58 & 0x1f) * 0x24 + (int)(&DAT_009c5340)[(int)local_58 >> 5]);
          *puVar3 = *(undefined4 *)local_6c;
          *(byte *)(puVar3 + 1) = (byte)*local_60;
          iVar1 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
          if (iVar1 == 0) {
            return -1;
          }
          puVar3[2] = puVar3[2] + 1;
        }
        local_60 = (UINT *)((int)local_60 + 1);
        local_6c = local_6c + 4;
      }
    }
    for (local_58 = 0; (int)local_58 < 3; local_58 = local_58 + 1) {
      piVar4 = DAT_009c5340 + local_58 * 9;
      if (*piVar4 == -1) {
        *(undefined1 *)(piVar4 + 1) = 0x81;
        if (local_58 == 0) {
          local_74 = 0xfffffff6;
        }
        else {
          local_74 = 0xfffffff5 - (local_58 != 1);
        }
        hFile = GetStdHandle(local_74);
        if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
          *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) | 0x40;
        }
        else {
          *piVar4 = (int)hFile;
          if ((DVar2 & 0xff) == 2) {
            *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) | 0x40;
          }
          else if ((DVar2 & 0xff) == 3) {
            *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) | 8;
          }
          iVar1 = ___crtInitCritSecAndSpinCount(piVar4 + 3,4000);
          if (iVar1 == 0) {
            return -1;
          }
          piVar4[2] = piVar4[2] + 1;
        }
      }
      else {
        *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) | 0x80;
      }
    }
    SetHandleCount(DAT_009c5320);
    iVar1 = 0;
  }
  return iVar1;
}


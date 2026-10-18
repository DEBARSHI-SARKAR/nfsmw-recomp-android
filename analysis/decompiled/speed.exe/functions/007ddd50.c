/* speed.exe 007ddd50 __ValidateEH3RN; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls EXTERNAL:00000081 VirtualQuery
 */

/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2003 Debug */

undefined4 __ValidateEH3RN(uint param_1)

{
  uint uVar1;
  int iVar2;
  LONG LVar3;
  SIZE_T SVar4;
  int local_60;
  _MEMORY_BASIC_INFORMATION local_58;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  void *local_28;
  LPCVOID local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  short *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_24 = *(LPCVOID *)(param_1 + 8);
  if (((uint)local_24 & 3) != 0) {
    return 0;
  }
  local_28 = Self;
  if ((*(LPCVOID *)((int)Self + 8) <= local_24) && (local_24 < *(LPCVOID *)((int)Self + 4))) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 1;
  }
  local_20 = 0;
  for (local_c = 0; local_c <= *(uint *)(param_1 + 0xc); local_c = local_c + 1) {
    uVar1 = *(uint *)((int)local_24 + local_c * 0xc);
    if ((uVar1 != 0xffffffff) && (local_c <= uVar1)) {
      return 0;
    }
    if (*(int *)((int)local_24 + local_c * 0xc + 4) != 0) {
      local_20 = local_20 + 1;
    }
  }
  if ((local_20 != 0) &&
     ((*(uint *)(param_1 - 8) < *(uint *)((int)Self + 8) || (param_1 <= *(uint *)(param_1 - 8))))) {
    return 0;
  }
  local_38 = (uint)local_24 & 0xfffff000;
  local_34 = 0;
  while( true ) {
    if (DAT_009bae90 <= local_34) {
      SVar4 = VirtualQuery(local_24,&local_58,0x1c);
      if ((SVar4 == 0) || (local_58.Type != 0x1000000)) {
        return 0xffffffff;
      }
      if ((local_58.Protect & 0xcc) != 0) {
        local_14 = local_58.AllocationBase;
        if (*(short *)local_58.AllocationBase != 0x5a4d) {
          return 0xffffffff;
        }
        local_18 = (int *)((int)local_58.AllocationBase +
                          *(int *)((int)local_58.AllocationBase + 0x3c));
        if (*local_18 != 0x4550) {
          return 0xffffffff;
        }
        local_10 = local_18 + 6;
        if ((short)*local_10 != 0x10b) {
          return 0xffffffff;
        }
        local_8 = (int)local_24 - (int)local_58.AllocationBase;
        local_30 = 0;
        local_3c = (int)local_18 + *(ushort *)(local_18 + 5) + 0x18;
        if (*(short *)((int)local_18 + 6) == 0) {
          return 0xffffffff;
        }
        if (((*(uint *)(local_3c + 0xc) <= local_8) &&
            (local_8 < (uint)(*(int *)(local_3c + 0xc) + *(int *)(local_3c + 8)))) &&
           ((*(uint *)(local_3c + 0x24) & 0x80000000) != 0)) {
          return 0;
        }
      }
      LVar3 = InterlockedExchange((LONG *)&DAT_009baed8,1);
      if (LVar3 != 0) {
        return 1;
      }
      for (local_34 = DAT_009bae90;
          (0 < local_34 && (*(uint *)(&DAT_009bae94 + local_34 * 4) != local_38));
          local_34 = local_34 + -1) {
      }
      if (local_34 == 0) {
        if (DAT_009bae90 < 0x10) {
          local_60 = DAT_009bae90;
        }
        else {
          local_60 = 0xf;
        }
        local_34 = local_60;
        for (local_2c = 0; local_2c <= local_60; local_2c = local_2c + 1) {
          local_1c = *(uint *)(&DAT_009bae98 + local_2c * 4);
          *(uint *)(&DAT_009bae98 + local_2c * 4) = local_38;
          local_38 = local_1c;
        }
        if (DAT_009bae90 < 0x10) {
          DAT_009bae90 = DAT_009bae90 + 1;
        }
      }
      InterlockedExchange((LONG *)&DAT_009baed8,0);
      return 1;
    }
    if (*(uint *)(&DAT_009bae98 + local_34 * 4) == local_38) break;
    local_34 = local_34 + 1;
  }
  if ((0 < local_34) && (LVar3 = InterlockedExchange((LONG *)&DAT_009baed8,1), LVar3 == 0)) {
    iVar2 = DAT_009bae90;
    if (*(uint *)(&DAT_009bae98 + local_34 * 4) != local_38) {
      do {
        local_34 = iVar2 + -1;
        if (local_34 < 0) break;
        iVar2 = local_34;
      } while (*(uint *)(&DAT_009bae98 + local_34 * 4) != local_38);
      if (local_34 < 0) {
        if (DAT_009bae90 < 0x10) {
          DAT_009bae90 = DAT_009bae90 + 1;
        }
        local_34 = DAT_009bae90 + -1;
      }
      else if (local_34 == 0) {
        InterlockedExchange((LONG *)&DAT_009baed8,0);
        return 1;
      }
    }
    for (local_2c = 0; local_2c <= local_34; local_2c = local_2c + 1) {
      local_1c = *(uint *)(&DAT_009bae98 + local_2c * 4);
      *(uint *)(&DAT_009bae98 + local_2c * 4) = local_38;
      local_38 = local_1c;
    }
    InterlockedExchange((LONG *)&DAT_009baed8,0);
  }
  return 1;
}


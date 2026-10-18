/* speed.exe 00570660 FUN_00570660; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00549280 FUN_00549280
 * calls 007ba4a0 FUN_007ba4a0
 * calls 00545250 FUN_00545250
 * calls 007ba3f0 FUN_007ba3f0
 * calls 00549300 FUN_00549300
 * calls 00545e30 FUN_00545e30
 */

undefined4 FUN_00570660(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087168c;
  local_c = ExceptionList;
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
      if ((uVar1 >> 8 & 1) == 0) {
        if ((uVar1 >> 10 & 1) == 0) {
          if ((uVar1 >> 2 & 1) == 0) {
            ExceptionList = &local_c;
            pvVar2 = _malloc(0x14c);
            local_4 = 6;
            if (pvVar2 != (void *)0x0) {
              uVar3 = FUN_00545250(param_1);
              ExceptionList = local_c;
              return uVar3;
            }
          }
          else {
            ExceptionList = &local_c;
            pvVar2 = _malloc(0x148);
            local_4 = 5;
            if (pvVar2 != (void *)0x0) {
              uVar3 = FUN_007ba3f0(param_1);
              ExceptionList = local_c;
              return uVar3;
            }
          }
        }
        else {
          ExceptionList = &local_c;
          pvVar2 = _malloc(0x148);
          local_4 = 4;
          if (pvVar2 != (void *)0x0) {
            uVar3 = FUN_007ba4a0(param_1);
            ExceptionList = local_c;
            return uVar3;
          }
        }
      }
      else {
        ExceptionList = &local_c;
        pvVar2 = _malloc(0x148);
        local_4 = 3;
        if (pvVar2 != (void *)0x0) {
          uVar3 = FUN_00549300(param_1);
          ExceptionList = local_c;
          return uVar3;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      pvVar2 = _malloc(0x148);
      local_4 = 2;
      if (pvVar2 != (void *)0x0) {
        uVar3 = FUN_00549280(param_1);
        ExceptionList = local_c;
        return uVar3;
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24) == 7) {
    ExceptionList = &local_c;
    pvVar2 = _malloc(0x148);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00545e30(param_1);
      ExceptionList = local_c;
      return uVar3;
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar2 = _malloc(0x14c);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00545250(param_1);
      ExceptionList = local_c;
      return uVar3;
    }
  }
  ExceptionList = local_c;
  return 0;
}


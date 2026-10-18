/* speed.exe 00571bc0 FUN_00571bc0; analysis pseudocode, not buildable source.
 * calls 0054b5e0 FUN_0054b5e0
 * calls 00652ad0 _malloc
 * calls 0054af70 FUN_0054af70
 * calls 007ba4a0 FUN_007ba4a0
 * calls 00545250 FUN_00545250
 */

undefined4 FUN_00571bc0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871d10;
  local_c = ExceptionList;
  if (DAT_0091ca86 == '\0') {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 4 & 1) == 0) {
      if ((*(uint *)(DAT_0091cf90 + 300) >> 10 & 1) == 0) {
        ExceptionList = &local_c;
        pvVar1 = _malloc(0x150);
        local_4 = 3;
        if (pvVar1 != (void *)0x0) {
          uVar2 = FUN_0054af70(param_1);
          ExceptionList = local_c;
          return uVar2;
        }
      }
      else {
        ExceptionList = &local_c;
        pvVar1 = _malloc(0x148);
        local_4 = 2;
        if (pvVar1 != (void *)0x0) {
          uVar2 = FUN_007ba4a0(param_1);
          ExceptionList = local_c;
          return uVar2;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x14c);
      local_4 = 1;
      if (pvVar1 != (void *)0x0) {
        uVar2 = FUN_00545250(param_1);
        ExceptionList = local_c;
        return uVar2;
      }
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x14c);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0054b5e0(param_1);
      ExceptionList = local_c;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}


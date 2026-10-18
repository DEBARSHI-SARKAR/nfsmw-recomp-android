/* speed.exe 0077bba0 FUN_0077bba0; analysis pseudocode, not buildable source.
 * calls 007755a0 FUN_007755a0
 * calls 0076ec70 FUN_0076ec70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0077bba0(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float local_8;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    local_8 = 3.0;
    if (((_DAT_00890968 < param_4) &&
        (param_4 = param_4 * _DAT_008b5d50, local_8 = _DAT_008b5a90, param_4 < _DAT_008b5a90)) &&
       (local_8 = param_4, param_4 < _DAT_0089096c)) {
      local_8 = _DAT_0089096c;
    }
    if ((*(char *)(param_1 + 0x55) == '\0') || (*(int *)(param_1 + 8) == 0)) {
      FUN_007755a0(param_2,param_3);
    }
    else if (_DAT_00890968 < param_2) {
      fVar1 = local_8 * _DAT_008910c4;
      do {
        param_4 = fVar1;
        if (param_2 <= fVar1) {
          param_4 = param_2;
        }
        FUN_007755a0(param_4,param_3);
        FUN_0076ec70(local_8);
        param_2 = param_2 - param_4;
      } while (_DAT_00890968 < param_2);
      return;
    }
  }
  return;
}


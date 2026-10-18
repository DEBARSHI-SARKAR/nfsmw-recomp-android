/* speed.exe 00765b20 FUN_00765b20; analysis pseudocode, not buildable source.
 * calls 00764ad0 FUN_00764ad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00765b20(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00764ad0(param_2,&local_8);
  FUN_00764ad0(param_2 ^ 1,&local_10);
  if (param_2 == 0) {
    local_10 = local_10 * _DAT_00890da8;
    local_c = local_c * _DAT_00890da8;
    local_8 = local_8 * _DAT_00890da8;
    local_4 = local_4 * _DAT_00890da8;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  fVar2 = local_4 * local_c + local_8 * local_10;
  fVar1 = local_4 * local_10 - local_8 * local_c;
  if (_DAT_00890968 <= fVar2) {
    if (_DAT_008933d4 < fVar1) {
      return 0xffffffff;
    }
    if (_DAT_00891068 <= fVar1) {
      return 0;
    }
  }
  else {
    if ((param_3 != (undefined1 *)0x0) && (fVar2 < _DAT_00890dcc)) {
      *param_3 = 1;
    }
    if (_DAT_00890968 < fVar1) {
      return 0xffffffff;
    }
  }
  return 1;
}


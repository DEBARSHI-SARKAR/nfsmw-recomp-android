/* speed.exe 0061c3f0 FUN_0061c3f0; analysis pseudocode, not buildable source.
 * calls 006190f0 FUN_006190f0
 */

void FUN_0061c3f0(undefined4 param_1,code *param_2,undefined4 param_3,undefined *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined *local_14;
  byte *local_10;
  code *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  local_4 = param_4;
  if (param_4 == (undefined *)0x0) {
    local_4 = &DAT_008a3ed4;
  }
  local_c = param_2;
  local_8 = param_3;
  local_14 = (undefined *)0x0;
  local_10 = (byte *)0x0;
  pbVar1 = (byte *)(*param_2)(0,param_3,&param_4);
  if ((pbVar1 != (byte *)0x0) && (param_4 != (undefined *)0x0)) {
    local_14 = param_4 + -1;
    local_10 = pbVar1 + 1;
    if (*pbVar1 != 0xffffffff) {
      local_14 = param_4;
      uVar2 = (uint)*pbVar1;
      local_10 = pbVar1;
      goto LAB_0061c466;
    }
  }
  uVar2 = 0xffffffff;
LAB_0061c466:
  FUN_006190f0(param_1,&local_14,uVar2 == 0x1b);
  return;
}


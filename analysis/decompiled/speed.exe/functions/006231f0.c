/* speed.exe 006231f0 FUN_006231f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006231f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[3] = param_3;
  param_1[1] = 0x20;
  *param_1 = &PTR_LAB_008a6ff8;
  param_1[2] = param_2;
  param_1[4] = param_4;
  if (param_2 == 0) {
    DAT_009b0a74 = 0;
    return;
  }
  DAT_009b0a74 = 1;
  _DAT_00904b40 = param_1[4];
  _DAT_00904b3c = param_1[3];
  return;
}


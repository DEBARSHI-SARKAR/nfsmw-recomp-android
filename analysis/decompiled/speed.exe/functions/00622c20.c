/* speed.exe 00622c20 FUN_00622c20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00622c20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[2] = param_2;
  param_1[5] = param_5;
  param_1[1] = 0x20;
  *param_1 = &PTR_LAB_008a6f10;
  param_1[6] = param_6;
  DAT_009b0978 = param_2 != 0;
  if (param_1[2] != 0) {
    _DAT_00903548 = param_1[3];
    _DAT_009b097c = param_1[4];
    _DAT_009b0980 = param_1[5];
    _DAT_009b0984 = param_1[6];
  }
  return;
}


/* speed.exe 00527940 FUN_00527940; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00525940 FUN_00525940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00527940(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  DAT_0091cbb0 = param_1;
  DAT_0091cbb4 = param_2;
  DAT_0091cbbc = param_4;
  DAT_0091cbc0 = param_5;
  DAT_0091cbac = param_3;
  DAT_0091cbb8 = (char *)0x0;
  _DAT_0091cbd0 = param_6;
  _DAT_0091cbd4 = param_7;
  *(undefined1 *)(DAT_0091cb20 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  *(uint *)(DAT_0091cb20 + 0x50) = param_3 >> 0x11 & 1;
  DAT_0091cbb8 = "MC_Main.fng";
  if (DAT_00925e90 != 3) {
    DAT_0091cbb8 = "InGame_MC_Main.fng";
  }
  uVar1 = DAT_0091cbac & 0xf;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      FUN_00525940(DAT_0091cbb8,0,0,0);
      *(undefined1 *)(DAT_0091cb20 + 0x23) = 1;
      return;
    }
    if (uVar1 != 3) {
      *(undefined1 *)(DAT_0091cb20 + 0x23) = 1;
      return;
    }
  }
  FUN_005257f0(DAT_0091cbb8,0,0,0);
  *(undefined1 *)(DAT_0091cb20 + 0x23) = 1;
  return;
}


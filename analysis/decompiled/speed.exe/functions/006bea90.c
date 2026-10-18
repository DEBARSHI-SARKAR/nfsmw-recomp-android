/* speed.exe 006bea90 FUN_006bea90; analysis pseudocode, not buildable source.
 * calls 00465f70 FUN_00465f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bea90(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00982ac4 = FUN_00465f70();
  DAT_00982ad0 = 0;
  DAT_00982ad4 = 0;
  DAT_00982ad8 = 0;
  DAT_00982acc = param_1;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = &DAT_00986ed0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    return 1;
  }
  DAT_00986ed0 = 0x3f800000;
  DAT_00986ed4 = 0;
  _DAT_00986ed8 = 0;
  _DAT_00986edc = 0;
  _DAT_00986ee0 = 0;
  _DAT_00986ee4 = 0x3f800000;
  _DAT_00986ee8 = 0;
  _DAT_00986eec = 0;
  _DAT_00986ef0 = 0;
  _DAT_00986ef4 = 0;
  _DAT_00986ef8 = 0x3f800000;
  _DAT_00986efc = 0;
  _DAT_00986f00 = 0;
  _DAT_00986f04 = 0;
  _DAT_00986f08 = 0;
  _DAT_00986f0c = 0x3f800000;
  return 1;
}


/* speed.exe 006ef2c0 FUN_006ef2c0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 0047b3f0 FUN_0047b3f0
 */

undefined4 * __thiscall
FUN_006ef2c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_008b05ac;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  FUN_00444fe0(param_1 + 8,param_4);
  FUN_00444fe0(param_1 + 0x18,param_5);
  iVar1 = FUN_0047b3f0(param_2,param_3);
  if ((iVar1 != 0) && (DAT_008ee344 != 0)) {
    param_1[4] = *(undefined4 *)(DAT_008ee344 + 0x10);
  }
  return param_1;
}


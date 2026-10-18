/* speed.exe 0082adb0 FUN_0082adb0; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 0082a280 FUN_0082a280
 */

undefined4 * __thiscall FUN_0082adb0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0082a280();
  *param_1 = &PTR_FUN_008c5f30;
  param_1[6] = param_2;
  if (param_2 < 1) {
    param_1[6] = 1;
  }
  iVar1 = FUN_00829480(param_1[6] * 0x14);
  param_1[0x42] = iVar1;
  if (iVar1 == 0) {
    param_1[6] = 0;
  }
  iVar1 = 0;
  if (0 < (int)param_1[6]) {
    iVar2 = 0;
    do {
      *(undefined4 *)(param_1[0x42] + 8 + iVar2) = 0;
      *(undefined4 *)(iVar2 + param_1[0x42]) = 0;
      *(undefined4 *)(param_1[0x42] + 4 + iVar2) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < (int)param_1[6]);
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  return param_1;
}


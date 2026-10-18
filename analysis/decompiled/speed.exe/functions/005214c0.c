/* speed.exe 005214c0 FUN_005214c0; analysis pseudocode, not buildable source.
 * calls 005896f0 FUN_005896f0
 */

undefined4 * __thiscall FUN_005214c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005896f0(param_2);
  *param_1 = &PTR_FUN_0089c858;
  iVar1 = *(int *)(DAT_0091ca68 + 0x140);
  if (iVar1 == 0) {
    param_1[0x13] = 1;
    param_1[0x14] = 1;
    param_1[0x15] = 0x7bc;
    return param_1;
  }
  uVar2 = *(undefined4 *)(DAT_0091ca68 + 0x148);
  param_1[0x14] = *(undefined4 *)(DAT_0091ca68 + 0x144);
  param_1[0x13] = iVar1;
  param_1[0x15] = uVar2;
  return param_1;
}


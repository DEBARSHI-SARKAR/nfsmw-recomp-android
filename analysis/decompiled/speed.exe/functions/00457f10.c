/* speed.exe 00457f10 FUN_00457f10; analysis pseudocode, not buildable source.
 * calls 00454e70 FUN_00454e70
 * calls 00456480 FUN_00456480
 */

undefined4 * __thiscall FUN_00457f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[2] = param_3;
  *param_1 = param_2;
  param_1[1] = 1;
  iVar1 = *(int *)(DAT_0090dcbc + 4);
  FUN_00456480(param_2,param_1);
  if (0x20 < (*(uint *)(iVar1 + 0x14) & 0xfffffffe)) {
    FUN_00454e70(((*(int *)(iVar1 + 0xc) * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  return param_1;
}


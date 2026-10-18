/* speed.exe 007ed7df FUN_007ed7df; analysis pseudocode, not buildable source.
 * calls 007ed02f FUN_007ed02f
 * calls 007ed751 FUN_007ed751
 */

undefined4 * __thiscall
FUN_007ed7df(undefined4 *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_008c1fa4;
  if (*(int *)(param_4 + 4) == 0) {
    FUN_007ed751();
  }
  param_1[5] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x12) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[6] = param_3;
  param_1[7] = &DAT_007ed00f;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = FUN_007ed02f(param_4);
  param_1[3] = uVar1;
  return param_1;
}


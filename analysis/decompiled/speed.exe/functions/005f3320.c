/* speed.exe 005f3320 FUN_005f3320; analysis pseudocode, not buildable source.
 * calls 005f1b10 FUN_005f1b10
 * calls 004519d0 FUN_004519d0
 * calls 005ec3b0 FUN_005ec3b0
 */

undefined4 __thiscall FUN_005f3320(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = param_1;
  param_2 = FUN_004519d0(param_2);
  FUN_005ec3b0(&local_4,&param_2);
  if (local_4 != *(int *)(param_1 + 0x90)) {
    uVar1 = *(undefined4 *)(local_4 + 0x10);
    FUN_005f1b10(&param_2,local_4);
    return uVar1;
  }
  return 0;
}


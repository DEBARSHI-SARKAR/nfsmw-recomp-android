/* speed.exe 005d77c0 FUN_005d77c0; analysis pseudocode, not buildable source.
 * calls 005d35f0 FUN_005d35f0
 * calls 005d6960 FUN_005d6960
 */

void __thiscall FUN_005d77c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 3) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_005d35f0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 8;
    return;
  }
  FUN_005d6960(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}


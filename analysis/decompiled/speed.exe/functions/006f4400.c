/* speed.exe 006f4400 FUN_006f4400; analysis pseudocode, not buildable source.
 * calls 006f2540 FUN_006f2540
 */

void __thiscall FUN_006f4400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006f2540(param_2,param_1,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}


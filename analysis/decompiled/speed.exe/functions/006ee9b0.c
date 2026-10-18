/* speed.exe 006ee9b0 FUN_006ee9b0; analysis pseudocode, not buildable source.
 * calls 006ed0f0 FUN_006ed0f0
 */

void __thiscall
FUN_006ee9b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 8;
  }
  iVar1 = FUN_006ed0f0(param_2,param_3,iVar1,param_4,param_5);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return;
}


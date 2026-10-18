/* speed.exe 006bb9f0 FUN_006bb9f0; analysis pseudocode, not buildable source.
 * calls 006bb8f0 FUN_006bb8f0
 * calls 006b4df0 FUN_006b4df0
 */

void __thiscall FUN_006bb9f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_2;
  FUN_006b4df0(&param_2,param_2);
  if (param_2 == *(int *)(param_1 + 0x54)) {
    puVar2 = (undefined4 *)FUN_006bb8f0(iVar1);
    *puVar2 = 1;
    return;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


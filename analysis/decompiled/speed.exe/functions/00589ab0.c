/* speed.exe 00589ab0 FUN_00589ab0; analysis pseudocode, not buildable source.
 * calls 00575960 FUN_00575960
 */

void __thiscall FUN_00589ab0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar1 <= iVar2) {
    return;
  }
  param_2 = *(int *)(param_1 + 0x48) + param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_00575960();
    return;
  }
  if (iVar1 <= iVar2 + param_2) {
    param_2 = iVar1 - iVar2;
  }
  *(int *)(param_1 + 0x48) = param_2;
  FUN_00575960();
  return;
}


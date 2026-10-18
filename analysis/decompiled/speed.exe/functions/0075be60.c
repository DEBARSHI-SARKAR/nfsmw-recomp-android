/* speed.exe 0075be60 FUN_0075be60; analysis pseudocode, not buildable source.
 * calls 00759f00 FUN_00759f00
 */

void __thiscall FUN_0075be60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
  while ((param_2 <= iVar1 && (iVar1 = FUN_00759f00(0), iVar1 != 0))) {
    iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
  }
  return;
}


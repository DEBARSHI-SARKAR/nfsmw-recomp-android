/* speed.exe 00708430 FUN_00708430; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00708430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != *(int *)(param_1 + 0x60)) {
    do {
      if ((*(int **)(iVar2 + 4) != (int *)0x0) &&
         (iVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x30))(), iVar1 == param_2)) {
        return *(undefined4 *)(iVar2 + 4);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x60));
  }
  return 0;
}


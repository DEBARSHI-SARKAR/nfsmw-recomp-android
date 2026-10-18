/* speed.exe 006271e0 FUN_006271e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006271e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (0 < iVar1) {
    do {
      *(undefined4 *)(param_1[8] + iVar2 * 4) = *(undefined4 *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x14))();
    } while (iVar2 < iVar1);
  }
  return;
}


/* speed.exe 0042ad50 FUN_0042ad50; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_0042ad50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  DAT_0090d61c = param_1 + -0x7a4;
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  iVar1 = (**(code **)(*piVar2 + 4))();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x10))();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(iVar1 + 8) + 0x6c);
      }
    }
  }
  return;
}


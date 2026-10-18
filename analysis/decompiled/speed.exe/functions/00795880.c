/* speed.exe 00795880 FUN_00795880; analysis pseudocode, not buildable source.
 * calls 007956d0 FUN_007956d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00790750 FUN_00790750
 * calls 00794f80 FUN_00794f80
 */

int __fastcall FUN_00795880(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_00794f80();
  piVar1 = (int *)(param_1 + 8);
  *(undefined1 *)(iVar4 + 0x4c) = 1;
  iVar4 = -1;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar5 = FUN_007956d0(piVar2);
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = *(int *)*piVar1;
    piVar3 = (int *)((int *)*piVar1)[1];
    *piVar3 = iVar5;
    *(int **)(iVar5 + 4) = piVar3;
    if (piVar2 != (int *)0x0) {
      FUN_00790750();
      thunk_FUN_007c7250(piVar2);
    }
    piVar2 = (int *)*piVar1;
  }
  iVar5 = FUN_00794f80();
  *(undefined1 *)(iVar5 + 0x4c) = 0;
  return iVar4;
}


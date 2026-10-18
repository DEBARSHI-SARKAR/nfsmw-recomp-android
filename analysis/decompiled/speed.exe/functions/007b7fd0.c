/* speed.exe 007b7fd0 FUN_007b7fd0; analysis pseudocode, not buildable source.
 * calls 007b5870 FUN_007b5870
 */

void __fastcall FUN_007b7fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_007b5870(DAT_009ba080);
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x2d4);
  do {
    if ((iVar2 < *(int *)(param_1 + 0x2e0)) && (*piVar1 != 0)) {
      FUN_007b5870(*piVar1);
    }
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
    (&DAT_009b9e3c)[iVar2] = 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  return;
}


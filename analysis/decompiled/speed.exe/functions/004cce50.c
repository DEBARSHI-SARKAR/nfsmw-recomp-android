/* speed.exe 004cce50 FUN_004cce50; analysis pseudocode, not buildable source.
 * calls 004cc5d0 FUN_004cc5d0
 * calls 0045f2e0 FUN_0045f2e0
 * calls 004cc6b0 FUN_004cc6b0
 */

void __fastcall FUN_004cce50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x24);
  iVar3 = 0x12;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 1) {
        FUN_004cc5d0(piVar1,param_1);
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        FUN_004cc6b0();
        if (DAT_009120c4 != 0) {
          FUN_0045f2e0(iVar2);
        }
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


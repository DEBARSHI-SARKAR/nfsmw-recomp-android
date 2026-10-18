/* speed.exe 005db520 FUN_005db520; analysis pseudocode, not buildable source.
 * calls 004ff180 FUN_004ff180
 * calls 005094c0 FUN_005094c0
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_005db520(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 2;
  piVar3 = (int *)(param_1 + 0xb8);
  do {
    if (*piVar3 != 0) {
      FUN_004ff180();
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        FUN_005094c0();
        FUN_00463ca0(DAT_00916068,iVar1);
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}


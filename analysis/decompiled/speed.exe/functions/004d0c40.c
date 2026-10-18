/* speed.exe 004d0c40 FUN_004d0c40; analysis pseudocode, not buildable source.
 * calls 004cb770 FUN_004cb770
 * calls 004d0a60 FUN_004d0a60
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_004d0c40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)**(int **)(param_1 + 4);
  iVar4 = DAT_00912310;
  if (piVar5 != *(int **)(param_1 + 4)) {
    do {
      if ((piVar5[8] == 0) && (iVar1 = piVar5[10], iVar1 != 0)) {
        iVar2 = 0;
        if (0 < iVar4) {
          piVar3 = &DAT_00912860;
          do {
            if ((*(int *)(iVar1 + 8) == *piVar3) && (*(int *)(iVar1 + 0xc) == piVar3[1])) {
              if (iVar2 != -1) {
                FUN_004d0a60(iVar2);
                iVar4 = DAT_00912310;
              }
              break;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0x1a;
          } while (iVar2 < iVar4);
        }
      }
      if (piVar5[4] != 0) {
        FUN_004655f0(piVar5[4]);
        iVar4 = DAT_00912310;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 4));
  }
  FUN_004cb770();
  return;
}


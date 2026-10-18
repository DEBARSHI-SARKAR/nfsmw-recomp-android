/* speed.exe 004fb690 FUN_004fb690; analysis pseudocode, not buildable source.
 */

void FUN_004fb690(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = &DAT_00914b60;
  do {
    if ((*piVar1 != 0) && (iVar3 = 0, 0 < (short)piVar1[1])) {
      iVar2 = 0;
      do {
        if (*(int *)(*piVar1 + 8 + iVar2) == param_1) {
          *(undefined4 *)(*piVar1 + 8 + iVar2) = 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < (short)piVar1[1]);
    }
    piVar1 = piVar1 + 2;
  } while ((int)piVar1 < 0x915110);
  return;
}


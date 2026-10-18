/* speed.exe 004b6310 FUN_004b6310; analysis pseudocode, not buildable source.
 */

int FUN_004b6310(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_009121e8 == 1) {
    iVar2 = 1;
  }
  else if (DAT_009121e8 == 2) {
    iVar2 = 2;
  }
  else if (DAT_009121e8 == 3) {
    iVar2 = 3;
  }
  else {
    iVar2 = 0;
  }
  iVar1 = 0;
  piVar3 = &DAT_008ee7e8 + iVar2 * 0x2a;
  do {
    if (*piVar3 == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 < 0x15);
  return -1;
}


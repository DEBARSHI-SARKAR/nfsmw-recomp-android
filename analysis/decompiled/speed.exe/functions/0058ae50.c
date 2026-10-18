/* speed.exe 0058ae50 FUN_0058ae50; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0058ae50(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = 1;
  do {
    iVar4 = 0;
    iVar5 = 0x15;
    piVar2 = (int *)(param_1 + 8);
    do {
      if ((piVar2[-2] == iVar3) && (((piVar2[-1] == 0 || (iVar3 == 0xe)) && (*piVar2 == 1)))) {
        iVar4 = iVar4 + 1;
      }
      if (((piVar2[1] == iVar3) && ((piVar2[2] == 0 || (iVar3 == 0xe)))) && (piVar2[3] == 1)) {
        iVar4 = iVar4 + 1;
      }
      if (((piVar2[4] == iVar3) && ((piVar2[5] == 0 || (iVar3 == 0xe)))) && (piVar2[6] == 1)) {
        iVar4 = iVar4 + 1;
      }
      piVar2 = piVar2 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar1 = iVar1 + iVar4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return iVar1;
}


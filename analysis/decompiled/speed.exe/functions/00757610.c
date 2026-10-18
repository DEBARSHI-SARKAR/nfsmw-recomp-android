/* speed.exe 00757610 FUN_00757610; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

int FUN_00757610(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  if (0 < param_4) {
    do {
      piVar1 = *(int **)(param_3 + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && ((short)piVar1[3] == 0)) {
        if (*(char *)((int)piVar1 + 0xe) == '\x02') {
          *(int *)(param_1 + iVar5 * 4) = piVar1[2];
          iVar5 = iVar5 + 1;
        }
        piVar2 = (int *)piVar1[1];
        iVar3 = *piVar1;
        *piVar2 = iVar3;
        *(int **)(iVar3 + 4) = piVar2;
        FUN_00463ca0(DAT_009b0a08,piVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4);
  }
  return iVar5;
}


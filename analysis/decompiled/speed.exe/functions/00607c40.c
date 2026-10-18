/* speed.exe 00607c40 FUN_00607c40; analysis pseudocode, not buildable source.
 * calls 00607810 FUN_00607810
 */

int * FUN_00607c40(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00607810(param_1);
    do {
      if (*piVar2 == iVar1) {
        switch(*piVar2) {
        case 0:
switchD_00607c62_caseD_0:
          return piVar2 + 2;
        default:
          if (piVar2[1] == unaff_ESI[1]) goto switchD_00607c62_caseD_0;
          break;
        case 3:
          if ((float)piVar2[1] == (float)unaff_ESI[1]) goto switchD_00607c62_caseD_0;
        }
      }
      piVar2 = (int *)piVar2[4];
    } while (piVar2 != (int *)0x0);
  }
  return &DAT_008a3c5c;
}


/* speed.exe 00759ba0 FUN_00759ba0; analysis pseudocode, not buildable source.
 * calls 00757610 FUN_00757610
 * calls 00503360 FUN_00503360
 */

undefined4 FUN_00759ba0(int param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_15c [348];
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    piVar2 = (int *)(param_1 + 0x24);
    do {
      if (*piVar2 != 0) {
        psVar1 = (short *)(*piVar2 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00757610(local_15c,0x57,param_1 + 0x24,*(undefined4 *)(param_1 + 0x20));
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00503360(local_15c,iVar3);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 1;
}


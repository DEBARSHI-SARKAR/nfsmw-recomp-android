/* speed.exe 004195f0 FUN_004195f0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00403580 FUN_00403580
 * calls 005d59f0 FUN_005d59f0
 * calls 00454810 FUN_00454810
 */

undefined4 __fastcall FUN_004195f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 8))(), *(int *)(iVar1 + 0x1c) != 0)) &&
     (piVar2 = (int *)FUN_005d59f0(&LAB_004037e0), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x14))();
  }
  iVar3 = 0;
  iVar1 = FUN_00403580();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_00454810(0x3c6dbcb3,iVar3);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_006269b0(0xc);
      }
      if (*piVar2 == 2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00403580();
    } while (iVar3 < iVar1);
  }
  return 0;
}


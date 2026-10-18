/* speed.exe 00831f67 FUN_00831f67; analysis pseudocode, not buildable source.
 * calls 00832d6d FUN_00832d6d
 */

void FUN_00831f67(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    iVar3 = (&DAT_009c2aec)[param_1 * 4];
    if (iVar3 != 0) {
      FUN_00832d6d(iVar3);
      (&DAT_009c2aec)[param_1 * 4] = 0;
    }
    bVar2 = (&DAT_009c2ae7)[param_1 * 0x10];
    (&DAT_009c2ae6)[param_1 * 0x10] = 0;
    if (param_1 == (&DAT_009c2ac0)[bVar2]) {
      (&DAT_009c2ac0)[bVar2] = -1;
    }
    piVar1 = &DAT_009c2aa0 + bVar2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
  }
  return;
}


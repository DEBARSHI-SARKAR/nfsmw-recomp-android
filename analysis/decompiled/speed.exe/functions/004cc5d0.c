/* speed.exe 004cc5d0 FUN_004cc5d0; analysis pseudocode, not buildable source.
 * calls 004c0280 FUN_004c0280
 * calls 004cab80 FUN_004cab80
 */

void FUN_004cc5d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(*(int *)(param_2 + 0x1c) + 8);
  piVar1 = (int *)(&DAT_009123e4)[iVar2 * 0x5a];
  if (piVar1 != (int *)((&DAT_009123e4)[iVar2 * 0x5a] + (&DAT_009123ec)[iVar2 * 0x5a] * 8)) {
    while ((*piVar1 != param_1 || (piVar1[1] != param_2))) {
      piVar1 = piVar1 + 2;
      if (piVar1 == (int *)((&DAT_009123e4)[iVar2 * 0x5a] + (&DAT_009123ec)[iVar2 * 0x5a] * 8)) {
        FUN_004cab80();
        return;
      }
    }
    FUN_004c0280(piVar1,piVar1 + 2);
  }
  FUN_004cab80();
  return;
}


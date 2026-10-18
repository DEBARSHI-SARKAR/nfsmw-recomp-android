/* speed.exe 006dd1d0 FUN_006dd1d0; analysis pseudocode, not buildable source.
 * calls 006d99c0 FUN_006d99c0
 * calls 007e94f0 FUN_007e94f0
 */

void FUN_006dd1d0(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00926144 == 0) {
    piVar1 = (int *)*DAT_00982d1c;
    if (piVar1[6] != 0) {
      FUN_006d99c0(piVar1[6]);
      iVar2 = *piVar1;
      piVar1[6] = 0;
      piVar1 = (int *)piVar1[1];
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
    }
    DAT_00982d1c = (int *)0x0;
  }
  if (DAT_00982d18 != 0) {
    FUN_007e94f0(DAT_00982d18);
  }
  DAT_00982d18 = 0;
  return;
}


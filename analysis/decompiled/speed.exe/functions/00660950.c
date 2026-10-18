/* speed.exe 00660950 FUN_00660950; analysis pseudocode, not buildable source.
 * calls 00462520 FUN_00462520
 * calls 0065f9a0 FUN_0065f9a0
 */

void FUN_00660950(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_009258e0;
  if (DAT_009258cc == 0) {
    return;
  }
  if (DAT_009258e0 != (int *)0x0) {
    piVar1 = DAT_009258e0 + 3;
    if (0 < *DAT_009258e0 - DAT_009258e0[3]) {
      FUN_0065f9a0(DAT_009258e0 + 5,DAT_009258e0 + 0x46,*DAT_009258e0 - DAT_009258e0[3]);
      *piVar1 = *piVar2;
      piVar2[1] = 0;
    }
  }
  DAT_009258cc = 0;
  FUN_00462520();
  return;
}


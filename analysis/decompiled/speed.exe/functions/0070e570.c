/* speed.exe 0070e570 FUN_0070e570; analysis pseudocode, not buildable source.
 * calls 004b1ce0 FUN_004b1ce0
 * calls 004ccab0 FUN_004ccab0
 * calls 005d0370 FUN_005d0370
 */

void FUN_0070e570(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = &DAT_00993398;
  do {
    piVar3 = (int *)*piVar2;
    if ((piVar3 != (int *)0x0) && (piVar2[1] - (int)piVar3 >> 2 != 0)) {
      if (piVar3 != (int *)piVar2[1]) {
        do {
          iVar1 = *piVar3;
          if (iVar1 != 0) {
            FUN_004ccab0();
            FUN_004b1ce0(iVar1);
          }
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)piVar2[1]);
      }
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_005d0370(iVar1,(piVar2[2] - iVar1 >> 2) << 2,0);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
    }
    piVar2 = piVar2 + 5;
  } while ((int)piVar2 < 0x9933e8);
  if (DAT_00993c4c != 0) {
    FUN_005d0370(DAT_00993c4c,((DAT_00993c54 - DAT_00993c4c) / 0x2c) * 0x2c,0);
  }
  DAT_00993c4c = 0;
  DAT_00993c50 = 0;
  DAT_00993c54 = 0;
  return;
}


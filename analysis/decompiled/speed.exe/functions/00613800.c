/* speed.exe 00613800 FUN_00613800; analysis pseudocode, not buildable source.
 * calls 006133f0 FUN_006133f0
 * calls 00607630 FUN_00607630
 */

void FUN_00613800(void)

{
  int *piVar1;
  int unaff_EDI;
  undefined1 local_3c [60];
  
  piVar1 = *(int **)(unaff_EDI + 0x14);
  if ((piVar1[2] & 1U) == 0) {
    if ((piVar1[2] & 2U) != 0) {
      piVar1[3] = *(int *)piVar1[4];
    }
    FUN_00607630(local_3c,*(int *)(*(int *)(*(int *)(*piVar1 + -4) + 0xc) + 0x20) + 0x10,0x3c);
    FUN_006133f0();
  }
  return;
}


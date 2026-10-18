/* speed.exe 0060bea0 FUN_0060bea0; analysis pseudocode, not buildable source.
 * calls 0060bf20 FUN_0060bf20
 * calls 00607d40 FUN_00607d40
 * calls 006127a0 FUN_006127a0
 * calls 0060b630 FUN_0060b630
 */

undefined4 FUN_0060bea0(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  int *piVar2;
  int *unaff_EDI;
  
  if (*unaff_EDI == 5) {
    uVar1 = *(undefined4 *)(unaff_EDI[1] + 8);
LAB_0060bed1:
    piVar2 = (int *)FUN_00607d40(uVar1,*(undefined4 *)(*(int *)(unaff_EBX + 0x10) + 0x54));
    if (*piVar2 != 0) goto LAB_0060bef0;
  }
  else {
    if (*unaff_EDI == 7) {
      uVar1 = *(undefined4 *)(unaff_EDI[1] + 8);
      goto LAB_0060bed1;
    }
    piVar2 = &DAT_008a3c5c;
  }
  FUN_0060b630();
LAB_0060bef0:
  if (*piVar2 == 6) {
    FUN_006127a0();
    return *(undefined4 *)(unaff_EBX + 8);
  }
  uVar1 = FUN_0060bf20();
  return uVar1;
}


/* speed.exe 00608060 FUN_00608060; analysis pseudocode, not buildable source.
 * calls 00607e50 FUN_00607e50
 * calls 00607d40 FUN_00607d40
 * calls 00607520 FUN_00607520
 */

int * FUN_00608060(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte unaff_SI;
  int unaff_EDI;
  
  bVar1 = *(byte *)(unaff_EDI + 6);
  bVar2 = (byte)(1 << (unaff_SI & 0x1f));
  if ((bVar2 & bVar1) == 0) {
    piVar4 = (int *)FUN_00607d40();
    if (*piVar4 == 0) {
      *(byte *)(unaff_EDI + 6) = '\x01' << (unaff_SI & 0x1f) | bVar1;
      piVar4 = (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    if (unaff_EDI == param_2) {
      return piVar4;
    }
    if (((*(byte *)(param_2 + 6) & bVar2) == 0) && (iVar3 = FUN_00607e50(param_2), iVar3 != 0)) {
      iVar3 = FUN_00607520(piVar4,iVar3);
      return (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
  }
  return (int *)0x0;
}


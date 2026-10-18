/* speed.exe 0051d4b0 FUN_0051d4b0; analysis pseudocode, not buildable source.
 * calls 00628cb0 FUN_00628cb0
 * calls 00634370 FUN_00634370
 */

uint __fastcall FUN_0051d4b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  iVar5 = *(int *)(param_1 + 0xe4);
  FUN_00634370();
  iVar3 = 0;
  if ((*(int *)(param_1 + 0xe4) != 1) != 0xffffffee) {
    iVar5 = (-(uint)(iVar5 != 1) & 2) * 0xc;
    piVar4 = (int *)(param_1 + 0xf4);
    do {
      uVar1 = FUN_00628cb0(iVar3);
      iVar2 = 3;
      bVar8 = true;
      piVar6 = piVar4 + -3;
      piVar7 = (int *)(uVar1 + iVar5);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
LAB_0051d580:
        return uVar1 & 0xffffff00;
      }
      uVar1 = FUN_00628cb0(iVar3);
      iVar2 = 3;
      bVar8 = true;
      piVar6 = piVar4;
      piVar7 = (int *)(uVar1 + 0xc + iVar5);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (!bVar8) goto LAB_0051d580;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 6;
    } while (iVar3 < (int)((*(int *)(param_1 + 0xe4) != 1) + 0x12));
  }
  return (uint)(*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x84) == *(char *)(param_1 + 0x2b0));
}


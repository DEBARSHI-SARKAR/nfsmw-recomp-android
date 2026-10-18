/* speed.exe 0051ee90 FUN_0051ee90; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 00573140 FUN_00573140
 * calls 0045d3a0 FUN_0045d3a0
 */

void __fastcall FUN_0051ee90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0x48);
  if ((iVar4 < 1) || (iVar2 = FUN_0045d3a0(0), piVar1 = DAT_0091cadc, iVar2 < iVar4)) {
    if (*DAT_0091cadc != -0xd8) {
      for (iVar4 = *(int *)(*DAT_0091cadc + 0xe0); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        FUN_005b7780(0x58b123f7,0,iVar4,0xfffffffc,0);
      }
    }
  }
  else {
    uVar3 = FUN_00573140("POS%d",iVar4);
    if ((*piVar1 != -0xd8) && (iVar4 = *(int *)(*piVar1 + 0xe0), iVar4 != 0)) {
      do {
        FUN_005b7780(uVar3,0,iVar4,0xfffffffc,0);
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != 0);
      return;
    }
  }
  return;
}


/* speed.exe 005dc3e0 FUN_005dc3e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dc3e0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x4504);
  fVar1 = *(float *)(param_2 * 0x194 + 0x90 + param_1);
  iVar5 = 1;
  if (3 < iVar4 + -1) {
    iVar6 = (iVar4 - 5U >> 2) + 1;
    pfVar3 = (float *)(param_2 * 0x194 + param_1 + 0x98);
    iVar5 = iVar6 * 4 + 1;
    do {
      fVar2 = pfVar3[-1];
      if ((_DAT_00890968 < fVar2) && (fVar2 < fVar1)) {
        fVar1 = fVar2;
      }
      fVar2 = *pfVar3;
      if ((_DAT_00890968 < fVar2) && (fVar2 < fVar1)) {
        fVar1 = fVar2;
      }
      fVar2 = pfVar3[1];
      if ((_DAT_00890968 < fVar2) && (fVar2 < fVar1)) {
        fVar1 = fVar2;
      }
      fVar2 = pfVar3[2];
      if ((_DAT_00890968 < fVar2) && (fVar2 < fVar1)) {
        fVar1 = fVar2;
      }
      pfVar3 = pfVar3 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar5 < iVar4) {
    pfVar3 = (float *)(param_1 + 0x90 + (param_2 * 0x65 + iVar5) * 4);
    iVar4 = iVar4 - iVar5;
    do {
      fVar2 = *pfVar3;
      if ((_DAT_00890968 < fVar2) && (fVar2 < fVar1)) {
        fVar1 = fVar2;
      }
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


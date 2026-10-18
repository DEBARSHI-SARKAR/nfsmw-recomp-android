/* speed.exe 005af9c0 FUN_005af9c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005af9c0(int param_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  
  pfVar2 = *(float **)(param_1 + 0x78);
  uVar3 = 0;
  fVar1 = _DAT_00890968;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      pfVar2[1] = fVar1;
      fVar1 = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x60));
  }
  pfVar2 = *(float **)(param_1 + 0x7c);
  uVar3 = 0;
  fVar1 = _DAT_00890968;
  if (*(int *)(param_1 + 100) != 0) {
    do {
      pfVar2[1] = fVar1;
      fVar1 = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 100));
  }
  return;
}


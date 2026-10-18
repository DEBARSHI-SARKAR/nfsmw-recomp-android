/* speed.exe 007459f0 FUN_007459f0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 00744c00 FUN_00744c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007459f0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  
  fVar4 = _DAT_008f2260 * _DAT_008b2f54;
  if (DAT_009885c8 == 0) {
    cVar5 = FUN_00744c00();
    if ((cVar5 == '\0') &&
       (((*(uint *)(param_1 + 0x3cc) < *(uint *)(param_1 + 0x3c8) ||
         (*(uint *)(param_1 + 0x3cc) == 0)) || (fVar4 < *(float *)(param_1 + 0x3d0))))) {
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3dc) = 0;
      return;
    }
  }
  pfVar6 = (float *)FUN_00454810(0xa9633fde,0);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  fVar4 = *pfVar6 * _DAT_008aae90;
  pfVar6 = (float *)FUN_00454810(0x79356463,0);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  fVar3 = param_2 * *pfVar6 * _DAT_008aae90;
  fVar1 = *(float *)(param_3 + 0x44);
  if (fVar1 - fVar3 <= *(float *)(param_1 + 0x3dc)) {
    if (fVar3 + fVar1 < *(float *)(param_1 + 0x3dc)) {
      fVar1 = *(float *)(param_1 + 0x3dc) - fVar3;
    }
  }
  else {
    fVar1 = fVar3 + *(float *)(param_1 + 0x3dc);
  }
  *(float *)(param_1 + 0x3dc) = fVar1;
  fVar1 = -fVar4;
  fVar2 = *(float *)(param_1 + 0x3dc);
  if (fVar4 <= *(float *)(param_1 + 0x3dc)) {
    fVar2 = fVar4;
  }
  if (fVar2 < fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x3dc) = fVar2;
  fVar2 = *(float *)(param_3 + 0x48);
  if (fVar2 - fVar3 <= *(float *)(param_1 + 0x3e0)) {
    if (fVar3 + fVar2 < *(float *)(param_1 + 0x3e0)) {
      fVar2 = *(float *)(param_1 + 0x3e0) - fVar3;
    }
  }
  else {
    fVar2 = fVar3 + *(float *)(param_1 + 0x3e0);
  }
  *(float *)(param_1 + 0x3e0) = fVar2;
  fVar3 = *(float *)(param_1 + 0x3e0);
  if (fVar4 <= *(float *)(param_1 + 0x3e0)) {
    fVar3 = fVar4;
  }
  if (fVar3 < fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x3e0) = fVar3;
  return;
}


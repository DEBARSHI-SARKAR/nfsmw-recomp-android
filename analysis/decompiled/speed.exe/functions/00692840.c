/* speed.exe 00692840 FUN_00692840; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 00401d70 FUN_00401d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00692840(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  if (1 < iVar3) {
    iVar3 = *(int *)(param_1 + 0x14c);
    iVar4 = FUN_00452940();
    if (iVar4 == 0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    else {
      pfVar6 = (float *)(iVar3 + 0x34);
    }
    fVar1 = *pfVar6 * _DAT_00890958;
    if (_DAT_00890968 < fVar1) {
      iVar3 = *(int *)(param_1 + 0x14c);
      uVar5 = FUN_00452940();
      if (uVar5 < 2) {
        pfVar6 = (float *)FUN_006269b0(4);
      }
      else {
        pfVar6 = (float *)(iVar3 + 0x38);
      }
      fVar2 = *pfVar6 * _DAT_00890958;
      if ((_DAT_00890968 < fVar2) &&
         (fVar7 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 0x18))(), (float10)fVar1 < fVar7)
         ) {
        fVar7 = (float10)FUN_00401d70((float)((fVar7 - (float10)fVar1) / (float10)fVar2),0,
                                      0x3f800000);
        *(float *)(param_1 + 0x8c) =
             (float)(((float10)_DAT_0089096c - fVar7) * (float10)*(float *)(param_1 + 0x8c));
        return;
      }
    }
  }
  return;
}


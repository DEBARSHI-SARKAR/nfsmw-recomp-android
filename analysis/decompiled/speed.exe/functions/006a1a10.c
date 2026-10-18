/* speed.exe 006a1a10 FUN_006a1a10; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 0066c610 FUN_0066c610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006a1a10(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  iVar3 = FUN_00452940();
  if (iVar3 == 0) {
    fVar6 = (float10)_DAT_00890968;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
    iVar4 = FUN_00452940();
    if (iVar4 == 0) {
      pfVar5 = (float *)FUN_006269b0(4);
    }
    else {
      pfVar5 = (float *)(iVar1 + 0x34);
    }
    fVar2 = *pfVar5 * _DAT_00890958;
    fVar6 = (float10)FUN_0066c610(param_1 + 0xa0,param_1 + 0x8c,param_1 + 0xb4,
                                  *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x58),iVar3 + -1,0);
    if ((_DAT_00890968 < fVar2) && ((float10)fVar2 <= fVar6)) {
      return (float10)fVar2;
    }
  }
  return fVar6;
}


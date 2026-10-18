/* speed.exe 00692580 FUN_00692580; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 0066c610 FUN_0066c610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00692580(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  iVar4 = FUN_00452940();
  if (iVar4 == 0) {
    fVar8 = (float10)_DAT_00890968;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x100);
    iVar5 = FUN_00452940();
    if (iVar5 == 0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    else {
      pfVar6 = (float *)(iVar1 + 0x34);
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x58);
    fVar3 = *pfVar6 * _DAT_00890958;
    uVar7 = (**(code **)(**(int **)(param_1 + -4) + 0xcc))();
    fVar8 = (float10)FUN_0066c610(param_1 + 0x10c,param_1 + 0xf8,param_1 + 0x120,uVar2,iVar4 + -1,
                                  uVar7);
    if ((_DAT_00890968 < fVar3) && ((float10)fVar3 <= fVar8)) {
      return (float10)fVar3;
    }
  }
  return fVar8;
}


/* speed.exe 00412f30 FUN_00412f30; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00412f30(int param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0xa0))();
  if (piVar5 != (int *)0x0) {
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x38))();
    iVar7 = (**(code **)(**(int **)(param_1 + 0x4c) + 100))();
    if (*(int *)(iVar7 + 0x1c) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_005d59f0(&LAB_004037e0);
    }
    iVar7 = (**(code **)(*piVar5 + 0x10))();
    if (iVar7 != 0) {
      fVar2 = *(float *)(*(int *)(iVar7 + 8) + 0xc0);
      FUN_006ed200();
      iVar7 = FUN_00627320();
      fVar2 = fVar2 * _DAT_00890864 + fVar2 * _DAT_0089107c * (float)iVar7 * _DAT_00890980;
      fVar4 = *(float *)(param_1 + 0x70) + _DAT_00890f14;
      bVar3 = _DAT_0089096c <= fVar4;
      *(float *)(param_1 + 0x70) = fVar4;
      if (bVar3) {
        *(float *)(param_1 + 0x70) = fVar4 - _DAT_0089096c;
      }
      fVar8 = (float10)*(float *)(param_1 + 0x70) * (float10)_DAT_00890510;
      pfVar1 = (float *)(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x78) = 0;
      fVar9 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      *pfVar1 = (float)(fVar9 * (float10)fVar2 - fVar8 * (float10)0.0);
      *(float *)(param_1 + 0x7c) = (float)(fVar8 * (float10)fVar2 + fVar9 * (float10)0.0);
      *pfVar1 = *pfVar6 + *pfVar1;
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + pfVar6[1];
      *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + pfVar6[2];
      (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(pfVar1);
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + _DAT_00890da4;
    }
  }
  return;
}


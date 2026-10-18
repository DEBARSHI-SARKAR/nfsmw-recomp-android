/* speed.exe 00470a60 FUN_00470a60; analysis pseudocode, not buildable source.
 * calls 00467420 FUN_00467420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00470a60(int param_1,undefined4 param_2,float param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int *piVar11;
  float *pfVar12;
  undefined4 *puVar13;
  
  if ((_DAT_00890968 < param_3) &&
     (puVar13 = DAT_0092ce9c, DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4)) {
    do {
      piVar1 = (int *)*puVar13;
      cVar10 = (**(code **)(*piVar1 + 0x88))();
      if ((cVar10 != '\0') &&
         (piVar11 = (int *)(**(code **)(*piVar1 + 0x44))(), *piVar11 == DAT_0092c4f4)) {
        pfVar12 = (float *)(**(code **)(*piVar1 + 0xc))();
        uVar9 = DAT_008edf5c;
        uVar8 = _DAT_008edf58;
        uVar7 = _DAT_008edf54;
        iVar2 = *(int *)(param_1 + 0x1c);
        fVar3 = pfVar12[2] - *(float *)(iVar2 + 0x40);
        fVar4 = -*pfVar12 - *(float *)(iVar2 + 0x44);
        fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        if (fVar3 < _DAT_008945c8) {
          fVar3 = (_DAT_0089096c - fVar3 * _DAT_008916cc) * param_3;
          fVar4 = _DAT_008edf60 * fVar3;
          fVar5 = _DAT_008edf64 * fVar3;
          fVar6 = _DAT_008edf68 * fVar3;
          fVar3 = fVar3 * _DAT_008edf6c;
          *(undefined4 *)(iVar2 + 0x70) = DAT_008edf50;
          *(undefined4 *)(iVar2 + 0x7c) = uVar9;
          *(undefined4 *)(iVar2 + 0x74) = uVar7;
          *(undefined4 *)(iVar2 + 0x78) = uVar8;
          iVar2 = *(int *)(param_1 + 0x1c);
          *(float *)(iVar2 + 0x80) = fVar4;
          *(float *)(iVar2 + 0x84) = fVar5;
          *(float *)(iVar2 + 0x88) = fVar6;
          *(float *)(iVar2 + 0x8c) = fVar3;
          iVar2 = DAT_00925b14;
          if (param_4 != '\0') {
            iVar2 = DAT_00925ae8;
          }
          FUN_00467420(param_2,(float)iVar2 * _DAT_00890984,0x3f800000);
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != DAT_0092ce9c + DAT_0092cea4);
  }
  return;
}


/* speed.exe 00410f90 FUN_00410f90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00410f90(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *unaff_EBX;
  undefined4 *puVar8;
  float10 fVar9;
  
  puVar7 = DAT_0092cd24;
  puVar8 = DAT_0092cd1c;
  if (DAT_0092cd1c != DAT_0092cd1c + (int)DAT_0092cd24) {
    do {
      piVar4 = (int *)*puVar8;
      iVar3 = (**(code **)(*piVar4 + 0x38))();
      if (((iVar3 == 1) && (piVar4 = (int *)(**(code **)(*piVar4 + 4))(), piVar4 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x54))(), iVar3 != 0)) {
        piVar5 = (int *)(**(code **)(*piVar4 + 0x54))();
        fVar9 = (float10)(**(code **)(*piVar5 + 0x14))();
        fVar1 = (float)(fVar9 + (float10)param_1 + (float10)_DAT_00890d3c);
        piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
        pfVar6 = (float *)(**(code **)(*piVar4 + 0x20))();
        fVar2 = (unaff_EBX[2] - pfVar6[2]) * (unaff_EBX[2] - pfVar6[2]) +
                (unaff_EBX[1] - pfVar6[1]) * (unaff_EBX[1] - pfVar6[1]) +
                (*unaff_EBX - *pfVar6) * (*unaff_EBX - *pfVar6);
        fVar1 = fVar1 * fVar1;
        if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
          return CONCAT31((int3)(CONCAT22((short)((uint)pfVar6 >> 0x10),
                                          (ushort)(fVar1 < fVar2) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                          (ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
        }
      }
      puVar8 = puVar8 + 1;
      puVar7 = DAT_0092cd1c;
    } while (puVar8 != DAT_0092cd1c + (int)DAT_0092cd24);
  }
  return (uint)puVar7 & 0xffffff00;
}


/* speed.exe 00784170 FUN_00784170; analysis pseudocode, not buildable source.
 * calls 0077a740 FUN_0077a740
 * calls 00783490 FUN_00783490
 * calls 00782150 FUN_00782150
 */

void FUN_00784170(float *param_1,undefined4 param_2,float *param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  pfVar6 = param_3;
  pfVar5 = param_1;
  iVar4 = DAT_009b38a8;
  piVar9 = (int *)param_1[1];
  if (piVar9 != piVar9 + (int)param_1[3]) {
    do {
      if (*(int *)(*(int *)(iVar4 + 0x20) + *piVar9 * 4) != 0) {
        puVar7 = (uint *)FUN_0077a740();
        while (puVar7 != (uint *)0x0) {
          param_1 = (float *)*puVar7;
          if ((ushort)((uint)param_1 >> 0x10) < 0xa8c) {
            if (param_1 < 0x8000) {
              iVar1 = *(int *)(DAT_009b38a0 + ((uint)param_1 >> 0x10) * 4);
              if (iVar1 == 0) goto LAB_0078425d;
              param_1 = (float *)(((uint)param_1 & 0xffff) * 0x70 + *(int *)(iVar1 + 0x10));
            }
            else {
              puVar8 = (undefined4 *)FUN_00783490(&param_1);
              param_1 = (float *)*puVar8;
            }
          }
          else {
LAB_0078425d:
            param_1 = (float *)0x0;
          }
          if (((param_1 != (float *)0x0) &&
              (fVar2 = param_1[2] - pfVar6[2], fVar3 = *param_1 - *pfVar6,
              fVar2 * fVar2 + fVar3 * fVar3 < (param_4 + param_1[3]) * (param_4 + param_1[3]))) &&
             (*(char *)(param_1 + 8) == '\0')) {
            FUN_00782150(&param_1);
          }
          puVar7 = (uint *)FUN_0077a740();
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != (int *)((int)pfVar5[1] + (int)pfVar5[3] * 4));
  }
  return;
}


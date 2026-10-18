/* speed.exe 00419fc0 FUN_00419fc0; analysis pseudocode, not buildable source.
 * calls 00401930 FUN_00401930
 * calls 0040b0d0 FUN_0040b0d0
 * calls 00727480 FUN_00727480
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall
FUN_00419fc0(int param_1,float *param_2,char param_3,int param_4,int param_5,char param_6)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  FUN_0040b0d0(local_c);
  local_14 = (local_4 - param_2[2]) * (local_4 - param_2[2]) +
             (local_c[0] - *param_2) * (local_c[0] - *param_2);
  fVar10 = (float10)FUN_005c5e80(local_14);
  if (param_6 != '\0') {
    if (fVar10 < (float10)*(float *)(param_1 + 4)) {
      return 0;
    }
    if ((float10)*(float *)(param_1 + 8) < fVar10) {
      return 0;
    }
  }
  local_14 = param_2[2];
  local_10 = -*param_2;
  iVar4 = FUN_00727480(&local_14,0xd,0);
  if (iVar4 != 0) {
    return 0;
  }
  puVar8 = DAT_0092cd1c;
  if (DAT_0092cd1c != DAT_0092cd1c + DAT_0092cd24) {
    do {
      piVar2 = (int *)*puVar8;
      cVar3 = (**(code **)(*piVar2 + 0x88))();
      if (cVar3 != '\0') {
        piVar5 = (int *)(**(code **)(*piVar2 + 4))();
        piVar6 = (int *)(**(code **)(*piVar2 + 0xac))();
        if (((piVar5 != (int *)0x0) && (piVar6 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*piVar6 + 0x48))(), iVar4 != 0)) {
          piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
          uVar7 = (**(code **)(*piVar5 + 0x20))();
          fVar10 = (float10)FUN_00401930(param_2,uVar7);
          fVar1 = (float)fVar10;
          if ((param_3 == '\0') || (*(int *)(iVar4 + 0x78) != 1)) {
            bVar9 = fVar1 < _DAT_00891064 |
                    (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_00891064)) << 10) >> 8);
          }
          else {
            cVar3 = (**(code **)(*piVar2 + 0x7c))();
            if ((cVar3 == '\0') &&
               (((*(char *)(iVar4 + 0x2c1) != param_4 && (*(char *)(iVar4 + 0x2c3) != param_4)) ||
                (*(char *)(iVar4 + 0x8c) != param_5)))) {
              bVar9 = fVar1 < _DAT_00890dc0 |
                      (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_00890dc0)) << 10) >> 8);
            }
            else {
              bVar9 = fVar1 < _DAT_008911a0 |
                      (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_008911a0)) << 10) >> 8);
            }
          }
          if ((POPCOUNT(bVar9) & 1U) != 0) {
            return 0;
          }
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != DAT_0092cd1c + DAT_0092cd24);
  }
  return 1;
}


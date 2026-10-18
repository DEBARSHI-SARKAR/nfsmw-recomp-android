/* speed.exe 00464510 FUN_00464510; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls 007c66a0 __allshr
 * calls 007ec1bd FUN_007ec1bd
 * calls 00463da0 FUN_00463da0
 */

void __thiscall FUN_00464510(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  LARGE_INTEGER local_c;
  int local_4;
  
  if (param_3 != 0) {
    local_4 = param_1 + 0x44;
    local_c.s.LowPart = param_1;
    FUN_007ec1bd();
    param_2[2] = param_3;
    param_2[3] = 0x44443333;
    for (piVar7 = *(int **)(param_1 + 4); (piVar7 != (int *)(param_1 + 4) && (piVar7 <= param_2));
        piVar7 = (int *)*piVar7) {
    }
    puVar1 = (undefined4 *)piVar7[1];
    *puVar1 = param_2;
    piVar7[1] = (int)param_2;
    param_2[1] = (int)puVar1;
    piVar6 = (int *)(param_2[2] + (int)param_2);
    *param_2 = (int)piVar7;
    if (piVar6 == piVar7) {
      param_2[2] = piVar7[2] + param_2[2];
      iVar3 = *piVar7;
      piVar6 = piVar7 + 4;
      piVar7 = (int *)piVar7[1];
      *piVar7 = iVar3;
      *(int **)(iVar3 + 4) = piVar7;
      param_1 = local_c.s.LowPart;
    }
    piVar7 = (int *)param_2[1];
    piVar5 = param_2;
    piVar8 = param_2 + 4;
    if ((int *)(piVar7[2] + (int)piVar7) == param_2) {
      piVar7[2] = param_2[2] + piVar7[2];
      iVar3 = *param_2;
      piVar5 = (int *)param_2[1];
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
      piVar5 = piVar7;
      piVar8 = param_2;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      if (DAT_0090e670 == 0) {
        iVar3 = -0x11111112;
      }
      else {
        QueryPerformanceCounter(&local_c);
        uVar2 = __allshr();
        iVar3 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
      }
      piVar7 = piVar8;
      for (uVar4 = (uint)((int)piVar6 - (int)piVar8) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar7 = iVar3;
        piVar7 = piVar7 + 1;
      }
      for (uVar4 = (int)piVar6 - (int)piVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar7 = (char)iVar3;
        piVar7 = (int *)((int)piVar7 + 1);
      }
    }
    if (DAT_008ed3a8 != 0) {
      piVar7 = *(int **)(param_1 + 0x14);
      if (piVar7 != (int *)(param_1 + 0x14)) {
        while (((int *)piVar7[2] != piVar5 || (piVar7[3] != piVar5[2]))) {
          piVar7 = (int *)*piVar7;
          if (piVar7 == (int *)(param_1 + 0x14)) {
            FUN_007ec1c8();
            return;
          }
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - piVar7[3];
        iVar3 = *piVar5;
        piVar6 = (int *)piVar5[1];
        *piVar6 = iVar3;
        *(int **)(iVar3 + 4) = piVar6;
        piVar6 = (int *)piVar7[1];
        iVar3 = *piVar7;
        *piVar6 = iVar3;
        *(int **)(iVar3 + 4) = piVar6;
        FUN_00463da0();
        FUN_007c7250(piVar7);
      }
    }
    FUN_007ec1c8();
  }
  return;
}


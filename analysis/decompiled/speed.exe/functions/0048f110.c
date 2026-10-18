/* speed.exe 0048f110 FUN_0048f110; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0048f110(int *param_1,float *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_c;
  
  uVar6 = param_1[1];
  puVar8 = &DAT_00911890;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  local_c = 0;
  if (0 < *param_1) {
    iVar3 = 8 - (int)param_2;
    do {
      piVar1 = *(int **)((int)param_1 + iVar3 + (int)param_2);
      fVar2 = *param_2;
      piVar7 = piVar1 + 1;
      piVar1 = piVar7 + *piVar1 * 2;
      iVar4 = (int)piVar1 + (7 - (int)piVar7);
      if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) {
        do {
          iVar4 = *piVar7;
          if (*(char *)((int)&DAT_00911890 + iVar4) == '\0') {
            *(float *)(param_3 + iVar4 * 4) = fVar2 * (float)piVar7[1];
            *(undefined1 *)((int)&DAT_00911890 + iVar4) = 1;
          }
          else {
            *(float *)(param_3 + iVar4 * 4) =
                 fVar2 * (float)piVar7[1] + *(float *)(param_3 + iVar4 * 4);
          }
          iVar4 = piVar7[2];
          if (*(char *)((int)&DAT_00911890 + iVar4) == '\0') {
            *(float *)(param_3 + iVar4 * 4) = fVar2 * (float)piVar7[3];
            *(undefined1 *)((int)&DAT_00911890 + iVar4) = 1;
          }
          else {
            *(float *)(param_3 + iVar4 * 4) =
                 fVar2 * (float)piVar7[3] + *(float *)(param_3 + iVar4 * 4);
          }
          iVar4 = piVar7[4];
          if (*(char *)((int)&DAT_00911890 + iVar4) == '\0') {
            *(float *)(param_3 + iVar4 * 4) = fVar2 * (float)piVar7[5];
            *(undefined1 *)((int)&DAT_00911890 + iVar4) = 1;
          }
          else {
            *(float *)(param_3 + iVar4 * 4) =
                 fVar2 * (float)piVar7[5] + *(float *)(param_3 + iVar4 * 4);
          }
          iVar4 = piVar7[6];
          if (*(char *)((int)&DAT_00911890 + iVar4) == '\0') {
            *(float *)(param_3 + iVar4 * 4) = fVar2 * (float)piVar7[7];
            *(undefined1 *)((int)&DAT_00911890 + iVar4) = 1;
          }
          else {
            *(float *)(param_3 + iVar4 * 4) =
                 fVar2 * (float)piVar7[7] + *(float *)(param_3 + iVar4 * 4);
          }
          piVar7 = piVar7 + 8;
        } while ((int)piVar7 < (int)(piVar1 + -6));
      }
      for (; piVar7 < piVar1; piVar7 = piVar7 + 2) {
        iVar4 = *piVar7;
        if (*(char *)((int)&DAT_00911890 + iVar4) == '\0') {
          *(float *)(param_3 + iVar4 * 4) = fVar2 * (float)piVar7[1];
          *(undefined1 *)((int)&DAT_00911890 + iVar4) = 1;
        }
        else {
          *(float *)(param_3 + iVar4 * 4) =
               fVar2 * (float)piVar7[1] + *(float *)(param_3 + iVar4 * 4);
        }
      }
      local_c = local_c + 1;
      param_2 = param_2 + 1;
    } while (local_c < *param_1);
  }
  return;
}


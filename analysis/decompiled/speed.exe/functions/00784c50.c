/* speed.exe 00784c50 FUN_00784c50; analysis pseudocode, not buildable source.
 * calls 0077f670 FUN_0077f670
 * calls 0077a740 FUN_0077a740
 * calls 007736e0 FUN_007736e0
 * calls 00772920 FUN_00772920
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 */

void __thiscall FUN_00784c50(int param_1,float *param_2,float param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined **local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  float local_2c;
  int *local_28;
  float local_24;
  int local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_3c = &PTR_FUN_00891594;
  local_4 = 0;
  FUN_0041b250(0x40);
  pfVar6 = param_2;
  iVar5 = DAT_009b38a8;
  local_2c = *param_2 - param_3;
  local_24 = param_2[2] - param_3;
  local_18 = 0;
  local_28 = (int *)0x0;
  local_1c = param_3 + *param_2;
  local_14 = param_3 + param_2[2];
  FUN_007736e0(&local_2c,&local_3c);
  uVar7 = param_4;
  piVar9 = local_38;
  if (local_38 != local_38 + local_30) {
    do {
      piVar1 = *(int **)(*(int *)(iVar5 + 0x20) + *piVar9 * 4);
      if (piVar1 != (int *)0x0) {
        local_24 = (float)(uint)*(byte *)((int)piVar1 + 9);
        local_2c = 1.4013e-45;
        local_20 = 0;
        local_1c = (float)((uint)local_1c & 0xffff0000);
        local_18 = 0;
        if (local_24 != 0.0) {
          local_20 = *(ushort *)((int)piVar1 + 0xe) + 0x14 + (int)piVar1;
          local_1c = (float)CONCAT31(local_1c._1_3_,1);
        }
        if (*piVar1 != 0) {
          local_18 = **(undefined4 **)(*piVar1 + 4);
          local_1c = (float)CONCAT31(local_1c._1_3_,1);
        }
        local_28 = piVar1;
        puVar10 = (undefined4 *)FUN_0077a740();
        pfVar8 = param_2;
        while (param_2 = pfVar8, puVar10 != (undefined4 *)0x0) {
          param_2 = (float *)*puVar10;
          if ((*(short *)(param_2 + 7) != *(short *)(param_1 + 0xc)) &&
             (*(short *)(param_2 + 7) = *(short *)(param_1 + 0xc), fVar3 = *pfVar6 - param_2[0xc],
             fVar4 = pfVar6[2] - param_2[0xe],
             fVar3 * fVar3 + fVar4 * fVar4 < (param_3 + param_2[0xf]) * (param_3 + param_2[0xf]))) {
            iVar2 = *(int *)(uVar7 + 4);
            if ((iVar2 == 0) ||
               ((uint)(*(int *)(uVar7 + 0xc) - iVar2 >> 2) <=
                (uint)(*(int *)(uVar7 + 8) - iVar2 >> 2))) {
              FUN_0077f670(*(undefined4 *)(uVar7 + 8),1,&param_2);
              pfVar8 = param_2;
            }
            else {
              iVar2 = *(int *)(uVar7 + 8);
              param_4 = param_4 & 0xffffff00;
              FUN_00772920(iVar2,1,&param_2,uVar7,param_4);
              *(int *)(uVar7 + 8) = iVar2 + 4;
              pfVar8 = param_2;
            }
          }
          param_2 = pfVar8;
          puVar10 = (undefined4 *)FUN_0077a740();
          pfVar8 = param_2;
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != local_38 + local_30);
  }
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return;
}


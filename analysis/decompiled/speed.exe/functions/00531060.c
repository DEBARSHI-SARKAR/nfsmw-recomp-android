/* speed.exe 00531060 FUN_00531060; analysis pseudocode, not buildable source.
 * calls 0052f500 FUN_0052f500
 * calls 0045ded0 FUN_0045ded0
 * calls 00652ad0 _malloc
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 00530df0 FUN_00530df0
 * calls 005d59f0 FUN_005d59f0
 * calls 00516af0 FUN_00516af0
 * calls 00579840 FUN_00579840
 * calls 0052f660 FUN_0052f660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00531060(int param_1)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0086f5f8;
  local_14 = ExceptionList;
  iVar9 = 0;
  local_3c = 0;
  puVar10 = DAT_0092ce9c;
  ExceptionList = &local_14;
  if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
    do {
      cVar2 = (**(code **)(*(int *)*puVar10 + 0x88))();
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
        uVar5 = (**(code **)(*(int *)*puVar10 + 4))();
        FUN_00579840(&fStack_30,&uStack_20,uVar5);
        fStack_24 = fStack_2c;
        iVar6 = *(int *)(param_1 + 0x13c);
        fStack_28 = fStack_30;
        fStack_30 = ((fStack_30 - *(float *)(iVar6 + 0xac)) / *(float *)(iVar6 + 0xb4)) *
                    *(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x144);
        fStack_2c = ((*(float *)(iVar6 + 0xb0) - fStack_2c) / *(float *)(iVar6 + 0xb4) +
                    _DAT_0089096c) * *(float *)(param_1 + 0x150) + *(float *)(param_1 + 0x148);
        uVar3 = FUN_0045ded0(uStack_1c,uStack_20);
        fVar1 = (float)uVar3 * _DAT_00894958;
        if ((piVar4 != (int *)0x0) && (cVar2 = (**(code **)(*piVar4 + 0x8c))(), cVar2 != '\0')) {
          piVar4 = (int *)(**(code **)(*(int *)*puVar10 + 0x44))();
          if (*piVar4 == DAT_0092c4f4) {
            FUN_00530df0(0xead9bd85,8);
            if (((*(int *)(param_1 + 0x10) == 0) ||
                (iVar9 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar9 == 0)) ||
               (iVar9 = FUN_005b8550(0xe26be422), iVar9 == 0)) {
              iVar9 = 0;
            }
            if (((*(int *)(param_1 + 0x10) == 0) ||
                (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 == 0)) ||
               ((iVar6 = FUN_005b8550(0x21390e47), iVar6 == 0 || (*(int *)(iVar6 + 0x18) != 1)))) {
              iVar6 = 0;
            }
            pvVar7 = _malloc(0x40);
            uStack_c = 0;
            if (pvVar7 == (void *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)FUN_0052f660(iVar6,iVar9,&fStack_30,&fStack_28,fVar1);
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0x10);
            uVar5 = FUN_00573140("MMICON_COPCAR_%d",iVar9);
            if ((((iVar6 == 0) || (iVar9 = FUN_00516af0(iVar6), iVar9 == 0)) ||
                (iVar9 = FUN_005b8550(uVar5), iVar9 == 0)) || (*(int *)(iVar9 + 0x18) != 1)) {
              iVar9 = 0;
            }
            local_3c = local_3c + 1;
            puVar8 = _malloc(0x3c);
            uStack_c = 1;
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              FUN_0052f500(4,iVar9,&fStack_30,&fStack_28,fVar1,0);
              *puVar8 = &PTR_FUN_0089d768;
              puVar8[0xe] = 0xffffffff;
            }
          }
          uStack_c = 0xffffffff;
          if (puVar8 == (undefined4 *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = puVar8 + 1;
          }
          puVar8 = *(undefined4 **)(param_1 + 0x158);
          *puVar8 = piVar4;
          *(int **)(param_1 + 0x158) = piVar4;
          piVar4[1] = (int)puVar8;
          *piVar4 = param_1 + 0x154;
          iVar9 = local_3c;
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != DAT_0092ce9c + DAT_0092cea4);
    if (0 < iVar9) {
      FUN_00530df0(0xead6ef6c,4);
    }
  }
  ExceptionList = local_14;
  return;
}


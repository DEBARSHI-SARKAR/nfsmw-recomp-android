/* speed.exe 00457f90 FUN_00457f90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00457f90(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869cd8;
  pvStack_c = ExceptionList;
  iVar5 = param_2[3];
  uVar1 = param_2[4];
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(short *)((int)param_1 + 0xe) = (short)uVar1;
  if (iVar5 != 0) {
    FUN_004569d0(iVar5);
  }
  param_1[4] = 0;
  iVar5 = *(int *)(DAT_0090dcbc + 4);
  uStack_4 = 0;
  if ((puVar2[1] == 0) || (uVar3 = FUN_00454db0(puVar2[1]), *(uint *)(iVar5 + 0xc) <= uVar3)) {
LAB_0045801f:
    uVar8 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 8);
    uVar8 = *(uint *)(iVar5 + 4 + uVar3 * 0xc);
    uVar3 = iVar5 + uVar3 * 0xc;
    if (uVar8 == uVar3) goto LAB_0045801f;
    uVar8 = (uVar8 == uVar3) - 1 & uVar8;
  }
  param_1[5] = uVar8;
  param_1[6] = puVar2[7];
  param_1[7] = 1;
  param_1[8] = *puVar2;
  param_1[9] = param_3;
  param_1[10] = 0;
  *param_3 = *param_3 + 1;
  iVar5 = *(int *)(param_1[5] + 8);
  FUN_00456220(param_1[8],param_1);
  if (0x50 < (*(uint *)(iVar5 + 0x28) & 0xfffffffe)) {
    FUN_00456390(((*(int *)(iVar5 + 0x20) * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  *(int *)(param_1[5] + 4) = *(int *)(param_1[5] + 4) + 1;
  if (puVar2[2] == 0) goto LAB_004580c6;
  iVar5 = *(int *)(param_1[5] + 8);
  uVar3 = FUN_00454cc0(puVar2[2]);
  if (uVar3 < *(uint *)(iVar5 + 0x20)) {
    iVar5 = *(int *)(iVar5 + 0x1c);
    uVar8 = *(uint *)(iVar5 + 4 + uVar3 * 0xc);
    uVar3 = iVar5 + uVar3 * 0xc;
    if (uVar8 == uVar3) goto LAB_004580be;
    uVar8 = (uVar8 == uVar3) - 1 & uVar8;
  }
  else {
LAB_004580be:
    uVar8 = 0;
  }
  param_1[4] = uVar8;
  *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
LAB_004580c6:
  param_2 = (undefined4 *)0x0;
  if (puVar2[5] != 0) {
    pbVar9 = (byte *)((int)puVar2 + puVar2[6] * 4 + 0x2a);
    do {
      iVar5 = DAT_0090dcbc;
      if ((*pbVar9 & 0x20) != 0) {
        uStack_20 = puVar2[*(ushort *)(pbVar9 + -2) + 8];
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = FUN_00626c50(uStack_20);
        iVar5 = *(int *)(iVar5 + 4);
        FUN_00456f40(&param_3,&uStack_20);
        if (param_3 == *(int **)(iVar5 + 0x30)) {
          piVar4 = (int *)**(undefined4 **)(iVar5 + 0x20);
        }
        else {
          piVar4 = param_3 + 3;
        }
        if ((uint)piVar4[2] < 5) {
          _DAT_0090dcb0 = _DAT_0090dcb0 + piVar4[2];
        }
      }
      FUN_00457db0(*(undefined4 *)(pbVar9 + -10),puVar2[*(ushort *)(pbVar9 + -2) + 8],
                   *(undefined4 *)(pbVar9 + -6),0,*pbVar9,1,param_1[6]);
      iVar5 = FUN_00453b00(*(undefined4 *)(pbVar9 + -10),7);
      DAT_0090dca8 = DAT_0090dca8 + iVar5;
      DAT_0090dcac = DAT_0090dcac + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
      pbVar9 = pbVar9 + 0xc;
    } while (param_2 < (uint)puVar2[5]);
  }
  iVar5 = FUN_004532c0(param_1,0xffffffff);
  if (iVar5 == 0) {
    iVar5 = FUN_004532c0(*(int *)(param_1[5] + 8) + 0xc,0xffffffff);
    param_2 = (undefined4 *)CONCAT31(param_2._1_3_,1);
  }
  else {
    param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  }
  for (; iVar5 != 0; iVar5 = FUN_004542c0(iVar5,&param_2)) {
    param_3 = (undefined4 *)0x0;
    iVar6 = FUN_00454030(iVar5,&param_3);
    if (((param_1 == param_3) && (iVar6 != 0)) && ((*(byte *)(iVar6 + 0xb) & 2) != 0)) {
      iVar7 = *(int *)(iVar6 + 4);
      if ((*(byte *)(iVar6 + 0xb) & 0x10) != 0) {
        iVar7 = iVar7 + param_1[6];
      }
      *(ushort *)(iVar7 + 6) =
           *(ushort *)(iVar7 + 6) & 0x8000 |
           *(ushort *)
            (*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                     (-(uint)((uint)*(ushort *)(iVar6 + 8) <
                             *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                     (uint)*(ushort *)(iVar6 + 8)) * 4) + 0xc);
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


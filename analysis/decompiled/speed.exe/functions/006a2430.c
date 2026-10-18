/* speed.exe 006a2430 FUN_006a2430; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006a2030 FUN_006a2030
 * calls 006269b0 FUN_006269b0
 * calls 00401670 FUN_00401670
 * calls 0040fe20 FUN_0040fe20
 * calls 004075a0 FUN_004075a0
 * calls 00454810 FUN_00454810
 * calls 005c5e80 FUN_005c5e80
 * calls 0068a6d0 FUN_0068a6d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a2430(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 *puStack_94;
  undefined1 *puStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_4c [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  void *pvStack_34;
  undefined1 auStack_30 [4];
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  float fStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c818;
  pvStack_c = ExceptionList;
  local_84 = -*(float *)(param_1 + 0x54);
  fStack_88 = 9.747616e-39;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 200) + 0x78))();
  fStack_88 = -*(float *)(param_1 + 0x58);
  fStack_8c = 9.747644e-39;
  (**(code **)(**(int **)(param_1 + 200) + 0x7c))();
  fStack_8c = -*(float *)(param_1 + 0x5c);
  puStack_90 = (undefined1 *)0x6a248e;
  (**(code **)(**(int **)(param_1 + 200) + 0x80))();
  puStack_90 = auStack_4c;
  fStack_2c = 0.0;
  puStack_94 = (undefined4 *)0x6a24a6;
  iVar3 = (**(code **)(**(int **)(param_1 + 200) + 0x48))();
  fStack_2c = -*(float *)(iVar3 + 4);
  uStack_28 = 0;
  puStack_94 = (undefined4 *)0x6a24c5;
  uVar4 = (**(code **)(**(int **)(param_1 + 0xcc) + 0xa4))();
  puStack_94 = (undefined4 *)(param_1 + 0x54);
  FUN_00401670(auStack_30,uVar4);
  puStack_94 = *(undefined4 **)(param_1 + 0x54);
  (**(code **)(**(int **)(param_1 + 200) + 0x78))();
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  (**(code **)(**(int **)(param_1 + 200) + 0x7c))();
  (**(code **)(**(int **)(param_1 + 200) + 0x80))(*(undefined4 *)(param_1 + 0x5c));
  puStack_90 = (undefined1 *)
               (*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
               *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c) +
               *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78));
  fVar8 = (float10)FUN_005c5e80(puStack_90);
  fVar9 = (float10)*(float *)(*(int *)(param_1 + 0xa4) + 0x44);
  if (fVar9 < fVar8) {
    fVar9 = fVar9 / fVar8;
    *(float *)(param_1 + 0x78) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x78));
    *(float *)(param_1 + 0x7c) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x7c));
    *(float *)(param_1 + 0x80) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x80));
  }
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 200) + 0x2c))();
  fVar8 = fVar8 * (float10)_DAT_008aae44 + (float10)_DAT_008f8dd0;
  puStack_94 = (undefined4 *)(float)fVar8;
  if ((float10)(float)DAT_008f8dcc < fVar8) {
    puStack_94 = DAT_008f8dcc;
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    puStack_94 = DAT_008f8dcc;
  }
  pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 200) + 0x24))();
  fVar1 = *(float *)(param_1 + 0x78) - *pfVar5;
  fVar2 = *(float *)(param_1 + 0x7c) - pfVar5[1];
  fStack_78 = *(float *)(param_1 + 0x80) - pfVar5[2];
  puStack_90 = (undefined1 *)(fVar1 * fVar1 + fStack_78 * fStack_78 + fVar2 * fVar2);
  fVar8 = (float10)FUN_005c5e80(puStack_90);
  puStack_90 = (undefined1 *)(float)(fVar8 * (float10)_DAT_008f8dd4);
  fStack_74 = _DAT_008f8dd4;
  if (((float10)_DAT_0089096c < fVar8 * (float10)_DAT_008f8dd4) &&
     (((float)puStack_94 < (float)puStack_90 || (*(char *)(param_1 + 0xc4) != '\0')))) {
    fStack_74 = (float)puStack_94 / (float)puStack_90;
  }
  fStack_6c = fStack_78 * fStack_74;
  fStack_70 = fVar2 * fStack_74;
  fStack_74 = fVar1 * fStack_74;
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 200) + 0x18))();
  fStack_48 = (float)((float10)fStack_74 * fVar8);
  fStack_44 = (float)((float10)fStack_70 * fVar8);
  fStack_40 = (float)((float10)fStack_6c * fVar8);
  uVar6 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))();
  FUN_0068a6d0(uVar6);
  uStack_20 = 0;
  iVar3 = FUN_00454810(0x7c90bb38,0);
  if (iVar3 == 0) {
    iVar3 = FUN_006269b0(0xc);
  }
  iVar3 = FUN_004075a0(iVar3,0,0);
  puStack_90 = *(undefined1 **)(*(int *)(iVar3 + 8) + 0xf0);
  FUN_0045a430();
  uStack_20 = 0xffffffff;
  FUN_0045a430();
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 200) + 0x18))();
  fStack_44 = (float)((float10)fStack_44 - fVar8 * (float10)(float)puStack_90);
  (**(code **)(**(int **)(param_1 + 200) + 0x8c))(&fStack_48);
  uStack_60 = DAT_008a2fb4;
  fStack_5c = DAT_008a2fb8;
  uStack_58 = DAT_008a2fbc;
  if (_DAT_00890ec4 < fStack_1c) {
    pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 200) + 0x24))();
    fStack_70 = _DAT_0089096c / fStack_1c;
    fStack_78 = (*pfVar5 - *(float *)(param_1 + 0x84)) * fStack_70;
    fStack_74 = (pfVar5[1] - *(float *)(param_1 + 0x88)) * fStack_70;
    fStack_70 = (pfVar5[2] - *(float *)(param_1 + 0x8c)) * fStack_70;
    FUN_006a2030(&fStack_78,&uStack_60);
  }
  local_84 = *(float *)(param_1 + 0x90);
  fVar1 = *(float *)(param_1 + 0x94);
  (**(code **)(**(int **)(param_1 + 200) + 0x34))(&fStack_6c);
  fStack_6c = 0.0;
  local_84 = 0.0;
  FUN_0040fe20(&fStack_88,&fStack_88);
  fStack_44 = fStack_68 * local_84 - fVar1 * fStack_6c;
  fStack_40 = fVar1 * fStack_70 - fStack_68 * fStack_88;
  fStack_3c = fStack_88 * fStack_6c - fStack_70 * local_84;
  fVar1 = fStack_40 * _DAT_008ab8ec;
  fVar2 = _DAT_008aae5c;
  if ((fVar1 < _DAT_008aae5c) && (fVar2 = fVar1, fVar1 < _DAT_008ab8e8)) {
    fVar2 = _DAT_008ab8e8;
  }
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) * _DAT_008a0718;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * _DAT_008a0718;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) * _DAT_008a0718;
  puStack_94 = (undefined4 *)((fStack_64 + *(float *)(param_1 + 0x60)) * _DAT_00890f14);
  puStack_90 = (undefined1 *)((fVar2 + *(float *)(param_1 + 100)) * _DAT_00890f14);
  fStack_8c = (fStack_5c + *(float *)(param_1 + 0x68)) * _DAT_00890f14;
  fStack_88 = fStack_44;
  local_84 = fStack_40;
  (**(code **)(**(int **)(param_1 + 200) + 100))(&puStack_94);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 **)(param_1 + 100) = puStack_94;
  *(undefined1 **)(param_1 + 0x68) = puStack_90;
  puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 200) + 0x24))();
  *(undefined4 *)(param_1 + 0x84) = *puVar7;
  *(undefined4 *)(param_1 + 0x88) = puVar7[1];
  *(undefined4 *)(param_1 + 0x8c) = puVar7[2];
  ExceptionList = pvStack_34;
  return;
}


/* speed.exe 00672840 FUN_00672840; analysis pseudocode, not buildable source.
 * calls 00668070 FUN_00668070
 * calls 00667e70 FUN_00667e70
 * calls 005c5e80 FUN_005c5e80
 * calls 005d29d0 FUN_005d29d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00672840(int param_1,float *param_2,undefined4 param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087a91f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x34) + 0x40))();
  fStack_18 = (float)(int)*(short *)(iVar4 + 0x10) * _DAT_00890d60;
  fStack_14 = (float)(int)*(short *)(iVar4 + 0x12) * _DAT_00890d60;
  fStack_10 = (float)(int)*(short *)(iVar4 + 0x14) * _DAT_00890d60;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar4 = FUN_005d29d0(8,0);
    uStack_4 = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    else {
      uVar5 = FUN_00667e70(*(undefined4 *)(param_1 + 0x3c),param_3,param_2,&fStack_18,0);
      *(undefined4 *)(param_1 + 0xd0) = uVar5;
    }
  }
  else {
    FUN_00668070(param_2,&fStack_18,param_3);
    puVar1 = (uint *)(**(int **)(param_1 + 0xd0) + 0x10);
    *puVar1 = *puVar1 | 0x100;
  }
  *(float *)(param_1 + 0xb8) = param_2[0xc];
  *(float *)(param_1 + 0xbc) = param_2[0xd];
  *(float *)(param_1 + 0xc0) = param_2[0xe];
  *(float *)(param_1 + 0xc4) = param_2[0xf];
  fVar2 = fStack_18 * *param_2 + fStack_14 * param_2[4] + fStack_10 * param_2[8];
  fVar3 = fStack_18 * param_2[2] + fStack_14 * param_2[6] + fStack_10 * param_2[10];
  fVar6 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)(param_1 + 0xc4) = (float)fVar6;
  ExceptionList = pvStack_c;
  return;
}


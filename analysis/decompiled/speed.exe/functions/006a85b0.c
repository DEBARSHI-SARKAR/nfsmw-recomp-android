/* speed.exe 006a85b0 FUN_006a85b0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0041ad40 FUN_0041ad40
 * calls 00410180 FUN_00410180
 * calls 006e9660 FUN_006e9660
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a85b0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = (int)param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087ce40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar6 = (float10)FUN_005c5e80(*(float *)((int)param_2 + 0x28) * *(float *)((int)param_2 + 0x28) +
                                *(float *)((int)param_2 + 0x24) * *(float *)((int)param_2 + 0x24) +
                                *(float *)((int)param_2 + 0x20) * *(float *)((int)param_2 + 0x20));
  if ((float10)_DAT_0089096c <= fVar6) {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + -0x20) + 0x54))();
    fVar7 = (float10)(**(code **)(*piVar4 + 0x18))();
    fVar1 = (float)(fVar7 * (float10)*(float *)((int)param_2 + 0x5c));
    if (((byte)*(undefined4 *)((int)param_2 + 0x1c) & 7) == 1) {
      (**(code **)(*(int *)(param_1 + -8) + 8))(*(undefined4 *)((int)param_2 + 0x2c));
      if (*(int *)((int)param_2 + 0x4c) == *(int *)(*(int *)(param_1 + -0x20) + 8)) {
        fVar1 = (float)fVar7 * *(float *)((int)param_2 + 0x6c);
      }
      fVar1 = fVar1 + fVar1;
    }
    param_2 = fVar1;
    if (*(int *)(iVar3 + 0x3c) == *(int *)(*(int *)(param_1 + -0x20) + 8)) {
      uStack_4c = *(undefined4 *)(iVar3 + 0x10);
      uStack_48 = *(undefined4 *)(iVar3 + 0x14);
      uStack_44 = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar3 + 0x50);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x58);
      FUN_00410180((undefined4 *)(iVar3 + 0x50));
      FUN_006e9660(*(undefined4 *)(iVar3 + 0xc));
      iVar2 = *(int *)(param_1 + -0x54);
      uStack_4 = 0;
      uVar5 = FUN_0041ad40(*(undefined4 *)(iVar3 + 0x4c));
      (**(code **)(iVar2 + 0x28))(iVar3 + 0x30,&uStack_4c,param_2,(float)fVar6,auStack_34,uVar5);
    }
    else {
      if (*(int *)(iVar3 + 0x4c) != *(int *)(*(int *)(param_1 + -0x20) + 8)) {
        ExceptionList = local_c;
        return;
      }
      fStack_40 = *(float *)(iVar3 + 0x10) * _DAT_008aac20;
      fStack_3c = *(float *)(iVar3 + 0x14) * _DAT_008aac20;
      fStack_38 = *(float *)(iVar3 + 0x18);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar3 + 0x60);
      fStack_38 = fStack_38 * _DAT_008aac20;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 100);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x68);
      FUN_00410180((undefined4 *)(iVar3 + 0x60));
      FUN_006e9660(*(undefined4 *)(iVar3 + 0x7c));
      iVar2 = *(int *)(param_1 + -0x54);
      uStack_4 = 1;
      uVar5 = FUN_0041ad40(*(undefined4 *)(iVar3 + 0x3c));
      (**(code **)(iVar2 + 0x28))(iVar3 + 0x40,&fStack_40,param_2,(float)fVar6,auStack_20,uVar5);
    }
    uStack_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return;
}


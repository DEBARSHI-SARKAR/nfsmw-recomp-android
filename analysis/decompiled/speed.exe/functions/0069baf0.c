/* speed.exe 0069baf0 FUN_0069baf0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0045a760 FUN_0045a760
 * calls 006e9660 FUN_006e9660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069baf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfStack_6c;
  int iStack_68;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [20];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c3b0;
  local_c = ExceptionList;
  if (*(char *)(param_1 + -0x1b) == '\0') {
    ExceptionList = &local_c;
    if (((byte)*(undefined4 *)(param_2 + 0x1c) & 7) == 2) {
      iStack_68 = *(undefined4 *)(param_2 + 0x7c);
      pfStack_6c = (float *)0x69bb33;
      ExceptionList = &local_c;
      FUN_006e9660();
      pfStack_6c = (float *)(param_2 + 0x20);
      local_4 = 0;
      iStack_68 = param_2 + 0x10;
      (**(code **)(*(int *)(param_1 + -0x48) + 0x28))
                (local_48,*(undefined4 *)(param_2 + 0x5c),param_2);
      uStack_18 = 0xffffffff;
      FUN_0045a430();
      FUN_006e9660(*(undefined4 *)(param_2 + 0x7c));
      uStack_18 = 1;
      (**(code **)(*(int *)(param_1 + -0x48) + 0x2c))
                (&stack0xffffffa4,param_2,param_2 + 0x70,param_2 + 0x10);
      local_4 = 0xffffffff;
      iStack_68 = 0x69bba1;
      FUN_0045a430();
    }
    if (((byte)*(undefined4 *)(param_2 + 0x1c) & 7) == 1) {
      local_54 = *(float *)(param_2 + 0x10);
      local_50 = *(float *)(param_2 + 0x14);
      local_4c = *(float *)(param_2 + 0x18);
      iStack_68 = *(undefined4 *)(param_2 + 0x7c);
      pfStack_6c = (float *)0x69bbd4;
      FUN_006e9660();
      iVar3 = *(int *)(param_2 + 0x4c);
      local_4 = 2;
      uVar2 = *(undefined4 *)(param_2 + 0x5c);
      if (iVar3 == *(int *)(*(int *)(param_1 + -0x14) + 8)) {
        iStack_68 = *(undefined4 *)(param_2 + 0xc);
        local_54 = local_54 * _DAT_008aac20;
        local_50 = local_50 * _DAT_008aac20;
        local_4c = local_4c * _DAT_008aac20;
        pfStack_6c = (float *)0x69bc25;
        FUN_006e9660();
        iStack_68 = uStack_30;
        local_4._0_1_ = 3;
        pfStack_6c = (float *)0x69bc38;
        FUN_0045a760();
        local_4 = CONCAT31(local_4._1_3_,2);
        iStack_68 = 0x69bc46;
        FUN_0045a430();
        iVar3 = *(int *)(param_2 + 0x3c);
        uVar2 = *(undefined4 *)(param_2 + 0x6c);
      }
      param_2 = uVar2;
      pfStack_6c = &local_54;
      iStack_68 = iVar3;
      (**(code **)(*(int *)(param_1 + -0x48) + 0x30))(local_48,param_2,iVar1,iVar1 + 0x20);
      (**(code **)(*(int *)(param_1 + -0x48) + 0x34))
                (&stack0xffffffa0,iVar1,iVar1 + 0x70,&pfStack_6c,iVar3);
      local_4 = 0xffffffff;
      iStack_68 = 0x69bc98;
      FUN_0045a430();
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x1c) & 7) == 3) {
      iStack_68 = *(undefined4 *)(iVar1 + 0x7c);
      pfStack_6c = (float *)0x69bcb0;
      FUN_006e9660();
      pfStack_6c = (float *)(iVar1 + 0x20);
      local_4 = 4;
      iStack_68 = iVar1 + 0x10;
      (**(code **)(*(int *)(param_1 + -0x48) + 0x38))
                (auStack_34,*(undefined4 *)(iVar1 + 0x5c),iVar1);
      uStack_18 = 0xffffffff;
      FUN_0045a430();
      FUN_006e9660(*(undefined4 *)(iVar1 + 0x7c));
      uStack_18 = 5;
      (**(code **)(*(int *)(param_1 + -0x48) + 0x3c))(auStack_34,iVar1,iVar1 + 0x70,iVar1 + 0x10);
      local_4 = 0xffffffff;
      iStack_68 = 0x69bd19;
      FUN_0045a430();
    }
  }
  ExceptionList = local_c;
  return;
}


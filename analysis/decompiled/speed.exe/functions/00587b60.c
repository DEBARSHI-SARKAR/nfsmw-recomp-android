/* speed.exe 00587b60 FUN_00587b60; analysis pseudocode, not buildable source.
 * calls 005734e0 FUN_005734e0
 * calls 00525050 FUN_00525050
 * calls 005155e0 FUN_005155e0
 * calls 00573410 FUN_00573410
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 005733b0 FUN_005733b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00587b60(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  iVar5 = (int)param_2;
  if (param_2 != 0.0) {
    local_c = *(float *)(param_1 + 0x90) + *(float *)((int)param_2 + 0x14) +
              *(float *)(param_1 + 0xd4);
    FUN_005155e0(*(undefined4 *)((int)param_2 + 0x10),*(undefined4 *)((int)param_2 + 0x24),
                 *(undefined4 *)((int)param_2 + 0x28));
    fVar6 = (float10)FUN_00573410(local_c,*(undefined4 *)(param_1 + 0xd4),
                                  *(undefined4 *)(param_1 + 0xcc),
                                  *(undefined4 *)((int)param_2 + 0x24));
    fVar1 = (float)fVar6;
    fVar4 = _DAT_0089096c - fVar1;
    fVar4 = fVar4 * fVar4 * fVar4 * *(float *)((int)param_2 + 0x24);
    if (*(float *)(param_1 + 0xd4) <= local_c) {
      fVar4 = local_c - fVar4;
    }
    else {
      fVar4 = fVar4 + local_c;
    }
    local_c = fVar4;
    FUN_005733b0(param_2,fVar4);
    FUN_00525050(*(undefined4 *)((int)param_2 + 0x10),fVar4,*(undefined4 *)(param_1 + 0xd8));
    if ((*(char *)(param_1 + 0xed) != '\0') || (param_2 = fVar1, *(char *)(param_1 + 0xee) != '\0'))
    {
      param_2 = (*(float *)(param_1 + 0xe4) / *(float *)(param_1 + 0xe8)) * fVar1;
    }
    iVar2 = *(int *)(param_1 + 0xbc);
    local_c = 0.0;
    if (iVar2 == 0) {
      FUN_00514fd0(*(undefined4 *)(iVar5 + 0x10),local_4,&local_8);
      local_c = local_8;
    }
    else if (iVar2 == 1) {
      FUN_00514fd0(*(undefined4 *)(iVar5 + 0x10),&local_8,&local_c);
      local_c = (*(float *)(iVar5 + 0x28) - param_2 * *(float *)(iVar5 + 0x28)) * _DAT_008933d4 +
                local_c;
    }
    else if (iVar2 == 2) {
      FUN_00514fd0(*(undefined4 *)(iVar5 + 0x10),&local_8,&local_c);
      local_c = (*(float *)(iVar5 + 0x28) - param_2 * *(float *)(iVar5 + 0x28)) + local_c;
    }
    FUN_005155e0(*(undefined4 *)(iVar5 + 0x10),param_2 * *(float *)(iVar5 + 0x24),
                 param_2 * *(float *)(iVar5 + 0x28));
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    FUN_00514fd0(uVar3,&local_8,local_4);
    FUN_00524cc0(uVar3,local_8,local_c);
    if (*(char *)(param_1 + 0xec) != '\0') {
      FUN_005734e0(iVar5,param_2);
    }
  }
  return;
}


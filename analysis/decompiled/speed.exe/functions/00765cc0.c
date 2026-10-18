/* speed.exe 00765cc0 FUN_00765cc0; analysis pseudocode, not buildable source.
 * calls 0045f610 FUN_0045f610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00765cc0(int param_1,float param_2,float *param_3,float param_4,char param_5,uint param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = (int)param_2;
  pfVar1 = (float *)((int)param_2 + 0x20);
  fVar2 = (*param_3 - *(float *)((int)param_2 + 0x30)) * *(float *)((int)param_2 + 0x14) -
          (param_3[2] - *(float *)((int)param_2 + 0x38)) * *(float *)((int)param_2 + 0x10);
  fVar3 = *(float *)((int)param_2 + 0x24) + param_4;
  fVar4 = *pfVar1 - param_4;
  if (fVar4 < fVar2) {
    fVar4 = fVar2;
  }
  if (fVar3 < fVar4) {
    fVar4 = fVar3;
  }
  if (fVar2 == fVar4) {
    local_c = -*(float *)((int)param_2 + 0x10);
    local_4 = *(undefined4 *)((int)param_2 + 0x38);
    *(uint *)((int)param_2 + 0x28) = *(uint *)((int)param_2 + 0x28) | param_6 | 1;
    local_8 = *(undefined4 *)((int)param_2 + 0x30);
    local_10 = *(undefined4 *)((int)param_2 + 0x14);
    fVar3 = _DAT_0089096c;
    if (*(int *)(param_1 + 0x78) == 1) {
      fVar3 = _DAT_00890cd4;
    }
    if (param_5 == '\0') {
      param_3 = (float *)(fVar2 + param_4);
      fVar3 = *(float *)((int)param_2 + 0x24) - fVar3;
      if (fVar3 < (float)param_3) {
        param_3 = (float *)fVar3;
      }
      FUN_0045f610(param_2,&local_8,&local_10,param_3);
      *(float **)((int)param_2 + 0x20) = param_3;
      return 1;
    }
    param_2 = fVar2 - param_4;
    fVar3 = fVar3 + *pfVar1;
    if (param_2 < fVar3) {
      param_2 = fVar3;
    }
    FUN_0045f610(iVar5 + 8,&local_8,&local_10,param_2);
    *(float *)(iVar5 + 0x24) = param_2;
    return 1;
  }
  return 0;
}


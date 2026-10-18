/* speed.exe 005752d0 FUN_005752d0; analysis pseudocode, not buildable source.
 * calls 005155e0 FUN_005155e0
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005752d0(char *param_1,float param_2,float param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  fVar2 = (float)(int)param_2;
  param_2 = (float)(int)param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  if (*param_1 == '\0') {
    param_3 = (fVar2 / param_2) * *(float *)(param_1 + 0x28);
    FUN_00515520(uVar1,local_4,&local_8);
    FUN_005155e0(uVar1,param_3,local_8);
    fVar3 = (float)param_4 - _DAT_0089096c;
    fVar4 = param_2 - fVar2;
    if (param_2 - fVar2 < _DAT_0089096c) {
      fVar4 = _DAT_0089096c;
    }
    fVar4 = (*(float *)(param_1 + 0x28) - param_3) / fVar4;
    *(float *)(param_1 + 0x38) = fVar4;
    param_3 = fVar4 * fVar3 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x10) = param_3;
    if (param_1[2] == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x44);
      FUN_00514fd0(uVar1,&param_4,&param_2);
      FUN_00524cc0(uVar1,param_3,param_2);
      return;
    }
  }
  else {
    param_3 = (fVar2 / param_2) * *(float *)(param_1 + 0x2c);
    FUN_00515520(uVar1,&local_8,local_4);
    FUN_005155e0(uVar1,local_8,param_3);
    fVar3 = (float)param_4 - _DAT_0089096c;
    fVar4 = param_2 - fVar2;
    if (param_2 - fVar2 < _DAT_0089096c) {
      fVar4 = _DAT_0089096c;
    }
    fVar4 = (*(float *)(param_1 + 0x2c) - param_3) / fVar4;
    *(float *)(param_1 + 0x38) = fVar4;
    param_2 = fVar4 * fVar3 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x14) = param_2;
    if (param_1[2] == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x44);
      FUN_00514fd0(uVar1,&param_3,&param_4);
      FUN_00524cc0(uVar1,param_3,param_2);
      return;
    }
  }
  return;
}


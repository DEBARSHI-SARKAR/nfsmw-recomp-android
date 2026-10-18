/* speed.exe 0069e820 FUN_0069e820; analysis pseudocode, not buildable source.
 * calls 00653d10 FUN_00653d10
 * calls 0068e9e0 FUN_0068e9e0
 * calls 006533b0 FUN_006533b0
 * calls 006e8de0 FUN_006e8de0
 * calls 0068ec70 FUN_0068ec70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0069e820(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float local_10;
  float local_c;
  
  iVar3 = (int)param_2;
  local_c = *(float *)((int)param_2 + 0x8c);
  local_10 = *(float *)(param_1 + 0x11c);
  if (_DAT_008aad30 <= local_10) {
    local_10 = local_10 - _DAT_00890960;
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0xa0) + 0x48);
  iVar7 = 0;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
  if (((piVar6 != (int *)0x0) &&
      (piVar6 = (int *)(**(code **)(*piVar6 + 0x3c))(), piVar6 != (int *)0x0)) &&
     (cVar5 = (**(code **)(*piVar6 + 0xc))(), cVar5 != '\0')) {
    iVar7 = (**(code **)(*piVar6 + 0x10))();
  }
  fVar8 = (float10)FUN_0068e9e0(param_2,iVar7);
  fVar8 = fVar8 * (float10)fVar2 * (float10)local_c;
  fVar1 = (float)fVar8;
  fVar4 = _DAT_008ab694;
  if (((float10)_DAT_008ab694 < fVar8) && (fVar4 = fVar1, _DAT_008a0dbc < fVar1)) {
    fVar4 = _DAT_008a0dbc;
  }
  if (iVar7 == 0) {
    fVar8 = (float10)FUN_006533b0(local_c);
    local_c = (float)fVar8;
    fVar8 = (float10)FUN_0068ec70(param_2);
    fVar8 = fVar8 * (float10)fVar2 * (float10)*(float *)((int)param_2 + 0xc0);
    fVar2 = (float)((float10)local_10 + fVar8);
    fVar8 = (float10)local_10 - fVar8;
    if (fVar8 < (float10)fVar4) {
      fVar8 = (float10)fVar4;
    }
    if ((float10)fVar2 < fVar8) {
      fVar8 = (float10)fVar2;
    }
    fVar4 = (float)fVar8;
    if (ABS(fVar8) < (float10)_DAT_00890968) {
      param_2 = 0.0;
      fVar4 = param_2;
    }
  }
  param_2 = fVar4;
  fVar2 = _DAT_00890968;
  *(float *)(param_1 + 0x130) = local_c;
  *(float *)(param_1 + 0x11c) = param_2;
  if (fVar2 < *(float *)(param_1 + 0xf8)) {
    param_2 = (*(float *)(iVar3 + 0x8c) * _DAT_008aade8 - param_2) * *(float *)(param_1 + 0xf8) +
              param_2;
  }
  fVar8 = (float10)FUN_006e8de0();
  FUN_00653d10(*(undefined4 *)(param_1 + 0x130),(float)fVar8);
  return (float10)param_2 * (float10)_DAT_0089095c;
}


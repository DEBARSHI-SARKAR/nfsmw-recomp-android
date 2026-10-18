/* speed.exe 007736e0 FUN_007736e0; analysis pseudocode, not buildable source.
 * calls 00763690 FUN_00763690
 * calls 0041b250 FUN_0041b250
 */

void __thiscall FUN_007736e0(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  uVar4 = param_2;
  local_8 = param_1;
  FUN_00763690(param_2,&local_10,&local_4);
  FUN_00763690(uVar4 + 0x10,&param_2,&local_c);
  uVar6 = local_c;
  uVar4 = local_10;
  piVar3 = param_3;
  if (param_2 < local_10) {
    local_10 = param_2;
    param_2 = uVar4;
  }
  uVar4 = local_4;
  if (local_c < local_4) {
    local_c = local_4;
    uVar4 = uVar6;
  }
  if (0x14 < param_2 - local_10) {
    param_2 = local_10;
  }
  if (0x14 < local_c - uVar4) {
    local_c = uVar4;
  }
  uVar6 = *(uint *)(param_1 + 0x1c);
  if (uVar6 <= uVar4) {
    if (uVar4 < 0x7fffffff) {
      uVar4 = uVar6 - 1;
    }
    else {
      uVar4 = 0;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  if (uVar7 <= local_10) {
    if (local_10 < 0x7fffffff) {
      local_10 = uVar7 - 1;
    }
    else {
      local_10 = 0;
    }
  }
  if (uVar6 <= local_c) {
    if (local_c < 0x7fffffff) {
      local_c = uVar6 - 1;
    }
    else {
      local_c = 0;
    }
  }
  if (uVar7 <= param_2) {
    if (param_2 < 0x7fffffff) {
      param_2 = uVar7 - 1;
    }
    else {
      param_2 = 0;
    }
  }
  uVar6 = param_2;
  if (uVar4 <= local_c) {
    do {
      uVar7 = local_10;
      if (local_10 <= uVar6) {
        do {
          iVar2 = *(int *)(param_1 + 0x1c);
          if ((uint)piVar3[2] <= (uint)piVar3[3]) {
            uVar5 = (**(code **)(*piVar3 + 0xc))(piVar3[3] + 1);
            FUN_0041b250(uVar5);
            uVar6 = param_2;
          }
          piVar1 = (int *)(piVar3[1] + piVar3[3] * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar2 * uVar7 + uVar4;
          }
          uVar7 = uVar7 + 1;
          piVar3[3] = piVar3[3] + 1;
          param_1 = local_8;
        } while (uVar7 <= uVar6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= local_c);
  }
  return;
}


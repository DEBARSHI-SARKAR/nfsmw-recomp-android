/* speed.exe 0076eed0 FUN_0076eed0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0076eed0(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_1c;
  float local_18;
  
  iVar5 = -1;
  local_1c = -1.0;
  if (param_4 < 1) {
    return -1;
  }
  iVar7 = 0;
  local_18 = 0.0;
  if (param_4 < 1) {
    return -1;
  }
  do {
    if (param_3 == 0) {
      piVar4 = *(int **)(param_1 + 8);
      if (*piVar4 < piVar4[2]) {
        iVar6 = iVar7 % *piVar4;
      }
      else {
        iVar6 = (piVar4[1] + 1 + iVar7) % piVar4[2];
      }
      piVar4 = piVar4 + iVar6 * 0x10 + 4;
    }
    else {
      piVar4 = (int *)(iVar7 * 0x40 + param_3);
    }
    fVar1 = *param_2 - (float)piVar4[0xc];
    fVar2 = param_2[2] - (float)piVar4[0xe];
    fVar3 = fVar1 * (float)piVar4[4] + fVar2 * (float)piVar4[5];
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
    if (iVar7 == 0) {
      if (_DAT_00890968 <= fVar3) {
LAB_0076efd5:
        iVar6 = iVar5;
        fVar1 = local_1c;
      }
      else {
        iVar6 = 0;
      }
    }
    else if ((_DAT_00890968 <= fVar3 * local_18) ||
            ((iVar6 = iVar7, -1 < iVar5 && (local_1c <= fVar1)))) goto LAB_0076efd5;
    local_1c = fVar1;
    iVar7 = iVar7 + 1;
    iVar5 = iVar6;
    local_18 = fVar3;
    if (param_4 <= iVar7) {
      return iVar6;
    }
  } while( true );
}


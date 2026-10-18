/* speed.exe 0073d660 FUN_0073d660; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short __thiscall FUN_0073d660(int param_1,float param_2,float param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = *(int *)(param_1 + 8);
  local_4 = *(float *)(iVar3 + 8);
  local_10 = *(float *)(iVar3 + 0xc);
  local_c = *(float *)(iVar3 + 0x10);
  uVar7 = 0;
  if ((((param_2 < *(float *)(iVar3 + 4)) && (local_10 < param_2)) && (param_3 < local_4)) &&
     (local_c < param_3)) {
    return 0;
  }
  psVar4 = *(short **)(param_1 + 0x1c);
  sVar1 = *psVar4;
  fVar6 = *(float *)(iVar3 + 4);
  do {
    if (sVar1 == 0) {
      return psVar4[uVar7 * 4 + 1];
    }
    local_8 = (local_10 + fVar6) * _DAT_008933d4;
    fVar5 = (local_c + local_4) * _DAT_008933d4;
    if (local_8 <= param_2) {
      if (fVar5 <= param_3) {
        uVar2 = psVar4[uVar7 * 4 + 3];
        goto LAB_0073d73f;
      }
      uVar7 = (uint)(ushort)psVar4[uVar7 * 4 + 2];
      local_c = fVar5;
    }
    else {
      local_10 = local_8;
      local_8 = fVar6;
      if (fVar5 <= param_3) {
        uVar2 = psVar4[uVar7 * 4 + 1];
LAB_0073d73f:
        uVar7 = (uint)uVar2;
        local_4 = fVar5;
      }
      else {
        uVar7 = (uint)(ushort)psVar4[uVar7 * 4];
        local_c = fVar5;
      }
    }
    sVar1 = psVar4[uVar7 * 4];
    fVar6 = local_8;
  } while( true );
}


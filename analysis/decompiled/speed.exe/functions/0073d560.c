/* speed.exe 0073d560 FUN_0073d560; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_0073d560(int param_1,float param_2,float param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
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
    return '\0';
  }
  pcVar4 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar4;
  fVar6 = *(float *)(iVar3 + 4);
  do {
    if (cVar1 == '\0') {
      return pcVar4[uVar7 * 4 + 1];
    }
    local_8 = (local_10 + fVar6) * _DAT_008933d4;
    fVar5 = (local_c + local_4) * _DAT_008933d4;
    if (local_8 <= param_2) {
      if (fVar5 <= param_3) {
        bVar2 = pcVar4[uVar7 * 4 + 3];
        goto LAB_0073d63e;
      }
      uVar7 = (uint)(byte)pcVar4[uVar7 * 4 + 2];
      local_c = fVar5;
    }
    else {
      local_10 = local_8;
      local_8 = fVar6;
      if (fVar5 <= param_3) {
        bVar2 = pcVar4[uVar7 * 4 + 1];
LAB_0073d63e:
        uVar7 = (uint)bVar2;
        local_4 = fVar5;
      }
      else {
        uVar7 = (uint)(byte)pcVar4[uVar7 * 4];
        local_c = fVar5;
      }
    }
    cVar1 = pcVar4[uVar7 * 4];
    fVar6 = local_8;
  } while( true );
}


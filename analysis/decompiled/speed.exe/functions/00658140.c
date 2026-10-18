/* speed.exe 00658140 FUN_00658140; analysis pseudocode, not buildable source.
 * calls 006497b0 FUN_006497b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00658140(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  float local_24;
  undefined1 local_20 [12];
  float local_14;
  
  local_40 = *(float *)(param_1 + 0x10);
  local_44 = *(float *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    local_44 = local_44 - _DAT_00890d60;
  }
  else if (*(int *)(param_1 + 4) == 2) {
    local_40 = (float)(int)-(uint)*(ushort *)(param_1 + 0x1e);
    local_44 = (float)*(ushort *)(param_1 + 0x1e);
    local_44 = local_44 + local_44;
  }
  if (local_40 < local_44) {
    FUN_006497b0(local_30,local_40,0);
    local_38 = local_24;
    FUN_006497b0(local_20,local_44,0);
    local_34 = local_14;
    if ((local_14 != local_24) && (param_2 < local_24 == (param_2 == local_24))) {
      if (local_14 <= param_2) {
        return (float10)local_44;
      }
      iVar3 = 0;
      do {
        fVar1 = (param_2 - local_38) / (local_34 - local_38);
        fVar1 = fVar1 * local_44 + (_DAT_0089096c - fVar1) * local_40;
        FUN_006497b0(local_30,fVar1,0);
        iVar3 = iVar3 + 1;
        fVar2 = ABS(param_2 - local_24);
        if (fVar2 < _DAT_00890d60 != (fVar2 == _DAT_00890d60)) break;
        if (param_2 < local_24) {
          local_34 = local_24;
          local_44 = fVar1;
        }
        if (local_24 < param_2) {
          local_38 = local_24;
          local_40 = fVar1;
        }
      } while (iVar3 < 0x28);
      if (iVar3 < DAT_009257e4) {
        iVar3 = DAT_009257e4;
      }
      DAT_009257e4 = iVar3;
      if (fVar2 < _DAT_009257e8) {
        fVar2 = _DAT_009257e8;
      }
      _DAT_009257e8 = fVar2;
      return (float10)fVar1;
    }
  }
  return (float10)local_40;
}


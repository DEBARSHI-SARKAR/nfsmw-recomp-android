/* speed.exe 0077aa30 FUN_0077aa30; analysis pseudocode, not buildable source.
 * calls 0077a8b0 FUN_0077a8b0
 * calls 00466520 FUN_00466520
 * calls 004048c0 FUN_004048c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_0077aa30(undefined4 param_1,float *param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  undefined1 local_131;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_80 [32];
  
  local_131 = 0;
  if (((param_3 != 0) && (*(int *)(param_3 + 4) != 0)) &&
     (*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2 != 0)) {
    local_e8 = param_2[0x24];
    local_e4 = param_2[0x25];
    local_e0 = param_2[0x26];
    local_120 = *param_2;
    local_118 = param_2[2];
    local_dc = 0x3f800000;
    local_11c = param_2[1];
    local_114 = 0x3f800000;
    local_110 = _DAT_0089096c + 1.0;
    local_124 = 1.0;
    uVar2 = 0;
    local_ec = param_1;
    do {
      iVar5 = 2;
      uVar3 = uVar2;
      do {
        local_130 = local_e8 * *(float *)((int)&DAT_008b5cd0 + uVar3);
        local_12c = local_e4 * *(float *)((int)&DAT_008b5cd4 + uVar3);
        local_128 = local_e0 * *(float *)((int)&DAT_008b5cd8 + uVar3);
        FUN_00466520(&local_130,param_2 + 4,&local_10c);
        *(float *)((int)local_80 + uVar3 + 0xc) = local_110;
        uVar2 = uVar3 + 0x10;
        iVar5 = iVar5 + -1;
        *(float *)((int)local_80 + uVar3) = local_120 + local_10c;
        *(float *)((int)local_80 + uVar3 + 4) = local_11c + local_108;
        *(float *)((int)local_80 + uVar3 + 8) = local_118 + local_104;
        *(undefined4 *)((int)local_80 + uVar3 + 0xc) = 0x3f800000;
        uVar3 = uVar2;
      } while (iVar5 != 0);
    } while (uVar2 < 0x80);
    local_120 = DAT_008a2fd0;
    local_11c = DAT_008a2fd4;
    local_118 = DAT_008a2fd8;
    local_114 = DAT_008a2fdc;
    uVar2 = 0;
    pfVar4 = local_80 + 2;
    do {
      local_10c = local_120 + pfVar4[-2];
      local_108 = local_11c + pfVar4[-1];
      local_104 = local_118 + *pfVar4;
      local_fc = local_120 + pfVar4[2];
      local_f8 = local_11c + pfVar4[3];
      local_f4 = local_118 + pfVar4[4];
      FUN_004048c0();
      cVar1 = FUN_0077a8b0(param_3,0,&local_10c,&local_d8);
      if (cVar1 != '\0') {
        if (param_4 == (undefined4 *)0x0) {
          return 1;
        }
        local_110 = local_fc - local_d8;
        if ((local_f4 - local_d0) * (local_f4 - local_d0) +
            (local_f8 - local_d4) * (local_f8 - local_d4) + local_110 * local_110 <=
            (local_104 - local_d0) * (local_104 - local_d0) +
            (local_108 - local_d4) * (local_108 - local_d4) +
            (local_10c - local_d8) * (local_10c - local_d8)) {
          local_130 = local_fc;
          local_12c = local_f8;
          local_128 = local_f4;
        }
        else {
          local_130 = local_10c;
          local_12c = local_108;
          local_128 = local_104;
        }
        local_124 = -((local_130 - local_d8) * local_c8 +
                     local_c4 * (local_12c - local_d4) + local_c0 * (local_128 - local_d0));
        if (local_124 < _DAT_00890968) {
          local_c8 = -local_c8;
          local_c4 = -local_c4;
          local_c0 = -local_c0;
          local_124 = -local_124;
        }
        local_bc = local_124;
        cVar1 = (**(code **)*param_4)(&local_d8,&local_130,param_5);
        if (cVar1 != '\0') {
          local_120 = local_c8 * local_bc + local_120;
          local_11c = local_c4 * local_bc + local_11c;
          local_118 = local_c0 * local_bc + local_118;
        }
        local_131 = 1;
      }
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 8;
    } while (uVar2 < 4);
  }
  return local_131;
}


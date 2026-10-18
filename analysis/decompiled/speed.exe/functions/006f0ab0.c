/* speed.exe 006f0ab0 FUN_006f0ab0; analysis pseudocode, not buildable source.
 * calls 006e7d20 FUN_006e7d20
 * calls 006ec950 FUN_006ec950
 * calls 006ec5c0 FUN_006ec5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_006f0ab0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint3 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int local_28;
  
  if ((*(char *)(param_1 + 0x25) == '\x01') && (*(char *)(param_2 + 0x25) == '\x01')) {
    local_28 = 0;
    pfVar6 = param_2;
    pfVar8 = param_1;
    do {
      if (local_28 == 1) {
        pfVar6 = param_1;
        pfVar8 = param_2;
      }
      iVar9 = 0;
      do {
        if (iVar9 == 1) {
          uVar4 = 2;
        }
        else {
          uVar4 = (uint)(iVar9 == 2);
        }
        pfVar7 = pfVar8 + (uVar4 + 1) * 4;
        fVar1 = *pfVar7;
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar1 = (((ABS((*pfVar8 - *pfVar6) * fVar1 +
                       fVar2 * (pfVar8[1] - pfVar6[1]) + fVar3 * (pfVar8[2] - pfVar6[2])) -
                  pfVar8[uVar4 + 0x28]) -
                 ABS(fVar1 * pfVar6[0x10] + fVar3 * pfVar6[0x12] + fVar2 * pfVar6[0x11])) -
                ABS(fVar1 * pfVar6[0x14] + fVar3 * pfVar6[0x16] + fVar2 * pfVar6[0x15])) -
                ABS(fVar2 * pfVar6[0x19] + fVar1 * pfVar6[0x18] + fVar3 * pfVar6[0x1a]);
        uVar5 = (uint3)(byte)(fVar1 < _DAT_00890968 |
                              (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10) >> 8
                                    ) |
                             (byte)((ushort)((ushort)(fVar1 == _DAT_00890968) << 0xe) >> 8));
        if (fVar1 >= _DAT_00890968 && (fVar1 == _DAT_00890968) == 0) {
          return (uint)uVar5 << 8;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      local_28 = local_28 + 1;
      if (1 < local_28) {
        return CONCAT31(uVar5,1);
      }
    } while( true );
  }
  param_1[0x24] = -100000.0;
  if (*(char *)(param_1 + 0x25) == '\x01') {
    if (*(char *)(param_2 + 0x25) == '\x01') {
      uVar4 = FUN_006e7d20(param_1,param_2,param_1);
      return uVar4;
    }
    if (*(char *)(param_2 + 0x25) == '\x02') {
      uVar4 = FUN_006ec5c0(param_2,param_1,param_1);
      return uVar4;
    }
  }
  else if (*(char *)(param_1 + 0x25) == '\x02') {
    if (*(char *)(param_2 + 0x25) == '\x02') {
      uVar4 = FUN_006ec950(param_1,param_2,param_1);
      return uVar4;
    }
    if (*(char *)(param_2 + 0x25) == '\x01') {
      uVar4 = FUN_006ec5c0(param_1,param_2,param_1);
      return uVar4;
    }
  }
  return (uint)param_2 & 0xffffff00;
}


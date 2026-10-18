/* speed.exe 006978f0 FUN_006978f0; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 * calls 00401670 FUN_00401670
 * calls 004866c0 FUN_004866c0
 * calls 00486bd0 FUN_00486bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006978f0(int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = (float *)**(undefined4 **)(param_1 + 0x78);
  if (*(char *)((int)pfVar3 + 0x5d) == '\0') {
    pfVar1 = pfVar3 + 0x1c;
    FUN_00401670(param_1 + 0xf0,pfVar1,&local_2c);
    fVar4 = param_2 * pfVar3[0xf];
    pfVar2 = pfVar3 + 0x18;
    pfVar3[8] = fVar4 * pfVar3[0x14] + pfVar3[8];
    pfVar3[9] = fVar4 * pfVar3[0x15] + pfVar3[9];
    pfVar3[10] = fVar4 * pfVar3[0x16] + pfVar3[10];
    *pfVar2 = param_2 * *pfVar2;
    pfVar3[0x19] = param_2 * pfVar3[0x19];
    pfVar3[0x1a] = param_2 * pfVar3[0x1a];
    pfVar3[4] = param_2 * pfVar3[8] + pfVar3[4];
    pfVar3[5] = param_2 * pfVar3[9] + pfVar3[5];
    pfVar3[6] = param_2 * pfVar3[10] + pfVar3[6];
    FUN_00401670(pfVar2,param_1 + 0x90,pfVar2);
    pfVar3[0xc] = pfVar3[0xc] + *pfVar2;
    pfVar3[0xd] = pfVar3[0x19] + pfVar3[0xd];
    pfVar3[0xe] = pfVar3[0x1a] + pfVar3[0xe];
    fVar4 = pfVar3[8];
    fVar5 = _DAT_008aabf4;
    if ((fVar4 < _DAT_008aabf4) && (fVar5 = fVar4, fVar4 < _DAT_008ab380)) {
      fVar5 = _DAT_008ab380;
    }
    fVar4 = pfVar3[9];
    pfVar3[8] = fVar5;
    fVar5 = _DAT_008aabf4;
    if ((fVar4 < _DAT_008aabf4) && (fVar5 = fVar4, fVar4 < _DAT_008ab380)) {
      fVar5 = _DAT_008ab380;
    }
    fVar4 = pfVar3[10];
    pfVar3[9] = fVar5;
    fVar5 = _DAT_008aabf4;
    if ((fVar4 < _DAT_008aabf4) && (fVar5 = fVar4, fVar4 < _DAT_008ab380)) {
      fVar5 = _DAT_008ab380;
    }
    fVar4 = pfVar3[0xc];
    pfVar3[10] = fVar5;
    fVar5 = _DAT_008aae68;
    if ((fVar4 < _DAT_008aae68) && (fVar5 = fVar4, fVar4 < _DAT_008ab37c)) {
      fVar5 = _DAT_008ab37c;
    }
    fVar4 = pfVar3[0xd];
    pfVar3[0xc] = fVar5;
    fVar5 = _DAT_008aae68;
    if ((fVar4 < _DAT_008aae68) && (fVar5 = fVar4, fVar4 < _DAT_008ab37c)) {
      fVar5 = _DAT_008ab37c;
    }
    fVar4 = pfVar3[0xe];
    pfVar3[0xd] = fVar5;
    fVar5 = _DAT_008aae68;
    if ((fVar4 < _DAT_008aae68) && (fVar5 = fVar4, fVar4 < _DAT_008ab37c)) {
      fVar5 = _DAT_008ab37c;
    }
    pfVar3[0xe] = fVar5;
    if (_DAT_00890968 !=
        pfVar3[0xe] * pfVar3[0xe] + pfVar3[0xd] * pfVar3[0xd] + pfVar3[0xc] * pfVar3[0xc]) {
      local_20 = param_2 * pfVar3[0xc];
      local_14 = 0;
      local_1c = param_2 * pfVar3[0xd];
      local_18 = param_2 * pfVar3[0xe];
      FUN_004866c0(pfVar3,&local_20,&local_10);
      fVar4 = local_10 * _DAT_008933d4 + *pfVar3;
      fVar7 = local_c * _DAT_008933d4 + pfVar3[1];
      fVar8 = local_8 * _DAT_008933d4 + pfVar3[2];
      fVar6 = local_4 * _DAT_008933d4 + pfVar3[3];
      fVar5 = _DAT_0089096c / SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
      *pfVar3 = fVar4 * fVar5;
      pfVar3[1] = fVar7 * fVar5;
      pfVar3[2] = fVar8 * fVar5;
      pfVar3[3] = fVar6 * fVar5;
      FUN_005ca910(pfVar3,pfVar1);
    }
    FUN_00486bd0(pfVar1,param_1 + 0x90);
    FUN_00401670(param_1 + 0xf0,pfVar1,&local_20);
    pfVar3[4] = (local_2c - local_20) + pfVar3[4];
    pfVar3[5] = (local_28 - local_1c) + pfVar3[5];
    pfVar3[6] = (local_24 - local_18) + pfVar3[6];
    return;
  }
  pfVar3[8] = 0.0;
  pfVar3[9] = 0.0;
  pfVar3[10] = 0.0;
  pfVar3[0xc] = 0.0;
  pfVar3[0xd] = 0.0;
  pfVar3[0xe] = 0.0;
  return;
}


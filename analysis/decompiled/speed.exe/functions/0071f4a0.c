/* speed.exe 0071f4a0 FUN_0071f4a0; analysis pseudocode, not buildable source.
 * calls 004aebb0 FUN_004aebb0
 * calls 0071b1a0 FUN_0071b1a0
 * calls 0065faf0 FUN_0065faf0
 * calls 00704b30 FUN_00704b30
 * calls 007c4b80 FUN_007c4b80
 * calls 00700ed0 FUN_00700ed0
 * calls 005cc240 FUN_005cc240
 * calls 00700e10 FUN_00700e10
 * calls 00405da0 FUN_00405da0
 * calls 0071b4e0 FUN_0071b4e0
 * calls 0071b740 FUN_0071b740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071f4a0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  
  fVar7 = (float10)FUN_004aebb0();
  iVar6 = DAT_00993cc8;
  if ((((float10)_DAT_00890968 == fVar7) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x28) == 0))
     || (DAT_009922ac != 0)) {
    if (param_1[1] != -1) {
      (**(code **)(*param_1 + 0x14))();
      return;
    }
  }
  else {
    iVar2 = param_1[1];
    if (iVar2 != -1) {
      param_1[9] = (int)((float)(DAT_00925ae8 - param_1[6]) * _DAT_00890984);
      param_1[0x12] = (int)((float)(DAT_00925ae8 - param_1[8]) * _DAT_00890984);
      if (*(int *)(iVar6 + 0xec) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar6 + 0xf0) - *(int *)(iVar6 + 0xec) >> 2;
      }
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
      param_1[0xb] = (int)((float)param_1[0xb] * _DAT_008a0ba4 + fVar1 * _DAT_00890eac);
      param_1[0xc] = (int)((float)param_1[0xc] * _DAT_008a0ba4 +
                          (float)(int)*(short *)(iVar6 + 0x148) * _DAT_00890eac);
      param_1[0xd] = (int)((float)param_1[0xd] * _DAT_00896b58 +
                          *(float *)(iVar6 + 0x108) * _DAT_00890ea8);
      if (*(float *)(iVar6 + 0x13c) <= _DAT_00890968) {
        fVar1 = (float)param_1[0xe];
      }
      else {
        fVar1 = *(float *)(iVar6 + 0x13c);
      }
      param_1[0xe] = (int)((float)param_1[0xe] * _DAT_008a0ba4 + fVar1 * _DAT_00890eac);
    }
    if (iVar2 < 0x14e) {
      if (iVar2 == 0x14d) {
        FUN_00700e10();
      }
      else {
        switch(iVar2) {
        case 0:
          FUN_0071b1a0();
          break;
        case 1:
          FUN_0071b4e0();
          break;
        case 2:
          FUN_0071b740();
          break;
        case 3:
          FUN_00704b30();
        }
      }
    }
    else if (iVar2 == 999) {
      FUN_00700ed0();
    }
    if ((((char)param_1[0x13] != '\0') && (iVar6 = param_1[1], iVar6 != 0x14d)) &&
       ((iVar6 != 999 && (iVar6 != -1)))) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (param_1[1] != -1) {
      uVar4 = FUN_007c4b80();
      uVar5 = FUN_005cc240("Control");
      iVar6 = FUN_00405da0(0,0,uVar4,0);
      *(undefined4 *)(iVar6 + 4) = uVar5;
      FUN_0065faf0();
    }
  }
  return;
}


/* speed.exe 0046b1f0 FUN_0046b1f0; analysis pseudocode, not buildable source.
 * calls 00653790 FUN_00653790
 * calls 00467bb0 FUN_00467bb0
 * calls 0045f640 FUN_0045f640
 * calls 00651790 FUN_00651790
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046b1f0(int param_1,short *param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float fVar6;
  float10 fVar7;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((param_2 == (short *)0x0) ||
     ((((sVar3 = *param_2, sVar3 != 2 && (sVar3 != 3)) && (sVar3 != 4)) &&
      ((sVar3 != 6 && (sVar3 != 5)))))) {
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_00651790(*(int *)(param_1 + 0x80) + 0x50);
      puVar5 = *(undefined4 **)(param_1 + 0x90);
      *puVar5 = puVar5[2];
      puVar5[1] = puVar5[3];
      *(undefined2 *)(puVar5 + 10) = 0;
      puVar5[0xb] = puVar5[0xd];
      puVar5[0xc] = puVar5[0xe];
      *(undefined2 *)(puVar5 + 0x15) = 0;
      puVar5[0x16] = puVar5[0x18];
      puVar5[0x17] = puVar5[0x19];
      *(undefined2 *)(puVar5 + 0x20) = 0;
    }
  }
  else {
    pfVar4 = *(float **)(param_1 + 0x80);
    local_1c = pfVar4[1];
    local_20 = *pfVar4;
    local_18 = pfVar4[2];
    pfVar1 = pfVar4 + 0x14;
    fVar2 = local_20 * *pfVar1 + local_1c * pfVar4[0x15] + local_18 * pfVar4[0x16];
    if (fVar2 < _DAT_00890968) {
      FUN_0045f640(&local_20,&local_20,pfVar1,fVar2 * _DAT_00890e94);
    }
    fVar7 = (float10)FUN_00653790(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10));
    fVar2 = (float)fVar7;
    FUN_0045f490(&local_20,&local_20);
    local_20 = local_20 * fVar2;
    local_1c = local_1c * fVar2;
    local_18 = local_18 * fVar2;
    FUN_0045f640(&local_20,&local_20,pfVar1,_DAT_0089096c - fVar2);
    fVar2 = _DAT_0089096c -
            (float)(DAT_00925ae8 - *(int *)(param_1 + 0xa8)) * _DAT_00890984 * _DAT_00894594;
    fVar6 = _DAT_00890968;
    if ((_DAT_00890968 < fVar2) && (fVar6 = fVar2, _DAT_0089096c < fVar2)) {
      fVar6 = _DAT_0089096c;
    }
    fVar2 = *(float *)(*(int *)(param_1 + 0x80) + 0x58);
    local_18 = (_DAT_0089096c - fVar2 * fVar2) * fVar6 * local_18;
    FUN_00651790(&local_20);
    if (param_3 != '\0') {
      FUN_00467bb0();
      return;
    }
  }
  return;
}


/* speed.exe 00766cb0 FUN_00766cb0; analysis pseudocode, not buildable source.
 * calls 006200f0 FUN_006200f0
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 * calls 00766960 FUN_00766960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00766cb0(int *param_1,int param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined1 auStack_1e4 [64];
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [60];
  undefined1 auStack_164 [176];
  undefined1 auStack_b4 [180];
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0x20))();
  fStack_224 = *pfVar5;
  fStack_220 = pfVar5[1];
  fStack_21c = pfVar5[2];
  fVar8 = (float10)(**(code **)(*param_1 + 0x14))();
  fStack_228 = (float)fVar8;
  fVar8 = (float10)(**(code **)(*param_1 + 0x2c))();
  fStack_218 = (float)(fVar8 * (float10)param_3 + (float10)fStack_228);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x24))();
  fStack_208 = param_3 * *pfVar5;
  fStack_204 = param_3 * pfVar5[1];
  fStack_200 = param_3 * pfVar5[2];
  fStack_214 = *(float *)(param_2 + 0x30);
  fStack_210 = *(float *)(param_2 + 0x34);
  fStack_20c = *(float *)(param_2 + 0x38);
  fStack_224 = fStack_224 + fStack_208;
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar6 = uVar1 >> 4 & 0xf;
  fStack_220 = fStack_204 + fStack_220;
  fStack_21c = fStack_21c + fStack_200;
  fStack_218 = fStack_218 + *(float *)(param_2 + 0x3c);
  fStack_218 = fStack_218 * fStack_218;
  if (uVar6 == 1) {
    if (((uVar1 & 0x80000) != 0) &&
       (pfVar5 = (float *)(**(code **)(*param_1 + 0x24))(),
       *pfVar5 * *(float *)(param_2 + 0x20) +
       *(float *)(param_2 + 0x24) * pfVar5[1] + *(float *)(param_2 + 0x28) * pfVar5[2] <
       _DAT_00890968)) {
      return 0;
    }
    fStack_210 = fStack_228;
    fStack_214 = fStack_228;
    fStack_20c = fStack_228;
    (**(code **)(*param_1 + 0x40))(auStack_1a0);
    FUN_0048b5a0(auStack_1a4,&fStack_228,&fStack_218,2,&fStack_20c);
    FUN_006200f0(auStack_1e4,0,0);
    fStack_1f0 = *(float *)(param_2 + 0xc) * _DAT_008933d4;
    uStack_1fc = *(undefined4 *)(param_2 + 0x34);
    fStack_200 = *(float *)(param_2 + 0x30);
    uStack_1f8 = *(undefined4 *)(param_2 + 0x38);
    fStack_1ec = *(float *)(param_2 + 0x14) * _DAT_008933d4;
    fStack_1e8 = *(float *)(param_2 + 0x2c) * _DAT_008933d4;
    uStack_1f4 = 0x3f800000;
    FUN_0048b5a0(auStack_1e4,&fStack_200,&fStack_1f0,1,&DAT_008a2fb4);
    cVar4 = FUN_0048c100(auStack_164,auStack_b4,auStack_164);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  else if (uVar6 == 2) {
    if ((fStack_20c - fStack_21c) * (fStack_20c - fStack_21c) +
        (fStack_214 - fStack_224) * (fStack_214 - fStack_224) +
        (fStack_210 - fStack_220) * (fStack_210 - fStack_220) < fStack_218) {
      if ((uVar1 & 0x80000) != 0) {
        uVar7 = (**(code **)(*param_1 + 0x24))();
        cVar4 = FUN_00766960(uVar7);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  else if ((uVar6 == 3) &&
          ((fStack_20c - fStack_21c) * (fStack_20c - fStack_21c) +
           (fStack_214 - fStack_224) * (fStack_214 - fStack_224) < fStack_218)) {
    if ((uVar1 & 0x80000) != 0) {
      uVar7 = (**(code **)(*param_1 + 0x24))();
      cVar4 = FUN_00766960(uVar7);
      if (cVar4 == '\0') {
        return 0;
      }
    }
    fVar2 = *(float *)(param_2 + 0x14) * _DAT_008933d4;
    fVar3 = *(float *)(param_2 + 0x34) - fVar2;
    if ((fVar3 < fStack_220 + fStack_228 != (fVar3 == fStack_220 + fStack_228)) &&
       (fStack_220 - fStack_228 < fVar2 + *(float *)(param_2 + 0x34))) {
      return 1;
    }
  }
  return 0;
}


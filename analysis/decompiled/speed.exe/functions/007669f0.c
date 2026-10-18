/* speed.exe 007669f0 FUN_007669f0; analysis pseudocode, not buildable source.
 * calls 006200f0 FUN_006200f0
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 * calls 00766960 FUN_00766960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007669f0(int *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
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
  undefined1 auStack_1f4 [8];
  undefined1 auStack_1ec [4];
  undefined1 auStack_1e8 [64];
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [60];
  undefined1 auStack_168 [176];
  undefined1 auStack_b8 [184];
  
  fVar8 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar1 = (float)fVar8;
  fVar8 = (float10)(**(code **)(*param_1 + 0x2c))();
  fVar2 = *(float *)(param_2 + 0x30);
  fStack_220 = *(float *)(param_2 + 0x34);
  fVar8 = fVar8 * (float10)param_3 + (float10)fVar1 + (float10)*(float *)(param_2 + 0x3c);
  fStack_21c = *(float *)(param_2 + 0x38);
  fStack_20c = (float)(fVar8 * fVar8);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x24))();
  fStack_208 = param_3 * *pfVar5;
  fStack_204 = param_3 * pfVar5[1];
  fStack_200 = param_3 * pfVar5[2];
  pfVar5 = (float *)(**(code **)(*param_1 + 0x20))();
  uVar7 = *(uint *)(param_2 + 0x10);
  fStack_218 = fStack_208 + *pfVar5;
  fStack_214 = fStack_204 + pfVar5[1];
  fStack_210 = fStack_200 + pfVar5[2];
  if (((byte)uVar7 & 0xf0) == 0x20) {
    fVar2 = fVar2 - fStack_218;
    if ((fStack_220 - fStack_214) * (fStack_220 - fStack_214) +
        (fStack_21c - fStack_210) * (fStack_21c - fStack_210) + fVar2 * fVar2 <= fStack_20c) {
      if ((uVar7 & 0x80000) != 0) {
        uVar6 = (**(code **)(*param_1 + 0x24))();
        cVar4 = FUN_00766960(uVar6);
        if (cVar4 == '\0') {
          return false;
        }
      }
      return true;
    }
  }
  else {
    fVar2 = fVar2 - fStack_218;
    if ((fStack_21c - fStack_210) * (fStack_21c - fStack_210) + fVar2 * fVar2 <= fStack_20c) {
      if ((uVar7 & 0x80000) != 0) {
        uVar6 = (**(code **)(*param_1 + 0x24))();
        cVar4 = FUN_00766960(uVar6);
        if (cVar4 == '\0') {
          return false;
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10) >> 4 & 0xf;
      if (uVar7 == 3) {
        fVar2 = *(float *)(param_2 + 0x14) * _DAT_008933d4;
        fVar3 = *(float *)(param_2 + 0x34) - fVar2;
        if ((fVar3 < fStack_214 + fVar1 != (fVar3 == fStack_214 + fVar1)) &&
           (fStack_214 - fVar1 < fVar2 + *(float *)(param_2 + 0x34))) {
          return true;
        }
      }
      else if (uVar7 == 1) {
        (**(code **)(*param_1 + 0x4c))(auStack_1ec);
        (**(code **)(*param_1 + 0x40))(auStack_1a4);
        FUN_0048b5a0(auStack_1a8,&fStack_220,auStack_1f4,1,&fStack_210);
        FUN_006200f0(auStack_1e8,0,0);
        fStack_200 = *(float *)(param_2 + 0x34);
        fStack_204 = *(float *)(param_2 + 0x30);
        uStack_1fc = *(undefined4 *)(param_2 + 0x38);
        uStack_1f8 = 0x3f800000;
        FUN_0048b5a0(auStack_1e8,&fStack_204,&stack0xfffffdd4,1,&DAT_008a2fb4);
        cVar4 = FUN_0048c100(auStack_168,auStack_b8,auStack_168);
        return cVar4 != '\0';
      }
    }
  }
  return false;
}


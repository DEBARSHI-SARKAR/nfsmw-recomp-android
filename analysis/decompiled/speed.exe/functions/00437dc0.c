/* speed.exe 00437dc0 FUN_00437dc0; analysis pseudocode, not buildable source.
 * calls 00404f20 FUN_00404f20
 * calls 0045da70 FUN_0045da70
 * calls 005cb420 FUN_005cb420
 * calls 00778820 FUN_00778820
 * calls 00774260 FUN_00774260
 * calls 004109c0 FUN_004109c0
 * calls 00432bf0 FUN_00432bf0
 * calls 007862d0 FUN_007862d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00437dc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_40 [32];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  DAT_0090d5e8 = DAT_0090d5e8 == '\0';
  FUN_00432bf0(DAT_0092fe24,DAT_0092fe24 + DAT_0092fe2c,
               (int)(DAT_0092fe24 + DAT_0092fe2c) - (int)DAT_0092fe24 >> 2,&LAB_00404ef0);
  FUN_00774260();
  puVar5 = DAT_0092fe24;
  if (DAT_0092fe24 != DAT_0092fe24 + DAT_0092fe2c) {
    do {
      cVar4 = (*(code *)**(undefined4 **)*puVar5)(local_40,&local_a4);
      if (cVar4 != '\0') {
        fStack_c0 = fStack_20;
        fStack_bc = fStack_1c;
        fStack_b8 = fStack_18;
        fVar6 = (float10)FUN_0045da70(0x40000000);
        FUN_005cb420(&fStack_80,(float)((fVar6 - (float10)_DAT_0089096c) * (float10)_DAT_00890f14));
        fStack_ac = fStack_b8;
        fVar1 = fStack_60 * fStack_b8;
        fStack_b0 = fStack_bc;
        fStack_b4 = fStack_c0;
        fVar2 = fStack_5c * fStack_b8;
        fVar3 = fStack_7c * fStack_c0;
        fStack_b8 = fStack_78 * fStack_c0 + fStack_68 * fStack_bc + fStack_58 * fStack_b8;
        fStack_c0 = fStack_c0 * fStack_80 + fStack_70 * fStack_bc + fVar1;
        fStack_bc = fVar3 + fStack_6c * fStack_bc + fVar2;
        fVar6 = (float10)FUN_0045da70(0x40000000);
        fVar1 = fStack_c0 * local_a4 + fStack_a0 * fStack_bc + fStack_9c * fStack_b8;
        fVar2 = _DAT_00890968;
        if (_DAT_00890968 < fVar1) {
          fVar2 = fVar1;
        }
        fVar6 = (float10)fVar2 + (fVar6 - (float10)_DAT_0089096c) * (float10)_DAT_00890dd0 +
                (float10)_DAT_00890540;
        fStack_8c = (float)((float10)fStack_c0 * fVar6 + (float10)fStack_10);
        fStack_88 = (float)((float10)fStack_bc * fVar6 + (float10)fStack_c);
        fStack_84 = (float)((float10)fStack_b8 * fVar6 + (float10)fStack_8);
        fVar1 = fVar1 * _DAT_00892b64;
        fStack_a8 = _DAT_0089096c;
        if ((fVar1 < _DAT_0089096c) && (fStack_a8 = fVar1, fVar1 < _DAT_00890968)) {
          fStack_a8 = 0.0;
        }
        fVar6 = (float10)FUN_0045da70(0x3f800000);
        if (fVar6 <= (float10)fStack_a8 * (float10)_DAT_00891068 + (float10)_DAT_0089096c) {
          fStack_c0 = -fStack_c0;
          fStack_bc = -fStack_bc;
          fStack_b8 = -fStack_b8;
        }
        FUN_007862d0(&fStack_8c,&fStack_c0,0,0x3f800000);
        if (((*(char *)(param_1 + 0x50) != '\0') && (cVar4 = FUN_00778820(), cVar4 != '\0')) &&
           (cVar4 = FUN_00404f20(param_1), cVar4 != '\0')) {
          uStack_98 = *(undefined4 *)(param_1 + 0x98);
          uStack_94 = *(undefined4 *)(param_1 + 0x9c);
          uStack_90 = *(undefined4 *)(param_1 + 0xa0);
          cVar4 = FUN_004109c0(&uStack_98);
          if (cVar4 == '\0') {
            return 1;
          }
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_0092fe24 + DAT_0092fe2c);
  }
  return 0;
}


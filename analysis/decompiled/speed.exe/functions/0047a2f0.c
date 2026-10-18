/* speed.exe 0047a2f0 FUN_0047a2f0; analysis pseudocode, not buildable source.
 * calls 00402060 FUN_00402060
 * calls 0045f490 FUN_0045f490
 * calls 0047a200 FUN_0047a200
 * calls 005d59f0 FUN_005d59f0
 * calls 0045ed20 thunk_FUN_006bd940
 */

uint __thiscall FUN_0047a2f0(int *param_1,undefined4 param_2,int *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float *pfVar6;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float unaff_EBX;
  float10 fVar7;
  float10 fVar8;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_24 [32];
  
  piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 0x24))();
    if ((uVar5 != 0) && (*(int **)(uVar5 + 0x1c) != (int *)0x0)) {
      uVar2 = *(uint *)(*param_1 + 0x94);
      uVar5 = (**(code **)(**(int **)(uVar5 + 0x1c) + 0x70))();
      if (uVar5 == uVar2) {
        fStack_70 = *(float *)(*param_1 + 0x10);
        fVar7 = (float10)(**(code **)(*param_3 + 0x90))();
        fVar8 = ABS((float10)fStack_70 - fVar7);
        fVar7 = (float10)param_4[1];
        uVar5 = CONCAT22(extraout_var,
                         (ushort)(fVar8 < fVar7) << 8 | (ushort)(NAN(fVar8) || NAN(fVar7)) << 10 |
                         (ushort)(fVar8 == fVar7) << 0xe);
        if (fVar8 < fVar7 || (fVar8 == fVar7) != 0) {
          FUN_0045f490(&fStack_50,*param_1);
          piVar4 = (int *)(**(code **)(*param_3 + 4))();
          (**(code **)(*piVar4 + 0x68))(&uStack_6c);
          fStack_60 = -fStack_70;
          uStack_64 = uStack_68;
          uStack_5c = uStack_6c;
          FUN_0045f490(&fStack_44,&uStack_64);
          fVar3 = fStack_54 * fStack_44 + fStack_40 * fStack_50 + fStack_3c * fStack_4c;
          fVar1 = *param_4;
          uVar5 = CONCAT22(extraout_var_00,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe);
          if (fVar3 >= fVar1) {
            pfVar6 = (float *)(**(code **)(*param_3 + 0xc))();
            fStack_34 = pfVar6[2];
            fStack_30 = -*pfVar6;
            fStack_2c = pfVar6[1];
            thunk_FUN_006bd940(auStack_24,param_2,&fStack_34);
            FUN_0047a200(auStack_24,&stack0xffffff88,&fStack_74);
            fVar7 = (float10)FUN_00402060(unaff_EBX,0,0x3f800000);
            fVar8 = (float10)unaff_EBX;
            uVar5 = CONCAT22(extraout_var_01,
                             (ushort)(fVar8 < fVar7) << 8 | (ushort)(NAN(fVar8) || NAN(fVar7)) << 10
                             | (ushort)(fVar8 == fVar7) << 0xe);
            if (fVar8 == fVar7) {
              fVar7 = (float10)FUN_00402060(fStack_74,0,0x3f800000);
              fVar8 = (float10)fStack_74;
              uVar5 = CONCAT22(extraout_var_02,
                               (ushort)(fVar8 < fVar7) << 8 |
                               (ushort)(NAN(fVar8) || NAN(fVar7)) << 10 |
                               (ushort)(fVar8 == fVar7) << 0xe);
              if (fVar8 == fVar7) {
                return CONCAT31((int3)(uVar5 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}


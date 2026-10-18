/* speed.exe 00479f80 FUN_00479f80; analysis pseudocode, not buildable source.
 * calls 00410180 FUN_00410180
 * calls 004677f0 FUN_004677f0
 * calls 00469b90 FUN_00469b90
 * calls 0065faf0 FUN_0065faf0
 * calls 00471cd0 FUN_00471cd0
 * calls 00479eb0 FUN_00479eb0
 * calls 00469e30 FUN_00469e30
 * calls 00727480 FUN_00727480
 * calls 00402060 FUN_00402060
 * calls 0070a6e0 FUN_0070a6e0
 * calls 00471a70 FUN_00471a70
 * calls 005d59f0 FUN_005d59f0
 * calls 004023c0 FUN_004023c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479f80(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [8];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  if ((((DAT_008ee348 < 1) && (cVar1 = FUN_00469e30(), cVar1 != '\0')) && (DAT_009885c8 == 0)) &&
     ((piVar2 = (int *)FUN_005d59f0(&LAB_004040e0), piVar2 == (int *)0x0 ||
      (iVar3 = (**(code **)(*piVar2 + 0x30))(), iVar3 != 1)))) {
    uVar4 = (**(code **)(*param_1 + 0x70))();
    iVar3 = FUN_00471a70(uVar4);
    if ((iVar3 != 0) && ((cVar1 = FUN_004677f0(), cVar1 == '\0' && (DAT_00911055 == '\0')))) {
      (**(code **)(*param_1 + 0x68))(auStack_7c);
      fVar7 = (float10)FUN_00410180(auStack_80);
      fStack_84 = (float)fVar7;
      if ((float10)_DAT_0089481c <= fVar7) {
        pfVar5 = (float *)(**(code **)(*param_1 + 0x60))();
        fStack_70 = -*pfVar5;
        fStack_6c = pfVar5[1];
        fStack_74 = pfVar5[2];
        iVar6 = FUN_00727480(&fStack_74,0xc,0);
        fStack_8c = 0.0;
        fStack_90 = 0.0;
        fVar7 = (float10)FUN_00471cd0(param_1,0x40400000,&fStack_8c,&fStack_90);
        fStack_88 = (float)fVar7;
        if ((((fVar7 < (float10)_DAT_00895014) && (fStack_8c < _DAT_00895014)) &&
            (fStack_90 < _DAT_00895010)) && (_DAT_0089096c < fStack_88)) {
          if ((*(float *)(&UNK_00894658 + (uint)(iVar6 != 0) * 4) < fStack_8c) &&
             (*(float *)(&UNK_00894660 + (uint)(iVar6 != 0) * 4) < fStack_90 * fStack_84)) {
            FUN_00479eb0(*(undefined4 *)(iVar3 + 8),"CDActionTrackCar");
            fVar7 = (float10)FUN_00402060(fStack_90 + fStack_90,0x3f800000,0x40800000);
            *(float *)(iVar3 + 0x2b8) = (float)(fVar7 * (float10)_DAT_00894b18);
            FUN_004023c0("MomentStrm");
            iVar3 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                                 DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                                 DAT_008a2fc8,DAT_008a2fcc,0,0xa3447e3f);
            *(float *)(iVar3 + 4) = fStack_84;
            FUN_0065faf0();
          }
          if ((DAT_00993cc8 != 0) && (*(int *)(DAT_00993cc8 + 0x204) != 0)) {
            FUN_0070a6e0(fStack_8c,fStack_90);
          }
        }
      }
    }
  }
  return;
}


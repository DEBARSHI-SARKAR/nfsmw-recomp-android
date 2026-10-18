/* speed.exe 004e71c0 FUN_004e71c0; analysis pseudocode, not buildable source.
 * calls 004dd540 FUN_004dd540
 * calls 004b0cc0 FUN_004b0cc0
 * calls 004abf70 FUN_004abf70
 * calls 00402060 FUN_00402060
 * calls 007c4b80 FUN_007c4b80
 * calls 004cf520 FUN_004cf520
 * calls 004b0c50 FUN_004b0c50
 * calls 004ba760 FUN_004ba760
 * calls 004de250 FUN_004de250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e71c0(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fStack_34;
  undefined1 auStack_30 [4];
  float fStack_2c;
  int iStack_28;
  int aiStack_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086cfbb;
  local_c = ExceptionList;
  if (((*(char *)(param_1[5] + 0x38) != '\0') && (param_1[10] == 0)) &&
     (*(char *)(*(int *)(param_1[5] + 0x34) + 0x22c) != '\0')) {
    ExceptionList = &local_c;
    cVar2 = (**(code **)(*param_1 + 0x34))();
    if (cVar2 != '\0') {
      fVar6 = (float10)FUN_004de250();
      fStack_34 = (float)fVar6;
      if (((float10)_DAT_00890bf8 < fVar6) &&
         ((float)param_1[0xb] + _DAT_008959e4 <= *(float *)(param_1[5] + 0x3c))) {
        fVar6 = (float10)FUN_00402060((fStack_34 - _DAT_00890bf8) * _DAT_00892b64,0,0x3f800000,0,
                                      0x3f7d70a4);
        fVar6 = (float10)FUN_00402060((float)fVar6);
        fVar6 = (float10)FUN_00402060((float)(fVar6 * (float10)_DAT_00896ab4),0,0x42fe0000);
        fStack_2c = (float)fVar6;
        uVar3 = (**(code **)(*param_1 + 0x38))();
        FUN_004dd540(uVar3,&iStack_28,auStack_30,&fStack_34);
        fVar1 = fStack_34;
        iVar5 = DAT_00914af4 % (int)fStack_34;
        iVar4 = FUN_007c4b80();
        iVar4 = (iVar5 - iVar4 * (int)fVar1) + iStack_28;
        DAT_00914af4 = iVar5 + 1;
        uVar3 = FUN_004ba760(1,iVar4);
        iStack_28 = FUN_004b0cc0(0x6c);
        uStack_4 = 0;
        if (iStack_28 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004b0c50(uVar3);
        }
        uStack_4 = 0xffffffff;
        param_1[10] = iVar5;
        FUN_004abf70();
        aiStack_24[3] = 0;
        aiStack_24[2] = 0;
        aiStack_24[1] = 0;
        aiStack_24[0] = iVar4;
        FUN_004cf520(aiStack_24);
        param_1[0xb] = *(int *)(param_1[5] + 0x3c);
        *(undefined4 *)(param_1[3] + 0xc) = 0x7fff;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


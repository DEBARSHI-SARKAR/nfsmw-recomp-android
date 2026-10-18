/* speed.exe 0063aa10 FUN_0063aa10; analysis pseudocode, not buildable source.
 * calls 005ca7b0 FUN_005ca7b0
 * calls 005c8cc0 FUN_005c8cc0
 * calls 00455fd0 FUN_00455fd0
 * calls 006f4430 FUN_006f4430
 * calls 00401670 FUN_00401670
 * calls 00401b80 FUN_00401b80
 * calls 00486610 FUN_00486610
 * calls 00454640 FUN_00454640
 * calls 005d51f0 FUN_005d51f0
 * calls 00620c60 FUN_00620c60
 * calls 00620b40 FUN_00620b40
 * calls 00401d70 FUN_00401d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063aa10(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float *pfStack_f4;
  undefined4 *puStack_f0;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined1 *local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 *local_90;
  undefined4 auStack_8c [12];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008793db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a71a8;
  puStack_e4 = (undefined4 *)param_1[2];
  local_4 = 0;
  if (puStack_e4 != (undefined4 *)0x0) {
    puStack_e8 = (undefined4 *)0x63aa58;
    local_90 = param_1;
    puStack_e8 = (undefined4 *)FUN_00454640();
    puStack_ec = (undefined4 *)0xebcee74c;
    puStack_f0 = (undefined4 *)0x63aa63;
    puVar3 = (undefined1 *)FUN_00455fd0();
    if ((puVar3 != (undefined1 *)0x0) &&
       (puStack_e4 = (undefined4 *)param_1[8], puStack_e4 != (undefined4 *)0x0)) {
      puStack_e8 = (undefined4 *)(DAT_00930514 + DAT_0093051c * 8);
      puStack_ec = (undefined4 *)DAT_00930514;
      puStack_f0 = (undefined4 *)0x63aa95;
      local_c0 = puVar3;
      iVar4 = FUN_005d51f0();
      if ((iVar4 != 0) && (piVar1 = *(int **)(iVar4 + 4), piVar1 != (int *)0x0)) {
        if (param_1[7] == 0) {
          puStack_e4 = (undefined4 *)0x63aab9;
          cVar2 = (**(code **)(*piVar1 + 0x24))();
          if (cVar2 != '\0') goto LAB_0063acd4;
        }
        puStack_ec = (undefined4 *)param_1[4];
        puStack_e4 = (undefined4 *)0x3f800000;
        puStack_e8 = (undefined4 *)0x0;
        puStack_f0 = (undefined4 *)0x63aad1;
        fVar9 = (float10)FUN_00401d70();
        fStack_bc = (float)fVar9;
        puStack_e4 = auStack_8c;
        puStack_e8 = (undefined4 *)0x63aae4;
        (**(code **)(*piVar1 + 0x3c))();
        fStack_a8 = fStack_bc;
        uStack_a4 = 0;
        fStack_c8 = fStack_bc;
        uStack_c4 = 0;
        uStack_ac = 0;
        uStack_b4 = uStack_58;
        uStack_b0 = uStack_54;
        uStack_cc = 0.0;
        uStack_b8 = uStack_5c;
        if (param_1[3] != DAT_0091ddbc) {
          puStack_e4 = (undefined4 *)0x63ab49;
          iVar4 = (**(code **)(*piVar1 + 0x40))();
          if (iVar4 == 0) goto LAB_0063acd4;
          puStack_e4 = (undefined4 *)param_1[3];
          puStack_e8 = (undefined4 *)0x63ab64;
          psVar5 = (short *)FUN_00620c60();
          if (psVar5 == (short *)0x0) goto LAB_0063acd4;
          puStack_e4 = &uStack_ac;
          puStack_e8 = (undefined4 *)0x63ab7a;
          FUN_00620b40();
          puStack_e4 = &uStack_b8;
          puStack_e8 = auStack_8c;
          puStack_ec = &uStack_ac;
          puStack_f0 = (undefined4 *)0x63ab8e;
          FUN_00486610();
          fStack_a0 = (float)(int)*psVar5 * _DAT_00896ab8;
          puStack_f0 = &uStack_cc;
          fStack_9c = (float)(int)psVar5[1] * _DAT_00896ab8;
          pfStack_f4 = &fStack_a0;
          fStack_98 = (float)(int)psVar5[2] * _DAT_00896ab8;
          fStack_94 = (float)(int)psVar5[3] * _DAT_00896ab8;
          FUN_005ca7b0();
          FUN_00401670(&uStack_cc,auStack_8c,&uStack_cc);
          FUN_00401b80(&uStack_cc,fStack_bc,&uStack_cc);
        }
        if (param_1[5] == DAT_0091ddbc) {
          puStack_e4 = (undefined4 *)0x63acb1;
          iVar4 = (**(code **)(*piVar1 + 0x44))();
          puStack_ec = *(undefined4 **)(iVar4 + 4);
          puStack_e4 = (undefined4 *)0x0;
          puStack_e8 = (undefined4 *)0x0;
          puStack_f0 = (undefined4 *)0x63acc0;
          puStack_f0 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
          pfStack_f4 = (float *)&uStack_cc;
          FUN_006f4430(puVar3,&uStack_b8);
        }
        else {
          uVar6 = 0;
          if (param_1[6] != 0) {
            puStack_e4 = auStack_4c;
            puVar7 = auStack_8c;
            puVar8 = auStack_4c;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            puStack_e8 = (undefined4 *)0x63ac50;
            FUN_005c8cc0();
            puStack_f0 = &uStack_b8;
            puStack_ec = auStack_4c;
            pfStack_f4 = (float *)0x63ac65;
            puStack_e8 = puStack_f0;
            FUN_00486610();
            pfStack_f4 = (float *)&uStack_cc;
            uVar6 = FUN_00401670(pfStack_f4,auStack_4c);
            puVar3 = local_c0;
          }
          puStack_e4 = (undefined4 *)CONCAT31((int3)((uint)uVar6 >> 8),param_1[6] != 0);
          puStack_e8 = &uStack_cc;
          puStack_ec = &uStack_b8;
          local_c0 = (undefined1 *)&pfStack_f4;
          pfStack_f4 = (float *)param_1[5];
          puStack_f0 = (undefined4 *)puVar3;
          (**(code **)(*piVar1 + 0x74))();
        }
      }
    }
  }
LAB_0063acd4:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


/* speed.exe 0054bd20 FUN_0054bd20; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 00513bc0 FUN_00513bc0
 * calls 0078c790 FUN_0078c790
 * calls 0045d380 FUN_0045d380
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0053ede0 FUN_0053ede0
 * calls 00592410 FUN_00592410
 * calls 005b8400 FUN_005b8400
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_0054bd20(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 auStack_514 [156];
  undefined4 uStack_2a4;
  char *pcStack_2a0;
  int iStack_29c;
  int local_288;
  undefined1 local_27c [636];
  
  iVar1 = *(int *)(param_1 + 0x68);
  local_288 = 1;
  do {
    pcStack_2a0 = (char *)0x54bd52;
    iStack_29c = local_288 + -1;
    iVar3 = FUN_0045d380();
    if ((iVar3 != 0) && (iVar3 != 4)) {
      pcStack_2a0 = (char *)0x54bd6d;
      iStack_29c = local_288 + -1;
      iStack_29c = FUN_0045d380();
      if (iStack_29c == 0) {
        iStack_29c = 0;
      }
      else {
        iStack_29c = iStack_29c + -4;
      }
      pcStack_2a0 = (char *)0x54bd81;
      iVar4 = FUN_00592410();
      if ((iVar4 == 0) || (*(char *)(iVar4 + 0x14) == '\0')) {
        iVar3 = *(int *)(param_1 + 0x10);
        iStack_29c = local_288;
        pcStack_2a0 = "GROUP_FLAG_%d";
        uStack_2a4 = 0x54be9f;
        uVar6 = FUN_00573140();
        if (iVar3 != 0) {
          pcStack_2a0 = (char *)0x54beb4;
          iStack_29c = iVar3;
          iVar3 = FUN_00516af0();
          if (iVar3 != 0) {
            pcStack_2a0 = (char *)0x54bec0;
            iStack_29c = uVar6;
            iVar3 = FUN_005b8550();
            if (iVar3 != 0) {
              iStack_29c = 0x16a259;
              pcStack_2a0 = (char *)0x54bed2;
              iVar3 = FUN_005b1360();
              if (iVar3 != 0) {
                iStack_29c = 0;
                uStack_2a4 = 0x54bee2;
                pcStack_2a0 = (char *)iVar3;
                FUN_005b8400();
                *(undefined4 *)(iVar3 + 0x10) = 0;
              }
            }
          }
        }
        iVar3 = *(int *)(param_1 + 0x10);
        iStack_29c = local_288;
        pcStack_2a0 = "STATUS_%d";
        uStack_2a4 = 0x54beff;
        uVar6 = FUN_00573140();
        if (iVar3 != 0) {
          pcStack_2a0 = (char *)0x54bf14;
          iStack_29c = iVar3;
          iVar3 = FUN_00516af0();
          if (iVar3 != 0) {
            pcStack_2a0 = (char *)0x54bf20;
            iStack_29c = uVar6;
            iVar3 = FUN_005b8550();
            if (iVar3 != 0) {
              iStack_29c = 0x16a259;
              goto LAB_0054bf2b;
            }
          }
        }
      }
      else {
        iStack_29c = iVar4 + 0x18;
        pcStack_2a0 = (char *)0x54bd9f;
        FUN_0078c730();
        pcStack_2a0 = (char *)0x54bda6;
        iStack_29c = FUN_0078c790();
        pcStack_2a0 = local_27c;
        uStack_2a4 = 0x54bdb1;
        puVar5 = (undefined4 *)FUN_00513bc0();
        uVar6 = *(undefined4 *)(iVar3 + 0x28);
        puVar7 = auStack_514;
        for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_0053ede0(uVar6);
        if (iVar1 != iVar4) {
          if (*(char *)(iVar4 + 0x3c) == '\0') {
            iVar3 = *(int *)(param_1 + 0x10);
            iStack_29c = local_288;
            pcStack_2a0 = "OPTION_NAME_%d";
            uStack_2a4 = 0x54be4c;
            uVar6 = FUN_00573140();
            if (iVar3 != 0) {
              pcStack_2a0 = (char *)0x54be65;
              iStack_29c = iVar3;
              iVar3 = FUN_00516af0();
              if (iVar3 != 0) {
                pcStack_2a0 = (char *)0x54be75;
                iStack_29c = uVar6;
                iVar3 = FUN_005b8550();
                if (iVar3 != 0) {
                  iStack_29c = 0x163c76;
                  goto LAB_0054bf2b;
                }
              }
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x10);
            iStack_29c = local_288;
            pcStack_2a0 = "OPTION_NAME_%d";
            uStack_2a4 = 0x54bdf9;
            uVar6 = FUN_00573140();
            if (iVar3 != 0) {
              pcStack_2a0 = (char *)0x54be12;
              iStack_29c = iVar3;
              iVar3 = FUN_00516af0();
              if (iVar3 != 0) {
                pcStack_2a0 = (char *)0x54be22;
                iStack_29c = uVar6;
                iVar3 = FUN_005b8550();
                if (iVar3 != 0) {
                  iStack_29c = 0x1ca7c0;
LAB_0054bf2b:
                  pcStack_2a0 = (char *)0x54bf32;
                  iVar3 = FUN_005b1360();
                  if (iVar3 != 0) {
                    iStack_29c = 0;
                    uStack_2a4 = 0x54bf42;
                    pcStack_2a0 = (char *)iVar3;
                    FUN_005b8400();
                    *(undefined4 *)(iVar3 + 0x10) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar2 = 7 < local_288;
    local_288 = local_288 + 1;
    if (bVar2) {
      return;
    }
  } while( true );
}


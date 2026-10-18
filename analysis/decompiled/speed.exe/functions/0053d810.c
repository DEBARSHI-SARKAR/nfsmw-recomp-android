/* speed.exe 0053d810 FUN_0053d810; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 007935b0 FUN_007935b0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 005252d0 FUN_005252d0
 * calls 0083b8a0 FUN_0083b8a0
 * calls 00799f50 FUN_00799f50
 */

void __fastcall FUN_0053d810(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  if (*(int *)(param_1 + 0x2e4) != 0) {
    iVar2 = *(int *)(param_1 + 0x2d4) - *(int *)(param_1 + 0x2e8);
    FUN_00799f50();
    iVar8 = 1;
    do {
      puVar3 = (undefined4 *)
               FUN_007935b0(*(undefined4 *)(param_1 + 0x34),0,iVar8 + -2 + *(int *)(param_1 + 0x2e8)
                           );
      if (puVar3 == (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = FUN_00573140("RANK_%d",iVar8,&DAT_0089dfa0);
        FUN_005252d0(uVar5,uVar4);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = FUN_00573140("GAMERTAG_%d",iVar8,&DAT_0089dfa0);
        FUN_005252d0(uVar5,uVar4);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = FUN_00573140("COLUMN3_%d",iVar8,&DAT_0089dfa0);
        FUN_005252d0(uVar5,uVar4);
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_005af1c0("UNHIGHLIGHT");
        uVar4 = FUN_00573140("RANK_%d",iVar8);
        if ((((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
            (iVar6 = FUN_005b8550(uVar4), iVar6 != 0)) && (iVar6 = FUN_005b1360(uVar5), iVar6 != 0))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_005af1c0("UNHIGHLIGHT");
        uVar4 = FUN_00573140("GAMERTAG_%d",iVar8);
        if (((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
           ((iVar6 = FUN_005b8550(uVar4), iVar6 != 0 && (iVar6 = FUN_005b1360(uVar5), iVar6 != 0))))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_005af1c0("UNHIGHLIGHT");
        uVar4 = FUN_00573140("COLUMN3_%d",iVar8);
        if (((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
           ((iVar6 = FUN_005b8550(uVar4), iVar6 != 0 && (iVar6 = FUN_005b1360(uVar5), iVar6 != 0))))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
      }
      else {
        if (iVar2 == iVar8 + -1) {
          pcVar9 = "HIGHLIGHT";
        }
        else {
          pcVar9 = "UNHIGHLIGHT";
        }
        uVar4 = FUN_005af1c0(pcVar9);
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        FUN_0083b8a0((int)puVar3 + 0x1d,&local_3c,0x1c,&DAT_0089b350);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_00573140("RANK_%d",iVar8,&DAT_0089d764,puVar3[1]);
        FUN_005252d0(uVar5,uVar7);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_00573140("GAMERTAG_%d",iVar8,&DAT_008941f8,puVar3 + 3);
        FUN_005252d0(uVar5,uVar7);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_00573140("COLUMN3_%d",iVar8,&DAT_0089d764,*puVar3);
        FUN_005252d0(uVar5,uVar7);
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_00573140("RANK_%d",iVar8);
        if ((((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
            (iVar6 = FUN_005b8550(uVar5), iVar6 != 0)) && (iVar6 = FUN_005b1360(uVar4), iVar6 != 0))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_00573140("GAMERTAG_%d",iVar8);
        if (((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
           ((iVar6 = FUN_005b8550(uVar5), iVar6 != 0 && (iVar6 = FUN_005b1360(uVar4), iVar6 != 0))))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = FUN_00573140("COLUMN3_%d",iVar8);
        if (((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
           ((iVar6 = FUN_005b8550(uVar5), iVar6 != 0 && (iVar6 = FUN_005b1360(uVar4), iVar6 != 0))))
        {
          FUN_005b8400(iVar6,0);
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        if (iVar2 == iVar8 + -1) {
          *(undefined4 **)(param_1 + 0x2f4) = puVar3 + 3;
        }
      }
      bVar1 = iVar8 < 0xc;
      iVar8 = iVar8 + 1;
    } while (bVar1);
    FUN_00515e20(local_20,0x20,"POS%d",iVar2 + 1);
    iVar8 = *(int *)(param_1 + 0x10);
    uVar5 = FUN_005af1c0(local_20);
    if ((((iVar8 != 0) && (iVar8 = FUN_00516af0(iVar8), iVar8 != 0)) &&
        (iVar8 = FUN_005b8550(0xdaf7), iVar8 != 0)) && (iVar8 = FUN_005b1360(uVar5), iVar8 != 0)) {
      FUN_005b8400(iVar8,0);
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
  }
  return;
}


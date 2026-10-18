/* speed.exe 00537f60 FUN_00537f60; analysis pseudocode, not buildable source.
 * calls 007996b0 FUN_007996b0
 * calls 005868e0 FUN_005868e0
 * calls 0079ca30 FUN_0079ca30
 * calls 00796d30 FUN_00796d30
 * calls 00460c70 FUN_00460c70
 * calls 00839770 FUN_00839770
 * calls 00790920 FUN_00790920
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 00573140 FUN_00573140
 * calls 00460d20 FUN_00460d20
 * calls 007937e0 FUN_007937e0
 * calls 0056e340 FUN_0056e340
 * calls 007995d0 FUN_007995d0
 * calls 00799a30 FUN_00799a30
 * calls 0078c730 FUN_0078c730
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 00592710 FUN_00592710
 * calls 005b8400 FUN_005b8400
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005b1360 FUN_005b1360
 * calls 00799820 FUN_00799820
 * calls 0079bac0 FUN_0079bac0
 * calls 0078bda0 FUN_0078bda0
 * calls 00537d60 FUN_00537d60
 * calls 0078bbe0 FUN_0078bbe0
 * calls 007992f0 FUN_007992f0
 */

void __fastcall FUN_00537f60(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_34 = param_1;
  FUN_0079bac0();
  iVar4 = FUN_0078bcc0();
  local_2c = iVar4;
  FUN_0079ca30();
  local_28 = FUN_0078bbe0();
  local_30 = *(int *)(param_1 + 0x5c);
  local_40 = 0;
  if (0 < *(int *)(iVar4 + 0x24)) {
    do {
      if (*(int *)(local_30 + 4) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(local_30 + 4) + -4;
      }
      iVar4 = FUN_00790920(local_40);
      if (iVar4 == 0) {
        FUN_00537d60(local_40);
      }
      else {
        puVar5 = _malloc(0x44);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar1 = puVar5 + 3;
          *puVar1 = puVar1;
          puVar5[4] = puVar1;
          *(undefined1 *)(puVar5 + 5) = 1;
          *puVar5 = &PTR_FUN_0089dd2c;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          *(undefined1 *)(puVar5 + 10) = 0;
          *(undefined1 *)((int)puVar5 + 0x29) = 0;
          puVar5[0xf] = 0xffffffff;
          *(undefined1 *)(puVar5 + 0x10) = 0;
          *(undefined1 *)((int)puVar5 + 0x2a) = 0;
        }
        if ((local_28 != 0) && ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
          local_1f = 0;
          local_1b = 0;
          local_17 = 0;
          local_13 = 0;
          local_f = 0;
          local_b = 0;
          local_7 = 0;
          local_3 = 0;
          local_20 = 0;
          local_1 = 0;
          uVar6 = FUN_0056e340();
          iVar7 = FUN_00460d20(iVar4 + 4,uVar6);
          if (iVar7 != 0) {
            FUN_00460c70(&local_20,iVar4 + 4);
            iVar7 = FUN_0078c730();
            FUN_00839770(*(undefined4 *)(iVar7 + 0xf8),&local_20,0x40);
          }
        }
        uVar2 = FUN_007937e0(local_40);
        iVar4 = iVar4 + 4;
        *(undefined1 *)((int)puVar5 + 0x29) = uVar2;
        FUN_0051dcf0(iVar4,0);
        FUN_00515e20((int)puVar5 + 0x2a,0x10,iVar4);
        local_38 = 0;
        FUN_00796d30();
        local_24 = FUN_0078bda0(0);
        iVar7 = FUN_007995d0(local_2c + 0x10);
        if ((((iVar7 == 0) || (cVar3 = FUN_007996b0(iVar4,puVar5 + 6,puVar5 + 7), cVar3 == '\0')) ||
            (cVar3 = FUN_00799820(iVar4,puVar5 + 0xf,local_24), cVar3 == '\0')) ||
           (cVar3 = FUN_00799a30(iVar4,&local_38), cVar3 == '\0')) {
          FUN_007992f0(iVar4,&LAB_005135d0,local_34);
        }
        else {
          *(undefined1 *)(puVar5 + 0x10) = 1;
        }
        iVar4 = local_34;
        if (*(char *)(DAT_0091cf90 + 0x141) == '\0') {
          local_38 = 0;
        }
        piVar9 = (int *)0x0;
        piVar8 = &DAT_008f32c0;
        do {
          if (piVar9 != (int *)0x0) break;
          if (local_38 <= *piVar8) {
            piVar9 = piVar8;
          }
          piVar8 = piVar8 + 3;
        } while ((int)piVar8 < 0x8f32f0);
        FUN_005868e0(puVar5);
        FUN_00592710(puVar5);
        iVar4 = *(int *)(iVar4 + 0x10);
        uVar6 = FUN_00573140("SCROLL_TEXT_%d",local_40 + 1);
        if (((iVar4 != 0) && (iVar4 = FUN_00516af0(iVar4), iVar4 != 0)) &&
           ((iVar4 = FUN_005b8550(uVar6), iVar4 != 0 && (iVar4 = FUN_005b1360(0x1ca7c0), iVar4 != 0)
            ))) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)(local_2c + 0x24));
  }
  return;
}


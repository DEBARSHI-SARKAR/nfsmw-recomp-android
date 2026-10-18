/* speed.exe 00554ad0 FUN_00554ad0; analysis pseudocode, not buildable source.
 * calls 005a5790 FUN_005a5790
 * calls 00460c70 FUN_00460c70
 * calls 00515e20 FUN_00515e20
 * calls 00586ca0 FUN_00586ca0
 * calls 005868e0 FUN_005868e0
 * calls 0078be30 FUN_0078be30
 * calls 0079bac0 FUN_0079bac0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00586950 FUN_00586950
 * calls 0078bce0 FUN_0078bce0
 * calls 0054ab00 FUN_0054ab00
 * calls 00652ad0 _malloc
 * calls 007908d0 FUN_007908d0
 * calls 0056bc10 FUN_0056bc10
 * calls 00537120 FUN_00537120
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00586760 FUN_00586760
 * calls 00592710 FUN_00592710
 * calls 00586d90 FUN_00586d90
 * calls 00586d40 FUN_00586d40
 * calls 005a8d10 FUN_005a8d10
 * calls 00796220 FUN_00796220
 */

void __fastcall FUN_00554ad0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  char local_48;
  undefined4 local_47;
  
  local_48 = '\0';
  puVar4 = &local_47;
  for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  iVar7 = FUN_00586d90();
  if ((iVar7 != 0) && (FUN_00460c70(&local_48,iVar7), *(int *)(param_1 + 0x58) != 0)) {
    FUN_00586760(0x7ab5521a);
  }
  FUN_00586d40();
  FUN_0079bac0();
  iVar3 = FUN_0078be30();
  iVar8 = 0;
  iVar7 = iVar3;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)FUN_007908d0(iVar8);
      FUN_00796220(*puVar4);
      puVar5 = _malloc(0x40);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar1 = puVar5 + 3;
        *puVar1 = puVar1;
        puVar5[4] = puVar1;
        *(undefined1 *)(puVar5 + 5) = 1;
        *puVar5 = &PTR_FUN_0089dcac;
        puVar5[6] = 0xffffffff;
        *(undefined1 *)(puVar5 + 7) = 0;
      }
      uVar9 = 0;
      uVar6 = FUN_0078bce0(puVar4);
      FUN_0051dcf0(uVar6,uVar9);
      uVar2 = puVar4[3];
      if ((int)uVar2 < 0) {
        uVar6 = 0x34fa2c1;
LAB_00554bdb:
        uVar9 = 0;
        uVar6 = FUN_0056bc10(uVar6,0);
        FUN_0051dcf0(uVar6,uVar9);
      }
      else {
        if ((uVar2 & 0x40000000) != 0) {
          uVar6 = 0xb94fd70e;
          goto LAB_00554bdb;
        }
        if ((uVar2 & 0x20000000) != 0) {
          uVar6 = 0x6f547e4c;
          goto LAB_00554bdb;
        }
      }
      local_4f = 0;
      local_4b = 0;
      local_49 = 0;
      local_50 = 0;
      FUN_00515e20(&local_50,8,"%$d/%$d",puVar4[9],puVar4[8]);
      FUN_0051dcf0(&local_50,0);
      puVar5[6] = *puVar4;
      FUN_00460c70(puVar5 + 7,puVar4 + 10);
      FUN_005868e0(puVar5);
      FUN_00592710(puVar5);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  while (iVar7 < 9) {
    puVar4 = _malloc(0x40);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar4 + 3;
      *puVar5 = puVar5;
      puVar4[4] = puVar5;
      *(undefined1 *)(puVar4 + 5) = 1;
      *puVar4 = &PTR_FUN_0089dcac;
      puVar4[6] = 0xffffffff;
      *(undefined1 *)(puVar4 + 7) = 0;
    }
    FUN_0051dcf0(&DAT_00890978,0);
    FUN_0051dcf0(&DAT_00890978,0);
    FUN_0051dcf0(&DAT_00890978,0);
    FUN_00537120(iVar7 + 1);
    FUN_005868e0(puVar4);
    FUN_005a5790(puVar4);
    iVar7 = iVar7 + 1;
  }
  if ((local_48 == '\0') || (iVar7 = FUN_00586950(&local_48), iVar7 == 0)) {
    if (iVar3 == 0) goto LAB_00554d35;
    iVar7 = 0;
  }
  else {
    uVar6 = FUN_00586950(&local_48);
    iVar7 = FUN_00586ca0(uVar6);
    iVar7 = iVar7 + -1;
  }
  FUN_005a8d10(iVar7);
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00586760(0x249db7b7);
  }
LAB_00554d35:
  if ((*(int *)(param_1 + 0x1a0) != 0) && (0 < iVar3)) {
    FUN_0056c6e0(*(int *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  FUN_0054ab00();
  return;
}


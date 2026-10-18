/* speed.exe 0078d6d0 FUN_0078d6d0; analysis pseudocode, not buildable source.
 * calls 00515e90 FUN_00515e90
 * calls 004647c0 FUN_004647c0
 * calls 00524920 FUN_00524920
 * calls 00515f20 FUN_00515f20
 * calls 005af1c0 FUN_005af1c0
 * calls 00514c70 FUN_00514c70
 * calls 00514cc0 FUN_00514cc0
 * calls 005bcc10 FUN_005bcc10
 * calls 005251e0 FUN_005251e0
 * calls 00524850 FUN_00524850
 */

void __thiscall FUN_0078d6d0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_20 [32];
  
  *(char *)(param_1 + 0x44) = (char)param_2;
  if (param_4 < 0) {
    param_4 = param_2 + -1;
  }
  iVar6 = 1;
  iVar4 = 3;
  do {
    FUN_004647c0(local_20,"Button%d",iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005af1c0(local_20);
    iVar2 = FUN_00524850(uVar3,uVar1);
    FUN_00514c70(iVar2);
    FUN_00515f20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar2 + 0x10),0);
    FUN_004647c0(local_20,"Button%d_Text",iVar6);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005af1c0(local_20);
    uVar3 = FUN_00524850(uVar3,uVar1);
    FUN_00514c70(uVar3);
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    FUN_004647c0(local_20,"Button%d",1);
    uVar3 = FUN_005af1c0(local_20);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
    FUN_00514cc0(uVar3);
    FUN_00515f20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c),1);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c),0x249db7b7,1);
    FUN_004647c0(local_20,"Button%d_Text",1);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005af1c0(local_20);
    FUN_005251e0(uVar3,uVar1);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005af1c0(local_20);
    uVar3 = FUN_00524850(uVar3,uVar1);
    FUN_005bcc10(*param_3);
    FUN_00514cc0(uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005af1c0(local_20,0x249db7b7,1);
    FUN_00524920(uVar3,uVar1);
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c));
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7c64b811);
    FUN_00514c70(uVar3);
    return;
  }
  if (param_2 == 2) {
    iVar4 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x2c);
    do {
      puVar5[2] = iVar4 + 1;
      FUN_004647c0(local_20,"Button%d",iVar4 + 2);
      uVar3 = FUN_005af1c0(local_20);
      *puVar5 = uVar3;
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
      FUN_00514cc0(uVar3);
      FUN_00515f20(*(undefined4 *)(param_1 + 0x10),*puVar5,1);
      if (param_4 == iVar4) {
        uVar3 = *puVar5;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = 0x249db7b7;
      }
      else {
        uVar3 = *puVar5;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = 0x7ab5521a;
      }
      FUN_00524920(uVar1,uVar3,uVar7,1);
      FUN_004647c0(local_20,"Button%d_Text",iVar4 + 2);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar1 = FUN_005af1c0(local_20);
      uVar1 = FUN_00524850(uVar3,uVar1);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_005af1c0(local_20);
      FUN_005251e0(uVar3,uVar7);
      FUN_005bcc10(param_3[iVar4]);
      FUN_00514cc0(uVar1);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      if (param_4 == iVar4) {
        uVar1 = 0x249db7b7;
      }
      else {
        uVar1 = 0x7ab5521a;
      }
      uVar1 = FUN_005af1c0(local_20,uVar1,1);
      FUN_00524920(uVar3,uVar1);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar4 < 2);
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c + param_4 * 0xc));
  }
  return;
}


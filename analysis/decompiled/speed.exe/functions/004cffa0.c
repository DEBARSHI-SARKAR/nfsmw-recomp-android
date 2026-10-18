/* speed.exe 004cffa0 FUN_004cffa0; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 0065f740 FUN_0065f740
 * calls 00465a70 FUN_00465a70
 * calls 00723a00 FUN_00723a00
 * calls 00660ee0 FUN_00660ee0
 * calls 0072da70 FUN_0072da70
 * calls 0081b065 FUN_0081b065
 * calls 00460ed0 FUN_00460ed0
 * calls 004ac040 FUN_004ac040
 */

undefined4 __fastcall FUN_004cffa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int local_10 [2];
  undefined1 local_8;
  undefined4 local_4;
  
  puVar6 = *(undefined1 **)(*(int *)(param_1 + 0xfc) + 0x14);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_00890978;
  }
  iVar1 = param_1 + 0x10;
  FUN_00460ed0(iVar1,(&PTR_s_sound__008ee5c0)[*(int *)(*(int *)(param_1 + 0xfc) + 0x18)],puVar6);
  uVar2 = FUN_0065f740(iVar1);
  *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x30) = uVar2;
  piVar7 = *(int **)(param_1 + 0xfc);
  if (piVar7[0xc] < 1) {
    return 0xffffffff;
  }
  if (*piVar7 != 5) {
    *piVar7 = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x20) = 3;
  piVar7 = *(int **)(param_1 + 0xfc);
  local_10[0] = DAT_008f815c + -2;
  local_10[1] = 0x7ffffff;
  local_8 = 0;
  local_4 = 0;
  switch(piVar7[8]) {
  case 0:
    *(undefined1 *)(param_1 + 0x10d) = 0;
    break;
  case 1:
    iVar4 = *(int *)(*(int *)(param_1 + 0xfc) + 0x30);
    iVar3 = FUN_00464080(0);
    if (iVar3 < iVar4) {
      return 0xfffffffe;
    }
    uVar2 = FUN_00465a70(iVar4,0x1040);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28) = uVar2;
    iVar4 = *(int *)(param_1 + 0xfc);
    FUN_00660ee0(*(undefined4 *)(iVar4 + 0x28),iVar1,0,*(undefined4 *)(iVar4 + 0x30),&LAB_004cfbe0,
                 iVar4,local_10);
    *(undefined1 *)(param_1 + 0x10d) = 1;
    break;
  case 2:
    iVar4 = FUN_0072da70();
    if (iVar4 == 0) {
      return 0xfffffffd;
    }
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 0xfc) + 0x14);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00890978;
    }
    uVar2 = FUN_00723a00(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x30),puVar6,0);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28) = uVar2;
    piVar7 = *(int **)(param_1 + 0xfc);
    iVar4 = piVar7[10];
    if (iVar4 == 0) {
      return 0xfffffffd;
    }
    iVar3 = piVar7[0xc];
    goto LAB_004d013b;
  case 3:
    if ((*piVar7 != 5) || (iVar4 = piVar7[9], iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 0xfc);
      iVar3 = *(int *)(iVar4 + 0x30);
      iVar5 = FUN_00464080(DAT_008ee558);
      if (iVar5 < iVar3) {
        return 0xfffffffc;
      }
      puVar6 = *(undefined1 **)(iVar4 + 0x14);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_00890978;
      }
      uVar2 = FUN_004ac040(iVar3,puVar6,*(undefined1 *)(iVar4 + 0x1c));
      *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28) = uVar2;
      iVar4 = *(int *)(param_1 + 0xfc);
      FUN_00660ee0(*(undefined4 *)(iVar4 + 0x28),iVar1,0,*(undefined4 *)(iVar4 + 0x30),&LAB_004cfbe0
                   ,iVar4,local_10);
      *(undefined1 *)(param_1 + 0x10d) = 1;
      break;
    }
    iVar3 = piVar7[0xc];
    if (*(int *)(iVar4 + 0x10) < iVar3) {
      return 0xfffffffc;
    }
    iVar4 = *(int *)(iVar4 + 8);
LAB_004d013b:
    FUN_00660ee0(iVar4,iVar1,0,iVar3,&LAB_004cfbe0,piVar7,local_10);
    *(undefined1 *)(param_1 + 0x10d) = 1;
  }
  if (**(int **)(param_1 + 0xfc) == 3) {
    uVar2 = FUN_0081b065(iVar1,0,0,0,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0xf4)
                         ,&LAB_004cfb20);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x34) = uVar2;
  }
  return 0;
}


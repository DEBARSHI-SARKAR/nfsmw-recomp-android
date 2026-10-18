/* speed.exe 0064d600 FUN_0064d600; analysis pseudocode, not buildable source.
 * calls 007edc2a FUN_007edc2a
 * calls 007ececc FUN_007ececc
 * calls 006cba50 FUN_006cba50
 * calls 0045ce40 FUN_0045ce40
 * calls 00460ed0 FUN_00460ed0
 * calls 007ece42 FUN_007ece42
 * calls 007ee073 FUN_007ee073
 * calls 007edab2 FUN_007edab2
 * calls 007ee03a FUN_007ee03a
 * calls 007ed9a6 FUN_007ed9a6
 */

void __fastcall FUN_0064d600(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_d8 [2];
  undefined1 local_d0 [8];
  char local_c8 [200];
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 1) {
LAB_0064d754:
    cVar1 = FUN_007ee073(*(undefined4 *)(param_1 + 0x24),1,local_d0,local_d8);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = local_d8[0];
    }
    goto LAB_0064d6e5;
  }
  if (iVar4 != 6) {
    if (iVar4 != 2) goto LAB_0064d754;
    iVar3 = FUN_007ece42(*(undefined4 *)(param_1 + 0x24),1,100);
    if (iVar3 != 0) {
      iVar4 = 0;
      FUN_007ececc(iVar3,100);
    }
  }
  FUN_0045ce40();
  uVar2 = FUN_007ee03a(*(undefined4 *)(param_1 + 0x24),iVar4,100,0);
  iVar3 = FUN_007ed9a6(uVar2);
  uVar2 = FUN_007edab2(uVar2);
  if (iVar3 != 1) {
    if (DAT_008f945c == '\0') goto LAB_0064d6e5;
    local_c8[0] = DAT_008f945c;
    local_c8[1] = 0x3a;
    local_c8[2] = 0x5c;
    local_c8[3] = 0;
    FUN_00460ed0(local_c8,local_c8,*(undefined4 *)(param_1 + 0x24));
    uVar2 = FUN_007ee03a(local_c8,iVar4,100,0);
    iVar3 = FUN_007ed9a6(uVar2);
    uVar2 = FUN_007edab2(uVar2);
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x14) = uVar2;
    }
    if (*(int *)(param_1 + 0x14) != 0) goto LAB_0064d6e5;
    FUN_006cba50(iVar3);
    uVar2 = FUN_007ee03a(local_c8,iVar4,100,0);
    iVar4 = FUN_007ed9a6(uVar2);
    uVar2 = FUN_007edab2(uVar2);
    if (iVar4 != 1) goto LAB_0064d6e5;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
LAB_0064d6e5:
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0045ce40();
    uVar2 = FUN_007edc2a(*(undefined4 *)(param_1 + 0x14),100,0);
    iVar4 = FUN_007ed9a6(uVar2);
    uVar2 = FUN_007edab2(uVar2);
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}


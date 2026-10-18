/* speed.exe 005a0710 FUN_005a0710; analysis pseudocode, not buildable source.
 * calls 00515b90 FUN_00515b90
 * calls 00661760 FUN_00661760
 * calls 00507dc0 FUN_00507dc0
 * calls 00514fb0 FUN_00514fb0
 * calls 00508b10 FUN_00508b10
 * calls 00460bf0 FUN_00460bf0
 * calls 004b9080 FUN_004b9080
 * calls 00525a00 FUN_00525a00
 * calls 004647c0 FUN_004647c0
 * calls 004647e0 FUN_004647e0
 * calls 0058c8b0 FUN_0058c8b0
 * calls 0057c000 FUN_0057c000
 * calls 0057bec0 FUN_0057bec0
 * calls 005a0710 FUN_005a0710
 * calls 005251a0 FUN_005251a0
 * calls 00524850 FUN_00524850
 */

void __fastcall FUN_005a0710(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_a4;
  undefined1 local_a0 [32];
  undefined1 local_80 [64];
  undefined4 local_40 [16];
  
  DAT_0091cf14 = DAT_0091cf14 + 1;
  if (DAT_0091cf14 == 1) {
    FUN_004647c0(local_80,&DAT_00890978);
    FUN_004647c0(local_a0,&DAT_00890978);
    cVar1 = FUN_0057bec0(DAT_0091cf20,local_a0,0x20,local_80,0x40);
    if (cVar1 != '\0') {
      FUN_004647e0(DAT_0091cefc + 8,0x40,local_a0);
      DAT_0091cf1c = FUN_00661760(local_80,4,0,0,0,0,0);
      local_40[0] = FUN_00460bf0(local_a0);
      FUN_00508b10(local_40,1,&LAB_00567120,param_1,0);
      return;
    }
    FUN_005a0710();
    return;
  }
  if (DAT_0091cf14 != 2) {
    if (DAT_0091cf14 == 3) {
      DAT_008f511c = 2;
      FUN_00525a00();
      FUN_004b9080(0,0xc,"HUDLoaded");
    }
    return;
  }
  cVar1 = FUN_0058c8b0(DAT_0091cf20,&DAT_0091ced8);
  if (cVar1 != '\0') {
    FUN_0057c000(DAT_0091cf20,&DAT_0091cf18,&local_a4);
    uVar2 = FUN_00524850(DAT_0091cf24,0xcdfce1b0,local_a4);
    FUN_00514fb0(uVar2);
    FUN_00507dc0(&DAT_0091ced8,&LAB_0059d450,param_1,0);
    return;
  }
  FUN_0057c000(DAT_0091cf20,&DAT_0091cf18,&local_a4);
  uVar2 = FUN_00524850(DAT_0091cf24,0xcdfce1b0,local_a4);
  FUN_00514fb0(uVar2);
  uVar2 = FUN_005251a0(DAT_0091cf24,0x309878bc,DAT_0091cf18);
  FUN_00515b90(uVar2);
  local_a4 = DAT_0091cf18;
  FUN_00508b10(&local_a4,1,&LAB_00567120,param_1,0);
  return;
}


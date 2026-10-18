/* speed.exe 005a6540 FUN_005a6540; analysis pseudocode, not buildable source.
 * calls 00730bf0 FUN_00730bf0
 * calls 0065fd30 FUN_0065fd30
 * calls 006cb2a0 FUN_006cb2a0
 * calls 006616f0 FUN_006616f0
 * calls 0065f740 FUN_0065f740
 * calls 0064abe0 FUN_0064abe0
 */

void __thiscall FUN_005a6540(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  DAT_0091cf14 = 0;
  puVar3 = PTR_s_GLOBAL_HUDTEXDRAG_BIN_008f7ed8;
  if ((((param_2 != 2) && (puVar3 = PTR_s_GLOBAL_HUDTEXSPLIT_BIN_008f7ee0, param_2 != 3)) &&
      (param_2 != 4)) &&
     ((puVar3 = PTR_s_GLOBAL_HUDTEXDRAGSPLIT_BIN_008f7ee4, param_2 != 5 && (param_2 != 6)))) {
    puVar3 = PTR_s_GLOBAL_HUDTEXRACE_BIN_008f7edc;
  }
  FUN_006cb2a0();
  uVar2 = 0x2000;
  if (param_2 == 2) {
    uVar4 = 1;
    uVar2 = 0x2047;
    uVar1 = FUN_0065f740(puVar3,1);
    FUN_00730bf0(uVar1,uVar4);
  }
  uVar1 = FUN_0065fd30(puVar3,3,0,0,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_0064abe0(uVar2,puVar3);
  FUN_006616f0(&LAB_005a64f0,param_1);
  *(undefined4 *)(param_1 + 4) = 1;
  DAT_0091cf20 = param_2;
  DAT_0091cf24 = param_3;
  return;
}


/* speed.exe 0073cad0 FUN_0073cad0; analysis pseudocode, not buildable source.
 * calls 006bd980 FUN_006bd980
 * calls 0045db30 FUN_0045db30
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd940 FUN_006bd940
 * calls 006bdd20 FUN_006bdd20
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073cad0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_50 [4];
  float local_4c;
  float local_40;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00444fe0(local_50,param_4);
  iVar1 = FUN_007c4b80();
  FUN_0045db30(iVar1 / 0x168);
  *param_2 = 0x3f800000;
  param_2[5] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[0xf] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  _DAT_009b3510 = 0x3f800000;
  _DAT_009b3514 = 0;
  _DAT_009b3518 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_0045f490(&DAT_009b3510,*(int *)(param_1 + 0x68) + 14000);
  }
  local_40 = -local_40;
  local_4c = -local_4c;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_006bd940(&DAT_009b3510,local_50,&DAT_009b3510);
  iVar1 = FUN_007c4b80();
  FUN_006bd980(param_2,&DAT_009b3510,iVar1 / 0x168);
  FUN_006bdd20(param_2,param_2,iVar1 / 0x168);
  return;
}


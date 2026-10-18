/* speed.exe 0046b7e0 FUN_0046b7e0; analysis pseudocode, not buildable source.
 * calls 006bdd20 FUN_006bdd20
 * calls 007c4b80 FUN_007c4b80
 * calls 006bde60 FUN_006bde60
 * calls 006cf0a0 FUN_006cf0a0
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdd50 FUN_006bdd50
 * calls 00468960 FUN_00468960
 */

void FUN_0046b7e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  iVar1 = FUN_007c4b80();
  FUN_006bdd20(param_1,param_1,iVar1 / 0x168);
  iVar1 = FUN_007c4b80();
  FUN_006bdbb0(param_1,param_1,iVar1 / 0x168);
  local_68 = *(undefined4 *)(param_2 + 8);
  local_70 = 0;
  local_6c = 0;
  FUN_006bdd50(param_1,param_1,&local_70);
  FUN_006bde60(local_50,param_1);
  local_80 = local_20;
  local_7c = local_1c;
  local_78 = local_18;
  iVar1 = FUN_007c4b80();
  FUN_00468960(local_60,&local_80,param_2 + 0x20,iVar1 / 0x168);
  FUN_006cf0a0(param_1,&local_80,param_2 + 0x20,local_60);
  return;
}


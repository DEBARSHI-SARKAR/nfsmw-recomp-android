/* speed.exe 004fe930 FUN_004fe930; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045db30 FUN_0045db30
 * calls 0045d9e0 FUN_0045d9e0
 * calls 00444fe0 FUN_00444fe0
 * calls 007c4b80 FUN_007c4b80
 * calls 006bdc60 FUN_006bdc60
 * calls 006bd920 FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004fe930(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 0xf8);
  FUN_00444fe0(local_90,param_1 + 0x20);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_0045d9e0(uVar1,param_5);
  FUN_0045d9e0(0x43b40000,param_5);
  iVar2 = FUN_007c4b80();
  fVar3 = (float10)FUN_0045dbf0(iVar2 / 0x168);
  local_a0 = (float)fVar3;
  fVar3 = (float10)FUN_0045db30(iVar2 / 0x168);
  local_9c = (float)fVar3;
  local_98 = 0;
  iVar2 = FUN_007c4b80();
  FUN_006bdc60(local_50,&DAT_00987ab0,iVar2 / 0x168);
  FUN_006bd920(&local_a0,local_50,&local_a0);
  FUN_006bd920(&local_a0,local_90,&local_a0);
  *param_2 = local_a0;
  *param_3 = local_9c;
  *param_4 = local_98;
  return;
}


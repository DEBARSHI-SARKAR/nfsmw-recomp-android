/* speed.exe 004fea70 FUN_004fea70; analysis pseudocode, not buildable source.
 * calls 006bdbb0 FUN_006bdbb0
 * calls 0045d9e0 FUN_0045d9e0
 * calls 006bdd20 FUN_006bdd20
 * calls 007c4b80 FUN_007c4b80
 * calls 006bdc60 FUN_006bdc60
 * calls 006bd920 FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004fea70(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 0xf8);
  FUN_0045d9e0(uVar1,param_5);
  FUN_0045d9e0(uVar1,param_5);
  FUN_0045d9e0(uVar1,param_5);
  iVar2 = FUN_007c4b80();
  FUN_006bdbb0(local_50,&DAT_00987ab0,iVar2 / 0x168);
  iVar2 = FUN_007c4b80();
  FUN_006bdc60(local_50,local_50,iVar2 / 0x168);
  iVar2 = FUN_007c4b80();
  FUN_006bdd20(local_50,local_50,iVar2 / 0x168);
  FUN_006bd920(&local_60,local_50,param_1 + 0x40);
  *param_2 = local_60;
  *param_3 = local_5c;
  *param_4 = local_58;
  return;
}


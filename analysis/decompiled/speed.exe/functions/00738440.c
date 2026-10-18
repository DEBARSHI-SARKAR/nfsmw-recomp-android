/* speed.exe 00738440 FUN_00738440; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd940 FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00738440(undefined4 param_1,int param_2)

{
  int iVar1;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_00903554 == 0) {
    return (float10)_DAT_0089096c;
  }
  iVar1 = *(int *)(param_2 + 0x40);
  local_60 = *(float *)(iVar1 + 0x50);
  local_5c = *(float *)(iVar1 + 0x54);
  local_58 = *(float *)(iVar1 + 0x58);
  FUN_00444fe0(local_50,param_1);
  local_70 = DAT_009b098c;
  local_6c = DAT_00903550;
  local_68 = DAT_009b0990;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = 0x3f800000;
  FUN_006bd940(&local_70,local_50,&local_70);
  return (float10)local_70 * (float10)local_60 +
         (float10)local_6c * (float10)local_5c + (float10)local_68 * (float10)local_58;
}


/* speed.exe 00502030 FUN_00502030; analysis pseudocode, not buildable source.
 * calls 006be140 FUN_006be140
 * calls 004fc470 FUN_004fc470
 * calls 006bd920 FUN_006bd920
 */

void FUN_00502030(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  FUN_004fc470(param_2);
  FUN_006be140(local_50,param_3);
  local_80 = *(undefined4 *)(param_2 + 0x50);
  local_7c = *(undefined4 *)(param_2 + 0x60);
  local_78 = *(undefined4 *)(param_2 + 0x70);
  local_70 = *(undefined4 *)(param_2 + 0x54);
  local_6c = *(undefined4 *)(param_2 + 100);
  local_68 = *(undefined4 *)(param_2 + 0x74);
  local_60 = *(undefined4 *)(param_2 + 0x58);
  local_5c = *(undefined4 *)(param_2 + 0x68);
  local_58 = *(undefined4 *)(param_2 + 0x78);
  local_74 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_006bd920(&local_80,local_50,&local_80);
  FUN_006bd920(&local_70,local_50,&local_70);
  FUN_006bd920(&local_60,local_50,&local_60);
  *(undefined4 *)(param_1 + 0x50) = local_80;
  *(undefined4 *)(param_1 + 0x60) = local_7c;
  *(undefined4 *)(param_1 + 0x70) = local_78;
  *(undefined4 *)(param_1 + 0x54) = local_70;
  *(undefined4 *)(param_1 + 100) = local_6c;
  *(undefined4 *)(param_1 + 0x74) = local_68;
  *(undefined4 *)(param_1 + 0x58) = local_60;
  *(undefined4 *)(param_1 + 0x68) = local_5c;
  *(undefined4 *)(param_1 + 0x78) = local_58;
  return;
}


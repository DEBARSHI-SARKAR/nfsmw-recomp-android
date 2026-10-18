/* speed.exe 004775c0 FUN_004775c0; analysis pseudocode, not buildable source.
 * calls 006cf0a0 FUN_006cf0a0
 * calls 004700d0 FUN_004700d0
 */

void __thiscall FUN_004775c0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = *(undefined4 *)(param_1 + 0x80);
  local_5c = *(undefined4 *)(param_1 + 0x84);
  local_58 = *(undefined4 *)(param_1 + 0x88);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_80 = *(undefined4 *)(param_1 + 0xa0);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  uVar1 = *(undefined2 *)(param_1 + 0xb0);
  local_7c = *(undefined4 *)(param_1 + 0xa4);
  local_78 = *(undefined4 *)(param_1 + 0xa8);
  FUN_006cf0a0(local_50,&local_60,&local_70,&local_80);
  if (DAT_00911020 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar1;
  }
  FUN_004700d0(local_50,param_2);
  return;
}


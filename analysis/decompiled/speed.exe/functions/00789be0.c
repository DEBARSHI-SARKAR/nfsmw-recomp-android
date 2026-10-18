/* speed.exe 00789be0 FUN_00789be0; analysis pseudocode, not buildable source.
 * calls 005d20f0 FUN_005d20f0
 * calls 005c8140 FUN_005c8140
 * calls 005cf0d0 FUN_005cf0d0
 * calls 005d7ad0 FUN_005d7ad0
 * calls 005cec10 FUN_005cec10
 * calls 005cec70 FUN_005cec70
 * calls 00789650 FUN_00789650
 */

bool __fastcall FUN_00789be0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  local_c = *(undefined4 *)(param_1 + 0x1c);
  local_10 = 0;
  local_14 = 0;
  local_4 = 0;
  local_8 = 0;
  uVar1 = FUN_005d20f0(1,&local_c,&local_18,0);
  FUN_005d7ad0(uVar1,0);
  FUN_00789650(uVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  iVar2 = FUN_005cec10(0x41727469);
  FUN_005cec70(0x41727469,0xffffffff,0xffffffff);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_005cf0d0(0x53426172);
    FUN_005c8140();
  }
  return *(int *)(param_1 + 0x14) != 0;
}


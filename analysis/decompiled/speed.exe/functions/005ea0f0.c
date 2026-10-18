/* speed.exe 005ea0f0 FUN_005ea0f0; analysis pseudocode, not buildable source.
 * calls 005e5a90 FUN_005e5a90
 * calls 00789870 FUN_00789870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ea0f0(int param_1)

{
  char cVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((DAT_009b38a8 != 0) && ((*(byte *)(param_1 + 2) >> 5 & 1) == 0)) &&
     (*(float *)(param_1 + 0x18) == _DAT_00890968)) {
    local_8 = *(undefined4 *)(param_1 + 0x18);
    local_10 = *(undefined4 *)(param_1 + 0x10);
    local_c = -*(float *)(param_1 + 0x14);
    local_1c = 0;
    local_18 = 0;
    local_14 = 3;
    local_4 = local_10;
    cVar1 = FUN_00789870(&local_c,&local_1c,0);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 0x20;
      *(undefined4 *)(param_1 + 0x18) = local_1c;
      FUN_005e5a90();
    }
  }
  return;
}


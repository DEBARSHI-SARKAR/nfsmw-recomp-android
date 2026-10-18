/* speed.exe 0061fb40 FUN_0061fb40; analysis pseudocode, not buildable source.
 * calls 0061f9d0 FUN_0061f9d0
 * calls 005d0370 FUN_005d0370
 * calls 00619fb0 FUN_00619fb0
 */

undefined4 * __thiscall FUN_0061fb40(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [2];
  int local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00876b10;
  local_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar3[3])) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20[0] = *param_2;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00619fb0(local_30);
    local_4._0_1_ = 1;
    puVar3 = (undefined4 *)FUN_0061f9d0(&param_2,puVar3,local_20);
    puVar3 = (undefined4 *)*puVar3;
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      FUN_005d0370(local_18,(local_10 - local_18 >> 2) * 4,0);
    }
  }
  ExceptionList = local_c;
  return puVar3 + 4;
}


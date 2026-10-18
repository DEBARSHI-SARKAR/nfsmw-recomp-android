/* speed.exe 005f4ad0 FUN_005f4ad0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e2580 FUN_005e2580
 * calls 0045a430 FUN_0045a430
 * calls 005e6490 FUN_005e6490
 * calls 005f48e0 FUN_005f48e0
 */

void __fastcall FUN_005f4ad0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875aa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(0x3d48e303,0,0);
  local_4 = 0;
  local_28 = (undefined4 *)FUN_005e6490();
  local_24 = 0;
  local_4._0_1_ = 1;
  FUN_005f48e0(local_20,local_2c,0xa7bccf63);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  for (puVar2 = (undefined4 *)*local_28; puVar2 != local_28; puVar2 = (undefined4 *)*puVar2) {
    *(undefined4 *)(param_1 + 0xb8 + *(int *)(param_1 + 0xb4) * 4) = puVar2[2];
    uVar3 = *(int *)(param_1 + 0xb4) + 1;
    *(uint *)(param_1 + 0xb4) = uVar3;
    if (0x13 < uVar3) break;
  }
  puVar2 = (undefined4 *)*local_28;
  *local_28 = local_28;
  local_28[1] = local_28;
  local_4 = (uint)local_4._1_3_ << 8;
  local_24 = 0;
  if (puVar2 != local_28) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      FUN_005d0370(puVar2,0xc,0);
      puVar2 = puVar1;
    } while (puVar1 != local_28);
  }
  if (local_28 != (undefined4 *)0x0) {
    FUN_005d0370(local_28,0xc,0);
  }
  local_28 = (undefined4 *)0x0;
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}


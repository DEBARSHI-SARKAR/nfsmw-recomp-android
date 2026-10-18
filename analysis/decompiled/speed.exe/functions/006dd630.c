/* speed.exe 006dd630 FUN_006dd630; analysis pseudocode, not buildable source.
 * calls 006be360 FUN_006be360
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 *
FUN_006dd630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0087e4f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_005d29d0(0x28,&PTR_LAB_004c5452_1_00890f10);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_006be360(param_4 + 1);
    *(undefined1 *)(puVar1 + 9) = param_5;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


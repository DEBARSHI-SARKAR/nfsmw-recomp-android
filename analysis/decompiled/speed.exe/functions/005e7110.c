/* speed.exe 005e7110 FUN_005e7110; analysis pseudocode, not buildable source.
 * calls 005e7110 FUN_005e7110
 * calls 005e67e0 FUN_005e67e0
 */

undefined4 * __thiscall FUN_005e7110(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00875310;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0xf) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_005e67e0(*(undefined4 *)(param_1 + 4),param_3,*(undefined4 *)(param_1 + 4),
                          param_2 + 3,*(undefined1 *)((int)param_2 + 0xe));
    if (*(char *)((int)local_18 + 0xf) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_005e7110(*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_005e7110(param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


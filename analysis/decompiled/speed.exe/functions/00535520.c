/* speed.exe 00535520 FUN_00535520; analysis pseudocode, not buildable source.
 * calls 00593920 FUN_00593920
 * calls 0050ee30 FUN_0050ee30
 * calls 00521790 FUN_00521790
 */

undefined4 * __thiscall FUN_00535520(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_0089dc58;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_4 = 0;
  if ((DAT_0091ca6c == '\0') && (DAT_0091ca6d == '\0')) {
    FUN_0050ee30();
  }
  DAT_0091ca6d = 0;
  FUN_00521790(DAT_0091ca68 + 0x3c);
  ExceptionList = local_c;
  return param_1;
}


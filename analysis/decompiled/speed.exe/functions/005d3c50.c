/* speed.exe 005d3c50 FUN_005d3c50; analysis pseudocode, not buildable source.
 * calls 005cf5f0 FUN_005cf5f0
 */

undefined4 FUN_005d3c50(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  if (param_2 != '\0') {
    local_8 = &param_1;
    local_c = &param_2;
    _param_2 = 0x40000000;
    local_10 = 1;
    local_4 = param_3;
    FUN_005cf5f0(&local_10);
    return uVar1;
  }
  return param_1;
}


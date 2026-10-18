/* speed.exe 0082fd10 FUN_0082fd10; analysis pseudocode, not buildable source.
 * calls 0082fa40 FUN_0082fa40
 */

undefined4 FUN_0082fd10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_10;
  
  iVar1 = FUN_0082fa40(param_1,local_20);
  if (iVar1 < 0) {
    local_1c = 0;
    local_10 = 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_1c;
  }
  return local_10;
}


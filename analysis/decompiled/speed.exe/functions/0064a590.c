/* speed.exe 0064a590 FUN_0064a590; analysis pseudocode, not buildable source.
 * calls 0045ce70 FUN_0045ce70
 * calls 00460c50 FUN_00460c50
 */

void FUN_0064a590(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_2 [2];
  
  local_2[0] = 0x20;
  iVar1 = FUN_00460c50(param_1,0x20202020,0x20202020,0x20202020,0x20202020,0x20202020,0x20202020,
                       0x20202020,0x2020);
  local_2[-iVar1] = 0;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = param_2 + -1;
  }
  FUN_0045ce70(*param_3,*param_2);
  return;
}


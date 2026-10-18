/* speed.exe 00516c90 FUN_00516c90; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 */

void FUN_00516c90(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00516be0(param_1,param_2,param_3,0xff);
    return;
  }
  FUN_00516be0(param_1,param_2,0xfffffffc,0xff);
  return;
}


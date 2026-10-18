/* speed.exe 0049abb0 FUN_0049abb0; analysis pseudocode, not buildable source.
 * calls 0048dec0 FUN_0048dec0
 */

void __thiscall FUN_0049abb0(int param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  local_20 = *param_2;
  local_18 = param_2[1];
  local_1c = 0;
  local_14 = 0x3f800000;
  FUN_0048dec0(param_1 + 0x58,&local_20,local_10);
  *param_2 = local_10[0];
  param_2[1] = local_8;
  return;
}


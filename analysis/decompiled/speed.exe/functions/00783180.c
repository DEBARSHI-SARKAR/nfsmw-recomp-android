/* speed.exe 00783180 FUN_00783180; analysis pseudocode, not buildable source.
 * calls 00782cb0 FUN_00782cb0
 */

undefined4 __thiscall FUN_00783180(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)(param_1 + 0x30);
  local_10 = *puVar1;
  local_c = *(undefined4 *)(param_1 + 0x34);
  local_8 = *(undefined4 *)(param_1 + 0x38);
  local_4 = *(undefined4 *)(param_1 + 0x3c);
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  FUN_00782cb0(&local_10,puVar1,1,param_3);
  return 1;
}


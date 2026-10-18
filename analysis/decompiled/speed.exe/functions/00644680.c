/* speed.exe 00644680 FUN_00644680; analysis pseudocode, not buildable source.
 * calls 00635150 FUN_00635150
 */

int __fastcall FUN_00644680(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00635150();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


/* speed.exe 0050e780 FUN_0050e780; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0050e780(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x24))(param_1[3]);
    return uVar1;
  }
  return 0;
}


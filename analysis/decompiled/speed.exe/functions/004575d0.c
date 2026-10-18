/* speed.exe 004575d0 FUN_004575d0; analysis pseudocode, not buildable source.
 * calls 00456830 FUN_00456830
 */

undefined4 __thiscall FUN_004575d0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  uVar1 = *param_1 + param_1[2] * 8;
  local_4 = 0;
  uVar2 = FUN_00456830(*param_1,uVar1,&local_8,0);
  if (uVar2 < uVar1) {
    return *(undefined4 *)(uVar2 + 4);
  }
  return 0;
}


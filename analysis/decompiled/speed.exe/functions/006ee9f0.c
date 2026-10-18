/* speed.exe 006ee9f0 FUN_006ee9f0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006ee9f0(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && ((char)param_1[3] == '\0')) {
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 0xffffffff;
}


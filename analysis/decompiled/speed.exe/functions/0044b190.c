/* speed.exe 0044b190 FUN_0044b190; analysis pseudocode, not buildable source.
 * calls 0044adb0 FUN_0044adb0
 */

void FUN_0044b190(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_009885c8 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_009885c8 + 0x4c))();
    if (iVar1 != 0) {
      FUN_0044adb0(param_1,param_2 & 0x800);
    }
  }
  return;
}


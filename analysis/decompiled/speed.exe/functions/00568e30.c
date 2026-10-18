/* speed.exe 00568e30 FUN_00568e30; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_00568e30(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x30) < param_2) {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x68),0x4f90cf9b);
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x68),0x4f90cf9b,1);
      }
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  return;
}


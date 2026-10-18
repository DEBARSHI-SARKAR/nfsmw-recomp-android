/* speed.exe 00404f90 FUN_00404f90; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00404f90(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return 0;
  }
  return 1;
}


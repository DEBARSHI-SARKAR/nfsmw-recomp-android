/* speed.exe 00450770 FUN_00450770; analysis pseudocode, not buildable source.
 * calls 0044a670 FUN_0044a670
 * calls 0044e710 FUN_0044e710
 */

undefined4 FUN_00450770(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044a670(param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[7] == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1[10]);
    FUN_0044e710();
    piVar1[7] = 2;
  }
  else if (piVar1[7] == 1) {
    piVar1[7] = 2;
    return 1;
  }
  return 1;
}


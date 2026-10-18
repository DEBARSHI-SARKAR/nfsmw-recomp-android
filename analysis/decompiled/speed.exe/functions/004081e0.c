/* speed.exe 004081e0 FUN_004081e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004081e0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(param_1[0x13] + 8))();
  cVar1 = (**(code **)(*piVar2 + 0x88))();
  if ((cVar1 != '\0') && (param_1[0x33] != 0)) {
    (**(code **)(*param_1 + 0x44))(param_2);
  }
  return;
}


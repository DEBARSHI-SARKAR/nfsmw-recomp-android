/* speed.exe 00574290 FUN_00574290; analysis pseudocode, not buildable source.
 * calls 0054e760 FUN_0054e760
 */

void __thiscall FUN_00574290(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_0054e760(param_3,param_4,param_1[0xb]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 4))(param_2,0xc407210);
  }
  return;
}


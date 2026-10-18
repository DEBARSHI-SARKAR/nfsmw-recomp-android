/* speed.exe 00813a2f FUN_00813a2f; analysis pseudocode, not buildable source.
 */

void FUN_00813a2f(undefined8 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    *(undefined8 *)((int)param_1 + param_2) = *param_1;
    param_1 = param_1 + 1;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


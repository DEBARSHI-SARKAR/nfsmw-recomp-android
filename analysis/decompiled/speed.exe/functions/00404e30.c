/* speed.exe 00404e30 FUN_00404e30; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

void __thiscall FUN_00404e30(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((char)param_1[1] != '\0') && (cVar1 = (**(code **)(*param_2 + 0x88))(), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*param_2 + 0x48))();
  iVar2 = FUN_00452430();
  if (iVar2 == *param_1) {
    param_1[2] = param_1[2] + 1;
  }
  return;
}


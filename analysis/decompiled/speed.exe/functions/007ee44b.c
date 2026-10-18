/* speed.exe 007ee44b FUN_007ee44b; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007ee44b(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == param_1[1]) {
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      if (*(int *)(iVar1 + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8) + -8;
      }
      *param_1 = iVar2;
    }
    param_1[2] = param_1[2] + -1;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}


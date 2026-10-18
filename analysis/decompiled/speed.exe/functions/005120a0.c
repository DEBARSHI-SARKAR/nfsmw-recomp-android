/* speed.exe 005120a0 FUN_005120a0; analysis pseudocode, not buildable source.
 * calls 0045d8f0 FUN_0045d8f0
 */

void __fastcall FUN_005120a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[2]) {
    do {
      FUN_0045d8f0(iVar1);
      iVar1 = iVar1 + 2;
    } while (iVar1 != param_1[2]);
  }
  return;
}


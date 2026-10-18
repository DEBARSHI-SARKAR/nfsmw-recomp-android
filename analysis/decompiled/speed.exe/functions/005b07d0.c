/* speed.exe 005b07d0 FUN_005b07d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b07d0(undefined1 *param_1,undefined1 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  for (iVar1 = *(int *)(param_1 + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined1 *)(iVar1 + 0x14) = *param_1;
  }
  return;
}


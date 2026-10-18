/* speed.exe 00516a90 FUN_00516a90; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00516a90(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -0xd8) {
    for (iVar1 = *(int *)(*param_1 + 0xe4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x20) != 0) {
        return iVar1;
      }
    }
  }
  return 0;
}


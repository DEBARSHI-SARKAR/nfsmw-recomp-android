/* speed.exe 0065e720 FUN_0065e720; analysis pseudocode, not buildable source.
 * calls 0065e610 FUN_0065e610
 */

void __fastcall FUN_0065e720(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (*(int *)(param_1 + 8) == 1)) {
    iVar1 = FUN_0065e610(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0xc));
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return;
}


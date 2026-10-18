/* speed.exe 00727da0 FUN_00727da0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00727da0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x6c4)) {
    puVar1 = (undefined4 *)(param_1 + 0x714);
    do {
      FUN_004655f0(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x17;
    } while (iVar2 < *(int *)(param_1 + 0x6c4));
  }
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  return;
}


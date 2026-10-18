/* speed.exe 006778b0 FUN_006778b0; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 006eec90 FUN_006eec90
 * calls 00728920 FUN_00728920
 */

void __fastcall FUN_006778b0(int param_1)

{
  int iVar1;
  
  FUN_006eec90();
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(char *)(param_1 + 0xb8) != '\0')) {
    iVar1 = FUN_00723c90(*(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x2c));
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 0x10;
      FUN_00728920();
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}


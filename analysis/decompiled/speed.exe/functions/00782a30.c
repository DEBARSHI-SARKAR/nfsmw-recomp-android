/* speed.exe 00782a30 FUN_00782a30; analysis pseudocode, not buildable source.
 * calls 00781580 FUN_00781580
 * calls 005d0370 FUN_005d0370
 * calls 0077c6e0 FUN_0077c6e0
 */

void __fastcall FUN_00782a30(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_005d0370(iVar1,(*(int *)(param_1 + 0x48) - iVar1 >> 2) << 2,0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_00781580();
    FUN_0077c6e0();
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 != 0) {
      FUN_005d0370(iVar1,(*(int *)(param_1 + 0x7c) - iVar1 >> 2) << 2,0);
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}


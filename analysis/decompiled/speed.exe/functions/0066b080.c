/* speed.exe 0066b080 FUN_0066b080; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 006e9f20 FUN_006e9f20
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_0066b080(int param_1)

{
  undefined4 *puVar1;
  
  FUN_006e9f20(*(undefined4 *)(*(int *)(param_1 + 0xac) + 8));
  puVar1 = (undefined4 *)FUN_00454810(0xc141f7f8,0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xd4) = *puVar1;
    return;
  }
  puVar1 = (undefined4 *)FUN_006269b0(4);
  *(undefined4 *)(param_1 + 0xd4) = *puVar1;
  return;
}


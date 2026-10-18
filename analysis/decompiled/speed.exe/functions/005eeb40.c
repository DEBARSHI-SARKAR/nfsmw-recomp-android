/* speed.exe 005eeb40 FUN_005eeb40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005eeb40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x19ac);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x19b4) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x19ac) = 0;
  *(undefined4 *)(param_1 + 0x19b0) = 0;
  *(undefined4 *)(param_1 + 0x19b4) = 0;
  return;
}


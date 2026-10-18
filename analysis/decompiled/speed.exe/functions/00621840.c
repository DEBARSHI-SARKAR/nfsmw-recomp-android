/* speed.exe 00621840 FUN_00621840; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00621840(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &PTR_LAB_008a6ac0;
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
      *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) & 0xdf;
      *param_1 = &PTR_LAB_008a66f8;
      return;
    }
    *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 0x20;
  }
  *param_1 = &PTR_LAB_008a66f8;
  return;
}


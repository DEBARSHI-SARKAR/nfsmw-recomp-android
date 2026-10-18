/* speed.exe 008650a0 FUN_008650a0; analysis pseudocode, not buildable source.
 * calls 00865020 FUN_00865020
 */

void __fastcall FUN_008650a0(byte param_1)

{
  int in_EAX;
  uint uVar1;
  int unaff_ESI;
  
  *(undefined4 *)(in_EAX + 0x24) = 1;
  *(undefined4 *)(in_EAX + 0x28) = 2;
  uVar1 = *(uint *)(unaff_ESI + 0x18) | 1 << (param_1 & 0x1f);
  if (*(uint *)(unaff_ESI + 0x18) != uVar1) {
    *(uint *)(unaff_ESI + 0x18) = uVar1;
  }
  FUN_00865020();
  return;
}


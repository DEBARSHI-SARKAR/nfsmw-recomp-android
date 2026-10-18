/* speed.exe 006c9c80 FUN_006c9c80; analysis pseudocode, not buildable source.
 * calls 006c9b60 FUN_006c9b60
 * calls 00628d00 FUN_00628d00
 * calls 00628cd0 FUN_00628cd0
 * calls 00628ce0 FUN_00628ce0
 * calls 00628cf0 FUN_00628cf0
 */

undefined4 __fastcall FUN_006c9c80(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  FUN_006c9b60();
  uVar3 = FUN_00628d00();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  bVar1 = FUN_00628cd0();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x20) == 0 & bVar1;
  *(byte *)(param_1 + 0x22) = bVar1 == 0 & *(byte *)(param_1 + 0x20);
  *(byte *)(param_1 + 0x20) = bVar1;
  bVar1 = FUN_00628ce0();
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x23) == 0 & bVar1;
  *(byte *)(param_1 + 0x25) = bVar1 == 0 & *(byte *)(param_1 + 0x23);
  *(byte *)(param_1 + 0x23) = bVar1;
  bVar2 = FUN_00628cf0();
  bVar1 = *(byte *)(param_1 + 0x26);
  *(byte *)(param_1 + 0x27) = bVar1 == 0 & bVar2;
  *(byte *)(param_1 + 0x26) = bVar2;
  *(byte *)(param_1 + 0x28) = bVar2 == 0 & bVar1;
  return 0;
}


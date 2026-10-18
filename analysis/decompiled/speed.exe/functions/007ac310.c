/* speed.exe 007ac310 FUN_007ac310; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007ac310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0056dbe0(0xb);
  switch(*(undefined1 *)(iVar1 + 10)) {
  case 0:
    uVar2 = 0x8cdc3937;
    break;
  case 1:
    uVar2 = 0x73c615a3;
    break;
  case 2:
    uVar2 = 0xa2cca838;
    break;
  case 3:
    uVar2 = 0x61d1c5a5;
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 0x30),uVar2);
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0xeb9dfc09);
  return;
}


/* speed.exe 007abf20 FUN_007abf20; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_007abf20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(DAT_0091cf90 + 0x160)) {
  case 0:
    uVar1 = 0xd1a127c5;
    break;
  case 1:
    uVar1 = 0x5c62011;
    break;
  case 2:
    uVar1 = 0x5c62016;
    break;
  case 3:
    uVar1 = 0x5c62032;
    break;
  case 4:
    uVar1 = 0x5c62037;
    break;
  case 5:
    uVar1 = 0x5c62095;
    break;
  case 6:
    uVar1 = 0x7105fb23;
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 0x30),uVar1);
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0xa1e78997);
  return;
}


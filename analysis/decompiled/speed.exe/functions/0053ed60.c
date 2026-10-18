/* speed.exe 0053ed60 FUN_0053ed60; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005252d0 FUN_005252d0
 * calls 0056bc60 FUN_0056bc60
 */

void __fastcall FUN_0053ed60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0xfc)) {
  case 0:
    uVar2 = 0x8cac9d6a;
    break;
  case 1:
    uVar2 = 0xb204477c;
    break;
  case 2:
    uVar2 = 0xb1b1fc4;
    break;
  case 3:
    uVar2 = 0x7087ce45;
    break;
  case 4:
    uVar2 = 0xf155ab34;
    break;
  default:
    goto switchD_0053ed6c_default;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc60(uVar2);
  uVar2 = FUN_00573140("OPTION_HEADER",&DAT_008941f8,uVar2);
  FUN_005252d0(uVar1,uVar2);
switchD_0053ed6c_default:
  return;
}


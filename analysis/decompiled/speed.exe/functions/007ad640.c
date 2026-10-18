/* speed.exe 007ad640 FUN_007ad640; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 00508b10 FUN_00508b10
 */

void __fastcall FUN_007ad640(int param_1)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = param_1;
  uVar1 = FUN_0056bb20();
  switch(uVar1) {
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xce184740;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xce1849e1;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xce185441;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xce187e47;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xce183f30;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xce187f32;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x10) = 0xce183c96;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x10) = 0xce185c2f;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x10) = 0xce183937;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x10) = 0xce18561e;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x10) = 0xce188180;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x10) = 0xce18716e;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x10) = 0xce184620;
    break;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xce18427d;
  }
  local_4 = *(int *)(param_1 + 0x10);
  FUN_00508b10(&local_4,1,&LAB_007aa4a0,param_1,0);
  return;
}


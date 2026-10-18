/* speed.exe 007a7030 FUN_007a7030; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007a7030(int param_1)

{
  switch(DAT_00905ed8) {
  default:
    return 0x53;
  case 0x502:
    return 0x5b;
  case 0x503:
    switch(*(undefined4 *)(param_1 + 0x148)) {
    case 0x601:
      return 99;
    case 0x602:
      return 100;
    case 0x603:
      return 0x65;
    case 0x604:
      return 0x66;
    case 0x605:
      return 0x67;
    case 0x606:
      return 0x68;
    }
  case 0x504:
    switch(*(undefined4 *)(param_1 + 0x148)) {
    case 0x601:
      return 0x6b;
    case 0x602:
      return 0x6c;
    case 0x603:
      return 0x6d;
    case 0x604:
      return 0x6e;
    case 0x605:
      return 0x6f;
    case 0x606:
      return 0x70;
    }
  case 0x505:
    return 0x73;
  case 0x506:
    return 0x7b;
  }
}


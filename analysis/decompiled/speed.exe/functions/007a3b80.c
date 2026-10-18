/* speed.exe 007a3b80 FUN_007a3b80; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007a3b80(int param_1)

{
  switch(*(uint *)(param_1 + 0x1ac) & 0xffff) {
  default:
    return 0;
  case 2:
    return 1;
  case 4:
    return 2;
  case 8:
    return 3;
  case 0x10:
    return 4;
  case 0x20:
    return 5;
  }
}


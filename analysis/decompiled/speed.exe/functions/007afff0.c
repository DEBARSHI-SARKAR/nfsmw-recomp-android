/* speed.exe 007afff0 FUN_007afff0; analysis pseudocode, not buildable source.
 * calls 007afae0 FUN_007afae0
 */

int FUN_007afff0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_1) {
  case 0:
    return 0x5aa9137;
  case 1:
    return -0x6e668118;
  case 2:
    return 0x6e101aa7;
  case 3:
    return 0x29aa74ba;
  case 4:
    return -0x67ac265a;
  case 5:
    cVar1 = FUN_007afae0();
    return (-(uint)(cVar1 != '\0') & 0x4a4912a1) + 0xbb6812bb;
  case 6:
    iVar2 = 0x4ce19aa4;
  }
  return iVar2;
}


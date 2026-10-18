/* speed.exe 00705060 FUN_00705060; analysis pseudocode, not buildable source.
 * calls 007018c0 FUN_007018c0
 */

undefined4 FUN_00705060(undefined4 param_1)

{
  char cVar1;
  undefined1 local_4 [4];
  
  cVar1 = FUN_007018c0(param_1,&param_1,local_4);
  if (cVar1 != '\0') {
    switch(param_1) {
    case 1:
      return 1;
    case 2:
    case 4:
      return 2;
    case 8:
      return 4;
    }
  }
  return 0xffffffff;
}


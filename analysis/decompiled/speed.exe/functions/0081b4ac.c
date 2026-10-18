/* speed.exe 0081b4ac FUN_0081b4ac; analysis pseudocode, not buildable source.
 * calls 0081b3c8 FUN_0081b3c8
 */

undefined4 FUN_0081b4ac(undefined4 param_1)

{
  undefined4 uVar1;
  char local_5;
  
  FUN_0081b3c8(param_1,&local_5);
  if (local_5 == '\0') {
    uVar1 = 0xfffffffb;
  }
  else {
    if (DAT_009c2188 == '\0') {
      DAT_0090bce4 = param_1;
    }
    else {
      DAT_009c1b28 = param_1;
      DAT_009c1b2c = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


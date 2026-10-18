/* speed.exe 007d5120 __set_sbh_threshold; analysis pseudocode, not buildable source.
 * calls 007d5190 ___sbh_heap_init
 */

/* Library Function - Single Match
    __set_sbh_threshold
   
   Library: Visual Studio 2003 Debug */

undefined4 __set_sbh_threshold(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_009c531c == 3) {
    if (param_1 < 0x3f9) {
      DAT_009c52f0 = param_1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    if ((((DAT_009c531c == 1) && (param_1 != 0)) && (param_1 < 0x3f9)) &&
       (iVar2 = ___sbh_heap_init(param_1), iVar2 != 0)) {
      DAT_009c52f0 = param_1;
      DAT_009c531c = 3;
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


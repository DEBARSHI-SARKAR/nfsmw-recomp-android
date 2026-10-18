/* speed.exe 0081d06c FUN_0081d06c; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 0081e3cb FUN_0081e3cb
 */

undefined4 FUN_0081d06c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009c2188 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = FUN_0081c131(param_1);
    if (iVar1 != 0) {
      *(char *)(iVar1 + 0xf0) = (char)param_2;
      FUN_0081e3cb(*(undefined4 *)(iVar1 + 4),param_2);
      return 0;
    }
    uVar2 = 0xfffffff8;
  }
  return uVar2;
}


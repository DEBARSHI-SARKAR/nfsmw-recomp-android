/* speed.exe 0081d0a3 FUN_0081d0a3; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 0081e4be FUN_0081e4be
 */

undefined4 FUN_0081d0a3(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009c2188 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = FUN_0081c131(param_1);
    if (iVar1 != 0) {
      if (0x4000 < param_2) {
        param_2 = 0x4000;
      }
      *(short *)(iVar1 + 0xf8) = (short)param_2;
      FUN_0081e4be(*(undefined4 *)(iVar1 + 4),param_2);
      return 0;
    }
    uVar2 = 0xfffffff8;
  }
  return uVar2;
}


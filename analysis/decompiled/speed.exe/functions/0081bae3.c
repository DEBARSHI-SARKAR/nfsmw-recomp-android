/* speed.exe 0081bae3 FUN_0081bae3; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 00862b53 FUN_00862b53
 */

undefined4 FUN_0081bae3(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_009c2188 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    puVar1 = (undefined4 *)FUN_0081c131(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00862b53(*puVar1,param_2);
      return 0;
    }
    uVar2 = 0xfffffff8;
  }
  return uVar2;
}


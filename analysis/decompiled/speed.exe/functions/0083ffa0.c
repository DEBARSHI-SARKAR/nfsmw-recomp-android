/* speed.exe 0083ffa0 FUN_0083ffa0; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 0083fa70 FUN_0083fa70
 */

undefined4 FUN_0083ffa0(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (((uint)param_2 & 3) == 0)) {
    uVar1 = FUN_0083fa70(*param_2);
    _sprintf(param_1,"$%08x",uVar1);
    return 1;
  }
  return 0;
}


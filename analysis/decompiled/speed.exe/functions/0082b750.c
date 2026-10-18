/* speed.exe 0082b750 FUN_0082b750; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 0082a5f0 FUN_0082a5f0
 */

undefined4 FUN_0082b750(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00829480(0x124);
  if (iVar1 != 0) {
    uVar2 = FUN_0082a5f0(param_2);
    *param_1 = uVar2;
    return 0;
  }
  *param_1 = 0;
  return 0;
}


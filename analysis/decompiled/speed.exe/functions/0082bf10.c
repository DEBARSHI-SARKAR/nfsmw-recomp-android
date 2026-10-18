/* speed.exe 0082bf10 FUN_0082bf10; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082bf10(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_009c29b4 != (undefined4 *)0x0) {
    uVar1 = (**(code **)*DAT_009c29b4)(param_1,&DAT_009c29b8);
    return uVar1;
  }
  return 0;
}


/* speed.exe 0065af10 FUN_0065af10; analysis pseudocode, not buildable source.
 * calls 0064d7f0 FUN_0064d7f0
 * calls 00464360 FUN_00464360
 * calls 004643d0 FUN_004643d0
 * calls 007c66d0 _malloc
 * calls 007c7250 FUN_007c7250
 */

undefined4 FUN_0065af10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_00464360(param_2,&stack0x0000000c);
    return uVar1;
  }
  pvVar2 = _malloc(0x2000);
  uVar1 = FUN_004643d0(pvVar2,param_2,&stack0x0000000c);
  FUN_0064d7f0(pvVar2,uVar1);
  FUN_007c7250(pvVar2);
  return uVar1;
}


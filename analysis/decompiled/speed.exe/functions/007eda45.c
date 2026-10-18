/* speed.exe 007eda45 FUN_007eda45; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed713 FUN_007ed713
 * calls 007ee41b FUN_007ee41b
 * calls 007ed010 FUN_007ed010
 */

undefined8 FUN_007eda45(undefined4 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  FUN_007ed010(param_1);
  FUN_007ec1bd();
  piVar1 = (int *)FUN_007ed713(param_1,1);
  FUN_007ec1c8();
  uVar2 = (**(code **)(*piVar1 + 8))();
  piVar1[3] = 0;
  FUN_007ec1bd();
  FUN_007ee41b(piVar1);
  FUN_007ec1c8();
  return uVar2;
}


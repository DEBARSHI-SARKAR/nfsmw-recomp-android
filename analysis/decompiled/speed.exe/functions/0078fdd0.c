/* speed.exe 0078fdd0 FUN_0078fdd0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 00835ca0 FUN_00835ca0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00835a90 FUN_00835a90
 * calls 007ec1b2 FUN_007ec1b2
 */

void __fastcall FUN_0078fdd0(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    FUN_007ec1bd();
    if (*param_1 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_00835b40(*param_1);
    }
    FUN_00835ca0(*param_1,uVar1);
    FUN_00835a90(*param_1);
    *param_1 = 0;
    FUN_007ec1c8();
    FUN_007ec1b2();
    return;
  }
  return;
}


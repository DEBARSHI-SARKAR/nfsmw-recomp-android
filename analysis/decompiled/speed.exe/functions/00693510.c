/* speed.exe 00693510 FUN_00693510; analysis pseudocode, not buildable source.
 * calls 0066c610 FUN_0066c610
 */

void __fastcall FUN_00693510(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))(0);
  fVar2 = (float10)(**(code **)(param_1[2] + 8))(uVar1);
  FUN_0066c610(param_1 + 0x27,param_1 + 0x22,param_1 + 0x2c,(float)fVar2);
  return;
}


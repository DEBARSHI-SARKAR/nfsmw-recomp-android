/* speed.exe 0082bc70 FUN_0082bc70; analysis pseudocode, not buildable source.
 * calls 007f01f3 FUN_007f01f3
 * calls 00829480 FUN_00829480
 * calls 0086287e FUN_0086287e
 * calls 0086279d FUN_0086279d
 */

undefined4 __thiscall FUN_0082bc70(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    *param_3 = 0xbeefdeaf;
    uVar2 = (**(code **)(*param_1 + 0x20))(param_2,param_4);
    return uVar2;
  }
  if (param_4 < 1) {
    param_4 = FUN_007f01f3(param_2);
  }
  uVar2 = FUN_00829480(param_4);
  uVar3 = FUN_0086279d(param_2,uVar2,param_4);
  *param_3 = uVar3;
  FUN_0086287e(uVar3,&DAT_0082bb80);
  return uVar2;
}


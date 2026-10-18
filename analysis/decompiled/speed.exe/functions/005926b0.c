/* speed.exe 005926b0 FUN_005926b0; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 * calls 00586ca0 FUN_00586ca0
 */

void __thiscall FUN_005926b0(int *param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))();
  }
  if ((char)param_1[0x28] != '\0') {
    uVar1 = FUN_00586ca0(param_1[9]);
    FUN_00589870(param_1[6],param_1[7],param_1[8],uVar1);
  }
  return;
}


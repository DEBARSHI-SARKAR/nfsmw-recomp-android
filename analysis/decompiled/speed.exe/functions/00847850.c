/* speed.exe 00847850 FUN_00847850; analysis pseudocode, not buildable source.
 * calls 00852bf0 FUN_00852bf0
 * calls 0083e360 FUN_0083e360
 * calls 0083e190 FUN_0083e190
 * calls 00852cf0 FUN_00852cf0
 */

void FUN_00847850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x8cc) != 0) {
    iVar1 = FUN_00852cf0(*(undefined4 *)(param_1 + 0x8c8));
    while (iVar1 != 0) {
      uVar2 = FUN_0083e360(*(undefined4 *)(param_1 + 0x8cc),iVar1);
      if (*(code **)(param_1 + 0x8ec) != (code *)0x0) {
        (**(code **)(param_1 + 0x8ec))(param_1,uVar2,*(undefined4 *)(param_1 + 0x8f0));
      }
      (**(code **)(param_1 + 4))(uVar2);
      iVar1 = FUN_00852cf0(*(undefined4 *)(param_1 + 0x8c8));
    }
    if (*(code **)(param_1 + 0x8dc) != (code *)0x0) {
      local_4 = *(undefined4 *)(param_1 + 0x8cc);
      local_18 = 0x726f7374;
      local_14 = 0;
      local_10 = 0;
      (**(code **)(param_1 + 0x8dc))(param_1,&local_18,*(undefined4 *)(param_1 + 0x8d8));
    }
    FUN_00852bf0(*(undefined4 *)(param_1 + 0x8c8));
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    FUN_0083e190(*(undefined4 *)(param_1 + 0x8cc));
    *(undefined4 *)(param_1 + 0x8cc) = 0;
    *(undefined4 *)(param_1 + 0x8d8) = 0;
    *(undefined4 *)(param_1 + 0x8dc) = 0;
  }
  return;
}


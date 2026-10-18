/* speed.exe 007f2f16 FUN_007f2f16; analysis pseudocode, not buildable source.
 * calls 007f34cf FUN_007f34cf
 */

void __fastcall FUN_007f2f16(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *local_8;
  
  piVar1 = (int *)param_1[0x1e];
  *param_1 = &PTR_FUN_008c22e0;
  local_8 = param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    if (((uint)local_8 & 1) != 0) {
      (**(code **)(*(int *)param_1[0x1e] + 0x20))((int *)param_1[0x1e]);
      param_1[0x1c] = 0;
    }
    (**(code **)(*(int *)param_1[0x1e] + 8))((int *)param_1[0x1e]);
  }
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1e] = 0;
  }
  FUN_007f34cf();
  return;
}


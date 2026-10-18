/* speed.exe 006d7c10 FUN_006d7c10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006d7c10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x12];
  *param_1 = &PTR_FUN_008afb74;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


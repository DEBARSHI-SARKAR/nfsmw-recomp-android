/* speed.exe 0079d100 FUN_0079d100; analysis pseudocode, not buildable source.
 * calls 00798800 FUN_00798800
 * calls 0079cf20 FUN_0079cf20
 */

void FUN_0079d100(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00798800(0);
  }
  else {
    FUN_0079cf20(0,0);
  }
  if (*(code **)(param_2 + 0xf8) != (code *)0x0) {
    (**(code **)(param_2 + 0xf8))(param_1,*(undefined4 *)(param_2 + 0xfc));
  }
  return;
}


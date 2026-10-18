/* speed.exe 007fa317 FUN_007fa317; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_007fa317(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(1);
  }
  return param_1[1];
}


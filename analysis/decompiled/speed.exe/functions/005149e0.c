/* speed.exe 005149e0 FUN_005149e0; analysis pseudocode, not buildable source.
 * calls 00633d80 FUN_00633d80
 * calls 00633d90 FUN_00633d90
 */

void __fastcall FUN_005149e0(int *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    cVar1 = FUN_00633d80();
    while (cVar1 == '\0') {
      FUN_00633d90();
      cVar1 = FUN_00633d80();
    }
  }
  return;
}


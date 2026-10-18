/* speed.exe 0081d93a FUN_0081d93a; analysis pseudocode, not buildable source.
 * calls 00822454 FUN_00822454
 */

undefined4 __fastcall FUN_0081d93a(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x46584253) {
    if (param_1[9] == 0) {
      iVar1 = FUN_00822454(param_1);
      param_1[10] = iVar1;
    }
    param_1[9] = 1;
  }
  return 0;
}


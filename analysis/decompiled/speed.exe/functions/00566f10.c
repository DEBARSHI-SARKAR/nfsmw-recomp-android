/* speed.exe 00566f10 FUN_00566f10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00566f10(int *param_1)

{
  if ((char)param_1[10] != '\0') {
    (**(code **)(*param_1 + 0x38))();
    return;
  }
  (**(code **)(*param_1 + 0x34))(1);
  return;
}


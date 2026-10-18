/* speed.exe 00566f30 FUN_00566f30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00566f30(int *param_1)

{
  if ((char)param_1[10] != '\0') {
    (**(code **)(*param_1 + 0x38))();
    return;
  }
  (**(code **)(*param_1 + 0x34))(0xffffffff);
  return;
}


/* speed.exe 0071b170 FUN_0071b170; analysis pseudocode, not buildable source.
 * calls 00715610 FUN_00715610
 */

void __fastcall FUN_0071b170(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00715610(2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x164))();
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
  }
  return;
}


/* speed.exe 004158b0 FUN_004158b0; analysis pseudocode, not buildable source.
 * calls 00408810 FUN_00408810
 */

void __fastcall FUN_004158b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 0xa0) + 0x2c) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    cVar1 = FUN_00408810(uVar2,*(int *)(param_1 + 0xa0) + 0x10);
    *(char *)(param_1 + 0xa6) = '\x01' - (cVar1 != '\0');
  }
  return;
}


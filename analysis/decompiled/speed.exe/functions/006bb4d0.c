/* speed.exe 006bb4d0 FUN_006bb4d0; analysis pseudocode, not buildable source.
 * calls 006a7290 FUN_006a7290
 * calls 00699cc0 FUN_00699cc0
 * calls 006a7110 FUN_006a7110
 * calls 006ba510 FUN_006ba510
 */

void __thiscall FUN_006bb4d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x4c))();
  if (cVar2 != '\0') {
    FUN_006a7290(param_2);
    FUN_006a7110(param_2);
  }
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1[0x3b] + 0x40);
    if ((iVar1 != 0) && (*(int *)(param_1[0x3b] + 0x44) - iVar1 >> 2 != 0)) {
      if (*(char *)(param_1[0x21] + 0xff) == '\0') {
        FUN_006ba510(param_2);
        return;
      }
      FUN_00699cc0(param_2);
    }
  }
  return;
}


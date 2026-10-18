/* speed.exe 006e1410 FUN_006e1410; analysis pseudocode, not buildable source.
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006ca5f0 FUN_006ca5f0
 */

void __thiscall FUN_006e1410(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) &&
     (iVar1 = FUN_006ca5f0(param_2,2), iVar1 != 0)) {
    FUN_006ca4d0(param_2,2,param_1 + 0x4470 + param_2 * 4);
  }
  return;
}


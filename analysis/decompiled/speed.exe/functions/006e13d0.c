/* speed.exe 006e13d0 FUN_006e13d0; analysis pseudocode, not buildable source.
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006ca5f0 FUN_006ca5f0
 */

void __thiscall FUN_006e13d0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) &&
     (iVar1 = FUN_006ca5f0(param_2,1), iVar1 != 0)) {
    FUN_006ca4d0(param_2,1,param_1 + 0x4470 + param_2 * 4);
  }
  return;
}


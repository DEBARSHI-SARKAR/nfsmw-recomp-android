/* speed.exe 0075be90 FUN_0075be90; analysis pseudocode, not buildable source.
 * calls 006626b0 FUN_006626b0
 * calls 00759ff0 FUN_00759ff0
 */

bool __thiscall FUN_0075be90(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 != 0) {
    FUN_006626b0();
    iVar1 = *(int *)(param_1 + 0x14);
  }
  iVar1 = FUN_00759ff0(param_2,0,0);
  return iVar1 != 0;
}


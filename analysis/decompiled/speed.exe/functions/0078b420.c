/* speed.exe 0078b420 FUN_0078b420; analysis pseudocode, not buildable source.
 * calls 00835b40 FUN_00835b40
 * calls 00835b20 FUN_00835b20
 */

bool __fastcall FUN_0078b420(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00835b40(*param_1);
  }
  iVar2 = FUN_00835b20(*param_1,uVar1);
  return iVar2 == 2;
}

